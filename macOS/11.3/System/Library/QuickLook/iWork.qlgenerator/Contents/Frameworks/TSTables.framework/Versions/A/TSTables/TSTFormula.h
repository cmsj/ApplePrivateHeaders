/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTExpressionNode, TSCECalculationEngine, TSTTableInfo, NSString, TSCEFormulaObject;

@interface TSTFormula : NSObject <NSCopying> {

	TSTExpressionNode* _expressionTree;
	TSCECalculationEngine* _calculationEngine;
	TSTTableInfo* _hostInfo;
	NSString* _initialWhitespace;
	TSUModelCellCoord _hostCell;
	char _syntaxError;
	char _fixupFormulas;
	char _formulaWasFixable;
	char _formulaFixupsShouldStick;
	char _empty;

}

@property (assign,nonatomic,__weak) TSCECalculationEngine * calculationEngine;              //@synthesize calculationEngine=_calculationEngine - In the implementation block
@property (assign,getter=isSyntaxError,nonatomic) char syntaxError;                         //@synthesize syntaxError=_syntaxError - In the implementation block
@property (nonatomic,copy) NSString * initialWhitespace;                                    //@synthesize initialWhitespace=_initialWhitespace - In the implementation block
@property (nonatomic,readonly) TSCEFormulaObject * formula; 
@property (nonatomic,readonly) TSCEFormulaObject * geometricFormula; 
@property (assign,nonatomic) char fixupFormulas;                                            //@synthesize fixupFormulas=_fixupFormulas - In the implementation block
@property (nonatomic,readonly) char formulaWasFixable;                                      //@synthesize formulaWasFixable=_formulaWasFixable - In the implementation block
@property (nonatomic,readonly) char formulaFixupsShouldStick;                               //@synthesize formulaFixupsShouldStick=_formulaFixupsShouldStick - In the implementation block
@property (nonatomic,retain) TSTExpressionNode * expressionTree;                            //@synthesize expressionTree=_expressionTree - In the implementation block
@property (assign,getter=isEmpty,nonatomic) char empty;                                     //@synthesize empty=_empty - In the implementation block
+(id)formulaForCell:(id)arg1 atCellID:(TSUViewCellCoord)arg2 inTable:(id)arg3 ;
+(char)storageExceedsMaxFormulaLength:(id)arg1 ;
+(id)singleQuoteCharacters;
+(id)doubleQuoteCharacters;
+(int)quoteContextAtCharIndex:(unsigned long long)arg1 previousContext:(int)arg2 inStorage:(id)arg3 ;
+(unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 unmatchedParenCount:(unsigned long long)arg2 quoteContext:(int)arg3 inStorage:(id)arg4 ;
+(id)leftParenCharacters;
+(id)rightParenCharacters;
+(id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+(id)leadingSingleQuoteEscapeCharacters;
+(char)isFormulaEqualsCharacter:(unsigned short)arg1 ;
+(int)formulaQuoteContextAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2 ;
+(unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(char)isEmpty;
-(void)reset;
-(TSCEFormulaObject *)formula;
-(void)setEmpty:(char)arg1 ;
-(TSCECalculationEngine *)calculationEngine;
-(id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 baseHostCell:(TSUModelCellCoord)arg3 hostTable:(id)arg4 ;
-(TSTExpressionNode *)expressionTree;
-(TSCEFormulaObject *)geometricFormula;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 baseHostCell:(TSUModelCellCoord)arg3 formula:(id)arg4 ownerUID:(const TSKUIDStruct*)arg5 ;
-(void)setCalculationEngine:(TSCECalculationEngine *)arg1 ;
-(char)isSyntaxError;
-(id)formulaPlainText;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 viewHostCell:(TSUViewCellCoord)arg3 formula:(id)arg4 ownerUID:(const TSKUIDStruct*)arg5 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 baseHostCell:(TSUModelCellCoord)arg3 formula:(id)arg4 ownerUID:(const TSKUIDStruct*)arg5 suppressAutomaticNamedReferenceInvalidation:(char)arg6 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 viewHostCell:(TSUViewCellCoord)arg3 formula:(id)arg4 ownerUID:(const TSKUIDStruct*)arg5 suppressAutomaticNamedReferenceInvalidation:(char)arg6 ;
-(id)initWithCalculationEngine:(id)arg1 baseHostCell:(TSUModelCellCoord)arg2 hostTable:(id)arg3 ;
-(void)setExpressionTree:(TSTExpressionNode *)arg1 ;
-(void)setInitialWhitespace:(NSString *)arg1 ;
-(void)setSyntaxError:(char)arg1 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 adjustExpressionTree:(/*^block*/id)arg2 ;
-(id)p_fixFormula:(id)arg1 ;
-(void)fixPreserveFlagsForCategoryRefInNode:(id)arg1 ;
-(id)p_formulaAsTextReturningTokenValues:(char)arg1 ;
-(id)initWithCalculationEngine:(id)arg1 viewHostCell:(TSUViewCellCoord)arg2 hostTable:(id)arg3 ;
-(char)hasBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 ;
-(id)formulaDetokenizedText;
-(char)canSimplify;
-(id)simplify;
-(char)fixupFormulas;
-(void)setFixupFormulas:(char)arg1 ;
-(char)formulaWasFixable;
-(char)formulaFixupsShouldStick;
-(NSString *)initialWhitespace;
@end
