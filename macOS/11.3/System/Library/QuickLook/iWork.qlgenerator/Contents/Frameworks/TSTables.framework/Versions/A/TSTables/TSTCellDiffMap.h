/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTCellDiffArray, TSTCellUIDList;

@interface TSTCellDiffMap : TSPObject <NSCopying> {

	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>* _cellIDs;
	char _uidBased;
	char _containsCellBorderChanges;
	char _containsSuppressCustomFormatHandlingProperty;
	TSTCellDiffArray* _cellDiffArray;
	TSTCellUIDList* _cellUIDList;

}

@property (nonatomic,retain) TSTCellUIDList * cellUIDList;                                   //@synthesize cellUIDList=_cellUIDList - In the implementation block
@property (nonatomic,retain) TSTCellDiffArray * cellDiffArray;                               //@synthesize cellDiffArray=_cellDiffArray - In the implementation block
@property (assign,getter=isUIDBased,nonatomic) char uidBased;                                //@synthesize uidBased=_uidBased - In the implementation block
@property (assign,nonatomic) char containsCellBorderChanges;                                 //@synthesize containsCellBorderChanges=_containsCellBorderChanges - In the implementation block
@property (assign,nonatomic) char containsSuppressCustomFormatHandlingProperty;              //@synthesize containsSuppressCustomFormatHandlingProperty=_containsSuppressCustomFormatHandlingProperty - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)cellDiffMapWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithContext:(id)arg1 ;
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
-(const vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>*)cellIDs;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)containsCellBorderChanges;
-(char)isUIDBased;
-(void)setUidBased:(char)arg1 ;
-(TSTCellUIDList *)cellUIDList;
-(void)setCellUIDList:(TSTCellUIDList *)arg1 ;
-(id)initWithContext:(id)arg1 cellDiffArray:(id)arg2 cellUIDList:(id)arg3 uidBased:(char)arg4 ;
-(char)p_scanCellDiffArrayForCellBorderChanges:(id)arg1 ;
-(char)p_scanCellDiffArrayForSuppressCustomFormatHandlingProperty:(id)arg1 ;
-(id)addCellDiff:(id)arg1 andCellUID:(TSKUIDStructCoord)arg2 avoidCopy:(char)arg3 ;
-(id)addCellDiff:(id)arg1 andCellID:(TSUCellCoord)arg2 avoidCopy:(char)arg3 ;
-(TSTCellDiffArray *)cellDiffArray;
-(char)containsSuppressCustomFormatHandlingProperty;
-(char)p_scanNSArrayOfDiffsForCellBorderChanges:(id)arg1 ;
-(char)p_scanNSArrayOfDiffsForSuppressCustomFormatHandlingProperty:(id)arg1 ;
-(void)addCellDiff:(id)arg1 andCellUID:(TSKUIDStructCoord)arg2 ;
-(void)addCellDiff:(id)arg1 andCellID:(TSUCellCoord)arg2 ;
-(void)enumerateCellIDElementsUsingBlock:(/*^block*/id)arg1 ;
-(id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1 ;
-(void)setCellDiffArray:(TSTCellDiffArray *)arg1 ;
-(void)setContainsCellBorderChanges:(char)arg1 ;
-(id)initWithContext:(id)arg1 cellDiff:(id)arg2 cellUIDList:(id)arg3 ;
-(void)addCellDiffMap:(id)arg1 ;
-(void)addCellDiffs:(id)arg1 atCellUIDs:(id)arg2 ;
-(void)appendCellDiffMap:(id)arg1 ;
-(id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)uuidBasedCellDiffMapByTableInfo:(id)arg1 ;
-(id)cellDiffMapByIntersectingUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 inRows:(char)arg2 ;
-(id)cellDiffMapByRemovingRows:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)cellDiffMapByRemovingColumns:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(void)setContainsSuppressCustomFormatHandlingProperty:(char)arg1 ;
@end
