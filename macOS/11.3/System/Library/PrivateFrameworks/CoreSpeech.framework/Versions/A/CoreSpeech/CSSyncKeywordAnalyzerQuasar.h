/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, _EARSyncSpeechRecognizer, NSDictionary;

@interface CSSyncKeywordAnalyzerQuasar : NSObject {

	NSMutableArray* _previousUtteranceTokens;
	NSArray* _lastReportedRecogResults;
	NSArray* _triggerTokenList;
	_EARSyncSpeechRecognizer* _syncRecognizer;
	char _useKeywordSpotting;
	double _triggerConfidence;
	unsigned long long _activeChannel;
	NSDictionary* _ctcKwdToPhraseIdMap;

}

@property (assign,nonatomic) double triggerConfidence;                        //@synthesize triggerConfidence=_triggerConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,retain) NSDictionary * ctcKwdToPhraseIdMap;              //@synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * phraseIdScores; 
+(void)dumpEARSpeechRecognitionResults:(id)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(unsigned long long)activeChannel;
-(void)_calculateTriggerConfidence:(id)arg1 ;
-(double)_getConfidence:(id)arg1 ;
-(id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(char)arg3 ;
-(void)resetWithLanguage:(id)arg1 withFarField:(unsigned char)arg2 withAudioSource:(id)arg3 ;
-(void)flushAudio;
-(NSDictionary *)phraseIdScores;
-(double)triggerConfidence;
-(void)setTriggerConfidence:(double)arg1 ;
-(NSDictionary *)ctcKwdToPhraseIdMap;
-(void)setCtcKwdToPhraseIdMap:(NSDictionary *)arg1 ;
@end

