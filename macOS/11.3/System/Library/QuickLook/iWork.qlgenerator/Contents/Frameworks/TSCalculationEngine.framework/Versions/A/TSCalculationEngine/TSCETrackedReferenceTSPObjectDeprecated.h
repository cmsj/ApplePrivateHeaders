/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSPersistence/TSPObject.h>

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {

	TSCEASTNodeArray* mAST;
	SCD_Struct_TS216 mFormulaID;

}
-(void)dealloc;
-(void)saveToArchiver:(id)arg1 ;
-(void)encodeToArchive:(TrackedReferenceArchive*)arg1 ;
-(char)validatedLoadFromUnarchiver:(id)arg1 ;
-(TSCEASTNodeArray*)ast;
-(SCD_Struct_TS216)formulaID;
@end

