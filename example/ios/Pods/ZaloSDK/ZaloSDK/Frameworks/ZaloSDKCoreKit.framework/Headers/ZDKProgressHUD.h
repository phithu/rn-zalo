//
//  ZDKProgressHUD.h
//  ZaloSDK
//
//  Created by Hoang Nguyen on 1/26/15.
//  Copyright (c) 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ZDKProgressHUD : NSObject

+ (void)setShowingController:(UIViewController *)controller;
+ (void)removeShowingController;

+ (void)showSuccessWithStatus:(NSString*)status;
+ (void)showErrorWithStatus:(NSString *)status;
+ (void)showWarningWithStatus:(NSString *)status;
+ (void)showWithStatus:(NSString *)status;
+ (void)showLoadingInController: (UIViewController *) controller;
+ (void)showLoadingInController: (UIViewController *) controller text: (NSString *) text;

+ (void)dismiss;
+ (BOOL)isVisible;

@end
