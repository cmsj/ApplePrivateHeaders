/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCEFormulaOwning <NSObject>
@optional
-(TSCERecalculationState*)evaluateFormulaAt:(TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(TSCERecalculationState)arg3;
-(TSCERecalculationState*)multiEvaluateFormulasAt:(const TSCECellCoordSet*)arg1 withCalcEngine:(id)arg2 recalcOptions:(TSCERecalculationState)arg3;

@required
-(long long)evaluationMode;
-(TSKUIDStruct*)ownerUID;
-(unsigned short)ownerKind;
-(id)linkedResolver;
-(void)writeResultsForCalcEngine:(id)arg1;
-(void)invalidateForCalcEngine:(id)arg1;

@end

