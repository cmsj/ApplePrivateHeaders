/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSCalculationEngine/TSCEReferenceTrackerDelegate.h>

@class TSCEReferenceTracker, TSCECalculationEngine, NSString;

@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate> {

	TSCEReferenceTracker* _referenceTracker;
	TSCEReferenceTracker* _weakReferenceTracker;
	TSCECalculationEngine* _calcEngine;

}

@property (__weak) TSCECalculationEngine * calcEngine;              //@synthesize calcEngine=_calcEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)willClose;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSKUIDStruct)formulaOwnerUID;
-(TSCECalculationEngine *)calcEngine;
-(void)setCalculationEngine:(id)arg1 ;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(char)trackedReferencesExistForTable:(const TSKUIDStruct*)arg1 ;
-(id)beginTrackingNamesInTable:(const TSKUIDStruct*)arg1 limitedToRange:(TSCERangeCoordinate)arg2 ;
-(void)beginTrackingNamesInRange:(TSCERangeCoordinate)arg1 ofTableUID:(const TSKUIDStruct*)arg2 addingTrackedReferencesTo:(id)arg3 ;
-(void)beginTrackingNameInCell:(TSUCellCoord)arg1 ofTableUID:(const TSKUIDStruct*)arg2 addingTrackedReferencesTo:(id)arg3 ;
-(void)referencedCellWasModified:(id)arg1 ;
-(char)shouldRewriteOnSort;
-(char)shouldRewriteOnRangeMove;
-(char)shouldRewriteOnTectonicShift;
-(char)shouldRewriteOnCellMerge;
-(char)shouldRewriteOnTranspose;
-(char)shouldRewriteOnTableIDReassignment;
-(id)cellRangeWasInserted:(const TSCERangeRef*)arg1 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 ;
-(void)headerCellContentWasModified:(id)arg1 ;
-(void)beginTrackingNamesInTable:(const TSKUIDStruct*)arg1 ;
-(void)endTrackingNamesInTable:(const TSKUIDStruct*)arg1 ;
-(id)referenceTracker;
-(void)updateTrackedHeaders:(const TSKUIDStruct*)arg1 ;
@end

