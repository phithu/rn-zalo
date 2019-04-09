//
//  NSDataExtention.h
//  ZaloSDK
//
//  Created by localadm on 7/10/13.
//  Copyright (c) 2013 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (ZDKExtension)

+ (NSData *)zdkBase64DecodeString:(NSString*)string;
+ (NSString *)zdkBase64EncodeData:(NSData*)data;
- (NSString *)zdkBase64EncodeData;
- (NSString *)zdkToHex;
- (NSData *)zdkAES256EncryptWithKey:(NSString *)key;
- (NSData *)zdkAES256DecryptWithKey:(NSString *)key;
+ (NSData *)AES128EncryptData:(NSData *) data withKey:(NSString *)key;

@end
