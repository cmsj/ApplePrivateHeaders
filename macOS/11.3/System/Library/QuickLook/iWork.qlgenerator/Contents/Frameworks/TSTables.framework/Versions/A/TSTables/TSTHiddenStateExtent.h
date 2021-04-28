/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSCEFormulaOwning.h>
#import <TSTables/TSTGroupByChangeProtocol.h>

@class TSTTableFilterSet, TSCEMutableUIDSet, TSTHiddenStatesOwner, TSCECalculationEngine, TSTTableInfo, NSMutableIndexSet, NSMutableArray, TSCEUIDSet, NSArray, NSString;

@interface TSTHiddenStateExtent : NSObject <TSCEFormulaOwning, TSTGroupByChangeProtocol> {

	TSKUIDStruct _hiddenStateExtentUid;
	unordered_map<TSKUIDStruct, unsigned char, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<std::__1::pair<const TSKUIDStruct, unsigned char>>>* _hiddenByUid;
	char _forRows;
	TSTTableFilterSet* _filterSet;
	TSCEMutableUIDSet* _collapsedGroupUids;
	TSKUIDStruct _hiddenStatesOwnerUid;
	TSTHiddenStatesOwner* _hiddenStatesOwner;
	TSCECalculationEngine* _calcEngine;
	TSTTableInfo* _tableInfo;
	NSMutableIndexSet* _baseUserHiddenIndexes;
	NSMutableIndexSet* _baseFilteredIndexes;
	NSMutableIndexSet* _anyBaseHiddenIndexes;
	opaque_pthread_mutex_t _viewIndexesMutex;
	NSMutableIndexSet* _userHiddenIndexes;
	NSMutableIndexSet* _filteredIndexes;
	NSMutableIndexSet* _anyHiddenIndexes;
	NSMutableIndexSet* _collapsedRowIndexes;
	NSMutableArray* _thresholdCellValues;
	char _needsToUpdateFilterSetForImport;
	TSTTableFilterSet* _rewrittenFilterSet;
	os_unfair_lock_s _pendingComputedLock;
	TSUIndexSet* _pendingRowsShown;
	TSUIndexSet* _pendingRowsHidden;
	vector<TSUCellRect, std::__1::allocator<TSUCellRect>>* _cellRangesToInvalidate;
	char _invalidateViewGeometry;
	char _invalidateCollapsedRows;

}

@property (assign,nonatomic,__weak) TSTHiddenStatesOwner * hiddenStatesOwner;              //@synthesize hiddenStatesOwner=_hiddenStatesOwner - In the implementation block
@property (assign,nonatomic) char needsToUpdateFilterSetForImport;                         //@synthesize needsToUpdateFilterSetForImport=_needsToUpdateFilterSetForImport - In the implementation block
@property (assign,nonatomic) TSKUIDStruct hiddenStateExtentUid;                            //@synthesize hiddenStateExtentUid=_hiddenStateExtentUid - In the implementation block
@property (nonatomic,readonly) char forRows;                                               //@synthesize forRows=_forRows - In the implementation block
@property (nonatomic,readonly) char anyHidden; 
@property (nonatomic,readonly) char anyUserHidden; 
@property (nonatomic,readonly) char anyCollapsed; 
@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSCEUIDSet * collapsedGroupUids;                            //@synthesize collapsedGroupUids=_collapsedGroupUids - In the implementation block
@property (nonatomic,readonly) NSArray * thresholdCellValues;                              //@synthesize thresholdCellValues=_thresholdCellValues - In the implementation block
@property (nonatomic,readonly) unsigned numberOfHidden; 
@property (nonatomic,readonly) unsigned numberOfUserHidden; 
@property (nonatomic,retain) TSTTableFilterSet * filterSet; 
@property (assign,nonatomic) char needsFilterFormulaRewriteForImport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mutableIndexSetByIntersecting:(id)arg1 withRange:(NSRange)arg2 ;
+(void)swapIndexesWithIndexSet:(id)arg1 index:(unsigned long long)arg2 withIndex:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)filteredIndexes;
-(void)willRemoveGroup:(id)arg1 ;
-(long long)evaluationMode;
-(TSTTableInfo *)tableInfo;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)encodeToArchive:(HiddenStateExtentArchive*)arg1 archiver:(id)arg2 ;
-(TSKUIDStruct)ownerUID;
-(unsigned short)ownerKind;
-(id)linkedResolver;
-(void)writeResultsForCalcEngine:(id)arg1 ;
-(void)invalidateForCalcEngine:(id)arg1 ;
-(TSCERecalculationState)evaluateFormulaAt:(TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(TSCERecalculationState)arg3 ;
-(void)unregisterFromCalcEngine;
-(void)didAddRowUID:(TSKUIDStruct)arg1 toGroup:(id)arg2 ;
-(void)didRemoveRowUID:(TSKUIDStruct)arg1 fromGroup:(id)arg2 ;
-(TSTHiddenStatesOwner *)hiddenStatesOwner;
-(void)startOfGroupingChangesBatch;
-(void)endOfGroupingChangesBatch;
-(char)needsToUpdateFilterSetForImport;
-(void)remapTableUIDsInFormulasWithMap:(const TSKUIDStructMap*)arg1 calcEngine:(id)arg2 ;
-(char)hasActiveFilters;
-(TSTTableFilterSet *)filterSet;
-(int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const TSKUIDStruct*)arg2 ;
-(void)filterSetUpdated;
-(void)setFilterSet:(TSTTableFilterSet *)arg1 ;
-(id)duplicateFilterSetInUidFormWithTable:(id)arg1 ;
-(void)setFilterSetType:(int)arg1 ;
-(void)dirtyFilterState;
-(char)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2 ;
-(char)hideAtViewIndex:(TSUViewColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(id)applyCollapseExpandState:(id)arg1 outUndoState:(id*)arg2 ;
-(void)willChangeGroupByTo:(id)arg1 ;
-(id)collapseSummaryGroupUIDs:(id)arg1 ;
-(id)expandSummaryGroupUIDs:(id)arg1 ;
-(char)isCategoryGroupOrParentsCollapsed:(const TSKUIDStruct*)arg1 ;
-(void)setNeedsToUpdateFilterSetForImport:(char)arg1 ;
-(id)duplicateFilterSet;
-(char)needsFilterFormulaRewriteForImport;
-(void)setNeedsFilterFormulaRewriteForImport:(char)arg1 ;
-(void)enableFilterSet:(char)arg1 ;
-(NSArray *)thresholdCellValues;
-(void)didChangeGroupByStructure;
-(void)didCreateGroup:(id)arg1 ;
-(void)didRemoveGroup:(id)arg1 ;
-(void)loadIndexesFromTable:(id)arg1 ;
-(TSKUIDStruct)hiddenStateExtentUid;
-(id)initWithArchive:(const HiddenStateExtentArchive*)arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3 ;
-(id)initWithHiddenStatesOwner:(id)arg1 forRows:(char)arg2 ;
-(char)showAtViewIndex:(TSUViewColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(char)hideAtBaseIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(char)showAtBaseIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(unsigned char)hidingActionForViewIndex:(TSUViewColumnOrRowIndex)arg1 ;
-(unsigned char)hidingActionForBaseIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(id)indexesOfHiddenInRange:(NSRange)arg1 ;
-(id)indexesOfUserHiddenInRange:(NSRange)arg1 ;
-(id)indexesOfFilteredInRange:(NSRange)arg1 ;
-(id)indexesOfVisibleInRange:(NSRange)arg1 ;
-(id)indexesOfUserVisibleInRange:(NSRange)arg1 ;
-(id)indexesOfVisibleIndexesInIndexes:(id)arg1 ;
-(id)indexesOfCollapsedInRange:(NSRange)arg1 ;
-(unsigned)numberOfHiddenInRange:(NSRange)arg1 ;
-(unsigned)numberOfUserHiddenInRange:(NSRange)arg1 ;
-(char)anyHiddenInRange:(NSRange)arg1 ;
-(char)anyHiddenInRange:(NSRange)arg1 forAction:(unsigned char)arg2 ;
-(char)hasHiddenAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleBeforeIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleBeforeAndIncludingIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleAfterIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleAfterAndIncludingIndex:(unsigned)arg1 ;
-(unsigned)numberOfHiddenInBaseRange:(NSRange)arg1 ;
-(id)indexesOfHiddenInBaseRange:(NSRange)arg1 ;
-(unsigned)numberOfUserHiddenInBaseRange:(NSRange)arg1 ;
-(void)syncUpHiddenStateFormulaOwnerUIDs;
-(void)setHiddenStateExtentUid:(TSKUIDStruct)arg1 ;
-(char)isCategoryGroupUIDCollapsed:(const TSKUIDStruct*)arg1 ;
-(void)setCategoryGroupUID:(const TSKUIDStruct*)arg1 asCollapsed:(char)arg2 ;
-(TSCEUIDSet *)collapsedGroupUids;
-(id)copyCollapsedStateToUpdatedGroupUids:(id)arg1 ;
-(id)runChange:(id)arg1 withCollapsedState:(id)arg2 outUndoState:(id*)arg3 ;
-(void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dirtyFilterStateForHeaders;
-(void)dirtyFilterStateForFooters;
-(char)anyCollapsed;
-(char)anyHidden;
-(char)anyUserHidden;
-(unsigned)numberOfHidden;
-(unsigned)numberOfUserHidden;
-(void)insertBaseRange:(NSRange)arg1 ;
-(void)deleteBaseRange:(NSRange)arg1 withUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 ;
-(void)moveViewRangeOnlyFrom:(NSRange)arg1 toIndex:(TSUViewColumnOrRowIndex)arg2 ;
-(void)moveBaseRangeFrom:(NSRange)arg1 toIndex:(TSUModelColumnOrRowIndex)arg2 ;
-(void)swapBaseIndex:(TSUModelColumnOrRowIndex)arg1 withIndex:(TSUModelColumnOrRowIndex)arg2 ;
-(id)mutableUserHiddenIndexes;
-(id)mutableFilteredIndexes;
-(id)mutableAnyHiddenIndexes;
-(void)setHiddenStatesOwner:(TSTHiddenStatesOwner *)arg1 ;
-(char)forRows;
-(void)p_registerAllFormulaToCalculationEngine;
-(TSUViewColumnOrRowIndex)viewIndexForBaseIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(char)hideAtUid:(const TSKUIDStruct*)arg1 forIndex:(TSUModelColumnOrRowIndex)arg2 forAction:(unsigned char)arg3 ;
-(unsigned char)hidingActionForUid:(const TSKUIDStruct*)arg1 ;
-(void)addHiddenIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(void)hiddenStateChangedForBaseIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(char)showAtUid:(const TSKUIDStruct*)arg1 forIndex:(TSUModelColumnOrRowIndex)arg2 forAction:(unsigned char)arg3 ;
-(void)removeHiddenIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(char)useCollapsedRows;
-(id)collapsedRowIndexes;
-(id)anyHiddenIndexes;
-(void)clearInvalidIndexes;
-(char)hideAtUid:(const TSKUIDStruct*)arg1 forAction:(unsigned char)arg2 ;
-(char)showAtUid:(const TSKUIDStruct*)arg1 forAction:(unsigned char)arg2 ;
-(id)userHiddenIndexes;
-(void)dirtyFilterStateForRowRange:(NSRange)arg1 ;
-(id)precedentsForFilterSet:(id)arg1 calcEngine:(id)arg2 hostOwnerUID:(const TSKUIDStruct*)arg3 hostCellID:(const TSUCellCoord*)arg4 ;
-(TSCEValue*)p_calculateAverageThresholdWithCalcEngine:(id)arg1 formulaCoord:(const TSUCellCoord*)arg2 ;
-(TSCEValue*)p_calculateTopOrBottomThresholdWithCalcEngine:(id)arg1 formulaCoord:(const TSUCellCoord*)arg2 isTop:(char)arg3 keyScale:(unsigned char)arg4 ;
-(id)p_createThresholdCellValue:(TSCEValue*)arg1 locale:(id)arg2 ;
-(void)p_removeAllFormulaFromCalculationEngine;
-(TSCECellRef)cellReferenceForIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(TSUModelColumnOrRowIndex)baseIndexForViewIndex:(TSUViewColumnOrRowIndex)arg1 ;
-(void)removeUid:(const TSKUIDStruct*)arg1 ;
@end
