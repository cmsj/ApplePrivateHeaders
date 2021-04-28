/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTTableHiddenRowColumnProviding.h>
#import <TSTables/TSTAdditionalHiddenRowColumnProviding.h>

@class TSTHiddenStateExtent, TSTHiddenStatesOwner, TSTTableFilterSet, NSString;

@interface TSTHiddenStates : NSObject <TSTTableHiddenRowColumnProviding, TSTAdditionalHiddenRowColumnProviding> {

	TSKUIDStruct _hiddenStatesUid;
	TSTHiddenStateExtent* _rowHiddenStateExtent;
	TSTHiddenStateExtent* _columnHiddenStateExtent;
	TSTHiddenStatesOwner* _hiddenStatesOwner;

}

@property (assign,nonatomic,__weak) TSTHiddenStatesOwner * hiddenStatesOwner;                      //@synthesize hiddenStatesOwner=_hiddenStatesOwner - In the implementation block
@property (nonatomic,retain,readonly) TSTHiddenStateExtent * rowHiddenStateExtent;                 //@synthesize rowHiddenStateExtent=_rowHiddenStateExtent - In the implementation block
@property (nonatomic,retain,readonly) TSTHiddenStateExtent * columnHiddenStateExtent;              //@synthesize columnHiddenStateExtent=_columnHiddenStateExtent - In the implementation block
@property (assign,nonatomic) TSKUIDStruct hiddenStatesUid;                                         //@synthesize hiddenStatesUid=_hiddenStatesUid - In the implementation block
@property (nonatomic,readonly) char hasHiddenRows; 
@property (nonatomic,readonly) char hasHiddenColumns; 
@property (nonatomic,readonly) char hasUserHiddenRows; 
@property (nonatomic,readonly) char hasUserHiddenColumns; 
@property (nonatomic,readonly) char hasCollapsedRows; 
@property (nonatomic,readonly) unsigned numberOfHiddenRows; 
@property (nonatomic,readonly) unsigned numberOfHiddenColumns; 
@property (nonatomic,readonly) unsigned numberOfUserHiddenRows; 
@property (nonatomic,readonly) unsigned numberOfUserHiddenColumns; 
@property (assign,nonatomic) TSKUIDStruct hiddenStateOwnerForRowsUID; 
@property (assign,nonatomic) TSKUIDStruct hiddenStateOwnerForColumnsUID; 
@property (nonatomic,retain) TSTTableFilterSet * filterSet; 
@property (assign,nonatomic) char needsFilterFormulaRewriteForImport; 
@property (assign,nonatomic) char needsToUpdateFilterSetForImport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(TSUCellCoord)filterFormulaCoordinateForRow:(unsigned)arg1 ;
+(TSUCellCoord)filterFormulaThresholdCoordinateForRow:(unsigned)arg1 ;
+(TSUCellCoord)filterFormulaCoordinate;
+(id)mutableIndexSetByIntersecting:(id)arg1 withRange:(NSRange)arg2 ;
-(unsigned)numberOfHiddenRows;
-(unsigned)numberOfHiddenColumns;
-(unsigned)numberOfUserHiddenRows;
-(unsigned)numberOfUserHiddenColumns;
-(void)setTableInfo:(id)arg1 ;
-(void)encodeToArchive:(HiddenStatesArchive*)arg1 archiver:(id)arg2 ;
-(id)indexesOfVisibleRowsInRowRange:(id)arg1 ;
-(TSCERangeRef)referenceToHiddenStateFromRow:(unsigned)arg1 toRow:(unsigned)arg2 ;
-(TSCERangeRef)referenceToHiddenStateFromColumn:(unsigned short)arg1 toColumn:(unsigned short)arg2 ;
-(void)unregisterFromCalcEngine;
-(unsigned)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned)arg1 ;
-(id)indexesOfVisibleColumnsInCellRange:(TSUCellRect)arg1 ;
-(unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg1 ;
-(unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg1 ;
-(id)indexesOfUserHiddenRowsInCellRange:(TSUCellRect)arg1 ;
-(char)showRowAtIndex:(unsigned)arg1 forAction:(unsigned char)arg2 ;
-(id)indexesOfHiddenColumnsInCellRange:(TSUCellRect)arg1 ;
-(char)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2 ;
-(char)hasHiddenRows;
-(id)mutableFilteredRowIndexes;
-(char)hasHiddenColumns;
-(TSTHiddenStatesOwner *)hiddenStatesOwner;
-(TSKUIDStruct)hiddenStateOwnerForRowsUID;
-(TSKUIDStruct)hiddenStateOwnerForColumnsUID;
-(void)insertNewRowsInBaseRange:(NSRange)arg1 ;
-(char)showBaseRowAtIndex:(TSUModelRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(char)hideBaseRowAtIndex:(TSUModelRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(void)insertNewColumnsInBaseRange:(NSRange)arg1 ;
-(char)hideBaseColumnAtIndex:(TSUModelColumnIndex)arg1 forAction:(unsigned char)arg2 ;
-(void)deleteRowsFromBaseRange:(NSRange)arg1 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 ;
-(void)deleteColumnsFromBaseRange:(NSRange)arg1 columnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 ;
-(void)moveBaseRowRange:(NSRange)arg1 toRowIndex:(TSUModelRowIndex)arg2 ;
-(void)moveBaseColumnRange:(NSRange)arg1 toColumnIndex:(TSUModelColumnIndex)arg2 ;
-(void)swapBaseRowAtIndex:(TSUModelRowIndex)arg1 withRowAtIndex:(TSUModelRowIndex)arg2 ;
-(char)hideRowAtIndex:(unsigned)arg1 forAction:(unsigned char)arg2 ;
-(char)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2 ;
-(char)needsToUpdateFilterSetForImport;
-(void)setFormulaOwnerUIDsWithMap:(id)arg1 ;
-(void)remapTableUIDsInFormulasWithMap:(const TSKUIDStructMap*)arg1 calcEngine:(id)arg2 ;
-(id)initWithHiddenStatesOwner:(id)arg1 ;
-(TSKUIDStruct)hiddenStatesUid;
-(void)copyFromHiddenStates:(id)arg1 forRange:(TSUCellRect)arg2 withContext:(id)arg3 isWholeTableCopy:(char)arg4 ;
-(char)hasActiveFilters;
-(TSTTableFilterSet *)filterSet;
-(int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const TSKUIDStruct*)arg2 ;
-(void)filterSetUpdated;
-(void)setFilterSet:(TSTTableFilterSet *)arg1 ;
-(id)duplicateFilterSetInUidFormWithTable:(id)arg1 ;
-(void)setFilterSetType:(int)arg1 ;
-(void)dirtyFilterState;
-(char)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2 ;
-(unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg1 ;
-(unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg1 ;
-(unsigned)indexOfVisibleRowBeforeRowAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleRowAfterRowAtIndex:(unsigned)arg1 ;
-(TSTHiddenStateExtent *)rowHiddenStateExtent;
-(char)hasUserHiddenRows;
-(char)hasUserHiddenColumns;
-(unsigned)numberOfHiddenRowsInCellRange:(TSUCellRect)arg1 ;
-(unsigned)numberOfUserHiddenRowsInCellRange:(TSUCellRect)arg1 ;
-(unsigned)numberOfHiddenColumnsInCellRange:(TSUCellRect)arg1 ;
-(char)hasHiddenRowAtIndex:(unsigned)arg1 forAction:(unsigned char)arg2 ;
-(char)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2 ;
-(id)indexesOfUserHiddenColumnsInCellRange:(TSUCellRect)arg1 ;
-(id)indexesOfVisibleColumnsInCellRegion:(id)arg1 ;
-(id)indexesOfVisibleColumnsInColumnRange:(id)arg1 ;
-(id)indexesOfHiddenRowsInCellRange:(TSUCellRect)arg1 ;
-(id)indexesOfFilteredRowsInCellRange:(TSUCellRect)arg1 ;
-(id)indexesOfVisibleRowsInCellRange:(TSUCellRect)arg1 ;
-(id)indexesOfVisibleRowsInCellRegion:(id)arg1 ;
-(id)indexesOfUserVisibleRowsInCellRange:(TSUCellRect)arg1 ;
-(id)indexesOfCollapsedRowsInCellRange:(TSUCellRect)arg1 ;
-(unsigned char)hidingActionForRowAtIndex:(unsigned)arg1 ;
-(unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1 ;
-(char)anyHiddenRowsInCellRange:(TSUCellRect)arg1 forAction:(unsigned char)arg2 ;
-(char)hasHiddenRowAtIndex:(unsigned)arg1 ;
-(char)hasHiddenColumnAtIndex:(unsigned short)arg1 ;
-(char)anyHiddenRowsInCellRange:(TSUCellRect)arg1 ;
-(char)anyHiddenColumnsInCellRange:(TSUCellRect)arg1 ;
-(id)applyCollapseExpandState:(id)arg1 outUndoState:(id*)arg2 ;
-(void)willChangeGroupByTo:(id)arg1 ;
-(id)collapseSummaryGroupUIDs:(id)arg1 ;
-(id)expandSummaryGroupUIDs:(id)arg1 ;
-(char)isCategoryGroupOrParentsCollapsed:(const TSKUIDStruct*)arg1 ;
-(void)setHiddenStatesUid:(TSKUIDStruct)arg1 ;
-(void)setHiddenStateOwnerForColumnsUID:(TSKUIDStruct)arg1 ;
-(void)setHiddenStateOwnerForRowsUID:(TSKUIDStruct)arg1 ;
-(void)setNeedsToUpdateFilterSetForImport:(char)arg1 ;
-(id)duplicateFilterSet;
-(char)needsFilterFormulaRewriteForImport;
-(void)setNeedsFilterFormulaRewriteForImport:(char)arg1 ;
-(void)enableFilterSet:(char)arg1 ;
-(id)mutableAnyHiddenColumnIndexes;
-(id)mutableAnyHiddenRowIndexes;
-(void)loadIndexesFromTable:(id)arg1 ;
-(TSTHiddenStateExtent *)columnHiddenStateExtent;
-(id)initWithArchive:(const HiddenStatesArchive*)arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3 ;
-(id)initWithHiddenStatesOwner:(id)arg1 hiddenStatesUid:(const TSKUIDStruct*)arg2 ;
-(void)syncUpHiddenStateFormulaOwnerUIDs;
-(char)isCategoryGroupUIDCollapsed:(const TSKUIDStruct*)arg1 ;
-(void)setCategoryGroupUID:(const TSKUIDStruct*)arg1 asCollapsed:(char)arg2 ;
-(id)collapsedGroupUids;
-(id)copyCollapsedStateToUpdatedGroupUids:(id)arg1 ;
-(id)runChange:(id)arg1 withCollapsedState:(id)arg2 outUndoState:(id*)arg3 ;
-(void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dirtyFilterStateForHeaders;
-(void)dirtyFilterStateForFooters;
-(char)showBaseColumnAtIndex:(TSUModelColumnIndex)arg1 forAction:(unsigned char)arg2 ;
-(unsigned char)hidingActionForBaseRowAtIndex:(TSUModelRowIndex)arg1 ;
-(unsigned char)hidingActionForBaseColumnAtIndex:(TSUModelColumnIndex)arg1 ;
-(TSUModelColumnIndex)numberOfHiddenColumnsInBaseCellRange:(TSUModelCellRect)arg1 ;
-(id)indexesOfHiddenColumnsInBaseCellRange:(TSUModelCellRect)arg1 ;
-(TSUModelRowIndex)numberOfHiddenRowsInBaseCellRange:(TSUModelCellRect)arg1 ;
-(TSUModelRowIndex)numberOfUserHiddenRowsInBaseCellRange:(TSUModelCellRect)arg1 ;
-(id)indexesOfHiddenRowsInBaseCellRange:(TSUModelCellRect)arg1 ;
-(char)hasCollapsedRows;
-(void)moveViewColumnRange:(NSRange)arg1 toColumnIndex:(TSUViewColumnIndex)arg2 ;
-(id)mutableUserHiddenRowIndexes;
-(id)mutableUserHiddenColumnIndexes;
-(void)setHiddenStatesOwner:(TSTHiddenStatesOwner *)arg1 ;
@end
