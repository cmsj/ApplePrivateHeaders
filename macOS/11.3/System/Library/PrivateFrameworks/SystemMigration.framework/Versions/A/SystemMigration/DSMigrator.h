/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DSMigrator : NSObject
+(id)allRecordsForSystem:(id)arg1 ;
+(char)copyAllDSRecords:(id)arg1 fromSourceSystem:(id)arg2 toSystem:(id)arg3 andCommitChanges:(char)arg4 andVerbose:(char)arg5 ;
+(char)copyAllDSRecords:(id)arg1 fromSourceSystem:(id)arg2 toSystem:(id)arg3 mergeAttributes:(id)arg4 andCommitChanges:(char)arg5 andVerbose:(char)arg6 ;
+(char)copyHashPassword:(id)arg1 fromSystem:(id)arg2 toSystem:(id)arg3 ;
@end

