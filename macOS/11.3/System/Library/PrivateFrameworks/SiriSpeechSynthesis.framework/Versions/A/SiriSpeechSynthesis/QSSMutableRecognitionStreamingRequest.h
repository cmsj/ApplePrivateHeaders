/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSRecognitionStreamingRequest.h>

@class QSSStartSpeechRequest, QSSUpdateAudioInfo, QSSSetRequestOrigin, QSSSetSpeechContext, QSSSetSpeechProfile, QSSSetEndpointerState, QSSAudioPacket, QSSFinishAudio, QSSResetServerEndpointer, QSSCheckForSpeechRequest, QSSSetAlternateRecognitionSausage;

@interface QSSMutableRecognitionStreamingRequest : QSSRecognitionStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) QSSStartSpeechRequest * contentAsQSSStartSpeechRequest; 
@property (nonatomic,copy) QSSUpdateAudioInfo * contentAsQSSUpdateAudioInfo; 
@property (nonatomic,copy) QSSSetRequestOrigin * contentAsQSSSetRequestOrigin; 
@property (nonatomic,copy) QSSSetSpeechContext * contentAsQSSSetSpeechContext; 
@property (nonatomic,copy) QSSSetSpeechProfile * contentAsQSSSetSpeechProfile; 
@property (nonatomic,copy) QSSSetEndpointerState * contentAsQSSSetEndpointerState; 
@property (nonatomic,copy) QSSAudioPacket * contentAsQSSAudioPacket; 
@property (nonatomic,copy) QSSFinishAudio * contentAsQSSFinishAudio; 
@property (nonatomic,copy) QSSResetServerEndpointer * contentAsQSSResetServerEndpointer; 
@property (nonatomic,copy) QSSCheckForSpeechRequest * contentAsQSSCheckForSpeechRequest; 
@property (nonatomic,copy) QSSSetAlternateRecognitionSausage * contentAsQSSSetAlternateRecognitionSausage; 
-(QSSAudioPacket *)contentAsQSSAudioPacket;
-(QSSFinishAudio *)contentAsQSSFinishAudio;
-(QSSStartSpeechRequest *)contentAsQSSStartSpeechRequest;
-(QSSUpdateAudioInfo *)contentAsQSSUpdateAudioInfo;
-(QSSSetRequestOrigin *)contentAsQSSSetRequestOrigin;
-(QSSSetSpeechContext *)contentAsQSSSetSpeechContext;
-(QSSSetSpeechProfile *)contentAsQSSSetSpeechProfile;
-(QSSSetEndpointerState *)contentAsQSSSetEndpointerState;
-(QSSResetServerEndpointer *)contentAsQSSResetServerEndpointer;
-(QSSCheckForSpeechRequest *)contentAsQSSCheckForSpeechRequest;
-(QSSSetAlternateRecognitionSausage *)contentAsQSSSetAlternateRecognitionSausage;
-(void)setContentAsQSSAudioPacket:(QSSAudioPacket *)arg1 ;
-(void)setContentAsQSSFinishAudio:(QSSFinishAudio *)arg1 ;
-(void)setContentAsQSSStartSpeechRequest:(QSSStartSpeechRequest *)arg1 ;
-(void)setContentAsQSSUpdateAudioInfo:(QSSUpdateAudioInfo *)arg1 ;
-(void)setContentAsQSSSetRequestOrigin:(QSSSetRequestOrigin *)arg1 ;
-(void)setContentAsQSSSetSpeechContext:(QSSSetSpeechContext *)arg1 ;
-(void)setContentAsQSSSetSpeechProfile:(QSSSetSpeechProfile *)arg1 ;
-(void)setContentAsQSSSetEndpointerState:(QSSSetEndpointerState *)arg1 ;
-(void)setContentAsQSSResetServerEndpointer:(QSSResetServerEndpointer *)arg1 ;
-(void)setContentAsQSSCheckForSpeechRequest:(QSSCheckForSpeechRequest *)arg1 ;
-(void)setContentAsQSSSetAlternateRecognitionSausage:(QSSSetAlternateRecognitionSausage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
@end
