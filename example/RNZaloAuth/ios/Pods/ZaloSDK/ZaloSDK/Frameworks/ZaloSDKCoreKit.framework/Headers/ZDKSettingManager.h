//
//  ZDKSettingManager.h
//  ZaloSDKCoreKit
//
//  Created by Liem Vo  on 7/5/19.
//  Copyright © 2019 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZDKSettingManager : NSObject

@property (nonatomic, readonly) BOOL loginZaloAppWebViewEnabled;
@property (nonatomic, readonly) BOOL loginBrowser;

+ (instancetype) sharedInstance;
- (void) loadSettings;
@end

NS_ASSUME_NONNULL_END
