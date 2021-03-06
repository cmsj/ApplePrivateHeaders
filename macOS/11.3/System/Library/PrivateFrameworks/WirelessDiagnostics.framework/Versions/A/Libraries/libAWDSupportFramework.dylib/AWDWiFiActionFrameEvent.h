/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiActionFrameEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _actionCode;
	unsigned _btmAbridged;
	unsigned _btmBssTerminationIncluded;
	unsigned _btmDisassociationImminent;
	unsigned _btmDisassociationTimeout;
	unsigned _btmEssTerminationIncluded;
	unsigned _btmHasPreferredCandidateList;
	unsigned _btmTerminationDuration;
	unsigned _btmValidityInterval;
	unsigned _categoryCode;
	unsigned _dialogToken;
	unsigned _environmentType;
	unsigned _frameType;
	NSData* _oui;
	unsigned _status;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasOui; 
@property (nonatomic,retain) NSData * oui;                                       //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) char hasEnvironmentType; 
@property (assign,nonatomic) unsigned environmentType;                           //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) char hasCategoryCode; 
@property (assign,nonatomic) unsigned categoryCode;                              //@synthesize categoryCode=_categoryCode - In the implementation block
@property (assign,nonatomic) char hasActionCode; 
@property (assign,nonatomic) unsigned actionCode;                                //@synthesize actionCode=_actionCode - In the implementation block
@property (assign,nonatomic) char hasDialogToken; 
@property (assign,nonatomic) unsigned dialogToken;                               //@synthesize dialogToken=_dialogToken - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) unsigned status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasFrameType; 
@property (assign,nonatomic) unsigned frameType;                                 //@synthesize frameType=_frameType - In the implementation block
@property (assign,nonatomic) char hasBtmDisassociationTimeout; 
@property (assign,nonatomic) unsigned btmDisassociationTimeout;                  //@synthesize btmDisassociationTimeout=_btmDisassociationTimeout - In the implementation block
@property (assign,nonatomic) char hasBtmValidityInterval; 
@property (assign,nonatomic) unsigned btmValidityInterval;                       //@synthesize btmValidityInterval=_btmValidityInterval - In the implementation block
@property (assign,nonatomic) char hasBtmTerminationDuration; 
@property (assign,nonatomic) unsigned btmTerminationDuration;                    //@synthesize btmTerminationDuration=_btmTerminationDuration - In the implementation block
@property (assign,nonatomic) char hasBtmHasPreferredCandidateList; 
@property (assign,nonatomic) unsigned btmHasPreferredCandidateList;              //@synthesize btmHasPreferredCandidateList=_btmHasPreferredCandidateList - In the implementation block
@property (assign,nonatomic) char hasBtmAbridged; 
@property (assign,nonatomic) unsigned btmAbridged;                               //@synthesize btmAbridged=_btmAbridged - In the implementation block
@property (assign,nonatomic) char hasBtmDisassociationImminent; 
@property (assign,nonatomic) unsigned btmDisassociationImminent;                 //@synthesize btmDisassociationImminent=_btmDisassociationImminent - In the implementation block
@property (assign,nonatomic) char hasBtmBssTerminationIncluded; 
@property (assign,nonatomic) unsigned btmBssTerminationIncluded;                 //@synthesize btmBssTerminationIncluded=_btmBssTerminationIncluded - In the implementation block
@property (assign,nonatomic) char hasBtmEssTerminationIncluded; 
@property (assign,nonatomic) unsigned btmEssTerminationIncluded;                 //@synthesize btmEssTerminationIncluded=_btmEssTerminationIncluded - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)status;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setStatus:(unsigned)arg1 ;
-(void)setFrameType:(unsigned)arg1 ;
-(unsigned)frameType;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned)categoryCode;
-(void)setCategoryCode:(unsigned)arg1 ;
-(void)setOui:(NSData *)arg1 ;
-(char)hasOui;
-(void)setEnvironmentType:(unsigned)arg1 ;
-(void)setHasEnvironmentType:(char)arg1 ;
-(char)hasEnvironmentType;
-(void)setHasCategoryCode:(char)arg1 ;
-(char)hasCategoryCode;
-(void)setActionCode:(unsigned)arg1 ;
-(void)setHasActionCode:(char)arg1 ;
-(char)hasActionCode;
-(void)setDialogToken:(unsigned)arg1 ;
-(void)setHasDialogToken:(char)arg1 ;
-(char)hasDialogToken;
-(void)setHasFrameType:(char)arg1 ;
-(char)hasFrameType;
-(void)setBtmDisassociationTimeout:(unsigned)arg1 ;
-(void)setHasBtmDisassociationTimeout:(char)arg1 ;
-(char)hasBtmDisassociationTimeout;
-(void)setBtmValidityInterval:(unsigned)arg1 ;
-(void)setHasBtmValidityInterval:(char)arg1 ;
-(char)hasBtmValidityInterval;
-(void)setBtmTerminationDuration:(unsigned)arg1 ;
-(void)setHasBtmTerminationDuration:(char)arg1 ;
-(char)hasBtmTerminationDuration;
-(void)setBtmHasPreferredCandidateList:(unsigned)arg1 ;
-(void)setHasBtmHasPreferredCandidateList:(char)arg1 ;
-(char)hasBtmHasPreferredCandidateList;
-(void)setBtmAbridged:(unsigned)arg1 ;
-(void)setHasBtmAbridged:(char)arg1 ;
-(char)hasBtmAbridged;
-(void)setBtmDisassociationImminent:(unsigned)arg1 ;
-(void)setHasBtmDisassociationImminent:(char)arg1 ;
-(char)hasBtmDisassociationImminent;
-(void)setBtmBssTerminationIncluded:(unsigned)arg1 ;
-(void)setHasBtmBssTerminationIncluded:(char)arg1 ;
-(char)hasBtmBssTerminationIncluded;
-(void)setBtmEssTerminationIncluded:(unsigned)arg1 ;
-(void)setHasBtmEssTerminationIncluded:(char)arg1 ;
-(char)hasBtmEssTerminationIncluded;
-(NSData *)oui;
-(unsigned)environmentType;
-(unsigned)actionCode;
-(unsigned)dialogToken;
-(unsigned)btmDisassociationTimeout;
-(unsigned)btmValidityInterval;
-(unsigned)btmTerminationDuration;
-(unsigned)btmHasPreferredCandidateList;
-(unsigned)btmAbridged;
-(unsigned)btmDisassociationImminent;
-(unsigned)btmBssTerminationIncluded;
-(unsigned)btmEssTerminationIncluded;
@end

