/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCLowDiskDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class BRCAccountSession, NSString, NSMutableSet, NSMutableDictionary, NSObject, BRCStagePersistedState, brc_task_tracker;

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate> {

	BRCAccountSession* _session;
	NSString* _stageDirectoryPath[7];
	unsigned long long _stageDirectoryFileID[7];
	NSMutableSet* _unflushedStagedFileIDs;
	NSMutableSet* _activeUploadStageIDs;
	NSMutableSet* _activeDownloadStageIDs;
	NSMutableDictionary* _watchedLockedFileIDs;
	NSObject*<OS_dispatch_source> _lockedTestTimer;
	NSObject*<OS_dispatch_queue> _flushingQueue;
	BRCStagePersistedState* _persistedState;
	char _lowDiskSpace;
	NSObject*<OS_dispatch_queue> _queue;
	brc_task_tracker* _tracker;
	char _isCancelled;
	int _deviceID;

}

@property (nonatomic,readonly) int deviceID;                        //@synthesize deviceID=_deviceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isCancelled;                    //@synthesize isCancelled=_isCancelled - In the implementation block
+(unsigned short)computeItemModeFromStatInfo:(id)arg1 isPackage:(char)arg2 ;
+(char)applySharingReadonlyACLsToFD:(int)arg1 statInfo:(id)arg2 version:(id)arg3 clientZone:(id)arg4 sharingOptions:(unsigned long long)arg5 ;
+(void)migrateStageToVersion2_0WithSession:(id)arg1 ;
-(void)open;
-(void)close;
-(void)resume;
-(void)cancel;
-(char)isCancelled;
-(int)deviceID;
-(void)willFlushAllStagedFileIDs;
-(id)initWithAccountSession:(id)arg1 ;
-(long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2 ;
-(void)forgetWatchedLockedFileIDsForAppLibrary:(id)arg1 ;
-(void)cleanupStagedDownloadWithID:(id)arg1 forItemID:(id)arg2 ;
-(id)createURLForDownloadWithStageID:(id)arg1 name:(id)arg2 ;
-(void)forgetWatchedLockedFileID:(id)arg1 ;
-(char)moveFromStageToGraveyard:(unsigned long long)arg1 forItemID:(id)arg2 ;
-(char)makeSideFaultInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned*)arg2 documentID:(unsigned*)arg3 properties:(id)arg4 inAppLibrary:(id)arg5 forCreation:(char)arg6 error:(id*)arg7 ;
-(char)didFlushStagedFileID:(unsigned long long)arg1 ;
-(char)pendingFetchRecordDirExistsInStageWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2 ;
-(id)createURLForUploadWithStageID:(id)arg1 name:(id)arg2 ;
-(void)associateSyncUpStageID:(id)arg1 withOperation:(id)arg2 ;
-(char)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id*)arg4 ;
-(char)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3 ;
-(int)_performInStageDirectory:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(void)_fileIDMightHaveBeenUnlocked:(id)arg1 ;
-(int)_openStageDirectory:(unsigned char)arg1 ;
-(id)nonLocalFaultURLForAdditionName:(id)arg1 ;
-(void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 itemID:(id)arg3 clientZone:(id)arg4 statInfo:(id)arg5 version:(id)arg6 sharingOptions:(unsigned long long)arg7 ;
-(void)_watchLockedRelpath:(id)arg1 ;
-(id)_pathInStage:(unsigned long long)arg1 index:(unsigned char*)arg2 generationID:(unsigned*)arg3 ;
-(char)_flockToMakeLiveAtPath:(id)arg1 error:(id*)arg2 ;
-(void)cleanupStagedSyncUpWithID:(id)arg1 ;
-(id)_anchorNameForChangeToken:(id)arg1 recordZoneID:(id)arg2 ;
-(char)_graveyardAt:(int)arg1 path:(id)arg2 forItemID:(id)arg3 ;
-(long long)garbageCollectSpace:(long long)arg1 ;
-(long long)purgeGraveyardSpace:(long long)arg1 withUrgency:(int)arg2 ;
-(long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2 ;
-(void)garbageCollectPackages;
-(void)_updatePersistedStateWithLatestGCStartTime:(long long)arg1 ;
-(void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(char)arg2 ;
-(char)makeDirectoryInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned*)arg2 error:(id*)arg3 ;
-(char)makeSymlinkWithTarget:(id)arg1 inStageGatherFileID:(unsigned long long*)arg2 generationID:(unsigned*)arg3 error:(id*)arg4 ;
-(id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 clientZone:(id)arg2 statInfo:(id)arg3 version:(id)arg4 sharingOptions:(unsigned long long)arg5 error:(id*)arg6 ;
-(char)makeItemLive:(id)arg1 fromStage:(unsigned long long)arg2 bySwappingWith:(id)arg3 fileName:(id)arg4 error:(id*)arg5 ;
-(id)makePendingFetchRecordDirWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2 ;
-(void)cleanupStagedUploadWithID:(id)arg1 ;
-(void)associateDownloadStageID:(id)arg1 withOperation:(id)arg2 ;
-(char)rememberStagedDownloadWithID:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned*)arg3 documentID:(unsigned*)arg4 appLibrary:(id)arg5 error:(id*)arg6 ;
-(char)moveOldVersionFromPath:(id)arg1 error:(id*)arg2 ;
-(char)moveToGraveyardFromPath:(id)arg1 forItemID:(id)arg2 error:(id*)arg3 ;
-(char)existsInStage:(unsigned long long)arg1 generationID:(unsigned*)arg2 ;
-(char)existsInOldVersionStageOrGraveyard:(unsigned long long)arg1 ;
-(char)transferDocumentID:(unsigned)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3 ;
-(long long)purgableSpace;
-(void)disarmLockedTestTimer;
@end

