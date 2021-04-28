/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/Versions/A/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTKeywordAnalyzer.h>

@class NSMutableData, VTKeywordAnalyzerResults, NSString;

@interface VTKeywordAnalyzerNDEAPI : NSObject <VTKeywordAnalyzer> {

	void* _ndeObject;
	NSMutableData* _currentBlob;
	VTKeywordAnalyzerResults* _lastResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithBlob:(id)arg1 ;
-(void)endAudio;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)resetWithLanguage:(id)arg1 withSamplingRate:(long long)arg2 withAudioSource:(id)arg3 ;
-(void)processFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getDetailedResults;
-(id)getAnalyzerType;
-(id)_checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2 ;
@end
