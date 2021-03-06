/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCEFormulaReplacing <NSObject>
@required
-(void)removeAllFormulasFromOwner:(const TSKUIDStruct*)arg1;
-(void)removeFormulaAt:(const TSUCellCoord*)arg1 inOwner:(const TSKUIDStruct*)arg2;
-(id)calcEngine;
-(void)replaceFormula:(id)arg1 atCellCoord:(const TSUCellCoord*)arg2 inOwner:(const TSKUIDStruct*)arg3;
-(void)replaceFormula:(id)arg1 atCellCoord:(const TSUCellCoord*)arg2 inOwner:(const TSKUIDStruct*)arg3 replaceOptions:(TSCEReplaceFormulaOptions)arg4;
-(void)removeFormulasAt:(const TSCECellRefSet*)arg1;
-(void)resetFormulaAt:(const TSCECellRef*)arg1;
-(void)markCellRefAsDirty:(const TSCECellRef*)arg1;
-(void)markRangeRefAsDirty:(const TSCERangeRef*)arg1;

@end

