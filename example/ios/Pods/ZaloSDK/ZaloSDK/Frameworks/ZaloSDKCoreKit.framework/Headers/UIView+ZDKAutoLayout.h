//
//  UIView+UIView_ZDKAutoLayout.h
//  ZaloSDKCoreKit
//
//  Created by Liem Vo  on 11/4/16.
//  Copyright © 2016 VNG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ZDKAutoLayout)


- (UIView *) zdkAddLeadingConstraintWithView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddTrailingConstraintWithView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddTopConstraintWithView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddBottomConstraintWithView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddHorizontalSpacingConstraintWithView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddVerticalSpacingConstraintWithView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddCenterXConstraintInView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddCenterYConstraintInView: (UIView *) view constant: (float) constant;
- (UIView *) zdkAddWidthConstraintWithConstant: (float) constant;
- (UIView *) zdkAddHeightConstraintWithConstant: (float) constant;

- (UIView *) zdkAddWidthConstraintEqualToWidthWithView:(UIView *)view constant:(float)constant multiplier:(float)multiplier;
- (UIView *) zdkAddHeightConstraintEqualToHeightWithView:(UIView *)view constant:(float)constant multiplier:(float)multiplier;


@end
