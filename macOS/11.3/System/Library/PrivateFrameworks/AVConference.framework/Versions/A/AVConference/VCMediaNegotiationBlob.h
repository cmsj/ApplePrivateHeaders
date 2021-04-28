/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCMediaNegotiationBlobAudioSettings, NSMutableArray, NSString, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationFaceTimeSettings, VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings;

@interface VCMediaNegotiationBlob : PBCodable <NSCopying> {

	unsigned long long _ntpTime;
	VCMediaNegotiationBlobAudioSettings* _audioSettings;
	NSMutableArray* _bandwidthSettings;
	NSString* _basebandCodec;
	unsigned _basebandCodecSampleRate;
	unsigned _blobVersion;
	VCMediaNegotiationBlobCaptionsSettings* _captionsSettings;
	VCMediaNegotiationFaceTimeSettings* _faceTimeSettings;
	unsigned _mediaControlInfoVersion;
	VCMediaNegotiationBlobMomentsSettings* _momentsSettings;
	NSMutableArray* _multiwayAudioStreams;
	NSMutableArray* _multiwayVideoStreams;
	VCMediaNegotiationBlobVideoSettings* _screenSettings;
	NSString* _userAgent;
	VCMediaNegotiationBlobVideoSettings* _videoSettings;
	char _allowDynamicMaxBitrate;
	char _allowsContentsChangeWithAspectPreservation;
	SCD_Struct_VC1 _has;

}

@property (assign,nonatomic) char hasAllowDynamicMaxBitrate; 
@property (assign,nonatomic) char allowDynamicMaxBitrate;                                            //@synthesize allowDynamicMaxBitrate=_allowDynamicMaxBitrate - In the implementation block
@property (assign,nonatomic) char hasAllowsContentsChangeWithAspectPreservation; 
@property (assign,nonatomic) char allowsContentsChangeWithAspectPreservation;                        //@synthesize allowsContentsChangeWithAspectPreservation=_allowsContentsChangeWithAspectPreservation - In the implementation block
@property (nonatomic,readonly) char hasAudioSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobAudioSettings * audioSettings;                    //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,readonly) char hasVideoSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobVideoSettings * videoSettings;                    //@synthesize videoSettings=_videoSettings - In the implementation block
@property (nonatomic,readonly) char hasScreenSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobVideoSettings * screenSettings;                   //@synthesize screenSettings=_screenSettings - In the implementation block
@property (nonatomic,readonly) char hasUserAgent; 
@property (nonatomic,retain) NSString * userAgent;                                                   //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) char hasBasebandCodec; 
@property (nonatomic,retain) NSString * basebandCodec;                                               //@synthesize basebandCodec=_basebandCodec - In the implementation block
@property (assign,nonatomic) char hasBasebandCodecSampleRate; 
@property (assign,nonatomic) unsigned basebandCodecSampleRate;                                       //@synthesize basebandCodecSampleRate=_basebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) NSMutableArray * bandwidthSettings;                                     //@synthesize bandwidthSettings=_bandwidthSettings - In the implementation block
@property (nonatomic,readonly) char hasCaptionsSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobCaptionsSettings * captionsSettings;              //@synthesize captionsSettings=_captionsSettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * multiwayAudioStreams;                                  //@synthesize multiwayAudioStreams=_multiwayAudioStreams - In the implementation block
@property (nonatomic,readonly) char hasMomentsSettings; 
@property (nonatomic,retain) VCMediaNegotiationBlobMomentsSettings * momentsSettings;                //@synthesize momentsSettings=_momentsSettings - In the implementation block
@property (assign,nonatomic) char hasNtpTime; 
@property (assign,nonatomic) unsigned long long ntpTime;                                             //@synthesize ntpTime=_ntpTime - In the implementation block
@property (assign,nonatomic) char hasBlobVersion; 
@property (assign,nonatomic) unsigned blobVersion;                                                   //@synthesize blobVersion=_blobVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * multiwayVideoStreams;                                  //@synthesize multiwayVideoStreams=_multiwayVideoStreams - In the implementation block
@property (assign,nonatomic) char hasMediaControlInfoVersion; 
@property (assign,nonatomic) unsigned mediaControlInfoVersion;                                       //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
@property (nonatomic,readonly) char hasFaceTimeSettings; 
@property (nonatomic,retain) VCMediaNegotiationFaceTimeSettings * faceTimeSettings;                  //@synthesize faceTimeSettings=_faceTimeSettings - In the implementation block
+(Class)bandwidthSettingsType;
+(Class)multiwayAudioStreamsType;
+(Class)multiwayVideoStreamType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(VCMediaNegotiationBlobAudioSettings *)audioSettings;
-(VCMediaNegotiationBlobVideoSettings *)videoSettings;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setVideoSettings:(VCMediaNegotiationBlobVideoSettings *)arg1 ;
-(void)setAudioSettings:(VCMediaNegotiationBlobAudioSettings *)arg1 ;
-(char)allowsContentsChangeWithAspectPreservation;
-(void)setAllowsContentsChangeWithAspectPreservation:(char)arg1 ;
-(unsigned)basebandCodecSampleRate;
-(void)setBasebandCodec:(NSString *)arg1 ;
-(void)setBasebandCodecSampleRate:(unsigned)arg1 ;
-(void)setMediaControlInfoVersion:(unsigned)arg1 ;
-(void)setMultiwayAudioStreams:(NSMutableArray *)arg1 ;
-(void)setMultiwayVideoStreams:(NSMutableArray *)arg1 ;
-(unsigned)mediaControlInfoVersion;
-(NSString *)basebandCodec;
-(NSMutableArray *)multiwayAudioStreams;
-(NSMutableArray *)multiwayVideoStreams;
-(void)addMultiwayVideoStream:(id)arg1 ;
-(NSMutableArray *)bandwidthSettings;
-(void)setScreenSettings:(VCMediaNegotiationBlobVideoSettings *)arg1 ;
-(void)setBandwidthSettings:(NSMutableArray *)arg1 ;
-(void)setCaptionsSettings:(VCMediaNegotiationBlobCaptionsSettings *)arg1 ;
-(void)setMomentsSettings:(VCMediaNegotiationBlobMomentsSettings *)arg1 ;
-(void)setFaceTimeSettings:(VCMediaNegotiationFaceTimeSettings *)arg1 ;
-(void)addBandwidthSettings:(id)arg1 ;
-(void)addMultiwayAudioStreams:(id)arg1 ;
-(unsigned long long)bandwidthSettingsCount;
-(void)clearBandwidthSettings;
-(id)bandwidthSettingsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)multiwayAudioStreamsCount;
-(void)clearMultiwayAudioStreams;
-(id)multiwayAudioStreamsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)multiwayVideoStreamsCount;
-(void)clearMultiwayVideoStreams;
-(id)multiwayVideoStreamAtIndex:(unsigned long long)arg1 ;
-(void)setAllowDynamicMaxBitrate:(char)arg1 ;
-(void)setHasAllowDynamicMaxBitrate:(char)arg1 ;
-(char)hasAllowDynamicMaxBitrate;
-(void)setHasAllowsContentsChangeWithAspectPreservation:(char)arg1 ;
-(char)hasAllowsContentsChangeWithAspectPreservation;
-(char)hasAudioSettings;
-(char)hasVideoSettings;
-(char)hasScreenSettings;
-(char)hasUserAgent;
-(char)hasBasebandCodec;
-(void)setHasBasebandCodecSampleRate:(char)arg1 ;
-(char)hasBasebandCodecSampleRate;
-(char)hasCaptionsSettings;
-(char)hasMomentsSettings;
-(void)setNtpTime:(unsigned long long)arg1 ;
-(void)setHasNtpTime:(char)arg1 ;
-(char)hasNtpTime;
-(void)setBlobVersion:(unsigned)arg1 ;
-(void)setHasBlobVersion:(char)arg1 ;
-(char)hasBlobVersion;
-(void)setHasMediaControlInfoVersion:(char)arg1 ;
-(char)hasMediaControlInfoVersion;
-(char)hasFaceTimeSettings;
-(char)allowDynamicMaxBitrate;
-(VCMediaNegotiationBlobVideoSettings *)screenSettings;
-(VCMediaNegotiationBlobCaptionsSettings *)captionsSettings;
-(VCMediaNegotiationBlobMomentsSettings *)momentsSettings;
-(unsigned long long)ntpTime;
-(unsigned)blobVersion;
-(VCMediaNegotiationFaceTimeSettings *)faceTimeSettings;
-(void)printWithTitle:(id)arg1 blobSize:(unsigned)arg2 logFile:(void*)arg3 ;
-(void)formatBandwidthConfig:(int)arg1 maxBanxwidth:(unsigned)arg2 bandwidthString:(id)arg3 ;
-(void)printBandwidthSettingsWithLogFile:(void*)arg1 ;
-(void)printCaptionsSettingsWithLogFile:(void*)arg1 ;
-(void)printMomentsSettingsWithLogFile:(void*)arg1 ;
-(void)printMultiwayAudioStreamsWithLogFile:(void*)arg1 ;
-(void)printMultiwayVideoStreamsWithLogFile:(void*)arg1 ;
@end
