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

@interface VCMediaNegotiationFaceTimeSettings : PBCodable <NSCopying> {

	unsigned _capabilities;
	unsigned _linkProbingCapabilityVersion;
	unsigned _mediaControlInfoSubVersion;
	unsigned _switches;
	char _oneToOneModeSupported;
	SCD_Struct_VC108 _has;

}

@property (assign,nonatomic) char hasCapabilities; 
@property (assign,nonatomic) unsigned capabilities;                              //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) char hasSwitches; 
@property (assign,nonatomic) unsigned switches;                                  //@synthesize switches=_switches - In the implementation block
@property (assign,nonatomic) char hasOneToOneModeSupported; 
@property (assign,nonatomic) char oneToOneModeSupported;                         //@synthesize oneToOneModeSupported=_oneToOneModeSupported - In the implementation block
@property (assign,nonatomic) char hasMediaControlInfoSubVersion; 
@property (assign,nonatomic) unsigned mediaControlInfoSubVersion;                //@synthesize mediaControlInfoSubVersion=_mediaControlInfoSubVersion - In the implementation block
@property (assign,nonatomic) char hasLinkProbingCapabilityVersion; 
@property (assign,nonatomic) unsigned linkProbingCapabilityVersion;              //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(void)setHasCapabilities:(char)arg1 ;
-(char)hasCapabilities;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)setOneToOneModeSupported:(char)arg1 ;
-(void)setLinkProbingCapabilityVersion:(unsigned)arg1 ;
-(char)SIPDisabled;
-(char)secureMessagingRequired;
-(char)oneToOneModeSupported;
-(unsigned)linkProbingCapabilityVersion;
-(unsigned)switches;
-(void)setSwitches:(unsigned)arg1 ;
-(void)setMediaControlInfoSubVersion:(unsigned)arg1 ;
-(char)hasSwitches;
-(char)hasOneToOneModeSupported;
-(char)hasMediaControlInfoSubVersion;
-(char)hasLinkProbingCapabilityVersion;
-(void)setHasSwitches:(char)arg1 ;
-(void)setHasOneToOneModeSupported:(char)arg1 ;
-(unsigned)mediaControlInfoSubVersion;
-(void)setHasMediaControlInfoSubVersion:(char)arg1 ;
-(void)setHasLinkProbingCapabilityVersion:(char)arg1 ;
@end

