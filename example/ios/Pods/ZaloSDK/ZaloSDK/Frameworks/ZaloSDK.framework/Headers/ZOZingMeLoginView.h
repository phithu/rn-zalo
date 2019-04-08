//
//  ZIDLoginView.h
//  ZaloIDSDK
//
//  Created by Liem Vo Uy on 3/18/14.
//  Copyright (c) 2014 VNG. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZOZingMeLoginView;
@class ZOOauthResponseObject;
@protocol ZOZingMeLoginViewDelegate<NSObject>

- (void) zingMeLoginView: (ZOZingMeLoginView *) view didEndAuthenticateWithResponse:(ZOOauthResponseObject *) response;

@optional
- (void) zingMeLoginViewWillBeginAuthenticate: (ZOZingMeLoginView *) view;

@end

/**
 The login form for login by zing username & password.
 The form will include an username text field, a password text field and a login button.
 */
@interface ZOZingMeLoginView : UIView

@property (nonatomic, weak) id<ZOZingMeLoginViewDelegate> delegate;

/** 
 Don't use this method, use the method in ZaloIDSDK to create view
 */
- (instancetype) init __attribute__((unavailable("init not available")));

/**
 Don't use this method, use the method in ZaloIDSDK to create view
 @param frame the login view frame
 */
- (instancetype) initWithFrame:(CGRect)frame __attribute__((unavailable("initWithFrame: not available")));

/**
 Set the frame of the username text field frame within the login view
 @param frame the frame of password text field
 */
- (void) setUsernameTextFieldFrame: (CGRect) frame;

/**
 Set the frame of the password text field frame within the login view
 @param frame the frame of password text field
 */
- (void) setPasswordTextFieldFrame: (CGRect) frame;

/**
 Set the frame of the login button frame within the login view
 @param frame the frame of login buton
 */
- (void) setLoginButtonFrame: (CGRect) frame;

/**
 Set the text of username text field
 @param text the text for username text field
 */
- (void) setUsernameText: (NSString *) text;

/**
 Set the placeholder text of username text field, default is NSLocalizedString(@"Zing ID", nil)
 @param text the palce holder text for username text field
 */
- (void) setUsernamePlaceholderText: (NSString *) text;

/**
 Set the font of username text field
 @param font the font of username text field
 */
- (void) setUsernameTextFieldFont: (UIFont *) font;

/**
 Set the text color of username text field
 @param textColor the text color of username text field
 */
- (void) setUsernameTextColor: (UIColor *) textColor;

/**
 Set the text of username text field
 @param text the text for password text field
 */
- (void) setPasswordText: (NSString *) text;

/**
 Set the placeholder text of password text field, default is NSLocalizedString(@"Mật khẩu", nil)
 @param text the placeholder text
 */
- (void) setPasswordPlaceholderText: (NSString *) text;

/**
 Set the font of password text field
 @param font the font of password text field
 */
- (void) setPasswordTextFieldFont: (UIFont *) font;

/**
 Set the text color of password text field
 @param textColor the text color of password text field
 */
- (void) setPasswordTextColor: (UIColor *) textColor;

/**
 Set the title of login button, default is NSLocalizedString(@"Đăng nhập", nil)
 @param title the title of login button
 @param state UIControlState
 */
- (void) setLoginButtonTitle:(NSString *)title forState:(UIControlState)state;

/**
 Set the font of title label of login button
 @param font the font of title label
 */
- (void)setLoginButtonTitleFont:(UIFont *) font;

/**
 Set the title color of login button
 @param color the title color
 @param state the UIControlState
 */
- (void) setLoginButtonTitleColor:(UIColor *)color forState:(UIControlState)state;

/**
 Set the title shadow color of login button
 @param color the title shadow color
 @param state the UIControlState
 */
- (void) setLoginButtonTitleShadowColor:(UIColor *)color forState:(UIControlState)state;

/**
 Set the image for login button
 @param image the image
 @param state the UIControlState
 */
- (void) setLoginButtonImage:(UIImage *)image forState:(UIControlState)state;

/**
 Set the background image for login button
 @param image the backgorund image
 @param state the UIControlState
 */
- (void) setLoginButtonBackgroundImage:(UIImage *)image forState:(UIControlState)state;
@end

