/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLDataTimelineSnapshotCollection.h>
@class NSArray;


@protocol SLDataTimelineSnapshotCollection <SLDataTimelineSnapshotCollectionMetadata>
@property (nonatomic,readonly) NSArray * snapshots; 
@required
-(NSArray *)snapshots;
-(void)snapshotsApplyBlock:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/SLXPCExportable.h>

@class NSArray, NSMutableArray;

@interface SLDataTimelineSnapshotCollection : NSObject <SLDataTimelineSnapshotCollection, SLXPCExportable> {

	NSMutableArray* _snapshotsArray;

}

@property (nonatomic,readonly) NSMutableArray * snapshotsArray;                     //@synthesize snapshotsArray=_snapshotsArray - In the implementation block
@property (nonatomic,readonly) NSArray * snapshots; 
@property (nonatomic,readonly) unsigned long long snapshotCount; 
@property (nonatomic,readonly) unsigned long long oldestSnapshotIndex; 
@property (nonatomic,readonly) unsigned long long newestSnapshotIndex; 
@property (nonatomic,readonly) double oldestSnapshotTimestamp; 
@property (nonatomic,readonly) double newestSnapshotTimestamp; 
+(id)snapshotArrayFromXPCObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)createXPCObject;
-(void)mergeInNewSnapshots:(id)arg1 ;
-(NSMutableArray *)snapshotsArray;
-(unsigned long long)snapshotCount;
-(unsigned long long)oldestSnapshotIndex;
-(unsigned long long)newestSnapshotIndex;
-(double)oldestSnapshotTimestamp;
-(double)newestSnapshotTimestamp;
-(NSArray *)snapshots;
-(void)snapshotsApplyBlock:(/*^block*/id)arg1 ;
@end

