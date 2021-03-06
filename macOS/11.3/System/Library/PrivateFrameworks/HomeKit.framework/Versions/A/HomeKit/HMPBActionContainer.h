/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction, HMPBNaturalLightingAction;

@interface HMPBActionContainer : PBCodable <NSCopying> {

	HMPBCharacteristicWriteAction* _characteristicWriteAction;
	HMPBMediaPlaybackAction* _mediaPlaybackAction;
	HMPBNaturalLightingAction* _naturalLightingAction;
	int _type;
	SCD_Struct_HM1 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasCharacteristicWriteAction; 
@property (nonatomic,retain) HMPBCharacteristicWriteAction * characteristicWriteAction;              //@synthesize characteristicWriteAction=_characteristicWriteAction - In the implementation block
@property (nonatomic,readonly) char hasMediaPlaybackAction; 
@property (nonatomic,retain) HMPBMediaPlaybackAction * mediaPlaybackAction;                          //@synthesize mediaPlaybackAction=_mediaPlaybackAction - In the implementation block
@property (nonatomic,readonly) char hasNaturalLightingAction; 
@property (nonatomic,retain) HMPBNaturalLightingAction * naturalLightingAction;                      //@synthesize naturalLightingAction=_naturalLightingAction - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setMediaPlaybackAction:(HMPBMediaPlaybackAction *)arg1 ;
-(void)setCharacteristicWriteAction:(HMPBCharacteristicWriteAction *)arg1 ;
-(void)setNaturalLightingAction:(HMPBNaturalLightingAction *)arg1 ;
-(HMPBCharacteristicWriteAction *)characteristicWriteAction;
-(HMPBMediaPlaybackAction *)mediaPlaybackAction;
-(HMPBNaturalLightingAction *)naturalLightingAction;
-(char)hasCharacteristicWriteAction;
-(char)hasMediaPlaybackAction;
-(char)hasNaturalLightingAction;
@end

