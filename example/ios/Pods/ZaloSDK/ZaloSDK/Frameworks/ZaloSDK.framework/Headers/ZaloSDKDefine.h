//
//  ZaloSDKDefine.h
//  ZaloSDK
//
//  Created by smile on 8/9/13.
//  Copyright (c) 2013 com. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ZOOauthResponseObject;


#ifndef ZALO_SDK_DEFINE_H
#define ZALO_SDK_DEFINE_H

typedef ZOOauthResponseObject ZOOauthCheckingResponseObject;

enum ZAZaloSDKAuthenType{
    ZAZaloSDKAuthenTypeViaZaloAppOnly,
    ZAZaloSDKAuthenTypeViaWebViewOnly,
    ZAZAloSDKAuthenTypeViaZaloAppAndWebView
};
enum ZAGraphRequestType{
    ZAGraphRequestTypeGetProfile,
    ZAGraphRequestTypeGetFriendList
};

typedef enum {
    ZOPermissionGetProfile,
    ZOPermissionGetFriendsList,
    ZOPermissionPushFeed,
    ZOPermissionSendMessage
} ZOPermission;


typedef NS_ENUM(NSInteger, ZOOrientationType){
    ZOOrientationTypePortrait,
    ZOOrientationTypeLanscape
};

typedef NS_ENUM(NSInteger, ZOShareViaType) {
    ZOShareViaTypeAppThenWeb,
    ZOShareViaTypeWebThenApp
};


#define ZDTSDK_DEFAULT_MAX_EVENTS_STORED 1000
#define ZDTSDK_DEFAULT_DISPATACH_EVENTS_INTERVAL 60
#define ZDTSDK_MIN_DISPATACH_EVENTS_INTERVAL 30
#define ZDTSDK_DEFAULT_STORE_EVENTS_INTERVAL 20
#define ZDTSDK_MIN_STORE_EVENTS_INTERVAL 10
#define ZDKSDK_DEFAULT_MAX_EVENT_LIFE_INTERVAL  259200 //seconds, 3 days
#define ZSDK_LOG_TAG @"[ZDK]"
#define ZALO_SDK_VERSION @"2.3.0921"

//NOTIFICATION
#define kZDTSDK_DID_UNAUTHENTICATE @"kZDTSDK_DID_UNAUTHENTICATE"
#define kZDTSDK_DID_AUTHENTICATE @"kZDTSDK_DID_AUTHENTICATE"

//Push Message Notification
#define kZALOSDK_PUSH_MESSAGE_SERVICE_DID_SHOW_POPUP @"kZALOSDK_PUSH_MESSAGE_SERVICE_DID_SHOW_POPUP"
#define kZALOSDK_PUSH_MESSAGE_SERVICE_DID_CLOSE_POPUP @"kZALOSDK_PUSH_MESSAGE_SERVICE_DID_CLOSE_POPUP"

//message
#define kZDTSDK_MESSAGE_LOADING NSLocalizedString(@"Đang xử lý", nil)

#endif
