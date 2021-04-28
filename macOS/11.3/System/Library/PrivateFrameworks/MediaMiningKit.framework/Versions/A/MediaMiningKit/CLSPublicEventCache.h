/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDBCache.h>

@interface CLSPublicEventCache : CLSDBCache
-(id)init;
-(char)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)arg1 forTimeLocationTuples:(id)arg2 ;
-(id)dataModelName;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)publicEventsForTimeLocationTuple:(id)arg1 ;
-(id)predicateForTimeLocationTuple:(id)arg1 ;
-(void)_updateManagedEvent:(id)arg1 withEvent:(id)arg2 inContext:(id)arg3 ;
-(id)publicEventsForMuid:(unsigned long long)arg1 ;
-(id)publicEventFromManagedObject:(id)arg1 ;
-(char)hasTimeLocationTuple:(id)arg1 ;
-(unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)arg1 ;
@end
