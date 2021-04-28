/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSPronGuessStreamingRequest.h>

@class QSSStartPronGuessRequest, QSSAudioPacket, QSSFinishAudio, QSSCancelRequest;

@interface QSSMutablePronGuessStreamingRequest : QSSPronGuessStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) QSSStartPronGuessRequest * contentAsQSSStartPronGuessRequest; 
@property (nonatomic,copy) QSSAudioPacket * contentAsQSSAudioPacket; 
@property (nonatomic,copy) QSSFinishAudio * contentAsQSSFinishAudio; 
@property (nonatomic,copy) QSSCancelRequest * contentAsQSSCancelRequest; 
-(QSSStartPronGuessRequest *)contentAsQSSStartPronGuessRequest;
-(QSSAudioPacket *)contentAsQSSAudioPacket;
-(QSSFinishAudio *)contentAsQSSFinishAudio;
-(QSSCancelRequest *)contentAsQSSCancelRequest;
-(void)setContentAsQSSStartPronGuessRequest:(QSSStartPronGuessRequest *)arg1 ;
-(void)setContentAsQSSAudioPacket:(QSSAudioPacket *)arg1 ;
-(void)setContentAsQSSFinishAudio:(QSSFinishAudio *)arg1 ;
-(void)setContentAsQSSCancelRequest:(QSSCancelRequest *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
@end
