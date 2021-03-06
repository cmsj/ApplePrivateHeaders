/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTExpressionNode.h>

@interface TSTDurationNode : TSTExpressionNode {

	char _blank;
	TSTDurationWrapper _value;

}

@property (assign,nonatomic) TSTDurationWrapper value;               //@synthesize value=_value - In the implementation block
@property (assign,getter=isBlank,nonatomic) char blank;              //@synthesize blank=_blank - In the implementation block
-(id)description;
-(id)string;
-(id)date;
-(TSTDurationWrapper)value;
-(void)setValue:(TSTDurationWrapper)arg1 ;
-(id)format;
-(int)tokenType;
-(void)setBlank:(char)arg1 ;
-(void)saveToArchive:(DurationNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const DurationNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isEqualToExpressionNode:(id)arg1 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)exportString;
-(id)initWithContext:(id)arg1 duration:(TSTDurationWrapper)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initWithContext:(id)arg1 asBlank:(char)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(TSTDurationWrapper)durationWrapper;
-(char)isBlank;
@end

