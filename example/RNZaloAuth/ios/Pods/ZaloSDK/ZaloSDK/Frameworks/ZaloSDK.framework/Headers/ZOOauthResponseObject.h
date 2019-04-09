//
//  OAuthResponseObject.h
//  ZaloSDK
//
//  Created by smile on 8/1/13.
//  Copyright (c) 2013 com. All rights reserved.
//

#import "ZOResponseObject.h"
#import "ZaloSDKDefine.h"
#import <ZaloSDKCoreKit/ZaloSDKCoreKit.h>

/**
 A concrete response from Zalo application.
 You receive ZaloOAuthResponseObject when call [ZaloApi authenticateWithAppId: appId andCompletionHandler: handler];
 */
@interface ZOOauthResponseObject : ZOResponseObject
{
    NSString* oauthCode;
    NSString* userId;
    NSString* displayName;
    NSString* phoneNumber;
    NSString* dob;
    NSString* gender;
    
}

/**
 oauthCode. oauthcode's used for getting accesstoken.
 */
@property (nonatomic, retain) NSString* oauthCode;
/**
 the user that logged in ZaloApplicatoin.
 */
@property (nonatomic, retain) NSString* userId;
@property (nonatomic, retain) NSString* displayName;
@property (nonatomic, retain) NSString* phoneNumber;
@property (nonatomic, retain) NSString* dob;
@property (nonatomic, retain) NSString* gender;
@property (nonatomic, assign) BOOL zcert;
@property (nonatomic, assign) BOOL zprotect;
@property (nonatomic, assign) BOOL isRegister;
@property (assign, nonatomic) ZOLoginType type;
@property (copy, nonatomic) NSString * facebookAccessToken;
@property (copy, nonatomic) NSDate * facebookAccessTokenExpiredDate;
@property (strong, nonatomic) NSString *socialId;


-(id)initWithDictionary: (NSDictionary*) dictionary;
@end
