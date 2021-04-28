/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLDataTimelineUpdate.h>

@protocol SLDataTimelineUpdate <SLDataTimelineSnapshotCollectionMetadata>
@property (nonatomic,readonly) id<SLDataTimelineConnection> connection; 
@property (nonatomic,readonly) unsigned action; 
@required
-(id<SLDataTimelineConnection>)connection;
-(unsigned)action;
-(id)claimSnapshotCollection;

@end


@class SLDataTimelineConnection, SLDataTimelineSnapshotCollection;

@interface SLDataTimelineUpdate : NSObject <SLDataTimelineUpdate> {

	SLDataTimelineConnection* _connection;
	char _collectionClaimed;
	unsigned _action;
	SLDataTimelineSnapshotCollection* _collection;

}

@property (assign,nonatomic) char collectionClaimed;                                       //@synthesize collectionClaimed=_collectionClaimed - In the implementation block
@property (nonatomic,readonly) SLDataTimelineSnapshotCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) id<SLDataTimelineConnection> connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned action;                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) unsigned long long snapshotCount; 
@property (nonatomic,readonly) unsigned long long oldestSnapshotIndex; 
@property (nonatomic,readonly) unsigned long long newestSnapshotIndex; 
@property (nonatomic,readonly) double oldestSnapshotTimestamp; 
@property (nonatomic,readonly) double newestSnapshotTimestamp; 
+(id)updateWithConnection:(id)arg1 collection:(id)arg2 action:(unsigned)arg3 ;
-(void)dealloc;
-(id<SLDataTimelineConnection>)connection;
-(unsigned)action;
-(SLDataTimelineSnapshotCollection *)collection;
-(char)collectionClaimed;
-(unsigned long long)snapshotCount;
-(unsigned long long)oldestSnapshotIndex;
-(unsigned long long)newestSnapshotIndex;
-(double)oldestSnapshotTimestamp;
-(double)newestSnapshotTimestamp;
-(id)claimSnapshotCollection;
-(id)initWithConnection:(id)arg1 collection:(id)arg2 action:(unsigned)arg3 ;
-(void)setCollectionClaimed:(char)arg1 ;
@end
