/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/Versions/A/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTKeywordDetectorDelegate;
@class NSMutableArray, VTKeywordDetectorAssets, VTKeywordDetectorContext;

@interface VTKeywordDetector : NSObject {

	NSMutableArray* _analyzers;
	VTKeywordDetectorAssets* _asset;
	VTKeywordDetectorContext* _context;
	id<VTKeywordDetectorDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableArray * analyzers;                                 //@synthesize analyzers=_analyzers - In the implementation block
@property (nonatomic,retain) VTKeywordDetectorAssets * asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) VTKeywordDetectorContext * context;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<VTKeywordDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VTKeywordDetectorDelegate>)delegate;
-(void)setDelegate:(id<VTKeywordDetectorDelegate>)arg1 ;
-(VTKeywordDetectorContext *)context;
-(void)setContext:(VTKeywordDetectorContext *)arg1 ;
-(VTKeywordDetectorAssets *)asset;
-(void)setAsset:(VTKeywordDetectorAssets *)arg1 ;
-(void)endAudio;
-(id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id*)arg3 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(id)_fetchResults;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getKeywordDetectorResults;
-(id)_analyzeAndConstructFinalResults:(id)arg1 ;
-(float)_getScoreForPhraseId:(unsigned long long)arg1 withScaleFactor:(float)arg2 fromResults:(id)arg3 ;
-(void)resetWithSamplingRate:(long long)arg1 withAudioSource:(id)arg2 ;
-(id)getKeywordDetectorDetailedResults;
-(NSMutableArray *)analyzers;
-(void)setAnalyzers:(NSMutableArray *)arg1 ;
@end

