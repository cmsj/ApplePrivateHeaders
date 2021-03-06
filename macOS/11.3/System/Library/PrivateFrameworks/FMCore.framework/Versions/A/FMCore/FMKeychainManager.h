/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/Versions/A/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMKeychainManager : NSObject
+(id)sharedInstance;
-(id)_accessibilityForDataProtectionClass:(long long)arg1 migratable:(char)arg2 ;
-(int)_updateWithQuery:(id)arg1 attributes:(id)arg2 ;
-(char)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(id)_query:(id)arg1 error:(id*)arg2 ;
-(char)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(char)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)passwordForAccount:(id)arg1 service:(id)arg2 ;
-(id)allAccountsForService:(id)arg1 ;
-(int)_add:(id)arg1 ;
-(id)allServices;
-(id)allRecords;
-(int)_delete:(id)arg1 ;
-(id)dataForAccount:(id)arg1 service:(id)arg2 ;
-(char)deleteDataForAccount:(id)arg1 service:(id)arg2 ;
-(char)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)itemForAccount:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
@end

