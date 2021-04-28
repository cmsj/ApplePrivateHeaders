/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDTableUpgradeStep.h>

@class NSString;

@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(int)runWithConnection:(id)arg1 ;
+(int)_dropTable:(id)arg1 connection:(id)arg2 ;
+(int)_dropThreadCategoriesIndex:(id)arg1 ;
+(int)_createTempMessagesTable:(id)arg1 ;
+(int)_recreateMessagesIndices:(id)arg1 ;
+(int)_copyMessagesData:(id)arg1 ;
+(int)_swapMessagesTables:(id)arg1 ;
+(int)_recreateThreadsTable:(id)arg1 ;
+(int)_recreateThreadsIndices:(id)arg1 ;
+(int)_truncateTable:(id)arg1 connection:(id)arg2 ;
@end
