/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface VCSessionParticipantConfig : NSObject {

	NSData* _participantData;
	NSString* _uuid;
	unsigned long long _idsParticipantID;
	char _audioEnabled;
	char _videoEnabled;
	char _frequencyMeteringEnabled;
	char _audioMuted;
	float _volume;
	float _audioPosition;
	char _audioPaused;
	char _videoPaused;
	unsigned char _videoQuality;
	unsigned _visibilityIndex;
	unsigned _prominenceIndex;

}

@property (nonatomic,retain) NSData * participantData;                         //@synthesize participantData=_participantData - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long idsParticipantID;              //@synthesize idsParticipantID=_idsParticipantID - In the implementation block
@property (assign,nonatomic) char audioEnabled;                                //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) char videoEnabled;                                //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,nonatomic) char frequencyMeteringEnabled;                    //@synthesize frequencyMeteringEnabled=_frequencyMeteringEnabled - In the implementation block
@property (assign,nonatomic) char audioMuted;                                  //@synthesize audioMuted=_audioMuted - In the implementation block
@property (assign,nonatomic) float volume;                                     //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) float audioPosition;                              //@synthesize audioPosition=_audioPosition - In the implementation block
@property (assign,nonatomic) char audioPaused;                                 //@synthesize audioPaused=_audioPaused - In the implementation block
@property (assign,nonatomic) char videoPaused;                                 //@synthesize videoPaused=_videoPaused - In the implementation block
@property (assign,nonatomic) unsigned char videoQuality;                       //@synthesize videoQuality=_videoQuality - In the implementation block
@property (assign,nonatomic) unsigned visibilityIndex;                         //@synthesize visibilityIndex=_visibilityIndex - In the implementation block
@property (assign,nonatomic) unsigned prominenceIndex;                         //@synthesize prominenceIndex=_prominenceIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setAudioEnabled:(char)arg1 ;
-(NSData *)participantData;
-(void)setVideoEnabled:(char)arg1 ;
-(char)audioEnabled;
-(char)videoEnabled;
-(unsigned char)videoQuality;
-(void)setVideoPaused:(char)arg1 ;
-(char)videoPaused;
-(void)setVideoQuality:(unsigned char)arg1 ;
-(unsigned long long)idsParticipantID;
-(void)setAudioPosition:(float)arg1 ;
-(void)setAudioPaused:(char)arg1 ;
-(void)setVisibilityIndex:(unsigned)arg1 ;
-(void)setProminenceIndex:(unsigned)arg1 ;
-(unsigned)visibilityIndex;
-(unsigned)prominenceIndex;
-(void)setIdsParticipantID:(unsigned long long)arg1 ;
-(void)setParticipantData:(NSData *)arg1 ;
-(void)setAudioMuted:(char)arg1 ;
-(char)audioPaused;
-(char)audioMuted;
-(float)audioPosition;
-(char)frequencyMeteringEnabled;
-(void)setFrequencyMeteringEnabled:(char)arg1 ;
@end

