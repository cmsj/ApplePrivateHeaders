/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemPolicy.framework/Versions/A/SystemPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MIS : NSObject
+(char)isAvailable;
+(char)installProvisioningProfile:(id)arg1 ;
+(id)currentDeviceID;
+(id)findProvisioningProfile:(id)arg1 ;
+(char)isProvisioningProfileValid:(id)arg1 forDevice:(id)arg2 ;
+(char)isValidApplication:(id)arg1 checkResources:(char)arg2 withSignerCategory:(unsigned long long*)arg3 withModified:(char*)arg4 withProgressCallback:(/*^block*/id)arg5 ;
+(char)isProvisioningProfileTrusted:(id)arg1 ;
+(char)isProvisioningProfileValid:(id)arg1 ;
+(char)uninstallProvisioningProfile:(id)arg1 ;
@end
