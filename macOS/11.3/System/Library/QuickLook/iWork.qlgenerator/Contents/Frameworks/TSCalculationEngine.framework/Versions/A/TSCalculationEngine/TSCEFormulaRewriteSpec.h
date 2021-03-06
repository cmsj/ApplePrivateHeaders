/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class TSCETableTransposedInfo, TSCEFormulaRewriteInfo_RowColumnInfo, TSCEFormulaRewrite_RegionMovedInfo, TSCEFormulaRewrite_RegionMergedInfo, TSCEFormulaRewrite_MergeOriginMovedInfo, TSKShuffleMapping, TSCERewriteTableUIDInfo, TSCERewriteGroupNodeUIDInfo, TSCEGroupByChange, TSCEFormulasForUndo, NSMutableArray, TSCECoordMapper;

@interface TSCEFormulaRewriteSpec : NSObject {

	int _type;
	TSKUIDStruct _tableUID;
	TSKUIDStruct _conditionalStyleOwnerUID;
	TSUCellRect _tableRange;
	char _isInverse;
	TSCETableTransposedInfo* _transposedInfo;
	TSCEFormulaRewriteInfo_RowColumnInfo* _rowColumnInfo;
	TSCEFormulaRewrite_RegionMovedInfo* _regionMovedInfo;
	TSCEFormulaRewrite_RegionMergedInfo* _mergeInfo;
	TSCEFormulaRewrite_MergeOriginMovedInfo* _mergeOriginMovedInfo;
	TSKShuffleMapping* _shuffleMap;
	TSCERewriteTableUIDInfo* _tableUIDInfo;
	TSCERewriteGroupNodeUIDInfo* _groupNodeUIDInfo;
	TSCEGroupByChange* _groupByChange;
	TSCEFormulasForUndo* _formulasForUndo;
	id _warningSetsForUndo;
	unordered_map<TSCECellRef, TSTConditionalStyleSet *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSTConditionalStyleSet *>>>* _conditionalStylesForUndo;
	NSMutableArray* _nestedRewrites;
	unordered_map<TSCECellRef, TSUCellRect, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSUCellRect>>>* _mergeRangesContainingFormulas;
	os_unfair_lock_s _coordMappersLock;
	unordered_map<TSKUIDStruct, TSCECoordMapper *, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<std::__1::pair<const TSKUIDStruct, TSCECoordMapper *>>>* _coordMappersByTableUID;
	char _canBeNested;
	TSCEFormulaRewriteSpec* _rewriteSpecBaseToChrome;
	TSCEFormulaRewriteSpec* _rewriteSpecChromeToBase;
	TSCECoordMapper* _coordMapper;
	TSCECoordMapper* _srcCoordMapper;
	TSKUIDStruct _fromTableUID;
	TSKUIDStruct _groupByUID;

}

@property (nonatomic,readonly) int rewriteType;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) TSKUIDStruct tableUID;                                                              //@synthesize tableUID=_tableUID - In the implementation block
@property (nonatomic,readonly) TSKUIDStruct fromTableUID;                                                          //@synthesize fromTableUID=_fromTableUID - In the implementation block
@property (assign,nonatomic) TSKUIDStruct conditionalStyleOwnerUID;                                                //@synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID - In the implementation block
@property (nonatomic,readonly) TSKUIDStruct groupByUID;                                                            //@synthesize groupByUID=_groupByUID - In the implementation block
@property (assign,nonatomic) TSKUIDStruct insertAtUid; 
@property (assign,nonatomic) TSKUIDStruct insertOppositeUid; 
@property (assign,nonatomic) char isInverse;                                                                       //@synthesize isInverse=_isInverse - In the implementation block
@property (nonatomic,retain) TSCEFormulaRewriteSpec * rewriteSpecBaseToChrome;                                     //@synthesize rewriteSpecBaseToChrome=_rewriteSpecBaseToChrome - In the implementation block
@property (nonatomic,retain) TSCEFormulaRewriteSpec * rewriteSpecChromeToBase;                                     //@synthesize rewriteSpecChromeToBase=_rewriteSpecChromeToBase - In the implementation block
@property (nonatomic,retain,readonly) TSCETableTransposedInfo * transposedInfo;                                    //@synthesize transposedInfo=_transposedInfo - In the implementation block
@property (nonatomic,retain,readonly) TSCEFormulaRewriteInfo_RowColumnInfo * rowColumnInfo;                        //@synthesize rowColumnInfo=_rowColumnInfo - In the implementation block
@property (nonatomic,retain,readonly) TSCEFormulaRewrite_RegionMovedInfo * regionMovedInfo;                        //@synthesize regionMovedInfo=_regionMovedInfo - In the implementation block
@property (nonatomic,retain,readonly) TSCEFormulaRewrite_RegionMergedInfo * mergeInfo;                             //@synthesize mergeInfo=_mergeInfo - In the implementation block
@property (nonatomic,retain,readonly) TSCEFormulaRewrite_MergeOriginMovedInfo * mergeOriginMovedInfo;              //@synthesize mergeOriginMovedInfo=_mergeOriginMovedInfo - In the implementation block
@property (nonatomic,retain,readonly) TSCERewriteTableUIDInfo * tableUIDInfo;                                      //@synthesize tableUIDInfo=_tableUIDInfo - In the implementation block
@property (nonatomic,retain,readonly) TSCERewriteGroupNodeUIDInfo * groupNodeUIDInfo;                              //@synthesize groupNodeUIDInfo=_groupNodeUIDInfo - In the implementation block
@property (nonatomic,retain,readonly) TSCEGroupByChange * groupByChange;                                           //@synthesize groupByChange=_groupByChange - In the implementation block
@property (nonatomic,retain,readonly) TSKShuffleMapping * shuffleMap;                                              //@synthesize shuffleMap=_shuffleMap - In the implementation block
@property (nonatomic,retain) TSCEFormulasForUndo * formulasForUndo;                                                //@synthesize formulasForUndo=_formulasForUndo - In the implementation block
@property (nonatomic,retain) id warningSetsForUndo;                                                                //@synthesize warningSetsForUndo=_warningSetsForUndo - In the implementation block
@property (assign,nonatomic) char canBeNested;                                                                     //@synthesize canBeNested=_canBeNested - In the implementation block
@property (nonatomic,retain) TSCECoordMapper * coordMapper;                                                        //@synthesize coordMapper=_coordMapper - In the implementation block
@property (nonatomic,retain) TSCECoordMapper * srcCoordMapper;                                                     //@synthesize srcCoordMapper=_srcCoordMapper - In the implementation block
+(char)rewriteTypeUsesAmendRewriteSpec:(int)arg1 ;
-(id)description;
-(TSCERangeCoordinate)affectedRange;
-(char)isInverse;
-(void)saveToMessage:(FormulaRewriteSpecArchive*)arg1 archiver:(id)arg2 ;
-(TSKUIDStruct)tableUID;
-(TSCEFormulaRewriteInfo_RowColumnInfo *)rowColumnInfo;
-(int)rewriteType;
-(TSCECellRef)updatedCellRefForOriginalCellRef:(const TSCECellRef*)arg1 ;
-(TSCEFormulasForUndo *)formulasForUndo;
-(TSCECellRef)originalCellRefForUpdatedCellRef:(const TSCECellRef*)arg1 ;
-(TSCEGroupByChange *)groupByChange;
-(TSKUIDStruct)fromTableUID;
-(char)isForTable:(const TSKUIDStruct*)arg1 ;
-(id)coordMapperForTableUID:(const TSKUIDStruct*)arg1 calcEngine:(id)arg2 ;
-(TSKUIDStruct)insertAtUid;
-(TSKUIDStruct)insertOppositeUid;
-(TSKShuffleMapping *)shuffleMap;
-(TSCEFormulaRewrite_RegionMovedInfo *)regionMovedInfo;
-(TSCECellRef)flattenedCellRefForCategoryRef:(const TSCECategoryRef*)arg1 calcEngine:(id)arg2 ;
-(TSKUIDStruct)conditionalStyleOwnerUID;
-(TSKUIDStruct)groupByUID;
-(TSKUIDStruct)affectedOwnerUID;
-(TSCETableTransposedInfo *)transposedInfo;
-(TSCEFormulaRewrite_RegionMergedInfo *)mergeInfo;
-(TSCEFormulaRewrite_MergeOriginMovedInfo *)mergeOriginMovedInfo;
-(TSKUIDStruct)affectedConditionalStyleOwnerUID;
-(TSCERewriteGroupNodeUIDInfo *)groupNodeUIDInfo;
-(TSCERewriteTableUIDInfo *)tableUIDInfo;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)expandedRowColumnUuids;
-(void)addNestedRewrite:(id)arg1 ;
-(id)initFromMessage:(const FormulaRewriteSpecArchive*)arg1 ;
-(void)setInsertAtUid:(TSKUIDStruct)arg1 ;
-(void)setInsertOppositeUid:(TSKUIDStruct)arg1 ;
-(void)addCoordMapper:(id)arg1 ;
-(void)loadMergeRangesContainingFormulasInTable:(id)arg1 calcEngine:(id)arg2 ;
-(id)prepareToRewriteWithCalcEngine:(id)arg1 ;
-(char)canBeNested;
-(id)amendRewriteWithCalcEngine:(id)arg1 ;
-(void)didModifyTable:(id)arg1 calcEngine:(id)arg2 ;
-(id)initWithOwnerDeletion:(const TSKUIDStruct*)arg1 ;
-(id)initWithOwnerInsertion:(const TSKUIDStruct*)arg1 fromOwnerUID:(const TSKUIDStruct*)arg2 ;
-(id)initWithTransposeTable:(const TSKUIDStruct*)arg1 transposedBodyRange:(TSCERangeCoordinate)arg2 numberOfFooterRows:(unsigned)arg3 ;
-(id)initForRemoveRowsOrColumnsFromTable:(const TSKUIDStruct*)arg1 rowColumnUuids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 areRows:(char)arg3 ;
-(id)initForInsertingRowsOrColumnsIntoTable:(const TSKUIDStruct*)arg1 rowColumnUuids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 areRows:(char)arg3 ;
-(id)initForMovingRowsOrColumnsInTable:(const TSKUIDStruct*)arg1 rowColumnUuids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 shuffleMap:(id)arg3 areRows:(char)arg4 srcTract:(const TSKUIDStructTract*)arg5 destTract:(const TSKUIDStructTract*)arg6 ;
-(id)initForSortWithTableUID:(const TSKUIDStruct*)arg1 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 shuffleMap:(id)arg3 ;
-(id)initForReorderRowsWithTableUID:(const TSKUIDStruct*)arg1 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 shuffleMap:(id)arg3 ;
-(id)initForMovingRegionWithSrcTableUID:(const TSKUIDStruct*)arg1 srcTract:(const TSKUIDStructTract*)arg2 dstTableUID:(const TSKUIDStruct*)arg3 destTract:(const TSKUIDStructTract*)arg4 ;
-(id)initForCategorizedTableBaseToChromeRewriterWithSrcTableUID:(const TSKUIDStruct*)arg1 srcTract:(const TSKUIDStructTract*)arg2 dstTableUID:(const TSKUIDStruct*)arg3 destTract:(const TSKUIDStructTract*)arg4 coordMapper:(id)arg5 ;
-(id)initForCategorizedTableChromeToBaseRewriterWithSrcTableUID:(const TSKUIDStruct*)arg1 srcTract:(const TSKUIDStructTract*)arg2 dstTableUID:(const TSKUIDStruct*)arg3 destTract:(const TSKUIDStructTract*)arg4 coordMapper:(id)arg5 srcCoordMapper:(id)arg6 fromTableUID:(const TSKUIDStruct*)arg7 ;
-(id)initForMergeCellsWithTableUID:(const TSKUIDStruct*)arg1 columnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg3 mergeSource:(TSUCellCoord)arg4 ;
-(id)initForUndoMergeCellsWithTableUID:(const TSKUIDStruct*)arg1 columnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg3 mergeSource:(TSUCellCoord)arg4 ;
-(id)initForMergeOriginsMovedWithMap:(const unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord>>>*)arg1 reverseMap:(const unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord>>>*)arg2 inTableUID:(const TSKUIDStruct*)arg3 ;
-(id)initForPastingCellsWithTableUID:(const TSKUIDStruct*)arg1 columnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg3 ;
-(id)initForTableUIDReassignment:(const TSKUIDStructMap*)arg1 ;
-(id)initForGroupBy:(const TSKUIDStruct*)arg1 withGroupByChange:(id)arg2 ;
-(id)initForGroupBy:(const TSKUIDStruct*)arg1 groupNodeUIDReassignment:(const TSKUIDStructMap*)arg2 ;
-(unordered_map<TSCECellRef, TSTConditionalStyleSet *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSTConditionalStyleSet *>>>*)conditionalStylesForUndo;
-(id)miniDescription;
-(unordered_set<TSKUIDStruct, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<TSKUIDStruct>>*)affectedOwnerUIDs;
-(TSUCellRect)tableRangeForTable:(const TSKUIDStruct*)arg1 calcEngine:(id)arg2 ;
-(TSUCellRect)mergeRangeAtOriginalCellRef:(const TSCECellRef*)arg1 ;
-(void)willModifyTable:(id)arg1 uidResolver:(id)arg2 calcEngine:(id)arg3 ;
-(id)nestedRewrites;
-(void)willModifySrcTable:(id)arg1 srcUidResolver:(id)arg2 dstTable:(id)arg3 dstUidResolver:(id)arg4 ;
-(void)didModifySrcTable:(id)arg1 dstTable:(id)arg2 ;
-(void)didModifyTable:(id)arg1 ;
-(void)clearTableIndexes;
-(void)setIsInverse:(char)arg1 ;
-(void)setConditionalStyleOwnerUID:(TSKUIDStruct)arg1 ;
-(TSCEFormulaRewriteSpec *)rewriteSpecBaseToChrome;
-(void)setRewriteSpecBaseToChrome:(TSCEFormulaRewriteSpec *)arg1 ;
-(TSCEFormulaRewriteSpec *)rewriteSpecChromeToBase;
-(void)setRewriteSpecChromeToBase:(TSCEFormulaRewriteSpec *)arg1 ;
-(void)setFormulasForUndo:(TSCEFormulasForUndo *)arg1 ;
-(id)warningSetsForUndo;
-(void)setWarningSetsForUndo:(id)arg1 ;
-(void)setCanBeNested:(char)arg1 ;
-(TSCECoordMapper *)coordMapper;
-(void)setCoordMapper:(TSCECoordMapper *)arg1 ;
-(TSCECoordMapper *)srcCoordMapper;
-(void)setSrcCoordMapper:(TSCECoordMapper *)arg1 ;
@end

