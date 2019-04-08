//
//  UIDevice+ZDKExtension.h
//  ZaloSDK
//
//  Created by Liem Vo Uy on 1/23/15.
//  Copyright (c) 2015 VNG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (ZDKExtension)

- (NSString *) zdkMobileNetworkCode;
- (NSString *) zdkScreenSize;
- (NSString *) zdkDeviceModel;
- (NSString *) zdkDeviceId:(BOOL)usingIDFAEnabled;
- (NSString *) zdkDeviceId; // try to use idfa
- (NSString*) zdkId; // id from device tracker, zdid
- (NSString *) zsdkId; //sdk id from device tracker
- (NSString *) zdkMacAddress;
- (NSString *) zdkOsVersion;
- (NSString *) zdkAppName;
- (NSString *) zdkAppVersion;
- (NSString *) zdkBundleId;
- (NSString *) zdkAdvertiseId;
- (NSString *) zdkLanguage; //IETF , en-US
- (NSString *) zdkTimeZone;
- (NSString *) zdkDPI;
- (NSNumber *) zdkLatitude; //long long
- (NSNumber *) zdkLongtitude; //long long
- (NSString *) zdkVendorId; // raw vendor ID
- (NSString *) zdkSelfId; // ID tự gen lưu trữ trong NSUserDefault
- (NSString *) zdkCreationDateId; //timestamp creation date của 3 thư mục /var, /usr, /cores, cách nhau băng dấu - : "12345-67890-34567"
- (NSString *) zdkConnectionType;
- (NSString *) zdkHeapSize;
- (NSString *) zdkScreenWidth;
- (NSString *) zdkScreenHeight;
- (NSString *) zdkCpuInfo;
- (NSString *) zdkBatteryInfo;
/*!
 Return a dictionary with 2 keys if any
 - "udid" : device id string
 - "udidType" : devce id type string ("macAddress", "advertiserId", "vendorId", "generatedId")
 */
- (NSDictionary *) zdkDeviceIdDictionary:(BOOL)usingIDFAEnabled;

@end
