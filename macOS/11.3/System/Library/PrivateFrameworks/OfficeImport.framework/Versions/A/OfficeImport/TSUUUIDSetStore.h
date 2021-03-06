/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, TSUSparseArray, NSMutableDictionary;

@interface TSUUUIDSetStore : NSObject <NSCopying> {

	NSLock* _lock;
	TSUSparseArray* _uuidSetForIndex;
	NSMutableDictionary* _indexesUsingUuid;
	unsigned _highestIndex;

}

@property (readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)indexOfSet:(id)arg1 ;
-(void)p_addSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)addSet:(id)arg1 ;
-(id)indexesUsingUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)setForIndex:(unsigned)arg1 ;
-(void)_foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)addSetForUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 ;
-(void)removeSetAtIndex:(unsigned)arg1 ;
-(char)containsUuidSet:(id)arg1 ;
-(id)indexesUsingAnyOfUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 ;
-(id)subsetStoreForIndexes:(id)arg1 ;
-(unsigned)addSetForSingleUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
@end

