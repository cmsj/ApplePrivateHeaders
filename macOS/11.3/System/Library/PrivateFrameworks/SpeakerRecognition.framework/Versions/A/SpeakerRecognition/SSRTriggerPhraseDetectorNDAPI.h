/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRTriggerPhraseDetectorNDAPI : NSObject {

	void* _novDetect;
	unsigned long long _phraseId;

}
-(void)dealloc;
-(void)reset;
-(id)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 phraseId:(unsigned long long)arg3 ;
@end

