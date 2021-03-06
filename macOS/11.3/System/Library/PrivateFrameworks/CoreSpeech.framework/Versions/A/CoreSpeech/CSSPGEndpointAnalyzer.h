/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSPGEndpointAnalyzerDelegate;
@interface CSSPGEndpointAnalyzer : NSObject {

	id<CSSPGEndpointAnalyzerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSSPGEndpointAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSSPGEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<CSSPGEndpointAnalyzerDelegate>)arg1 ;
-(void)start;
-(void)reset;
-(void)stop;
-(id)initWithAnalyzeMode;
-(long long)getFrameDurationMs;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)initWithEndpointThreshold:(float)arg1 ;
@end

