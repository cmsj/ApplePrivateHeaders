/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexerDataSource <NSObject>
@required
-(id)uuid;
-(id)persistentStoreCoordinator;
-(void)stopObservingChanges;
-(id)newManagedObjectContext;
-(char)isObservingChanges;
-(void)startObservingChanges;
-(id)dataSourceIdentifier;
-(unsigned long long)indexingPriority;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1;
-(char)needsReindexing;
-(id)indexableObjectIDsWithURIs:(id)arg1 context:(id)arg2;
-(void)clearObjectIDsToProcess;
-(id)objectIDsNeedingProcessing;
-(long long)decisionOnObjectID:(id)arg1 searchableItemToIndex:(id*)arg2 objectIDURIToDelete:(id*)arg3 context:(id)arg4;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2;
-(id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
-(void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
-(void)stageForReindexingWithContext:(id)arg1;
-(void)stageObjectIDURIsForIndexing:(id)arg1 context:(id)arg2;

@end
