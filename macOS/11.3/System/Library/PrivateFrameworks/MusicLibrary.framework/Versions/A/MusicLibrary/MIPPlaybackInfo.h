/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPPlaybackInfo : PBCodable <NSCopying> {

	long long _durationInSamples;
	long long _gaplessEncodingDrainCode;
	long long _gaplessFrameResyncCode;
	long long _gaplessHeuristicCode;
	long long _gaplessHeuristicDelayCode;
	long long _startTime;
	long long _stopTime;
	long long _volumeNormalizationEnergy;
	int _beatsPerMinute;
	int _bitRate;
	int _codecSubType;
	int _codecType;
	int _dataKind;
	NSString* _dataUrl;
	NSString* _eqPreset;
	NSString* _playbackFormat;
	int _progressionDirection;
	int _relativeVolume;
	int _sampleRate;
	SCD_Struct_MI7 _has;

}

@property (assign,nonatomic) char hasBitRate; 
@property (assign,nonatomic) int bitRate;                                      //@synthesize bitRate=_bitRate - In the implementation block
@property (assign,nonatomic) char hasCodecType; 
@property (assign,nonatomic) int codecType;                                    //@synthesize codecType=_codecType - In the implementation block
@property (assign,nonatomic) char hasCodecSubType; 
@property (assign,nonatomic) int codecSubType;                                 //@synthesize codecSubType=_codecSubType - In the implementation block
@property (assign,nonatomic) char hasDataKind; 
@property (assign,nonatomic) int dataKind;                                     //@synthesize dataKind=_dataKind - In the implementation block
@property (nonatomic,readonly) char hasDataUrl; 
@property (nonatomic,retain) NSString * dataUrl;                               //@synthesize dataUrl=_dataUrl - In the implementation block
@property (nonatomic,readonly) char hasEqPreset; 
@property (nonatomic,retain) NSString * eqPreset;                              //@synthesize eqPreset=_eqPreset - In the implementation block
@property (nonatomic,readonly) char hasPlaybackFormat; 
@property (nonatomic,retain) NSString * playbackFormat;                        //@synthesize playbackFormat=_playbackFormat - In the implementation block
@property (assign,nonatomic) char hasGaplessHeuristicCode; 
@property (assign,nonatomic) long long gaplessHeuristicCode;                   //@synthesize gaplessHeuristicCode=_gaplessHeuristicCode - In the implementation block
@property (assign,nonatomic) char hasGaplessHeuristicDelayCode; 
@property (assign,nonatomic) long long gaplessHeuristicDelayCode;              //@synthesize gaplessHeuristicDelayCode=_gaplessHeuristicDelayCode - In the implementation block
@property (assign,nonatomic) char hasGaplessEncodingDrainCode; 
@property (assign,nonatomic) long long gaplessEncodingDrainCode;               //@synthesize gaplessEncodingDrainCode=_gaplessEncodingDrainCode - In the implementation block
@property (assign,nonatomic) char hasGaplessFrameResyncCode; 
@property (assign,nonatomic) long long gaplessFrameResyncCode;                 //@synthesize gaplessFrameResyncCode=_gaplessFrameResyncCode - In the implementation block
@property (assign,nonatomic) char hasRelativeVolume; 
@property (assign,nonatomic) int relativeVolume;                               //@synthesize relativeVolume=_relativeVolume - In the implementation block
@property (assign,nonatomic) char hasSampleRate; 
@property (assign,nonatomic) int sampleRate;                                   //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) char hasStartTime; 
@property (assign,nonatomic) long long startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char hasStopTime; 
@property (assign,nonatomic) long long stopTime;                               //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) char hasVolumeNormalizationEnergy; 
@property (assign,nonatomic) long long volumeNormalizationEnergy;              //@synthesize volumeNormalizationEnergy=_volumeNormalizationEnergy - In the implementation block
@property (assign,nonatomic) char hasBeatsPerMinute; 
@property (assign,nonatomic) int beatsPerMinute;                               //@synthesize beatsPerMinute=_beatsPerMinute - In the implementation block
@property (assign,nonatomic) char hasProgressionDirection; 
@property (assign,nonatomic) int progressionDirection;                         //@synthesize progressionDirection=_progressionDirection - In the implementation block
@property (assign,nonatomic) char hasDurationInSamples; 
@property (assign,nonatomic) long long durationInSamples;                      //@synthesize durationInSamples=_durationInSamples - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)startTime;
-(void)setStartTime:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(int)sampleRate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)codecType;
-(void)setSampleRate:(int)arg1 ;
-(void)setHasStartTime:(char)arg1 ;
-(char)hasStartTime;
-(long long)stopTime;
-(void)setCodecType:(int)arg1 ;
-(int)beatsPerMinute;
-(void)setBitRate:(int)arg1 ;
-(void)setHasBitRate:(char)arg1 ;
-(char)hasBitRate;
-(void)setHasSampleRate:(char)arg1 ;
-(char)hasSampleRate;
-(int)bitRate;
-(int)codecSubType;
-(int)dataKind;
-(long long)durationInSamples;
-(long long)gaplessHeuristicCode;
-(long long)gaplessHeuristicDelayCode;
-(long long)gaplessEncodingDrainCode;
-(long long)gaplessFrameResyncCode;
-(int)relativeVolume;
-(long long)volumeNormalizationEnergy;
-(int)progressionDirection;
-(char)hasBeatsPerMinute;
-(char)hasCodecType;
-(char)hasCodecSubType;
-(char)hasDataKind;
-(char)hasDataUrl;
-(char)hasDurationInSamples;
-(char)hasEqPreset;
-(char)hasPlaybackFormat;
-(char)hasGaplessHeuristicCode;
-(char)hasGaplessHeuristicDelayCode;
-(char)hasGaplessEncodingDrainCode;
-(char)hasGaplessFrameResyncCode;
-(char)hasRelativeVolume;
-(char)hasStopTime;
-(char)hasVolumeNormalizationEnergy;
-(char)hasProgressionDirection;
-(NSString *)dataUrl;
-(NSString *)eqPreset;
-(NSString *)playbackFormat;
-(void)setDataUrl:(NSString *)arg1 ;
-(void)setEqPreset:(NSString *)arg1 ;
-(void)setPlaybackFormat:(NSString *)arg1 ;
-(void)setHasCodecType:(char)arg1 ;
-(void)setCodecSubType:(int)arg1 ;
-(void)setHasCodecSubType:(char)arg1 ;
-(void)setDataKind:(int)arg1 ;
-(void)setHasDataKind:(char)arg1 ;
-(void)setGaplessHeuristicCode:(long long)arg1 ;
-(void)setHasGaplessHeuristicCode:(char)arg1 ;
-(void)setGaplessHeuristicDelayCode:(long long)arg1 ;
-(void)setHasGaplessHeuristicDelayCode:(char)arg1 ;
-(void)setGaplessEncodingDrainCode:(long long)arg1 ;
-(void)setHasGaplessEncodingDrainCode:(char)arg1 ;
-(void)setGaplessFrameResyncCode:(long long)arg1 ;
-(void)setHasGaplessFrameResyncCode:(char)arg1 ;
-(void)setRelativeVolume:(int)arg1 ;
-(void)setHasRelativeVolume:(char)arg1 ;
-(void)setStopTime:(long long)arg1 ;
-(void)setHasStopTime:(char)arg1 ;
-(void)setVolumeNormalizationEnergy:(long long)arg1 ;
-(void)setHasVolumeNormalizationEnergy:(char)arg1 ;
-(void)setBeatsPerMinute:(int)arg1 ;
-(void)setHasBeatsPerMinute:(char)arg1 ;
-(void)setProgressionDirection:(int)arg1 ;
-(void)setHasProgressionDirection:(char)arg1 ;
-(void)setDurationInSamples:(long long)arg1 ;
-(void)setHasDurationInSamples:(char)arg1 ;
@end

