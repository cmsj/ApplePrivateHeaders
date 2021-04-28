/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSCEFormulaOwning.h>

@class TSCECalculationEngine, TSTTableInfo, TSTCellDictionary, NSString;

@interface TSTCategoryAggregateFormulaOwner : NSObject <TSCEFormulaOwning> {

	TSCECalculationEngine* _calcEngine;
	TSTTableInfo* _tableInfo;
	TSKUIDStruct _tableUID;
	TSKUIDStruct _ownerUID;
	TSTCellDictionary* _cellsPendingWrite;

}

@property (assign,nonatomic) const TSKUIDStruct* tableUID;                         //@synthesize tableUID=_tableUID - In the implementation block
@property (assign,nonatomic) const TSKUIDStruct* ownerUID;                         //@synthesize ownerUID=_ownerUID - In the implementation block
@property (assign,nonatomic,__weak) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTCellDictionary * cellsPendingWrite;              //@synthesize cellsPendingWrite=_cellsPendingWrite - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)evaluationMode;
-(TSTTableInfo *)tableInfo;
-(TSTCellDictionary *)cellsPendingWrite;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(const TSKUIDStruct*)tableUID;
-(const TSKUIDStruct*)ownerUID;
-(unsigned short)ownerKind;
-(id)linkedResolver;
-(void)writeResultsForCalcEngine:(id)arg1 ;
-(void)invalidateForCalcEngine:(id)arg1 ;
-(TSCERecalculationState)evaluateFormulaAt:(TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(TSCERecalculationState)arg3 ;
-(void)setTableUID:(const TSKUIDStruct*)arg1 ;
-(void)setOwnerUID:(const TSKUIDStruct*)arg1 ;
-(void)unregisterFromCalcEngine;
-(char)isRegisteredWithCalcEngine:(id)arg1 ;
-(int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const TSKUIDStruct*)arg2 ;
-(id)initWithTableUID:(const TSKUIDStruct*)arg1 ownerUID:(const TSKUIDStruct*)arg2 ;
@end
