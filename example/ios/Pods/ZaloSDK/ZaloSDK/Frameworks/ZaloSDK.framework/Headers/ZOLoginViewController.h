//
//  ZOLoginViewController.h
//  ZaloSDK
//
//  Created by Hoang Nguyen on 2/10/15.
//  Copyright (c) 2015 VNG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZaloSDKDefine.h"
#import <ZaloSDKCoreKit/ZaloSDKCoreKit.h>
@class ZOLoginViewController;
@class ZOZaloAuthenticator;
@class ZOOauthStorage;
@class ZOOauthResponseObject;

typedef NS_ENUM(NSInteger, ZOLoginButtonStyle) {
    ZOLoginButtonStyleCenterAlignment,
    ZOLoginButtonStyleTextCenterAlignment,
    ZOLoginButtonStyleLeftAlignment
};

@protocol ZOLoginViewControllerDelegate <NSObject>

- (void)loginViewController:(ZOLoginViewController *)controller
didAuthenticateWithResponse:(ZOOauthResponseObject *)response;

@optional

/*!
 Nếu app có implement method này thì dùng method này để biết có show form bảo vệ hay không,
 nếu không implement thì tự động dùng rule như hiện tại của ZaloSDK
 
 + loginCount: số lần đăng nhập tài khoản guest
 + numberOfShown: số lần show form bảo vệ tài khoản
 + lastShownTime: thời gian lần cuối cung hiện form bảo vệ tài khoản guest
 */
- (BOOL)loginViewController:(ZOLoginViewController *)controller shouldShowProtectGuestAccountWithGuestLoginCount:(NSUInteger) loginCount numberOfShown:(NSUInteger)numberOfShown lastShownTime:(NSDate *)lastShownTime;

/*!
 Implement để xử lý trường hợp user bấm cancel trong form bảo vệ tài khoản.
 */
- (void)guestProtectionFormDidClickCancelButton:(ZOLoginViewController *)controller;

/*!
 Implement để xử lý trường hợp sau khi user đã bấm bảo vệ tài khoản.
 */
- (void)guestProtectionForm:(ZOLoginViewController *)controller didProtectWithResponse:(ZOOauthResponseObject *)response;

/*!
 Implement để thay đổi title của nút cancel trong màn hình bảo vệ tài khoản. Nếu không implement thì sẽ hiển thị mặc định "Hoặc, chơi tiếp".
 */
- (NSString *)loginViewControllerTitleForCancelButton:(ZOLoginViewController *)controller;
@end


#pragma mark - ZOLoginViewController
@interface ZOLoginViewController : UIViewController


@property (strong, nonatomic) NSString * guestButtonTitle;
@property (assign, nonatomic) enum ZAZaloSDKAuthenType zaloAuthenType;
@property (weak, nonatomic) id<ZOLoginViewControllerDelegate> delegate;
@property (assign, nonatomic) BOOL isAccountProtectForm;

- (void) showInParentController:(UIViewController *) parentController;
- (void) hide;
@end


#pragma mark - ZOLoginButton
@protocol ZOLoginButtonDelegate;
@interface ZOLoginButton : UIView

@property (strong, nonatomic) UIImageView * iconImageView;
@property (strong, nonatomic) UIView *lineView;
@property (strong, nonatomic) UILabel * titleLabel;
@property (strong, nonatomic) UIButton * button;
@property (assign, nonatomic, readonly) ZOLoginType type;
@property (assign, nonatomic) ZOLoginButtonStyle style;
@property (weak, nonatomic) id<ZOLoginButtonDelegate> delegate;

- (instancetype)initWithType:(ZOLoginType)type guestTitle:(NSString *)guestTitle style:(ZOLoginButtonStyle)style;

@end

@protocol ZOLoginButtonDelegate <NSObject>
- (void)onClickedLoginType:(ZOLoginType)loginType;
@end

