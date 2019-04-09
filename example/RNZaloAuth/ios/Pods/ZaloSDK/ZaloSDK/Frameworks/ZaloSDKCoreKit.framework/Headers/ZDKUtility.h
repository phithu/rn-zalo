//
//  ZDKUtility.h
//  ZaloSDK.CoreKit
//
//  Created by Hoang Nguyen on 9/22/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZDKUtility : NSObject

//This method is only used to make a forced crash
//Testing purpose only, use it with caution!
//Remember to remove method calling after using
+ (void)forceCrash;
+ (void)raiseGeneralException;

@end
