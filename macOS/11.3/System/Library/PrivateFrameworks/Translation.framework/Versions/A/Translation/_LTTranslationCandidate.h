/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _LTTranslationStatistics;

@interface _LTTranslationCandidate : NSObject <NSSecureCoding> {

	char _lowConfidence;
	NSString* _formattedString;
	NSString* _sanitizedFormattedString;
	double _confidence;
	NSArray* _preToPostITN;
	NSArray* _tokens;
	NSArray* _senses;
	_LTTranslationStatistics* _statistics;
	NSArray* _proToPostITN;

}

@property (assign,nonatomic) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (assign,getter=isLowConfidence,nonatomic) char lowConfidence;              //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                                         //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy) NSString * formattedString;                               //@synthesize formattedString=_formattedString - In the implementation block
@property (nonatomic,copy) NSString * sanitizedFormattedString;                      //@synthesize sanitizedFormattedString=_sanitizedFormattedString - In the implementation block
@property (nonatomic,copy) NSArray * proToPostITN;                                   //@synthesize proToPostITN=_proToPostITN - In the implementation block
@property (nonatomic,copy) NSArray * senses;                                         //@synthesize senses=_senses - In the implementation block
@property (nonatomic,copy) _LTTranslationStatistics * statistics;                    //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,readonly) NSArray * preToPostITN;                               //@synthesize preToPostITN=_preToPostITN - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_LTTranslationStatistics *)statistics;
-(double)confidence;
-(char)isLowConfidence;
-(void)setConfidence:(double)arg1 ;
-(void)setStatistics:(_LTTranslationStatistics *)arg1 ;
-(NSArray *)tokens;
-(NSString *)formattedString;
-(void)setFormattedString:(NSString *)arg1 ;
-(void)setTokens:(NSArray *)arg1 ;
-(void)setLowConfidence:(char)arg1 ;
-(NSArray *)senses;
-(void)setSenses:(NSArray *)arg1 ;
-(void)updateWithEngineMeta:(id)arg1 locale:(id)arg2 ;
-(id)initWithOspreyPhrase:(id)arg1 ;
-(id)initWithOspreyMtResponsePhrase:(id)arg1 locale:(id)arg2 ;
-(void)setSanitizedFormattedString:(NSString *)arg1 ;
-(id)initWithFormattedString:(id)arg1 sanitizedFormattedString:(id)arg2 confidence:(double)arg3 lowConfidence:(char)arg4 tokens:(id)arg5 preToPostITN:(id)arg6 ;
-(NSString *)sanitizedFormattedString;
-(NSArray *)preToPostITN;
-(NSArray *)proToPostITN;
-(void)setProToPostITN:(NSArray *)arg1 ;
@end

