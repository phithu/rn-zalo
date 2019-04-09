//
//  NSStringExtension.h
//  ZaloSDK
//
//  Created by localadm on 7/8/13.
//  Copyright (c) 2013 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ZDKExtension)

+ (NSString *)zdkEmptyIfNilString:(NSString *)str;
- (NSString *)zdkEncodeURLString;
- (NSString *)zdkDecodedURLString;
- (NSString *)zdkMd5;
- (NSString *)zdkSha1;
- (NSString *)zdkRemovePercentEncoding;
- (BOOL)zdkContainsString:(NSString *)str;
/**
 * Parses a URL query string into a dictionary.
 */
- (NSDictionary*) zdkQueryDictionaryUsingEncoding:(NSStringEncoding)encoding;
- (NSString *) zdkUrlQueryParamValueWithKey:(NSString *) key;
/**s
 * Parses a URL, adds query parameters to its query, and re-encodes it as a new URL.
 */
- (NSString*) zdkStringByAddingQueryDictionary:(NSDictionary*)query;
+ (NSString *) zdkRequestWithBaseUrl:(NSString *)baseUrl
                              subUrl:(NSString *)subUrl
                              params:(NSDictionary *)params;


+ (NSString *) zdkAES128EncryptData:(NSData *) data withKey:(NSString *)key;
+ (NSString *) zdkAES128EncryptString:(NSString *) str withKey:(NSString *)key;
+ (NSString *) zdkAES128DecryptData:(NSData *) data withKey:(NSString *)key;
+ (NSString *) zdkAES128DecryptString:(NSString *) str withKey:(NSString *)key;
+ (NSString *) zdkSigForParams: (NSDictionary *) params serectKey: (NSString *) serectKey;

@end
