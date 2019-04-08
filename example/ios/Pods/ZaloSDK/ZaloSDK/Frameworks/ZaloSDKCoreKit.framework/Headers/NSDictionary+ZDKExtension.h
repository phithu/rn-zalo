//
//  NSDictionary+ZDKExtension.h
//  ZaloSDK
//
//  Created by Hoang Nguyen on 7/9/15.
//  Copyright (c) 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (ZDKExtension)

//JSON Extensions
- (NSString *) zdkJSONString;

- (int)zdkIntForKey:(NSString *)key;

- (long)zdkLongForKey:(NSString *)key;

- (BOOL)zdkBoolForKey:(NSString *)key;

- (double)zdkDoubleForKey:(NSString *)key;

- (long long)zdkLongLongForKey:(NSString *)key;

- (NSArray *)zdkArrayForKey:(NSString *)key;

- (NSNumber *)zdkNumberForKey:(NSString *)key;

- (NSString *)zdkStringForKey:(NSString *)key;

- (NSDictionary *)zdkDictionaryForKey:(NSString *)key;

@end
