/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICPAAudioQualityDictionary : PBCodable <NSCopying> {

	long long _bitDepth;
	long long _bitRate;
	long long _sampleRate;
	NSString* _channelLayoutDescription;
	unsigned _codec;
	SCD_Struct_IC3 _has;

}

@property (assign,nonatomic) char hasBitRate; 
@property (assign,nonatomic) long long bitRate;                                //@synthesize bitRate=_bitRate - In the implementation block
@property (assign,nonatomic) char hasBitDepth; 
@property (assign,nonatomic) long long bitDepth;                               //@synthesize bitDepth=_bitDepth - In the implementation block
@property (nonatomic,readonly) char hasChannelLayoutDescription; 
@property (nonatomic,retain) NSString * channelLayoutDescription;              //@synthesize channelLayoutDescription=_channelLayoutDescription - In the implementation block
@property (assign,nonatomic) char hasCodec; 
@property (assign,nonatomic) unsigned codec;                                   //@synthesize codec=_codec - In the implementation block
@property (assign,nonatomic) char hasSampleRate; 
@property (assign,nonatomic) long long sampleRate;                             //@synthesize sampleRate=_sampleRate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(long long)sampleRate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(unsigned)codec;
-(void)setCodec:(unsigned)arg1 ;
-(void)setBitRate:(long long)arg1 ;
-(void)setHasBitRate:(char)arg1 ;
-(char)hasBitRate;
-(void)setBitDepth:(long long)arg1 ;
-(void)setHasBitDepth:(char)arg1 ;
-(char)hasBitDepth;
-(char)hasChannelLayoutDescription;
-(void)setHasCodec:(char)arg1 ;
-(char)hasCodec;
-(void)setHasSampleRate:(char)arg1 ;
-(char)hasSampleRate;
-(long long)bitRate;
-(long long)bitDepth;
-(NSString *)channelLayoutDescription;
-(void)setChannelLayoutDescription:(NSString *)arg1 ;
@end

