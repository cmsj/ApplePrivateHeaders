/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageDetectorAudioBuffer : NSObject {

	shared_ptr<quasar::RecogAudioBuffer>* _buffer;

}
-(void)endAudio;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)addAudioSampleData:(id)arg1 ;
-(id)_initWithAudioBuffer:(const shared_ptr<quasar::RecogAudioBuffer>*)arg1 ;
@end

