/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPostprocessingStep.h>

@class CVNLPDecodingLanguageModel;

@interface CHTransliterateFrenchLigaturesStep : CHPostprocessingStep {

	CVNLPDecodingLanguageModel* _characterLM;
	const LXLexiconRef _staticLexicon;

}

@property (assign,nonatomic) CVNLPDecodingLanguageModel * characterLM;              //@synthesize characterLM=_characterLM - In the implementation block
@property (assign,nonatomic) const LXLexiconRef staticLexicon;                      //@synthesize staticLexicon=_staticLexicon - In the implementation block
-(id)process:(id)arg1 ;
-(const LXLexiconRef)staticLexicon;
-(void)setStaticLexicon:(const LXLexiconRef)arg1 ;
-(id)initWithCharacterLM:(id)arg1 staticLexicon:(LXLexiconRef)arg2 ;
-(id)handleFrenchLigaturesInToken:(id)arg1 ;
-(CVNLPDecodingLanguageModel *)characterLM;
-(void)setCharacterLM:(CVNLPDecodingLanguageModel *)arg1 ;
@end

