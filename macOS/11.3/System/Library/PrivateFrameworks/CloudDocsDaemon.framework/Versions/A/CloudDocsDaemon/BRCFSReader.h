/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCSuspendable.h>
#import <libobjc.A.dylib/BRCFSEventsDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_group;
@class BRCCountedSet, BRCAsyncDirectoryEnumerator, NSMutableSet, BRCFairSource, NSObject, brc_task_tracker, NSString;

@interface BRCFSReader : BRCFSSchedulerBase <BRCModule, BRCSuspendable, BRCFSEventsDelegate> {

	BRCCountedSet* _coordinatedReaders;
	char _readerCountReachedMax;
	BRCAsyncDirectoryEnumerator* _currentScan;
	NSMutableSet* _lostSet;
	BRCFairSource* _lostScanSource;
	NSObject*<OS_dispatch_source> _lostScanDelay;
	unsigned long long _lostScanDelaySection;
	brc_task_tracker* _taskTracker;
	char _resumed;
	NSObject*<OS_dispatch_group> _lostScanGroup;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> lostScanGroup;              //@synthesize lostScanGroup=_lostScanGroup - In the implementation block
@property (nonatomic,readonly) brc_task_tracker * taskTracker;                          //@synthesize taskTracker=_taskTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isCancelled; 
-(void)dealloc;
-(void)resume;
-(void)reset;
-(void)cancel;
-(void)suspend;
-(void)_close;
-(void)schedule;
-(void)_cancelScan;
-(brc_task_tracker *)taskTracker;
-(id)initWithAccountSession:(id)arg1 ;
-(char)canScheduleMoreJobs;
-(char)canRetryJobWithID:(id)arg1 ;
-(unsigned)recoverAndReportMissingJobs;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4 ;
-(void)unscheduleAppLibraryForLostScan:(id)arg1 ;
-(void)scheduleAppLibraryForLostScan:(id)arg1 ;
-(char)startReadCoordinationInAppLibrary:(id)arg1 ;
-(void)endReadCoordinationInAppLibrary:(id)arg1 ;
-(void)scanContainerDocumentsIfNeeded:(id)arg1 ;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 ;
-(id)descriptionForItem:(id)arg1 context:(id)arg2 ;
-(void)deleteReadingJobForItem:(id)arg1 ;
-(void)setState:(int)arg1 forItem:(id)arg2 ;
-(void)createReadingJobForItem:(id)arg1 state:(int)arg2 ;
-(unsigned long long)_readCoordinationCount;
-(void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2 ;
-(void)readUnderCoordinationAtURL:(id)arg1 ;
-(void)_scheduleReadJobWithID:(id)arg1 ;
-(char)readUnderCoordinationWithLookup:(id)arg1 ;
-(id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1 ;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 unresolvedLastPathComponent:(id)arg3 ;
-(void)fseventOnRoot:(id)arg1 flags:(unsigned)arg2 ;
-(void)fseventOnContainer:(id)arg1 flags:(unsigned)arg2 ;
-(void)fseventOnDeadPath:(id)arg1 item:(id)arg2 ;
-(char)updateLookupAfterHandlingPathMatchWithFSRoot:(id*)arg1 relpath:(id*)arg2 ;
-(void)fseventOnSymlink:(id)arg1 flags:(unsigned)arg2 lookup:(id)arg3 ;
-(void)fseventOnAlias:(id)arg1 flags:(unsigned)arg2 lookup:(id)arg3 ;
-(void)fseventOnDocument:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5 ;
-(void)fseventOnDirectory:(id)arg1 flags:(unsigned)arg2 lookup:(id)arg3 ;
-(void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2 ;
-(char)needsLookupReloadAfterHandlingCrossZoneMoveWithItem:(id)arg1 relpath:(id)arg2 ;
-(char)_createSharedZoneIfNecessaryWithLookup:(id)arg1 ;
-(id)itemForCreatedDocumentsDirectory:(id)arg1 appLibrary:(id)arg2 path:(id)arg3 ;
-(void)_refaultItem:(id)arg1 withFaultPath:(id)arg2 ;
-(void)_delayJobID:(id)arg1 by:(double)arg2 ;
-(void)_attemptSchedulingCoordinatedReadForItem:(id)arg1 path:(id)arg2 ;
-(void)fseventOnDocument:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 lookup:(id)arg4 ;
-(void)_fseventOnDocument:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 item:(id)arg4 lookup:(id)arg5 unresolvedLastPathComponent:(id)arg6 ;
-(unsigned long long)_backoffBeforeProcessingLostItemWithStamp:(unsigned long long)arg1 appLibrary:(id)arg2 ;
-(char)_fetchNextLostItemID:(id*)arg1 parentID:(id*)arg2 appLibraryRowID:(id*)arg3 tooManyScans:(char*)arg4 stamp:(long long*)arg5 ;
-(void)_resolveDocumentID:(unsigned)arg1 zone:(id)arg2 ;
-(void)_processDeadItem:(id)arg1 ;
-(void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2 ;
-(void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3 ;
-(void)_didResolvedDocumentID:(unsigned)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3 ;
-(void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3 ;
-(char)_slowScanDirectoryAtPath:(id)arg1 ;
-(void)_startScanOfRelpath:(id)arg1 ;
-(void)_finishCurrentRelpathScan;
-(void)_finishedScanWithError:(int)arg1 ;
-(id)_nextLostItemIDWithBackoff:(long long*)arg1 appLibrary:(id*)arg2 now:(long long)arg3 ;
-(void)_processLostItem:(id)arg1 ;
-(void)_startScanOfRegularAppLibrary:(id)arg1 ;
-(void)_lostScanSchedule;
-(void)fseventOnDocument:(id)arg1 flags:(unsigned)arg2 lookup:(id)arg3 ;
-(void)fseventOnURL:(id)arg1 dbFlags:(unsigned)arg2 ;
-(char)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id*)arg4 ;
-(NSObject*<OS_dispatch_group>)lostScanGroup;
@end

