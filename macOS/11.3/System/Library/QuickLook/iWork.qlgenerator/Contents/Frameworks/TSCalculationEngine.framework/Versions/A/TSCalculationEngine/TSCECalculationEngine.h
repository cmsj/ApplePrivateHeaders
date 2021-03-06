/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSCalculationEngine/TSCEFormulaReplacing.h>

@class TSULocale, TSKAccessController, TSKChangeNotifier, NSDate, NSTimeZone, NSString, TSCETablesByName, TSCETransaction, TSCERewritingMinion, TSCERemoteDataStore, TSCENamedReferenceManager, TSCERewriteTableUIDInfo;

@interface TSCECalculationEngine : TSPObject <TSCEFormulaReplacing> {

	TSCECalcEngine* _cppCalcEngine;
	char _isUnarchiving;
	char _calculationWillShutDown;
	TSULocale* _locale;

}

@property (assign,nonatomic) TSCECalcEngine* cppCalcEngine;                                    //@synthesize cppCalcEngine=_cppCalcEngine - In the implementation block
@property (assign,nonatomic,__weak) TSKAccessController * accessController; 
@property (assign,nonatomic,__weak) TSKChangeNotifier * changeNotifier; 
@property (retain) NSDate * currentDate; 
@property (retain) NSTimeZone * currentTimeZone; 
@property (retain) TSULocale * locale;                                                         //@synthesize locale=_locale - In the implementation block
@property (assign) int XLImportDateMode; 
@property (readonly) NSString * previousLocaleIdentifier; 
@property (assign,nonatomic) unsigned long long loadFromFileVersion; 
@property (nonatomic,readonly) id<TSCEFormulaReplacing> upgradingFormulasMinion; 
@property (readonly) TSCETablesByName * tablesByName; 
@property (readonly) TSCETransaction * currentTransaction; 
@property (nonatomic,retain) TSCERewritingMinion * rewritingMinion; 
@property (nonatomic,readonly) char shouldSendSetNowCommand; 
@property (readonly) char shouldAbortRecalculation; 
@property (readonly) TSCERemoteDataStore * remoteDataStore; 
@property (nonatomic,retain,readonly) id<TSCERefNamingProtocol> namer; 
@property (nonatomic,retain,readonly) id<TSCERefParsingProtocol> refParser; 
@property (nonatomic,retain,readonly) id<TSCEHeaderNameProtocol> headerNameMgr; 
@property (nonatomic,readonly) TSCENamedReferenceManager * namedReferenceManager; 
@property (assign) unsigned long long documentRandomSeed; 
@property (readonly) TSCERewriteTableUIDInfo * tableUIDHistory; 
@property (retain) id<TSKMultiTableRemapping> currentTableIdRemapper; 
@property (assign,nonatomic) char duringRollback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)localVariablesEnabled;
+(void)pauseEvaluationForPotentialTermination;
+(void)confirmTermination;
+(void)resumeEvaluationIfNotTerminated;
+(char)isPotentiallyTerminating;
+(unsigned long long)generateRandomSeed;
+(unsigned long long)randomSeedFromRandomLo:(int)arg1 hi:(int)arg2 ;
+(void)splitRandomSeed:(unsigned long long)arg1 intoLo:(int*)arg2 hi:(int*)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(void)setLocale:(TSULocale *)arg1 ;
-(TSULocale *)locale;
-(id)initWithContext:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(TSCETransaction *)currentTransaction;
-(NSDate *)currentDate;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)setCurrentTimeZone:(NSTimeZone *)arg1 ;
-(id)documentRoot;
-(id)openTransaction;
-(void)willClose;
-(void)documentDidLoad;
-(id)packageLocator;
-(void)willModify;
-(char)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(TSKAccessController *)accessController;
-(TSKChangeNotifier *)changeNotifier;
-(void)setChangeNotifier:(TSKChangeNotifier *)arg1 ;
-(id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)documentLocale;
-(void)markIndirectCallsAsDirty;
-(void)pauseRecalculation;
-(void)resumeRecalculation;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)allRefResolverOwnerUIDs;
-(void)setOwnerUIDForLegacyGlobalID:(id)arg1 ownerUID:(const TSKUIDStruct*)arg2 ;
-(id)emptyReferenceSetWrapper;
-(void)removeAllFormulasFromOwner:(const TSKUIDStruct*)arg1 ;
-(void)replaceFormulaAt:(const TSUCellCoord*)arg1 inOwner:(const TSKUIDStruct*)arg2 precedents:(id)arg3 replaceOptions:(const TSCEReplaceFormulaOptions*)arg4 ;
-(void)removeFormulaAt:(const TSUCellCoord*)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(TSCERewriteTableUIDInfo *)tableUIDHistory;
-(char)ownerIsRegistered:(TSKUIDStruct)arg1 ;
-(int)registerOwnerWithOwnerUID:(TSKUIDStruct)arg1 owner:(id)arg2 referenceResolver:(id)arg3 baseOwnerUID:(TSKUIDStruct)arg4 ownerKind:(unsigned short)arg5 ;
-(void)markOwnerAsDirty:(TSKUIDStruct)arg1 ;
-(void)unregisterOwner:(TSKUIDStruct)arg1 ;
-(TSCETableResolver*)tableResolverForTableUID:(const TSKUIDStruct*)arg1 ;
-(id)calcEngine;
-(vector<TSCEValue, std::__1::allocator<TSCEValue>>*)valuesForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const TSKUIDStruct*)arg2 error:(id*)arg3 ;
-(vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>*)formulaCoordsReferringToRange:(const TSCERangeRef*)arg1 fromOwner:(const TSKUIDStruct*)arg2 ;
-(char)recalculationIsPaused;
-(void)clearLegacyGlobalIDs;
-(void)resumeRecalculationForBlock:(/*^block*/id)arg1 ;
-(char)allCellsAreClean;
-(char)isRecalculationStarted;
-(void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1 ;
-(TSCERemoteDataStore *)remoteDataStore;
-(TSCETablesByName *)tablesByName;
-(void)documentLocaleDidChange;
-(void)markDateTimeVolatileFunctionsAsDirtyForCurrentDateTime;
-(void)clearPreviousLocaleIdentifier;
-(void)setAccessController:(TSKAccessController *)arg1 ;
-(void)setLoadFromFileVersion:(unsigned long long)arg1 ;
-(void)pauseRecalculationSometimeSoon;
-(NSString *)previousLocaleIdentifier;
-(void)markLocaleVolatileFunctionsAsDirty;
-(long long)dirtyCellCount;
-(char)isInCollaborationMode;
-(char)rangeIsWithinTable:(const TSCERangeRef*)arg1 ;
-(TSCETableResolver*)tableOrLinkedResolverForTableUID:(const TSKUIDStruct*)arg1 ;
-(void)replaceFormula:(id)arg1 atCellCoord:(TSUCellCoord)arg2 inOwner:(TSKUIDStruct)arg3 ;
-(void)replaceFormula:(id)arg1 atCellCoord:(const TSUCellCoord*)arg2 inOwner:(const TSKUIDStruct*)arg3 replaceOptions:(TSCEReplaceFormulaOptions)arg4 ;
-(void)removeFormulasAt:(const TSCECellRefSet*)arg1 ;
-(void)resetFormulaAt:(const TSCECellRef*)arg1 ;
-(void)markCellRefAsDirty:(const TSCECellRef*)arg1 ;
-(void)markRangeRefAsDirty:(const TSCERangeRef*)arg1 ;
-(int)XLImportDateMode;
-(TSCEDependencyTracker*)dependencyTracker;
-(id)resolverForTableUID:(TSKUIDStruct)arg1 ;
-(vector<TSCECategoryRef, std::__1::allocator<TSCECategoryRef>>*)categoryRefsForSpanningCategoryRef:(const TSCECategoryRef*)arg1 ;
-(id<TSCERefNamingProtocol>)namer;
-(TSCECellRefSet*)cellDependentsOfCell:(const TSCECellRef*)arg1 ;
-(id)currentTimeZoneCalendar;
-(char)referenceIsValid:(const TSCERangeRef*)arg1 ;
-(id<TSCEHeaderNameProtocol>)headerNameMgr;
-(id<TSCERefParsingProtocol>)refParser;
-(TSCENamedReferenceManager *)namedReferenceManager;
-(unsigned char)aggregateTypeForCategoryRef:(const TSCECategoryRef*)arg1 ;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef>>*)cellRefsForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const TSKUIDStruct*)arg2 ;
-(TSKUIDStruct)uuidForTableUID:(TSKUIDStruct)arg1 andIndex:(unsigned)arg2 direction:(char)arg3 ;
-(unsigned short)ownerKindForOwnerUID:(TSKUIDStruct)arg1 ;
-(char)cellIsInACycle:(const TSCECellRef*)arg1 ;
-(TSCERangeRef)aggregateRangeRefForCategoryRef:(const TSCECategoryRef*)arg1 ;
-(TSKUIDStruct)mapOwnerUID:(const TSKUIDStruct*)arg1 ;
-(TSCECalcEngine*)cppCalcEngine;
-(void)endTrackingNamesInTableForLegacyNRM:(const TSKUIDStruct*)arg1 ;
-(void)p_addApplicationNotification;
-(void)p_removeApplicationNotification;
-(id)referencesToDirty;
-(void)pauseRecalculationForBlock:(/*^block*/id)arg1 ;
-(id)legacyGlobalIDStringToOwnerUIDMap;
-(unsigned long long)documentRandomSeed;
-(void)setDocumentRandomSeed:(unsigned long long)arg1 ;
-(NSTimeZone *)currentTimeZone;
-(void)setCurrentDate:(id)arg1 timeZone:(id)arg2 markVolatilesDirty:(char)arg3 ;
-(char)shouldAbortRecalculation;
-(void)setXLImportDateMode:(int)arg1 ;
-(unsigned long long)loadFromFileVersion;
-(id<TSKMultiTableRemapping>)currentTableIdRemapper;
-(void)setCurrentTableIdRemapper:(id<TSKMultiTableRemapping>)arg1 ;
-(char)duringRollback;
-(void)setDuringRollback:(char)arg1 ;
-(void)recalculateWithTimeout:(double)arg1 ;
-(void)dirtyCellsForUpgrade;
-(id<TSCEFormulaReplacing>)upgradingFormulasMinion;
-(void)beginUpgradingFormulasMode;
-(void)scheduleRepairingSpanningFormulasInOwner:(const TSKUIDStruct*)arg1 ;
-(void)setTableRange:(TSCERangeCoordinate)arg1 bodyRange:(TSCERangeCoordinate)arg2 forTableUID:(const TSKUIDStruct*)arg3 ;
-(char)verifyTableAndBodyRangesForTable:(const TSKUIDStruct*)arg1 ;
-(int)forwardRegisterOwnerWithOwnerUID:(TSKUIDStruct)arg1 legacyGlobalID:(id)arg2 ;
-(unsigned short)ownerKindForOwnerID:(unsigned short)arg1 ;
-(id)ownerForOwnerUID:(TSKUIDStruct)arg1 ;
-(TSKUIDStruct)formulaOwnerUIDForSubOwnerID:(const TSCESubFormulaOwnerID*)arg1 ;
-(TSCESubFormulaOwnerID)subOwnerIDForFormulaOwnerUID:(const TSKUIDStruct*)arg1 ;
-(char)allOwnersRegistered;
-(char)shouldForceRegisterAllTables;
-(void)enumerateFormulaOwnersUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)cellDependMemoryUseEstimate;
-(id)resolverForCellRef:(id)arg1 ;
-(id)anyResolver;
-(id)resolverForTableID:(unsigned short)arg1 ;
-(TSCETableResolver*)tableResolverForTableID:(unsigned short)arg1 ;
-(TSCETableResolver*)tableResolverForRefResolver:(id)arg1 ;
-(unsigned short)internalFormulaOwnerIDForFormulaOwnerUID:(TSKUIDStruct)arg1 ;
-(TSKUIDStruct)formulaOwnerUIDForInternalFormulaOwnerID:(unsigned short)arg1 ;
-(id)resolverContainerMatchingName:(id)arg1 ;
-(id)resolverMatchingNameWithContextContainer:(id)arg1 contextContainerName:(id)arg2 ;
-(TSKUIDStruct)ownerUIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(char)arg2 ;
-(void)closeTransaction:(id)arg1 ;
-(void)replaceFormulaIfPrecedentsDifferAt:(const TSUCellCoord*)arg1 inOwner:(const TSKUIDStruct*)arg2 precedents:(id)arg3 replaceOptions:(const TSCEReplaceFormulaOptions*)arg4 ;
-(TSCERecalculationState)updateCalculatedPrecedents:(TSCEEvaluationContext*)arg1 forFormula:(id)arg2 atCellRef:(const TSCECellRef*)arg3 withState:(TSCERecalculationState)arg4 ;
-(void)removeFormulasFromRange:(const TSCERangeRef*)arg1 ;
-(void)setError:(id)arg1 forCell:(const TSCECellRef*)arg2 ;
-(void)clearErrorForCell:(const TSCECellRef*)arg1 ;
-(void)clearErrorForCells:(const TSCECellRefSet*)arg1 ;
-(TSCECellRef)rootCauseForErrorInCell:(const TSCECellRef*)arg1 atRootCell:(char*)arg2 ;
-(vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>*)formulaCoordsReferringToRange:(const TSCERangeRef*)arg1 fromOwner:(const TSKUIDStruct*)arg2 skipSpanning:(char)arg3 ;
-(vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>*)formulaCoordsInRange:(const TSCERangeCoordinate*)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(TSCECellCoordSet*)allFormulaCoordsInOwner:(const TSKUIDStruct*)arg1 ;
-(char)hasFormulaAt:(const TSCECellRef*)arg1 ;
-(char)hasFormulaCellsUsingNowTodayRandom;
-(unsigned long long)dirtyCellCountInOwner:(const TSKUIDStruct*)arg1 ;
-(char)allCellsAreCleanNonBlocking;
-(char)cellWillBeModifiedInCurrentRecalcCycle:(const TSCECellRef*)arg1 ;
-(char)referenceWasGuaranteedCleanAtRecalcCycleStart:(const TSCEAnyRef*)arg1 ;
-(TSCERewritingMinion *)rewritingMinion;
-(void)setRewritingMinion:(TSCERewritingMinion *)arg1 ;
-(id)extendTableUIDHistoryWithRewrite:(id)arg1 ;
-(void)rollbackTableUIDHistoryWithRewriteInfo:(id)arg1 ;
-(void)markCellRefsAsDirty:(id)arg1 ;
-(void)markCoordsDirty:(const TSCECellCoordSet*)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(void)headerStateOfTableChanged:(TSKUIDStruct)arg1 changedRows:(char)arg2 ;
-(void)headerStateOfTableChanged:(TSKUIDStruct)arg1 ;
-(void)dirtyCellsForColumnRange:(NSRange)arg1 fromTable:(const TSKUIDStruct*)arg2 tableRange:(TSCERangeCoordinate)arg3 ;
-(void)dirtyCellsForRowRange:(NSRange)arg1 fromTable:(const TSKUIDStruct*)arg2 tableRange:(TSCERangeCoordinate)arg3 ;
-(void)dirtyCellsForRemovalOfColumns:(NSRange)arg1 fromTable:(const TSKUIDStruct*)arg2 tableRange:(TSCERangeCoordinate)arg3 ;
-(void)dirtyCellsForRemovalOfRows:(NSRange)arg1 fromTable:(const TSKUIDStruct*)arg2 tableRange:(TSCERangeCoordinate)arg3 ;
-(void)dirtyCellsForInsertionOfColumns:(NSRange)arg1 forTable:(const TSKUIDStruct*)arg2 tableRange:(TSCERangeCoordinate)arg3 headerRange:(TSCERangeCoordinate)arg4 ;
-(void)dirtyCellsForInsertionOfRows:(NSRange)arg1 forTable:(const TSKUIDStruct*)arg2 tableRange:(TSCERangeCoordinate)arg3 headerRange:(TSCERangeCoordinate)arg4 ;
-(void)dirtyCellsForMergingRange:(TSCERangeCoordinate)arg1 forTable:(const TSKUIDStruct*)arg2 headerRowRange:(TSCERangeCoordinate)arg3 headerColumnRange:(TSCERangeCoordinate)arg4 ;
-(void)markAllExternalGroupByRefsDirty:(const TSKUIDStruct*)arg1 ;
-(void)markAllFunctionsAsDirty;
-(void)markOnlyDependentsDirty:(const TSCECellRef*)arg1 ;
-(void)scheduleDetectAndRepairConsistencyViolations;
-(char)hasDateTimeVolatileFunctions;
-(char)hasRemoteDataFunctions;
-(void)markDateTimeVolatileFunctionsAsDirty;
-(id)rewriteSpecStack;
-(void)pushRewriteSpec:(id)arg1 ;
-(void)popRewriteSpec:(id)arg1 ;
-(char)shouldSendSetNowCommand;
-(void)markRandomVolatileFunctionsAsDirty;
-(void)markGeometryVolatileFunctionsAsDirtyInOwner:(TSKUIDStruct)arg1 ;
-(void)markRemoteDataVolatileFunctionsAsDirty;
-(void)markAllVolatileFunctionsAsDirty;
-(char)cellContainsAFormula:(const TSCEInternalCellReference*)arg1 ;
-(char)isCellReferenceDirty:(const TSCECellRef*)arg1 ;
-(void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg1 ;
-(void)beginSuppressingWillModifyCalls;
-(void)endSuppressingWillModifyCalls;
-(void)startRecalculation;
-(char)isRecalculationRunning;
-(void)startRecalcTaskIfNecessary;
-(void)superWillModify;
-(void)executeBlockWhileCalculationEngineIsNotWriting:(/*^block*/id)arg1 ;
-(TSCEValue*)evaluateSynchedWithCalcEngineWithFormula:(id)arg1 evalContext:(TSCEEvaluationContext*)arg2 ;
-(void)beginBatchingGroupCellDirtying;
-(void)endBatchingGroupCellDirtying;
-(char)hasRunRecalculationALongTime;
-(double)recalcTimeInSecs;
-(void)clearRecalculationTimer;
-(void)assertAt:(id)arg1 nonCalcEngineException:(id)arg2 evaluatingFormula:(id)arg3 ;
-(TSCEInternalCellRefSet*)corruptCellRefs;
-(void)resetCorruptCellRefs:(const TSCEInternalCellRefSet*)arg1 ;
-(void)setRemoteDataStore:(TSCERemoteDataStore *)arg1 ;
-(void)replaceRemoteDataKeysInterestedIn:(id)arg1 forCell:(const TSCECellRef*)arg2 ;
-(void)markRemoteDataVolatileFunctionsAsDirtyForKeys:(id)arg1 ;
-(void)beginTrackingNamesInTableForLegacyNRM:(const TSKUIDStruct*)arg1 ;
-(void)setDisallowHeaderIndexingForTableUID:(const TSKUIDStruct*)arg1 ;
-(void)clearDisallowHeaderIndexingForTableUID:(const TSKUIDStruct*)arg1 ;
-(char)hasDisallowedHeaderIndexingForTableUID:(const TSKUIDStruct*)arg1 ;
-(char)cellHasPrecedents:(const TSCECellRef*)arg1 ;
-(TSCEReferenceSet*)precedentsOfCell:(const TSCECellRef*)arg1 ;
-(TSCEReferenceSet*)emptyReferenceSet;
-(void)resetExternalReferencesToGroupNode:(TSKUIDStruct)arg1 inGroupBy:(const TSKUIDStruct*)arg2 ;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef>>*)unorderedCellRefsForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const TSKUIDStruct*)arg2 ;
-(void)addCalculationStateObserver:(id)arg1 ;
-(void)removeCalculationStateObserver:(id)arg1 ;
-(void)addAllFormulasCleanObserver:(id)arg1 ;
-(void)removeAllFormulasCleanObserver:(id)arg1 ;
-(unsigned long long)numberOfCellsWithFormulas;
-(unsigned long long)numFormulaCellsInOwner:(const TSKUIDStruct*)arg1 ;
-(char)hasMaxNumFormulas;
-(void)assertDirtyPrecedentsCountConsistency;
-(void)detectAndRepairDirtyCellsAreOnLeafQueue;
-(id)allFormulaOwnersAsString;
-(id)allCellDependenciesAsString;
-(id)cellDependenciesAsStringForOwner:(const TSKUIDStruct*)arg1 ;
-(id)allRangeDependenciesAsString;
-(id)allSpanningDependenciesAsString;
-(TSCECellCoordSet*)cellCoordinatesNeedingExcelImportForTable:(const TSKUIDStruct*)arg1 ;
-(char)foundConsistencyIssues;
-(void)setCppCalcEngine:(TSCECalcEngine*)arg1 ;
@end

