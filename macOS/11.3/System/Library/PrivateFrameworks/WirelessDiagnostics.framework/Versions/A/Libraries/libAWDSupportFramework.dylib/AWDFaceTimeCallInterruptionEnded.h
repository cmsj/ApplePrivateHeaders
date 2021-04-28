/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _interruptionDuration;
	unsigned _isAudioResumed;
	unsigned _isVideo;
	unsigned _isVideoResumed;
	int _linkQuality;
	unsigned _onLockScreen;
	SCD_Struct_AW16 _has;

}

@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasInterruptionDuration; 
@property (assign,nonatomic) unsigned interruptionDuration;              //@synthesize interruptionDuration=_interruptionDuration - In the implementation block
@property (assign,nonatomic) char hasIsVideoResumed; 
@property (assign,nonatomic) unsigned isVideoResumed;                    //@synthesize isVideoResumed=_isVideoResumed - In the implementation block
@property (assign,nonatomic) char hasIsAudioResumed; 
@property (assign,nonatomic) unsigned isAudioResumed;                    //@synthesize isAudioResumed=_isAudioResumed - In the implementation block
@property (assign,nonatomic) char hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                            //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) char hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                           //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) char hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                      //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(int)linkQuality;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasGuid;
-(void)setLinkQuality:(int)arg1 ;
-(unsigned)isVideo;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)setHasIsVideo:(char)arg1 ;
-(char)hasIsVideo;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)setHasOnLockScreen:(char)arg1 ;
-(char)hasOnLockScreen;
-(unsigned)onLockScreen;
-(void)setHasLinkQuality:(char)arg1 ;
-(char)hasLinkQuality;
-(void)setInterruptionDuration:(unsigned)arg1 ;
-(void)setHasInterruptionDuration:(char)arg1 ;
-(char)hasInterruptionDuration;
-(void)setIsVideoResumed:(unsigned)arg1 ;
-(void)setHasIsVideoResumed:(char)arg1 ;
-(char)hasIsVideoResumed;
-(void)setIsAudioResumed:(unsigned)arg1 ;
-(void)setHasIsAudioResumed:(char)arg1 ;
-(char)hasIsAudioResumed;
-(unsigned)interruptionDuration;
-(unsigned)isVideoResumed;
-(unsigned)isAudioResumed;
@end
