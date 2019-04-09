//
//  ZOFeed.h
//  ZaloSDK
//
//  Created by Hoang Nguyen on 10/30/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ZOFeed : NSObject

@property (copy, nonatomic, readonly) NSString * message;
@property (copy, nonatomic, readonly) NSString * appName;
@property (copy, nonatomic, readonly) NSString * link;
@property (copy, nonatomic, readonly) NSDictionary * others; //addition params if any

//link feed
@property (copy, nonatomic) NSString * linkTitle;
@property (copy, nonatomic) NSString * linkDesc;
@property (copy, nonatomic) NSArray * linkThumb; //string array
@property (copy, nonatomic) NSString * linkSource;


- (instancetype)initWithLink:(NSString *)link
                     appName:(NSString *)appName
                     message:(NSString *)message
                      others:(NSDictionary *)others;

@end
