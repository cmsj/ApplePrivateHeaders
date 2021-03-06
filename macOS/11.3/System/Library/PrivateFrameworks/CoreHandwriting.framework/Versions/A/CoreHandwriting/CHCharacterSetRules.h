/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSCharacterSet, NSObject;

@interface CHCharacterSetRules : NSObject {

	NSCharacterSet* _lowercaseCharSet;
	NSCharacterSet* _uppercaseCharSet;
	NSCharacterSet* _digitCharSet;
	NSCharacterSet* _startPunctuationCharSet;
	NSCharacterSet* _middlePunctuationCharSet;
	NSCharacterSet* _endOfWordPunctuationCharSet;
	NSCharacterSet* _endOfSentencePunctuationCharSet;
	NSCharacterSet* _digitStartPunctuationCharSet;
	NSCharacterSet* _digitEndPunctuationCharSet;
	NSCharacterSet* _arithmeticOperatorCharSet;
	NSCharacterSet* _dateTimeSeparatorCharSet;
	NSCharacterSet* _dateTimeEndLetterCharSet;
	NSCharacterSet* _numeralEndLetterCharSet;
	NSCharacterSet* _lexiconSkipCharSet;
	NSCharacterSet* _containsDotCharSet;
	NSCharacterSet* _containsTwoDotsCharSet;
	NSCharacterSet* _prefixCapitalizationExceptionCharSet;
	NSCharacterSet* _selfLoopPunctuationCharSet;
	NSCharacterSet* _emoticonTopCharSet;
	NSCharacterSet* _emoticonMiddleCharSet;
	NSCharacterSet* _emoticonBottomCharSet;
	NSCharacterSet* _emailAtCharSet;
	NSCharacterSet* _emailPunctuationCharSet;
	NSCharacterSet* _urlPunctuationCharSet;
	NSCharacterSet* _nonSpaceSeparatorCharSet;
	NSCharacterSet* _punctuationThatNeedSpaceCleanup;
	NSCharacterSet* _currencySymbols;
	NSCharacterSet* _symbolsRequiringSpaceBeforeInFrench;
	NSCharacterSet* _sentenceStartPunctuationInSpanish;
	NSObject*<OS_dispatch_queue> __charSetRulesQueue;
	map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>>* _strokeMaxPenalties;
	map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>>* _signatureUniChar;

}

@property (nonatomic,retain) NSCharacterSet * lowercaseCharSet;                                     //@synthesize lowercaseCharSet=_lowercaseCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * uppercaseCharSet;                                     //@synthesize uppercaseCharSet=_uppercaseCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * digitCharSet;                                         //@synthesize digitCharSet=_digitCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * startPunctuationCharSet;                              //@synthesize startPunctuationCharSet=_startPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * middlePunctuationCharSet;                             //@synthesize middlePunctuationCharSet=_middlePunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * endOfWordPunctuationCharSet;                          //@synthesize endOfWordPunctuationCharSet=_endOfWordPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * endOfSentencePunctuationCharSet;                      //@synthesize endOfSentencePunctuationCharSet=_endOfSentencePunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * digitStartPunctuationCharSet;                         //@synthesize digitStartPunctuationCharSet=_digitStartPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * digitEndPunctuationCharSet;                           //@synthesize digitEndPunctuationCharSet=_digitEndPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * arithmeticOperatorCharSet;                            //@synthesize arithmeticOperatorCharSet=_arithmeticOperatorCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * dateTimeSeparatorCharSet;                             //@synthesize dateTimeSeparatorCharSet=_dateTimeSeparatorCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * dateTimeEndLetterCharSet;                             //@synthesize dateTimeEndLetterCharSet=_dateTimeEndLetterCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * numeralEndLetterCharSet;                              //@synthesize numeralEndLetterCharSet=_numeralEndLetterCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * lexiconSkipCharSet;                                   //@synthesize lexiconSkipCharSet=_lexiconSkipCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * containsDotCharSet;                                   //@synthesize containsDotCharSet=_containsDotCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * containsTwoDotsCharSet;                               //@synthesize containsTwoDotsCharSet=_containsTwoDotsCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * prefixCapitalizationExceptionCharSet;                 //@synthesize prefixCapitalizationExceptionCharSet=_prefixCapitalizationExceptionCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * selfLoopPunctuationCharSet;                           //@synthesize selfLoopPunctuationCharSet=_selfLoopPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emoticonTopCharSet;                                   //@synthesize emoticonTopCharSet=_emoticonTopCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emoticonMiddleCharSet;                                //@synthesize emoticonMiddleCharSet=_emoticonMiddleCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emoticonBottomCharSet;                                //@synthesize emoticonBottomCharSet=_emoticonBottomCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emailAtCharSet;                                       //@synthesize emailAtCharSet=_emailAtCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emailPunctuationCharSet;                              //@synthesize emailPunctuationCharSet=_emailPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * urlPunctuationCharSet;                                //@synthesize urlPunctuationCharSet=_urlPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * nonSpaceSeparatorCharSet;                             //@synthesize nonSpaceSeparatorCharSet=_nonSpaceSeparatorCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * punctuationThatNeedSpaceCleanup;                      //@synthesize punctuationThatNeedSpaceCleanup=_punctuationThatNeedSpaceCleanup - In the implementation block
@property (nonatomic,retain) NSCharacterSet * currencySymbols;                                      //@synthesize currencySymbols=_currencySymbols - In the implementation block
@property (nonatomic,retain) NSCharacterSet * symbolsRequiringSpaceBeforeInFrench;                  //@synthesize symbolsRequiringSpaceBeforeInFrench=_symbolsRequiringSpaceBeforeInFrench - In the implementation block
@property (nonatomic,retain) NSCharacterSet * sentenceStartPunctuationInSpanish;                    //@synthesize sentenceStartPunctuationInSpanish=_sentenceStartPunctuationInSpanish - In the implementation block
@property (assign,nonatomic) map<unsigned int strokeMaxPenalties;                                   //@synthesize strokeMaxPenalties=_strokeMaxPenalties - In the implementation block
@property (assign,nonatomic) map<unsigned int signatureUniChar;                                     //@synthesize signatureUniChar=_signatureUniChar - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _charSetRulesQueue;              //@synthesize _charSetRulesQueue=__charSetRulesQueue - In the implementation block
+(unsigned long long)expectedMinStrokeCount:(unsigned)arg1 ;
+(unsigned long long)characterType:(unsigned)arg1 ;
+(unsigned long long)expectedMaxDotCount:(unsigned)arg1 ;
+(unsigned long long)characterTypeFromString:(id)arg1 ;
+(id)sharedCharacterSetRules;
+(unsigned long long)expectedMaxStrokeCount:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_charSetRulesQueue;
-(unsigned long long)_expectedMaxStrokeCount:(unsigned)arg1 ;
-(unsigned long long)_expectedMinStrokeCount:(unsigned)arg1 ;
-(unsigned long long)_expectedMaxDotCount:(unsigned)arg1 ;
-(unsigned long long)_characterType:(unsigned)arg1 ;
-(NSCharacterSet *)lowercaseCharSet;
-(void)setLowercaseCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)uppercaseCharSet;
-(void)setUppercaseCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)digitCharSet;
-(void)setDigitCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)startPunctuationCharSet;
-(void)setStartPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)middlePunctuationCharSet;
-(void)setMiddlePunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)endOfWordPunctuationCharSet;
-(void)setEndOfWordPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)endOfSentencePunctuationCharSet;
-(void)setEndOfSentencePunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)digitStartPunctuationCharSet;
-(void)setDigitStartPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)digitEndPunctuationCharSet;
-(void)setDigitEndPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)arithmeticOperatorCharSet;
-(void)setArithmeticOperatorCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)dateTimeSeparatorCharSet;
-(void)setDateTimeSeparatorCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)dateTimeEndLetterCharSet;
-(void)setDateTimeEndLetterCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)numeralEndLetterCharSet;
-(void)setNumeralEndLetterCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)lexiconSkipCharSet;
-(void)setLexiconSkipCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)containsDotCharSet;
-(void)setContainsDotCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)containsTwoDotsCharSet;
-(void)setContainsTwoDotsCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)prefixCapitalizationExceptionCharSet;
-(void)setPrefixCapitalizationExceptionCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)selfLoopPunctuationCharSet;
-(void)setSelfLoopPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emoticonTopCharSet;
-(void)setEmoticonTopCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emoticonMiddleCharSet;
-(void)setEmoticonMiddleCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emoticonBottomCharSet;
-(void)setEmoticonBottomCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emailAtCharSet;
-(void)setEmailAtCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emailPunctuationCharSet;
-(void)setEmailPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)urlPunctuationCharSet;
-(void)setUrlPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)nonSpaceSeparatorCharSet;
-(void)setNonSpaceSeparatorCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)punctuationThatNeedSpaceCleanup;
-(void)setPunctuationThatNeedSpaceCleanup:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)currencySymbols;
-(void)setCurrencySymbols:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)symbolsRequiringSpaceBeforeInFrench;
-(void)setSymbolsRequiringSpaceBeforeInFrench:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)sentenceStartPunctuationInSpanish;
-(void)setSentenceStartPunctuationInSpanish:(NSCharacterSet *)arg1 ;
-(map<unsigned int)strokeMaxPenalties;
-(void)setStrokeMaxPenalties:(map<unsigned int)arg1 ;
-(map<unsigned int)signatureUniChar;
-(void)setSignatureUniChar:(map<unsigned int)arg1 ;
@end

