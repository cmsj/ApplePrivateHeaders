/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Admin.framework/Versions/A/Admin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SysKeyChainConfig : NSObject
+(id)sharedSysKeyChainConfig;
-(void)setRestrictAppInstallations:(unsigned long long)arg1 ;
-(void)setKeyForDomain:(id)arg1 ;
-(char)storeSystemKeychainPassword:(id)arg1 account:(id)arg2 service:(id)arg3 ;
-(int)storeKeyInSystemKeychain:(id)arg1 forUser:(id)arg2 serverURL:(id)arg3 description:(id)arg4 ;
-(char)setODSDPassword:(id)arg1 accountName:(id)arg2 ;
-(void)setRestrictAppInstallations:(char)arg1 allowCaspianIdentifiedApps:(char)arg2 ;
@end

