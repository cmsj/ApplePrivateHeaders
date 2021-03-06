/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSCEColumnRowUIDMapping.h>

@class TSTColumnRowUIDMap, TSTImmutableColumnRowUIDMap;

@interface TSTColumnRowUIDMapper : NSObject <TSCEColumnRowUIDMapping> {

	TSTColumnRowUIDMap* _originalUIDMap;
	unsigned long long _originalVersionCounter;
	TSTImmutableColumnRowUIDMap* _copiedUIDMap;
	unsigned long long _versionCounter;

}

@property (nonatomic,readonly) unsigned short numberOfColumns; 
@property (nonatomic,readonly) unsigned numberOfRows; 
@property (nonatomic,readonly) unsigned long long versionCounter;              //@synthesize versionCounter=_versionCounter - In the implementation block
-(TSUCellRect)range;
-(void)disconnect;
-(unsigned short)numberOfColumns;
-(char)isConnected;
-(unsigned)numberOfRows;
-(TSKUIDStruct)columnUIDForColumnIndex:(unsigned short)arg1 ;
-(TSKUIDStruct)rowUIDForRowIndex:(unsigned)arg1 ;
-(unsigned)rowIndexForRowUID:(TSKUIDStruct)arg1 ;
-(id)mutableColumnIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)mutableRowIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(unsigned short)columnIndexForColumnUID:(TSKUIDStruct)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)columnUIDsForColumnIndexes:(id)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)rowUIDsForRowIndexes:(id)arg1 ;
-(id)UIDSetForIndexes:(id)arg1 isRows:(char)arg2 ;
-(TSCERangeCoordinate)tableRangeCoordinate;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)rowUIDsForRowRange:(NSRange)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)columnUIDsForColumnRange:(NSRange)arg1 ;
-(unsigned long long)versionCounter;
-(void)assertCollaborationConvergence;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)columnUIDs;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)rowUIDs;
-(id)rowIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)columnIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)prunedColumnUIDsFromColumnUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)prunedRowUIDsFromRowUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)mutableIndexesForUIDSet:(id)arg1 isRows:(char)arg2 ;
-(id)mutableIndexesForUIDSet:(id)arg1 isRows:(char)arg2 notFoundUIDs:(id)arg3 ;
-(NSRange)rowRangeForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(NSRange)columnRangeForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(TSUCellRect)cellRangeForUIDRange:(const TSKUIDStructTract*)arg1 ;
-(TSKUIDStructTract*)cellUIDRangeForCellRange:(TSUCellRect)arg1 ;
-(id)initWithColumnRowUIDMap:(id)arg1 ;
@end

