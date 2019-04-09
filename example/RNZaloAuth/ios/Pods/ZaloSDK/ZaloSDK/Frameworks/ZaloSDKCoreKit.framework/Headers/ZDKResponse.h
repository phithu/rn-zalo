//
//  ZDKResponse.h
//  ZaloSDK.CoreKit
//
//  Created by Hoang Nguyen on 9/22/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZDKResponse : NSObject

@property (assign, nonatomic) NSInteger errorCode;
@property (strong, nonatomic) NSString * errorMessage;
@property (strong, nonatomic) NSError * underlyingError;
@property (strong, nonatomic) id data;

+ (instancetype)successWithData:(id)data;
+ (instancetype)unknownExceptionResponse;
+ (instancetype)invalidResponse;
+ (instancetype)timeoutReponse;
+ (instancetype)errorWithCode:(NSInteger)errorCode
                 errorMessage:(NSString *)errorMessage
              underlyingError:(NSError *)underlyingError;


@end
