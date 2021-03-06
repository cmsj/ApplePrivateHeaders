/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying> {

	int _audioCodec;
	int _cryptoSuite;
	unsigned _framerate;
	int _resolution;
	int _sampleRate;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) char hasResolution; 
@property (assign,nonatomic) int resolution;                   //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) char hasFramerate; 
@property (assign,nonatomic) unsigned framerate;               //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) char hasAudioCodec; 
@property (assign,nonatomic) int audioCodec;                   //@synthesize audioCodec=_audioCodec - In the implementation block
@property (assign,nonatomic) char hasSampleRate; 
@property (assign,nonatomic) int sampleRate;                   //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) char hasCryptoSuite; 
@property (assign,nonatomic) int cryptoSuite;                  //@synthesize cryptoSuite=_cryptoSuite - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(int)sampleRate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSampleRate:(int)arg1 ;
-(int)resolution;
-(void)setResolution:(int)arg1 ;
-(unsigned)framerate;
-(void)setFramerate:(unsigned)arg1 ;
-(void)setHasSampleRate:(char)arg1 ;
-(char)hasSampleRate;
-(int)audioCodec;
-(void)setHasResolution:(char)arg1 ;
-(char)hasResolution;
-(id)resolutionAsString:(int)arg1 ;
-(int)StringAsResolution:(id)arg1 ;
-(void)setHasFramerate:(char)arg1 ;
-(char)hasFramerate;
-(void)setAudioCodec:(int)arg1 ;
-(void)setHasAudioCodec:(char)arg1 ;
-(char)hasAudioCodec;
-(id)audioCodecAsString:(int)arg1 ;
-(int)StringAsAudioCodec:(id)arg1 ;
-(id)sampleRateAsString:(int)arg1 ;
-(int)StringAsSampleRate:(id)arg1 ;
-(int)cryptoSuite;
-(void)setCryptoSuite:(int)arg1 ;
-(void)setHasCryptoSuite:(char)arg1 ;
-(char)hasCryptoSuite;
-(id)cryptoSuiteAsString:(int)arg1 ;
-(int)StringAsCryptoSuite:(id)arg1 ;
@end

