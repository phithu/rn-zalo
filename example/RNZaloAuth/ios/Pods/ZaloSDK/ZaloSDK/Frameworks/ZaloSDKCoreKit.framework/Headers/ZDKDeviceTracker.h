//
//  ZDTDeviceTracker.h
//  DeviceTrackingSDK
//
//  Created by Liem Vo Uy on 12/23/14.
//  Copyright (c) 2014 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZDKDeviceTracker : NSObject

+ (instancetype) sharedInstance;
- (NSString *) deviceId;
- (NSString *) sdkId;
- (NSString *) deviceId4Ads;
- (void) loadSDKId;
- (void) deviceIdWithCallback: (void(^)(NSString * deviceId)) callback;
- (NSDictionary *) prepareDeviceIdData;
- (NSDictionary *) prepareTrackingData;

@end
