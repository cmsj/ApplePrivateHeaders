/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSCalculationEngine/TSCEFormulaReplacing.h>

@class TSCEFormulasToSet, TSCECalculationEngine, NSString;

@interface TSCEUpgradingTablesMinion : NSObject <TSCEFormulaReplacing> {

	TSCEFormulasToSet* _formulasToSet;

}

@property (nonatomic,readonly) TSCECalculationEngine * calcEngine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(void)removeAllFormulasFromOwner:(const TSKUIDStruct*)arg1 ;
-(void)removeFormulaAt:(const TSUCellCoord*)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(TSCECalculationEngine *)calcEngine;
-(void)replaceFormula:(id)arg1 atCellCoord:(const TSUCellCoord*)arg2 inOwner:(const TSKUIDStruct*)arg3 ;
-(void)replaceFormula:(id)arg1 atCellCoord:(const TSUCellCoord*)arg2 inOwner:(const TSKUIDStruct*)arg3 replaceOptions:(TSCEReplaceFormulaOptions)arg4 ;
-(void)removeFormulasAt:(const TSCECellRefSet*)arg1 ;
-(void)resetFormulaAt:(const TSCECellRef*)arg1 ;
-(void)markCellRefAsDirty:(const TSCECellRef*)arg1 ;
-(void)markRangeRefAsDirty:(const TSCERangeRef*)arg1 ;
-(id)initWithCalcEngine:(id)arg1 ;
@end

