/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTFormulaPredicate;

@interface TSTTableFilterRule : NSObject <NSCopying> {

	char _doesNotNeedFormulaRewriteForImport;
	TSTFormulaPredicate* _predicate;

}

@property (nonatomic,retain) TSTFormulaPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) char doesNotNeedFormulaRewriteForImport;              //@synthesize doesNotNeedFormulaRewriteForImport=_doesNotNeedFormulaRewriteForImport - In the implementation block
+(id)ruleWithFormulaPredicate:(id)arg1 ;
+(id)ruleWhereValuesInTable:(id)arg1 inBaseColumn:(TSUModelColumnIndex)arg2 matchCell:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TSTFormulaPredicate *)predicate;
-(void)setPredicate:(TSTFormulaPredicate *)arg1 ;
-(id)formula;
-(void)encodeToArchive:(FilterRuleArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FilterRuleArchive*)arg1 ;
-(char)needsFormulaRewriteForImport;
-(char)needsThreshold;
-(TSUModelColumnIndex)baseColumnIndexForFilterRuleInTableInfo:(id)arg1 ;
-(id)initWithFormulaPredicate:(id)arg1 ;
-(id)initRuleWhereValuesInTable:(id)arg1 inBaseColumn:(TSUModelColumnIndex)arg2 matchCell:(id)arg3 ;
-(id)copyByRewritingToUidFormWithTableInfo:(id)arg1 ;
-(id)copyByRewritingToGeometricFormWithTableInfo:(id)arg1 containsBadRef:(char*)arg2 ;
-(void)setDoesNotNeedFormulaRewriteForImport;
-(char)matchesRow:(unsigned)arg1 withFormulaTableUID:(const TSKUIDStruct*)arg2 withCalculationEngine:(id)arg3 ;
-(char)matchesCell:(id)arg1 ;
-(char)doesNotNeedFormulaRewriteForImport;
-(void)setDoesNotNeedFormulaRewriteForImport:(char)arg1 ;
@end

