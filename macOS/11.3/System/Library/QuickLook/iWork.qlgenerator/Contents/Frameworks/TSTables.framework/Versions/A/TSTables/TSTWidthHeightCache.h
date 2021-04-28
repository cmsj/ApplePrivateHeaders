/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@interface TSTWidthHeightCache : NSObject {

	opaque_pthread_rwlock_t _lock;
	vector<TSTWidthHeightCacheEntry<4>, std::__1::allocator<TSTWidthHeightCacheEntry<4>>>* _rowHeights;
	vector<double, std::__1::allocator<double>>* _columnModelWidths;
	char _needsToBeArchived;

}

@property (assign,nonatomic) char needsToBeArchived;                  //@synthesize needsToBeArchived=_needsToBeArchived - In the implementation block
@property (nonatomic,readonly) unsigned numberOfRows; 
@property (nonatomic,readonly) unsigned numberOfColumns; 
-(void)dealloc;
-(unsigned)numberOfColumns;
-(unsigned)numberOfRows;
-(id)initWithArchive:(const WidthHeightCache*)arg1 unarchiver:(id)arg2 ;
-(void)setModelHeight:(double)arg1 forRow:(unsigned)arg2 ;
-(void)setModelWidth:(double)arg1 forColumn:(unsigned short)arg2 ;
-(void)resetModelCache;
-(double)getModelHeightForRow:(unsigned)arg1 ;
-(double)getFitHeightForRow:(unsigned)arg1 ;
-(double)getModelWidthForColumn:(unsigned short)arg1 ;
-(void)setFitHeight:(double)arg1 forCellID:(TSUCellCoord)arg2 ;
-(void)resetModelCacheRange:(TSUCellRect)arg1 ;
-(void)saveToArchive:(WidthHeightCache*)arg1 archiver:(id)arg2 ;
-(void)getFitHeight:(double*)arg1 andModelHeight:(double*)arg2 forRow:(unsigned)arg3 ;
-(void)resetFittingRowHeightsStartingWith:(unsigned)arg1 upToRow:(unsigned)arg2 ;
-(id)validateChangeDescriptors:(id)arg1 tableInfo:(id)arg2 numberOfRows:(unsigned)arg3 numberOfColumns:(unsigned short)arg4 ;
-(id)validateRowsNeedingFittingInfo:(id)arg1 validationRegion:(id)arg2 layoutEngine:(id)arg3 ;
-(void)finalizeLayoutPassWithRowsNeedingFittingInfo:(id)arg1 ;
-(void)willModifyIfNeeded:(id)arg1 ;
-(id)columnToWidthMapFromCollectionArray:(id)arg1 ;
-(void)setFittingHeightsFromCollectionArray:(id)arg1 ;
-(void)p_resetToRows:(unsigned)arg1 andNumColumns:(unsigned)arg2 ;
-(void)p_setFittingHeightsFromCollectionWithLock:(id)arg1 ;
-(void)willModifyIfPossible:(id)arg1 ;
-(void)p_deleteRowsStartingWith:(unsigned)arg1 upToRow:(unsigned)arg2 ;
-(char)p_insertRows:(unsigned)arg1 atRow:(unsigned)arg2 ;
-(id)p_deleteColumnsStartingWith:(unsigned short)arg1 upToColumn:(unsigned short)arg2 ;
-(char)p_insertColumns:(unsigned)arg1 atColumn:(unsigned short)arg2 ;
-(void)p_moveRowsUsingShuffleMapping:(id)arg1 ;
-(void)p_moveRowsFrom:(TSUCellRect)arg1 toRow:(unsigned)arg2 ;
-(void)p_moveColumnsFrom:(TSUCellRect)arg1 toColumn:(unsigned short)arg2 ;
-(id)p_resetFittingHeightsForRange:(TSUCellRect)arg1 ;
-(id)initWithNumRows:(unsigned)arg1 andNumColumns:(unsigned)arg2 ;
-(void)setFittingHeightsFromCollection:(id)arg1 ;
-(char)needsToBeArchived;
-(void)setNeedsToBeArchived:(char)arg1 ;
@end
