/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRNowPlayingClientProtobuf, _MROriginProtobuf, _MRNowPlayingPlayerProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying> {

	_MRNowPlayingClientProtobuf* _client;
	_MROriginProtobuf* _origin;
	_MRNowPlayingPlayerProtobuf* _player;

}

@property (nonatomic,readonly) char hasOrigin; 
@property (nonatomic,retain) _MROriginProtobuf * origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) char hasClient; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) char hasPlayer; 
@property (nonatomic,retain) _MRNowPlayingPlayerProtobuf * player;              //@synthesize player=_player - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(_MRNowPlayingClientProtobuf *)client;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(void)setPlayer:(_MRNowPlayingPlayerProtobuf *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(_MROriginProtobuf *)origin;
-(void)setOrigin:(_MROriginProtobuf *)arg1 ;
-(char)hasOrigin;
-(_MRNowPlayingPlayerProtobuf *)player;
-(char)hasClient;
-(char)hasPlayer;
@end

