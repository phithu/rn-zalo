//
//  ZaloApi.h
//  ZaloSDK
//
//  Created by smile on 8/1/13.
//  Copyright (c) 2013 com. All rights reserved.
//

@class ZOGraphResponseObject;
@class ZOOauthResponseObject;
@class ZORequestPermissionResponseObject;
@class ZOZingMeLoginView;
@class ZOLoginViewController;
@class ZOFeed;
@class ZOShareResponseObject;
@class ZDKConfig;

@protocol ZOZaloApiDelegate;


/**
 A class that contains static functions that you
 can use to authenticate, get user profile, get friend list,
 send message, push feed, etc... in Zalo.
 */
@interface ZaloSDK : NSObject


//////////////////////////////////////
// General                          //
//////////////////////////////////////

/**
 Singleton object of SDK
 */
+ (instancetype) sharedInstance;
- (NSString *) appId;
- (NSString *) version;

/**
 Initialize SDK with specific app id
 */
- (void) initializeWithAppId: (NSString *) appId;
- (void) setOauthDelegate:(id<ZOZaloApiDelegate>)delegate;

@property (nonatomic, strong, readonly) ZDKConfig *config;

//////////////////////////////////////
// Authenticate                     //
//////////////////////////////////////

/**
 check if authenticated.
 the handler will be called after verify will server
 if handler is nil, it won't verify with server
 @return YES if has cached oauth, this oauth hasn't verified with server
 */
- (BOOL) isAuthenticatedZaloWithCompletionHandler: (void (^)(ZOOauthCheckingResponseObject* response)) handler;

- (void) authenticateZaloWithAuthenType:(enum ZAZaloSDKAuthenType) type
                       parentController:(UIViewController *)parentController
                                handler:(void (^)(ZOOauthResponseObject* response))handler;

/**
 Register zalo accoun
 */
- (void) registZaloAccountWithParentController:(UIViewController *)parentController
                                       handler:(void (^)(ZOOauthResponseObject *response)) handler;
/**
 Login Zalo with facebook account
 */
- (void) authenticateFacebookInController:(UIViewController *) controller withCompletionHandler: (void (^)(ZOOauthResponseObject* response)) handler;
- (void) setFacebookAppId: (NSString *) appId;
/**
 Default is NO
 **/
- (void) setAllowsSignInFacebookWithBrowser: (BOOL) yesOrNo;

/**
 Login Zalo with Google account
 */
- (void) authenticateGoogleInController:(UIViewController *)controller
                                handler:(void (^)(ZOOauthResponseObject * response))handler;
/**
 Default is YES
 **/
- (void) setAllowsSignInGoogleWithBrowser: (BOOL) yesOrNo;
/**
 Login Zalo with Guest account
 */
- (void) authenticateGuestWithCompletionHandler:(void (^)(ZOOauthResponseObject * response))handler;

/**
 Create zing me login view
 @param frame frame of the login view. Height should be at least 114 pixel
 @return ZingMeLoginView
 */
- (ZOZingMeLoginView *) createZingMeLoginViewWithFrame: (CGRect) frame;

- (void) authenticateZingMeWithUsername: (NSString *) username
                               password: (NSString *) password
                      completionHandler: (void (^)(ZOOauthResponseObject* response)) handler;

/**
 Request permission in Zalo App
 */
- (void) requestZaloPermission: (ZOPermission) permission
          andCompletionHandler: (void (^)(ZORequestPermissionResponseObject* response)) handler;

/**
 Return Zalo Oauth code if authenticated, otherwise nil
 */
- (NSString *) zaloOauthCode;


/**
 Return Zalo User id if authenticated, otherwise nil
 */
- (NSString *) zaloUserId;

- (ZOLoginType) lastLoginType;

/**
 to unauthenticate.
 SDK clear oauth code in cache
 */
- (void)unauthenticate;


/**
 Call this method in applicationDidBecomeActive:
 */
- (void) handleDidBecomeActive;



//////////////////////////////////////
// Open APIs                        //
//////////////////////////////////////
typedef void (^ZOGraphCallback)(ZOGraphResponseObject* response);

/**
 Get Zalo user profile
 */
- (void) getZaloUserProfileWithCallback:(ZOGraphCallback) callback;

/**
 Get Zalo user friend list by offset and count
 */
- (void) getUserFriendListAtOffset:(NSUInteger) offset count:(NSUInteger) count callback:(ZOGraphCallback) callback;

/**
 Get invitable Zalo user friend list
 */
- (void) getUserInvitableFriendListAtOffset:(NSUInteger) offset count:(NSUInteger) count callback:(ZOGraphCallback) callback;

/**
 Post feed
 */
- (void) postFeedWithMessage:(NSString *) message link:(NSString *) link callback:(ZOGraphCallback) callback;

/**
 Invite other user to use app
 */
- (void) sendAppRequestTo:(NSString *) friendId message:(NSString *) message callback:(ZOGraphCallback) callback;

/**
 Send message to a friend
 */
- (void) sendMessageTo: (NSString *) friendId message:(NSString *) message link:(NSString *) link callback:(ZOGraphCallback) callback;

/**
 Send message onbehave of offical account
 */
- (void) sendOfficalAccountMessageWith: (NSString *) templateName templateData:(NSDictionary *) templateData callback:(ZOGraphCallback) callback;

/**
 Send graph api request with specific path and param
 Path: graph path ie: /me
 Param: url query param
 Method: HttpMethod: GET / POST
 */
- (void) userGraphWithPath:(NSString *) path
                    params:(NSDictionary *) data
                    method:(NSString *) method
                  callback:(ZOGraphCallback) callback;



/*!
 Share Feed Link, Image, ...
 */
- (void)shareFeed:(ZOFeed *)feed
     inController:(UIViewController *)controller
         callback:(void(^)(ZOShareResponseObject * response))callback;

- (void)sendMessage:(ZOFeed *)message
       inController:(UIViewController *)controller
           callback:(void(^)(ZOShareResponseObject * response))callback;


- (void)shareFeedOrSendMessage:(ZOFeed *)feedOrMessage
                  inController:(UIViewController *)controller
                      callback:(void(^)(ZOShareResponseObject * response))callback;


//This method is used to config sharing zalo using app or web
//Default is ZOShareViaTypeApp
- (void)shareZaloUsing:(ZOShareViaType)type;

// Disable option to post to user's wall when sharing with zalo app
// Default is NO
- (void)setShareZaloChatOnly: (BOOL) yesOrNo;

////////////////////////////////////////
//// Login Form                       //
////////////////////////////////////////

- (ZOLoginViewController *)createLoginViewController;

////////////////////////////////////////
//// Protect Account Form                       //
////////////////////////////////////////

- (ZOLoginViewController *)createAccountProtectionViewController;



@end



@interface ZaloSDK(Deprecated)


- (void) authenticateZaloWithCompletionHandler: (void (^)(ZOOauthResponseObject* response)) handler __deprecated_msg("use method authenticateZaloWithAuthenType:parentController:handler instead.");

- (void) authenticateZaloWithAuthenType:(enum ZAZaloSDKAuthenType) type
                   andCompletionHandler: (void (^)(ZOOauthResponseObject* response)) handler __deprecated_msg("use method authenticateZaloWithAuthenType:parentController:handler instead.");

- (void) authenticateFacebookWithCompletionHandler: (void (^)(ZOOauthResponseObject* response)) handler __deprecated_msg("use method authenticateFacebookInController:withCompletionHandler: instead.");
@end
