//
//  ZDKConfig.h
//  ZaloSDK
//
//  Created by Liem Vo on 7/31/17.
//  Copyright © 2017 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZDKConfig : NSObject


+ (instancetype) defaultConfig;

//ISO2 language code: VI, MY, default VI
//https://www.loc.gov/standards/iso639-2/php/code_list.php
@property (nonatomic, strong) NSString* preferedLanguage;

//Mobie country code: VN: 84, MM: 95... default 84
@property (nonatomic, strong) NSString* preferedMobileCountryCode;

@end
