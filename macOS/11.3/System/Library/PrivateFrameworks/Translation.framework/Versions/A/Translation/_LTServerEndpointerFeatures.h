/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _LTServerEndpointerFeatures : NSObject <NSSecureCoding> {

	long long _wordCount;
	long long _trailingSilenceDuration;
	double _eosLikelihood;
	NSArray* _pauseCounts;
	double _silencePosterior;
	long long _processedAudioDurationInMilliseconds;

}

@property (assign,nonatomic) long long wordCount;                                         //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) long long trailingSilenceDuration;                           //@synthesize trailingSilenceDuration=_trailingSilenceDuration - In the implementation block
@property (assign,nonatomic) double eosLikelihood;                                        //@synthesize eosLikelihood=_eosLikelihood - In the implementation block
@property (nonatomic,copy) NSArray * pauseCounts;                                         //@synthesize pauseCounts=_pauseCounts - In the implementation block
@property (assign,nonatomic) double silencePosterior;                                     //@synthesize silencePosterior=_silencePosterior - In the implementation block
@property (assign,nonatomic) long long processedAudioDurationInMilliseconds;              //@synthesize processedAudioDurationInMilliseconds=_processedAudioDurationInMilliseconds - In the implementation block
+(char)supportsSecureCoding;
+(id)GetDefaultEndpointerFeaturesForEndpointer:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)wordCount;
-(id)initWithResponse:(id)arg1 ;
-(void)setWordCount:(long long)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(NSArray *)pauseCounts;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(double)silencePosterior;
-(void)setSilencePosterior:(double)arg1 ;
-(long long)processedAudioDurationInMilliseconds;
-(void)setProcessedAudioDurationInMilliseconds:(long long)arg1 ;
@end
