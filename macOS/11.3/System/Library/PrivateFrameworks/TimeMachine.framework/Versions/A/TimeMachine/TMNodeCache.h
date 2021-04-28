/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeMachine/TimeMachine-Structs.h>
#import <TimeMachine/TMMonoStructure.h>

@class NSURL, TMMessageSerializer;

@interface TMNodeCache : TMMonoStructure {

	vector<NodeCacheEntry, std::__1::allocator<NodeCacheEntry>>* _uncommittedEntries;
	NSURL* _updatingStableCacheURL;
	NSURL* _updatingCloneCacheURL;
	TMMessageSerializer* _serializer;

}

@property (retain) NSURL * updatingStableCacheURL;                  //@synthesize updatingStableCacheURL=_updatingStableCacheURL - In the implementation block
@property (retain) NSURL * updatingCloneCacheURL;                   //@synthesize updatingCloneCacheURL=_updatingCloneCacheURL - In the implementation block
@property (readonly) TMMessageSerializer * serializer;              //@synthesize serializer=_serializer - In the implementation block
+(id)structureType;
+(id)annotatedStateAtURL:(id)arg1 ;
+(id)cacheFileURLForSourceUUID:(id)arg1 backupStartDate:(id)arg2 underURL:(id)arg3 ;
+(id)tempCacheFileURLForSourceUUID:(id)arg1 backupStartDate:(id)arg2 underURL:(id)arg3 ;
+(char)isTemporaryCacheFileAtURL:(id)arg1 ;
+(char)_appendEntries:(vector<NodeCacheEntry, std::__1::allocator<NodeCacheEntry>>*)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)immemorialFileURLUnderURL:(id)arg1 ;
+(id)nearestFutureDateForDate:(id)arg1 inDates:(id)arg2 ;
+(id)URLForBuildUnderURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)initWithUUID:(id)arg1 url:(id)arg2 ;
-(char)_enumerateEntriesForBackupStartDate:(id)arg1 sourceUUID:(id)arg2 error:(id*)arg3 enumerator:(/*^block*/id)arg4 ;
-(id)destinationFileIDsDeletedForBackupStartDate:(id)arg1 error:(id*)arg2 ;
-(char)cleanCache:(id*)arg1 ;
-(void)setUpdatingStableCacheURL:(NSURL *)arg1 ;
-(void)setUpdatingCloneCacheURL:(NSURL *)arg1 ;
-(char)flushCache:(id*)arg1 ;
-(void)_addEntry:(NodeCacheEntry)arg1 ;
-(char)_enumerateEntriesInFile:(id)arg1 error:(id*)arg2 enumerator:(/*^block*/id)arg3 ;
-(char)_enumerateFilesForBackupStartDate:(id)arg1 sourceUUID:(id)arg2 backupCompletionDate:(id)arg3 error:(id*)arg4 enumerator:(/*^block*/id)arg5 ;
-(char)_enumerateAllFilesStartedBetweenDate:(id)arg1 endDate:(id)arg2 sourceUUID:(id)arg3 error:(id*)arg4 enumerator:(/*^block*/id)arg5 ;
-(TMMessageSerializer *)serializer;
-(char)startUpdatingCacheForSourceUUID:(id)arg1 backupStartDate:(id)arg2 error:(id*)arg3 ;
-(char)_enumerateEntriesStartedBetweenDate:(id)arg1 endDate:(id)arg2 sourceUUID:(id)arg3 error:(id*)arg4 enumerator:(/*^block*/id)arg5 ;
-(NSURL *)updatingStableCacheURL;
-(char)finishUpdatingCurrentCache:(id*)arg1 ;
-(id)_mostRecentCompletionDate;
-(id)_allSourceUUIDs;
-(id)_mergeCacheFilesBetweenStartDate:(id)arg1 endDate:(id)arg2 sourceUUID:(id)arg3 intoDate:(id)arg4 error:(id*)arg5 ;
-(NSURL *)updatingCloneCacheURL;
-(id)immemorialCacheURL;
-(char)buildAtURL:(id)arg1 parentURL:(id)arg2 error:(id*)arg3 ;
-(id)destinationDeletedFileIDsSetForBackupStartDate:(id)arg1 error:(id*)arg2 ;
-(void)recordBackupAction:(unsigned long long)arg1 sourceFileID:(unsigned long long)arg2 destinationFileID:(unsigned long long)arg3 ;
-(void)recordUnlinkOfFile:(unsigned long long)arg1 wasLastUnlink:(char)arg2 ;
-(char)WIP_storeBackupCompletionDate:(id)arg1 forBackupStartDate:(id)arg2 error:(id*)arg3 ;
-(char)storeBackupCompletionDate:(id)arg1 forBackupStartDate:(id)arg2 error:(id*)arg3 ;
-(char)purgeEntriesForAllBackupCompletionDatesExcept:(id)arg1 error:(id*)arg2 ;
-(char)collectFileIDsToBeDeletedUnderURL:(id)arg1 sourceUUID:(id)arg2 backupStartDate:(id)arg3 error:(id*)arg4 ;
@end
