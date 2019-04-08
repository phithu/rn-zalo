//
//  UITextField+ZDKExtension.h
//  ZaloSDK
//
//  Created by Hoang Nguyen on 3/23/15.
//  Copyright (c) 2015 VNG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (ZDKExtension)

- (void)zdkSetPlaceholder:(NSString *)placeholder;
- (void)zdkSetLeftView:(NSString *)base64String;

@end
