/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSString;

@interface _LTSpeechTranscription : NSObject <NSSecureCoding> {

	char _lowConfidence;
	NSLocale* _locale;
	NSString* _formattedString;
	NSString* _sanitizedFormattedString;
	double _minConfidence;
	double _maxConfidence;
	double _confidence;

}

@property (nonatomic,copy) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double minConfidence;                                   //@synthesize minConfidence=_minConfidence - In the implementation block
@property (assign,nonatomic) double maxConfidence;                                   //@synthesize maxConfidence=_maxConfidence - In the implementation block
@property (nonatomic,copy) NSString * formattedString;                               //@synthesize formattedString=_formattedString - In the implementation block
@property (assign,getter=isLowConfidence,nonatomic) char lowConfidence;              //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,copy) NSString * sanitizedFormattedString;                      //@synthesize sanitizedFormattedString=_sanitizedFormattedString - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(double)confidence;
-(char)isLowConfidence;
-(void)setConfidence:(double)arg1 ;
-(double)minConfidence;
-(NSString *)formattedString;
-(void)setFormattedString:(NSString *)arg1 ;
-(void)setLowConfidence:(char)arg1 ;
-(double)maxConfidence;
-(void)setMinConfidence:(double)arg1 ;
-(void)setMaxConfidence:(double)arg1 ;
-(id)initWithRecognitionChoice:(id)arg1 inSausage:(id)arg2 ;
-(void)setSanitizedFormattedString:(NSString *)arg1 ;
-(NSString *)sanitizedFormattedString;
-(id)initWithFormattedString:(id)arg1 locale:(id)arg2 confidence:(double)arg3 minConfidence:(double)arg4 maxConfidence:(double)arg5 ;
@end

