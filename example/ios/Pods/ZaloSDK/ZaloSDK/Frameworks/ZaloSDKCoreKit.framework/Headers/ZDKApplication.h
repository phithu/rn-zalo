//
//  ZDKApplication.h
//  ZaloSDKCoreKit
//
//  Created by Liem Vo on 12/7/17.
//  Copyright © 2017 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZDKApplication : NSObject
+ (instancetype) sharedApplication;
- (BOOL) openURL: (NSURL *) url;
@end
