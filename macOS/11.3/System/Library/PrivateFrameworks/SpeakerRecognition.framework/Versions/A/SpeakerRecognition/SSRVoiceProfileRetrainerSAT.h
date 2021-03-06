/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSRVoiceProfileRetrainer.h>

@protocol OS_dispatch_queue;
@class NSURL, SSRSpeakerRecognitionScorer, SSRVoiceProfile, NSDictionary, NSData, NSObject, NSString;

@interface SSRVoiceProfileRetrainerSAT : NSObject <SSRVoiceProfileRetrainer> {

	unsigned long long _maximumSpeakerVectors;
	float _bestTriggerScore;
	SSRSpeakerRecognitionScorer* _satScorer;
	SSRVoiceProfile* _voiceProfile;
	NSURL* _configFilePath;
	NSURL* _resourceFilePath;
	NSURL* _satModelFilePath;
	unsigned long long _spIdType;
	NSDictionary* _comparativeModels;
	NSData* _superVector;
	unsigned long long _superVectorSize;
	unsigned long long _processedAudioDurationMs;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) SSRSpeakerRecognitionScorer * satScorer;                  //@synthesize satScorer=_satScorer - In the implementation block
@property (nonatomic,retain) SSRVoiceProfile * voiceProfile;                           //@synthesize voiceProfile=_voiceProfile - In the implementation block
@property (nonatomic,retain) NSURL * configFilePath;                                   //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,retain) NSURL * resourceFilePath;                                 //@synthesize resourceFilePath=_resourceFilePath - In the implementation block
@property (nonatomic,retain) NSURL * satModelFilePath;                                 //@synthesize satModelFilePath=_satModelFilePath - In the implementation block
@property (assign,nonatomic) unsigned long long spIdType;                              //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,retain) NSDictionary * comparativeModels;                         //@synthesize comparativeModels=_comparativeModels - In the implementation block
@property (nonatomic,retain) NSData * superVector;                                     //@synthesize superVector=_superVector - In the implementation block
@property (assign,nonatomic) unsigned long long superVectorSize;                       //@synthesize superVectorSize=_superVectorSize - In the implementation block
@property (assign,nonatomic) unsigned long long processedAudioDurationMs;              //@synthesize processedAudioDurationMs=_processedAudioDurationMs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSURL * modelFilePath; 
@property (nonatomic,readonly) char implicitTrainingRequired; 
@property (nonatomic,readonly) unsigned long long retrainerType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)modelFilePath;
-(unsigned long long)processedAudioDurationMs;
-(void)setProcessedAudioDurationMs:(unsigned long long)arg1 ;
-(NSURL *)configFilePath;
-(NSURL *)resourceFilePath;
-(void)setConfigFilePath:(NSURL *)arg1 ;
-(void)setResourceFilePath:(NSURL *)arg1 ;
-(SSRVoiceProfile *)voiceProfile;
-(unsigned long long)spIdType;
-(id)_processAudioFile:(id)arg1 withSATProcessor:(id)arg2 ;
-(id)_processSuperVector:(id)arg1 withSize:(unsigned long long)arg2 withScorers:(id)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(id)initWithVoiceRetrainingContext:(id)arg1 ;
-(char)resetModelForRetraining;
-(void)addUtterances:(id)arg1 withPolicy:(/*^block*/id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(char)needsRetrainingWithAudioFiles:(id)arg1 ;
-(void)purgeLastSpeakerEmbedding;
-(id)purgeConfusionInformationWithPolicy:(/*^block*/id)arg1 ;
-(char)implicitTrainingRequired;
-(unsigned long long)retrainerType;
-(SSRSpeakerRecognitionScorer *)satScorer;
-(void)setSatScorer:(SSRSpeakerRecognitionScorer *)arg1 ;
-(void)setVoiceProfile:(SSRVoiceProfile *)arg1 ;
-(NSURL *)satModelFilePath;
-(void)setSatModelFilePath:(NSURL *)arg1 ;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(NSDictionary *)comparativeModels;
-(void)setComparativeModels:(NSDictionary *)arg1 ;
-(NSData *)superVector;
-(void)setSuperVector:(NSData *)arg1 ;
-(unsigned long long)superVectorSize;
-(void)setSuperVectorSize:(unsigned long long)arg1 ;
@end

