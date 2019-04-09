//
//  ZaloResponseObject.h
//  ZaloSDK
//
//  Created by smile on 8/1/13.
//  Copyright (c) 2013 com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZOZaloError.h"
#import "ZaloSDKDefine.h"
/**
 Response object from Zalo.
 Every concrete response object must inherit ZaloResponseObject.
 */
//#if !__has_feature(objc_arc)
//#error Zalo iOS SDK must be built with ARC.
//// You can turn on ARC for only Zalo SDK files by adding -fobjc-arc to the build phase for each of its files.
//#endif
@interface ZOResponseObject : NSObject {
    NSInteger errorCode;
    
}
/**
 the error code of Zalo response.
 */
@property (nonatomic, strong) NSString* errorMessage;
@property (nonatomic, assign) NSInteger errorCode;
@property (nonatomic, getter=isSucess) BOOL success;

@property (nonatomic, strong) NSString* errorDescription DEPRECATED_MSG_ATTRIBUTE("use errorMessage instead.");
;
@property (nonatomic, strong) NSString* errorReason  DEPRECATED_MSG_ATTRIBUTE("use errorMessage instead.");
;
@property (nonatomic, strong) NSString* errorName DEPRECATED_MSG_ATTRIBUTE("use errorMessage instead.");
;

-(id) initWithDictionary:(NSDictionary*) dictionary;
-(id) initUnknowExceptionResponseObject;
-(id) initTimeoutResponseObject;
-(id) initNotLoginYetObject;

@end

