//
//  ZDKMacros.h
//  ZaloSDK.CoreKit
//
//  Created by Hoang Nguyen on 9/22/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#ifndef ZDKMacros_h
#define ZDKMacros_h


#define RGB(r, g, b)      [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#define RGBA(r, g, b, a)  [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define HEXCOLOR(c)       [UIColor colorWithRed:((c>>16)&0xFF)/255.0 green:((c>>8)&0xFF)/255.0 blue:(c&0xFF)/255.0 alpha:1.0]
#define ZDKUserDefaults   [NSUserDefaults standardUserDefaults]


#define IS_IPAD ( UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad )
#define IS_IPHONE ( UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone )
#define IS_1X ( [[UIScreen mainScreen] respondsToSelector:@selector(scale)] && [[UIScreen mainScreen] scale] == 1 )
#define IS_2X ( [[UIScreen mainScreen] respondsToSelector:@selector(scale)] && [[UIScreen mainScreen] scale] == 2 )
#define IS_3X ( [[UIScreen mainScreen] respondsToSelector:@selector(scale)] && [[UIScreen mainScreen] scale] == 3 )


#define IS_IOS_7_AND_GREATER() (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iOS_7_0)
#define IS_IOS_7_AND_LOWER() (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber_iOS_7_0)
#define IS_IOS_8_AND_LOWER() (kCFCoreFoundationVersionNumber <= kCFCoreFoundationVersionNumber_iOS_8_0)
#define IS_IOS_8_AND_GREATER() (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iOS_8_0)
#define IS_IOS_9_AND_GREATER() (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iOS_9_0)



#ifdef __cplusplus
#define ZDK_EXTERN extern "C" __attribute__((visibility ("default")))
#else
#define ZDK_EXTERN extern __attribute__((visibility ("default")))
#endif

#define ZDK_STATIC_INLINE static inline

#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff \
_Pragma("clang diagnostic pop") \
} while (0)


#if !defined(retain_stub)
#if __has_feature(objc_arc)
#define retain_stub self
#define autorelease_stub self
#define release_stub self
#define dealloc_stub self
#define bridge_stub __bridge
#else
#define retain_stub retain
#define autorelease_stub autorelease
#define release_stub release
#define dealloc_stub dealloc
#define bridge_stub
#endif
#endif

#define DOUBLE_VALUE(obj) ([obj respondsToSelector:@selector(doubleValue)] ? [obj doubleValue] : 0.0)
#define INT_VALUE(obj) ([obj respondsToSelector:@selector(intValue)] ? [obj intValue] : 0)
#define BOOL_VALUE(obj) ([obj respondsToSelector:@selector(boolValue)] ? [obj boolValue] : false)
#define DICT_VALUE(obj) ([obj isKindOfClass:[NSDictionary class]] ? obj : nil)

#endif /* ZDKMacros_h */
