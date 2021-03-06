/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)predicateForAccountIdentifier:(id)arg1 ;
+(id)predicateForNotHidden;
+(id)supportsPlatformPredicate:(char)arg1 ;
+(id)predicateForNotFirstParty;
+(id)predicateForHasMessagesExtension;
+(id)predicateForIs32BitOnly:(char)arg1 ;
@end

