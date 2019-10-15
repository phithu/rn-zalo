//
//  Logger.h
//  123ClickAdsSDK
//
//  Created by Liem Vo Uy on 9/19/13.
//  Copyright (c) 2013 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 SDK Log level
 */
typedef NS_ENUM(NSUInteger, ZDKLogLevel) {
    /**
     No log at all
     */
    ZDKLogNone = 0,
    /**
     Log all messages
     */
    ZDKLogVerbose = 1,
    /**
     Log debug, info, warn and error messages
     */
    ZDKLogDebug = 2,
    /**
     Log info, warn and error messages
     */
    ZDKLogInfo = 3,
    /**
     Log warn and error messages
     */
    ZDKLogWarn = 4,
    /**
     Only log error messages
     */
    ZDKLogError = 5,
};


@interface ZDKLogManager : NSObject

/*!
 secret key is required for any log level except ZDKLogNone
 */
+ (void) setLogLevel: (ZDKLogLevel) logLevel secretKey:(NSString *)key DEPRECATED_MSG_ATTRIBUTE("use setLogLevel: instead");
+ (void) setLogLevel: (ZDKLogLevel) logLevel;
+ (ZDKLogLevel) logLevel;
@end


extern void ZDKLog(NSString * format,...);
extern void ZDKLoge(NSString * format,...);
extern void ZDKLogw(NSString * format,...);
extern void ZDKLogi(NSString * format,...);
extern void ZDKLogd(NSString * format,...);
extern void ZDKLogv(NSString * format,...);

