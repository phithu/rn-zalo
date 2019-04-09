//
//  ZaloError.h
//  ZaloSDK
//
//  Created by smile on 8/9/13.
//  Copyright (c) 2013 com. All rights reserved.
//



#import <Foundation/Foundation.h>
/**
 enum define error code when using function +(void)authenticateWithAppId : (NSString*) appId  andDelegate:(id<ZAZaloApiDelegate>) delegate andCompletionHandler: (void (^)(ZAOauthResponseObject* response)) handler; of @class ZAZaloApi
 */
#ifndef ZALO_SDK_ERROR_H
#define ZALO_SDK_ERROR_H

enum ZaloSDKErrorCode {
    
    kZaloSDKErrorCodeNoneError = 0,
    
    // The account wasn't saved because it is missing a required login.
    // kZaloSDKErrorCodeRequiredLogin = -5001, =>Deprecated!
    
    /**
     The account wasn't saved because authentication of the supplied credential failed.
     */
    kZaloSDKErrorCodeAuthenticationFailed = -5002,
    /**
     force call service too more times.
     */
    kZaloSDKErrorCodeAuthenticationExceeded = -5003,
    
    // Invalid code type.
    kZaloSDKErrorCodeAppIdInvalid = -5004,
    /**
     account invalid. please check your app id.
     */
    kZaloSDKErrorCodeAccountInvalid = -5005,
    /**
     invalid request.
     */
    kZaloSDKErrorCodeRequestInvalid = -5006,
    
    /**
     The account wasn't deleted because it doesn't exist
     */
    kZaloSDKErrorCodeAccountNotFound = -5007,
    /**
     Get data from Zalo application fail.
     */
    kZaloSDKErrorCodeDataNotFound = -5008,
    
    // The operation didn't complete because the user denied permission.
    kZaloSDKErrorCodePermissionDenied = -5009,
    
    // Cancel request
    kZaloSDKErrorCodeRequestCanceled = -5010,
    
    // Compatible version
    // For example; You're using SDK version lager/lower than supported Zalo version
    // If you get the error code, you should be notify to user to upgrade latest Zalo version
    kZaloSDKErrorCodeUnSupportVersion = -5011,
    /**
     Invalid secret key.
     */
    kZaloSDKErrorCodeInvalidSecretKey = -5012,
    /**
     can't create oauth code.
     */
    kZaloSDKErrorCodeCreateOauthCodeFail = -5013,
    /**
     Can't create access token when authenticate to get oauth code
     */
    kZaloSDKErrorCodeCreateAccessTokenFail = -5014,
    /**
     oauth code's invalid when you use oauth code with Zalo Api
     */
    kZaloSDKErrorCodeInvalidOauthCode = -5015,
    
    kZaloSDKErrorCodeUserConsentFail = -5016,
    /**
     your session id @ Zalo application expired or invalid.
     */
    kZaloSDKErrorCodeInvalidSessionId = -5017,
    /**
     request has invalid parameter.
     */
    kZaloSDKErrorCodeInvalidParameter = -5018,
    /**
     zalo was not installed.
     */
    kZaloSDKErrorCodeRequiredZaloInstalled = -5019,
    kZaloSDKErrorCodeServerConnection       =   -5020,
    kZaloSDKErrorCodeTimeOutRequest         =   -5021,
    
    kZaloSDKErrorCodeDidNotLogin = -5022,
    
    /**
     Could not login to facebook
     */
    kZaloSDKErrorCouldNotLoginToFacebook = -5030,
    
    kZaloSDKErrorPermissionDenied = -201,
    kZaloSDKErrorCodeNotLoggedIn = -5144,
    
    kZaloSDKErrorCodeWebViewNotEnabled = -5230,
    
    /**
     Could not login to G+
     */
    kZaloSDKErrorCouldNotLoginToGooglePlus = -5050,
    
    /**
     Could not login Zing Me
     */
    
    kZaloSDKErrorMissingZingMeUsernameOrPassword = -5150,
    
    /**
     Guest Login - Account Protection Send Email failed
     */
    kZaloSDKErrorGuestProtectionFailed = -5300,
    kZaloSDKErrorGuestProtectionSuccess = -5301,
    kZaloSDKErrorGuestProtectionEmailPasswordMissing = -5302,
    
    kZaloSDKErrorGuestRecoveryFailed = -5303,
    kZaloSDKErrorGuestRecoverySuccess = -5304,
    kZaloSDKErrorGuestRecoveryEmailPasswordMissing = -5305,
    
    /**
     Enter CMND
     */
    kZaloSDKErrorMissingCMND = -5400,
    kZaloSDKErrorRegisterCMNDSuccess = -5401,
    
    /**
     Unknown exception
     */
    kZaloSDKErrorCodeUnknownException = -1000,
    kZaloSDKErrorCodeUserCancel = -1001,
};

#endif

//enum ZAErrorStep{
//    ZAErrorStepIntegrateErrorAndNonRetry = 1,
//    ZAErrorStepAbleToRetry = 2,
//    ZAErrorStepNonRetry = 3,
//    ZAErrorStepRetryTooManyTimes = 4

/*
 errorStep: 1  ~ Các lỗi liên quan tới việc tích hợp, không retry
 errorStep: 2  ~ Các lỗi liên quan tới nhập liệu và trạng thái hiện tại của hệ thống, cho phép retry
 errorStep: 3  ~ Các lỗi không retry
 errorStep: 4  ~ Lỗi vượt quá số lần retry cho phép
 */
//};


