/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionProgress, FTRecognitionCandidate, FTRequestStatsResponse, FTServerEndpointFeatures, FTClientSetupInfo, FTAudioLimitExceeded, FTFinalBlazarResponse;

@interface FTMultiUserStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const MultiUserStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTFinalSpeechRecognitionResponse * contentAsFTFinalSpeechRecognitionResponse; 
@property (nonatomic,readonly) FTPartialSpeechRecognitionResponse * contentAsFTPartialSpeechRecognitionResponse; 
@property (nonatomic,readonly) FTRecognitionProgress * contentAsFTRecognitionProgress; 
@property (nonatomic,readonly) FTRecognitionCandidate * contentAsFTRecognitionCandidate; 
@property (nonatomic,readonly) FTRequestStatsResponse * contentAsFTRequestStatsResponse; 
@property (nonatomic,readonly) FTServerEndpointFeatures * contentAsFTServerEndpointFeatures; 
@property (nonatomic,readonly) FTClientSetupInfo * contentAsFTClientSetupInfo; 
@property (nonatomic,readonly) FTAudioLimitExceeded * contentAsFTAudioLimitExceeded; 
@property (nonatomic,readonly) FTFinalBlazarResponse * contentAsFTFinalBlazarResponse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const MultiUserStreamingResponse*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::qss_fb::MultiUserStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const MultiUserStreamingResponse*)arg2 ;
-(long long)content_type;
-(FTFinalBlazarResponse *)contentAsFTFinalBlazarResponse;
-(FTFinalSpeechRecognitionResponse *)contentAsFTFinalSpeechRecognitionResponse;
-(FTPartialSpeechRecognitionResponse *)contentAsFTPartialSpeechRecognitionResponse;
-(FTRecognitionProgress *)contentAsFTRecognitionProgress;
-(FTRecognitionCandidate *)contentAsFTRecognitionCandidate;
-(FTRequestStatsResponse *)contentAsFTRequestStatsResponse;
-(FTServerEndpointFeatures *)contentAsFTServerEndpointFeatures;
-(FTClientSetupInfo *)contentAsFTClientSetupInfo;
-(FTAudioLimitExceeded *)contentAsFTAudioLimitExceeded;
@end

