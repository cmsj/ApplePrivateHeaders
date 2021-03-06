/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class NSIndexSet;

@interface TSCEFormulaRewrite_Uids : NSObject {

	TSKUIDStructVectorTemplate<TSKUIDStruct>* _uids;
	NSIndexSet* _indexes;
	unordered_map<TSKUIDStruct, unsigned int, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<std::__1::pair<const TSKUIDStruct, unsigned int>>>* _indexesForUids;
	unordered_map<unsigned int, TSKUIDStruct, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, TSKUIDStruct>>>* _uidsForIndexes;
	TSKUIDStructVectorTemplate<TSKUIDStruct>* _viewOrderUids;

}

@property (readonly) const TSKUIDStructVectorTemplate<TSKUIDStruct>* uids;                       //@synthesize uids=_uids - In the implementation block
@property (readonly) const TSKUIDStructVectorTemplate<TSKUIDStruct>* viewOrderUids;              //@synthesize viewOrderUids=_viewOrderUids - In the implementation block
@property (readonly) NSIndexSet * indexes;                                                       //@synthesize indexes=_indexes - In the implementation block
-(id)description;
-(char)containsIndex:(unsigned)arg1 ;
-(NSIndexSet *)indexes;
-(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)uids;
-(void)saveToMessage:(IndexedUidsArchive*)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)uidsForIndexes:(id)arg1 ;
-(TSKUIDStruct)uidForIndex:(unsigned)arg1 ;
-(unsigned short)columnIndexForUid:(const TSKUIDStruct*)arg1 ;
-(unsigned)rowIndexForUid:(const TSKUIDStruct*)arg1 ;
-(id)indexSetBySubtractingOurIndexesFromIndexSet:(id)arg1 ;
-(id)initFromMessage:(const IndexedUidsArchive*)arg1 ;
-(void)unloadIndexes;
-(id)initWithUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)initWithUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 atIndexes:(const vector<unsigned int, std::__1::allocator<unsigned int>>*)arg2 ;
-(void)loadIndexesForTable:(id)arg1 isRows:(char)arg2 shuffleMap:(id)arg3 ;
-(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)viewOrderUids;
@end

