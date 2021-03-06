/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBeginTextToSpeechStreamingResponse.h>

@class NSString, FTAudioDescription, FTTextToSpeechMeta;

@interface FTMutableBeginTextToSpeechStreamingResponse : FTBeginTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) long long audio_type; 
@property (nonatomic,copy) FTAudioDescription * decoder_description; 
@property (nonatomic,copy) FTAudioDescription * playback_description; 
@property (nonatomic,copy) FTTextToSpeechMeta * meta_info; 
@property (assign,nonatomic) float streaming_playback_buffer_size_in_seconds; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(FTAudioDescription *)decoder_description;
-(void)setMeta_info:(FTTextToSpeechMeta *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(FTTextToSpeechMeta *)meta_info;
-(long long)audio_type;
-(void)setAudio_type:(long long)arg1 ;
-(void)setDecoder_description:(FTAudioDescription *)arg1 ;
-(FTAudioDescription *)playback_description;
-(void)setPlayback_description:(FTAudioDescription *)arg1 ;
-(NSString *)stream_id;
-(void)setStream_id:(NSString *)arg1 ;
-(float)streaming_playback_buffer_size_in_seconds;
-(void)setStreaming_playback_buffer_size_in_seconds:(float)arg1 ;
@end

