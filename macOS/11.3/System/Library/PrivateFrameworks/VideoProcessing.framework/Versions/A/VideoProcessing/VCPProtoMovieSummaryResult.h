/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoVideoKeyFrame, VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieSummaryResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _curationScore;
	VCPProtoVideoKeyFrame* _keyFrame;
	VCPProtoBounds* _playbackCrop;
	VCPProtoTimeRange* _timeRange;
	char _autoPlayable;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) float curationScore;                           //@synthesize curationScore=_curationScore - In the implementation block
@property (nonatomic,readonly) char hasKeyFrame; 
@property (nonatomic,retain) VCPProtoVideoKeyFrame * keyFrame;              //@synthesize keyFrame=_keyFrame - In the implementation block
@property (assign,nonatomic) char autoPlayable;                             //@synthesize autoPlayable=_autoPlayable - In the implementation block
@property (nonatomic,readonly) char hasPlaybackCrop; 
@property (nonatomic,retain) VCPProtoBounds * playbackCrop;                 //@synthesize playbackCrop=_playbackCrop - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(float)curationScore;
-(void)setCurationScore:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(VCPProtoVideoKeyFrame *)keyFrame;
-(void)setKeyFrame:(VCPProtoVideoKeyFrame *)arg1 ;
-(void)setPlaybackCrop:(VCPProtoBounds *)arg1 ;
-(char)hasKeyFrame;
-(char)hasPlaybackCrop;
-(char)autoPlayable;
-(void)setAutoPlayable:(char)arg1 ;
-(VCPProtoBounds *)playbackCrop;
@end
