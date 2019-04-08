//
//  ZDKConstants.h
//  ZaloSDK.CoreKit
//
//  Created by Hoang Nguyen on 9/22/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ZOLoginType){
    ZOLoginTypeUnknown,
    ZOLoginTypeFacebook,
    ZOLoginTypeZalo,
    ZOLoginTypeGooglePlus,
    ZOLoginTypeZingMe,
    ZOLoginTypeGuest
};



typedef NS_ENUM(NSInteger, ZDKErrorCode) {
    ZDKNoneErrorCode,
    ZDKUnknownErrorCode,
    ZDKInvalidErrorCode,
    ZDKTimeoutErrorCode,
    ZDKNetworkErrorCode,
    ZDKEncryptionErrorCode,
    ZDKInvalidParamsErrorCode
};


@interface ZDKConstants : NSObject

@end


#define kZDKSDKDidFinishGetSDKIDAndPrivateKeyNotification   @"kZDKSDKDidFinishGetSDKIDAndPrivateKeyNotification"
