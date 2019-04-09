//
//  ZDKApplicationDelegate.h
//  ZaloSDK.CoreKit
//
//  Created by Hoang Nguyen on 9/24/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



/*!
 @class ZDKApplicationDelegate
 
 @abstract
 The ZDKApplicationDelegate is designed to post process the results from ZaloSDK Login
 or ZaloSDK Payment (or any action that requires switching over to the native Zalo
 app, Facebook, Google Plus or Safari).
 
 @discussion
 The methods in this class are designed to mirror those in UIApplicationDelegate, and you
 should call them in the respective methods in your AppDelegate implementation.
 */
@interface ZDKApplicationDelegate : NSObject

+ (instancetype)sharedInstance;

- (void)addDelegate:(id<UIApplicationDelegate>)delegate;
- (void)removeDelegate:(id<UIApplicationDelegate>)delegate;

- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;


/*!
 Remote Push Notification
 */
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo;
- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;

@end
