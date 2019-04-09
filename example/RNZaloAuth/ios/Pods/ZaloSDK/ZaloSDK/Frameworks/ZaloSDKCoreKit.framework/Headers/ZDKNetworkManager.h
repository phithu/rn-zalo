//
//  ZDKNetworkManager.h
//  ZaloSDKCoreKit
//
//  Created by Liem Vo on 10/25/17.
//  Copyright © 2017 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^ZDKNetworkManagerCallBack)(NSData* _Nullable data, NSURLResponse* _Nullable response, NSError* _Nullable connectionError);
@interface ZDKNetworkManager : NSObject
@property (nonatomic, strong, nonnull) NSURLSession *urlSession;
+ (instancetype _Nonnull) sharedInstance;

+ (id _Nullable) sendAsynchronousRequest:(NSURLRequest* _Nonnull) request
                                           completionHandler:(ZDKNetworkManagerCallBack _Nullable) handler;
+ (NSData * _Nullable) sendSynchronousRequest:(NSURLRequest * _Nonnull)request
                   returningResponse:(__autoreleasing NSURLResponse ** _Nullable)responsePtr
                               error:(__autoreleasing NSError ** _Nullable)errorPtr;
@end
