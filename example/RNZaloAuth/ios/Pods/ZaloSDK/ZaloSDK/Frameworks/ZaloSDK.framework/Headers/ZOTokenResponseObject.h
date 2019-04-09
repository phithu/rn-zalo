//
//  ZATokenResponseObject.h
//  ZaloSDK
//
//  Created by dungttm on 2/13/14.
//  Copyright (c) 2014 VNG Corporation. All rights reserved.
//

#import "ZaloSDKDefine.h"
#import "ZOResponseObject.h"
//#if !__has_feature(objc_arc)
//#error Zalo iOS SDK must be built with ARC.
//// You can turn on ARC for only Zalo SDK files by adding -fobjc-arc to the build phase for each of its files.
//#endif
@interface ZOTokenResponseObject : ZOResponseObject{
     NSString* accessToken;
    NSTimeInterval expriedTime;
}
@property (nonatomic, retain) NSString* accessToken;
@property (nonatomic) NSTimeInterval expriedTime;
-(id)initWithDictionary:(NSDictionary *)dictionary;
@end
