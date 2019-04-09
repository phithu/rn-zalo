//
//  NSMutableDictionary+ZDKExtension.h
//  ZaloSDK
//
//  Created by Hoang Nguyen on 7/9/15.
//  Copyright (c) 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (ZDKExtension)

//safety method, set object if not nil
- (void)zdkSetObject:(id)obj forKey:(NSString *)key;


@end
