//
//  ZaloSDKDelegate.h
//  ZaloSDK
//
//  Created by smile on 9/11/13.
//  Copyright (c) 2013 com. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 The ZaloSDKDelegate protocol defines the functions used to modify default view when waiting authenticating, zalo not installed, zalo out of date.
 */
@protocol ZOZaloApiDelegate <NSObject>

@optional
/**
 optional function that you implement to control showing Zalo downloading alertview. If you do not implement, default is TRUE.
 @return true if you want to show Zalo downloading alertview. False if you do not want to show that.
 */
-(BOOL)zaloSDKShouldBeginShowingDefaultZaloDownloadingAlertView;

/**
 optional function that you implement event when user click cancle button in Zalo downloading alert view.
 */
-(void)zaloSDKDidPressCancelButtonInZaloDownloadingAlertView;

/**
 optional function that you implement to control showing Zalo updating alertview. If you do not implement, default is TRUE.
 @return true if you want to show Zalo updating alertview. False if you do not want to show that.
 */
-(BOOL)zaloSDKShouldBeginShowingDefaultZaloUpdatingAlertView;

/**
 optional function that you implement event when user click cancle button in Zalo updating alert view.
 */
-(void)zaloSDKDidPressCancelButtonInZaloUpdatingAlertView;

/**
 Be called before hit network, perfect place to show loading indicator
 */
- (void)zaloSDKShouldShowLoadingIndicator;

/**
 Be called after hit network, perfect place to hide loading indicator
 */
- (void)zaloSDKShouldHideLoadingIndicator;

/**
 Be called before SDK open Zalo, facebook, google+ or Safari
 */
- (void)zaloSDKWillLeaveApplication;

@end