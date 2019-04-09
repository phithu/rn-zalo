//
//  ZDKSharedStorage.h
//  ZaloSDKCoreKit
//
//  Created by Liem Vo on 6/15/17.
//  Copyright © 2017 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZDKSharedStorage : NSObject
+ (instancetype) sharedInstance;
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSString *deviceId;
@property (nonatomic, strong) NSDate *deviceIdExpireDate;
@property (nonatomic, strong) NSString *deviceId4Ads;
@property (nonatomic, strong) NSDate *deviceId4AdsExpireDate;
@property (nonatomic, strong) NSString *sdkId;
@property (nonatomic, strong) NSString *sdkPrivateKey;


//check this
@property (nonatomic, strong) NSString *zaloUserId;
@property (nonatomic, strong) NSString *zaloOauthCode;
- (BOOL) synchronize;

@end
