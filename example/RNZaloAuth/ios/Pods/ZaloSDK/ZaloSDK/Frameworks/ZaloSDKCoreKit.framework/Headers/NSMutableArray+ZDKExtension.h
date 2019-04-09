//
//  NSMutableArray+ZDKExtension.h
//  ZaloSDK
//
//  Created by Hoang Nguyen on 7/9/15.
//  Copyright (c) 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray(ZDKExtension)
- (NSArray *) zdkReversedArray;
- (NSString *) zdkJSONString;
@end

@interface NSMutableArray (ZDKExtension)

- (void) zdkReverse;

//safety method, set object if not nil
- (void)zdkAddObject:(id)obj;

- (void)zdkInsertObject:(id)obj atIndex:(NSUInteger)index;

@end
