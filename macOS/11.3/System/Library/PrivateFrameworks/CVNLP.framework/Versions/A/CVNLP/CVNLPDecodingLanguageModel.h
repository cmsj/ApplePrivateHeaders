/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/Versions/A/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPInformationStream.h>

@class NSLocale;

@interface CVNLPDecodingLanguageModel : CVNLPInformationStream {

	int _lmSPIType;
	NSLocale* _locale;
	void* _languageModel;

}

@property (nonatomic,readonly) NSLocale * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) void* languageModel;              //@synthesize languageModel=_languageModel - In the implementation block
+(id)_decodingLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 type:(int)arg5 ;
+(unsigned)_normalizedLMTokenIDForWord:(id)arg1 withTokenID:(unsigned)arg2 sourceLanguageModel:(id)arg3 outScore:(double*)arg4 ;
+(id)decodingLMLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3 ;
+(id)decodingCVNLPLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3 ;
-(void)dealloc;
-(NSLocale *)locale;
-(id)_initWithLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 type:(int)arg5 ;
-(id)initWithLanguageModel:(void*)arg1 locale:(id)arg2 ;
-(long long)requiredContextLengthForStringLength:(long long)arg1 ;
-(void*)languageModel;
-(id)initWithLMLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 ;
-(id)initWithLMLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 ;
-(id)initWithCVNLPLanguageModel:(CVNLPLanguageModelRef)arg1 locale:(id)arg2 decodingWeight:(id)arg3 ;
-(id)initWithCVNLPLanguageModel:(CVNLPLanguageModelRef)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 ;
-(id)initWithLanguageModel:(void*)arg1 ;
-(int)lmSPIType;
-(vector<unsigned int, std::__1::allocator<unsigned int>>*)characterTokenIDsForString:(id)arg1 ;
-(vector<unsigned int, std::__1::allocator<unsigned int>>*)wordTokenIDsForString:(id)arg1 outTokenRanges:(id*)arg2 ;
@end

