/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSyncLocalKnowledgeStorage.h>

@protocol _DKSyncLocalKnowledgeStorage
@required
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
-(id)tombstonesSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5;
-(id)additionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
-(id)deletionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
-(id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg1 andDate:(id)arg2 peer:(id)arg3 error:(id*)arg4;
-(char)saveSyncedDownWindows:(id)arg1 peer:(id)arg2 transportName:(id)arg3 error:(id*)arg4;
-(id)lastSyncDownDeletionDateForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
-(void)setLastSyncDownDeletionDate:(id)arg1 previousDate:(id)arg2 forPeer:(id)arg3 transportName:(id)arg4 error:(id*)arg5;
-(char)saveEvents:(id)arg1 error:(id*)arg2;
-(char)deleteEventsWithEventIDs:(id)arg1 error:(id*)arg2;

@end


@class _DKKnowledgeStorage;

@interface _DKSyncLocalKnowledgeStorage : NSObject <_DKSyncLocalKnowledgeStorage> {

	_DKKnowledgeStorage* _storage;

}
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id*)arg5 ;
-(id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6 ;
-(id)tombstonesSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5 ;
-(id)additionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3 ;
-(id)deletionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3 ;
-(id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg1 andDate:(id)arg2 peer:(id)arg3 error:(id*)arg4 ;
-(char)saveSyncedDownWindows:(id)arg1 peer:(id)arg2 transportName:(id)arg3 error:(id*)arg4 ;
-(id)lastSyncDownDeletionDateForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3 ;
-(void)setLastSyncDownDeletionDate:(id)arg1 previousDate:(id)arg2 forPeer:(id)arg3 transportName:(id)arg4 error:(id*)arg5 ;
-(char)saveEvents:(id)arg1 error:(id*)arg2 ;
-(char)deleteEventsWithEventIDs:(id)arg1 error:(id*)arg2 ;
@end

