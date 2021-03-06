/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetectionStreamingRequest.h>

@class FTStartLanguageDetectionRequest, FTAudioPacket, FTFinishAudio;

@interface FTMutableLanguageDetectionStreamingRequest : FTLanguageDetectionStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartLanguageDetectionRequest * contentAsFTStartLanguageDetectionRequest; 
@property (nonatomic,copy) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,copy) FTFinishAudio * contentAsFTFinishAudio; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(void)setContentAsFTAudioPacket:(FTAudioPacket *)arg1 ;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(void)setContentAsFTFinishAudio:(FTFinishAudio *)arg1 ;
-(FTStartLanguageDetectionRequest *)contentAsFTStartLanguageDetectionRequest;
-(void)setContentAsFTStartLanguageDetectionRequest:(FTStartLanguageDetectionRequest *)arg1 ;
@end

