//
//  ZAGraphResponseObject.h
//  ZaloSDK
//
//  Created by dungttm on 2/13/14.
//  Copyright (c) 2014 VNG Corporation. All rights reserved.
//


#import "ZOResponseObject.h"

///////////////////////////////////////////
/// ZOGraphResponseObject
///////////////////////////////////////////
@interface ZOGraphResponseObject : ZOResponseObject
@property (nonatomic, retain) NSDictionary* data;
- (id) initWithGraphResponseObject: (ZOGraphResponseObject *) response;
@end

///////////////////////////////////////////
/// ZOProfileResponseObject
///////////////////////////////////////////
@interface ZOProfileResponseObject : ZOGraphResponseObject
@end

///////////////////////////////////////////
/// ZOFriendsListResponseObject
///////////////////////////////////////////
@interface ZOFriendsListResponseObject : ZOGraphResponseObject
@end


@interface ZOShareResponseObject : ZOResponseObject

//@property (assign, nonatomic, getter=isSuccess) BOOL success;
@property (strong, nonatomic) NSString * message;
@property (strong, nonatomic) id result_data;
@property (assign, nonatomic) int send_action; //0 -> cancel, 1 -> send

+ (instancetype)responseWithError:(int)code
                          success:(BOOL)success
                          message:(NSString *)message
                       resultData:(id)data;

@end
