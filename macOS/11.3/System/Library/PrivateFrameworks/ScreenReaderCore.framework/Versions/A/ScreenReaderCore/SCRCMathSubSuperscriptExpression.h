/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression {

	SCRCMathExpression* _base;
	SCRCMathExpression* _subscript;
	SCRCMathExpression* _superscript;

}

@property (nonatomic,retain) SCRCMathExpression * base;                     //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * subscript;                //@synthesize subscript=_subscript - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * superscript;              //@synthesize superscript=_superscript - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(char)isNumber;
-(SCRCMathExpression *)base;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(char)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLString;
-(id)subExpressions;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(char)isRangeSubSuperscript;
-(char)isBaseSubSuperscript;
-(void)setSubscript:(SCRCMathExpression *)arg1 ;
-(void)setSuperscript:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)subscript;
-(SCRCMathExpression *)superscript;
-(id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id*)arg3 ;
@end

