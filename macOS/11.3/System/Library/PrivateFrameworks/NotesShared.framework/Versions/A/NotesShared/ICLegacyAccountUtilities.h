/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICLegacyAccountUtilities : NSObject
+(id)legacyAccountForLegacyAccountType:(long long)arg1 context:(id)arg2 ;
+(char)didChooseToMigrateLegacyAccountType:(long long)arg1 ;
+(char)didChooseToMigrateAccountsForContext:(id)arg1 forAccountPassingTest:(/*^block*/id)arg2 ;
+(id)legacyAccountForPrimaryICloudAccountWithContext:(id)arg1 ;
+(id)legacyAccountForLocalAccountWithContext:(id)arg1 ;
+(id)legacyAccountForICloudACAccount:(id)arg1 context:(id)arg2 ;
+(id)accountForAccountIdentifier:(id)arg1 context:(id)arg2 ;
+(char)didChooseToMigrateAccount:(id)arg1 context:(id)arg2 ;
+(id)legacyAccountForICloudAccount:(id)arg1 context:(id)arg2 ;
+(char)isLegacyLocalAccount:(id)arg1 ;
+(id)accountIdentifierForAccount:(id)arg1 ;
@end

