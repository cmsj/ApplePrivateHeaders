/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPZoneCapabilities, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {

	CKDPZoneCapabilities* _capabilities;
	int _changeType;
	int _deleteType;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) char hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) char hasChangeType; 
@property (assign,nonatomic) int changeType;                                         //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) char hasDeleteType; 
@property (assign,nonatomic) int deleteType;                                         //@synthesize deleteType=_deleteType - In the implementation block
@property (nonatomic,readonly) char hasCapabilities; 
@property (nonatomic,retain) CKDPZoneCapabilities * capabilities;                    //@synthesize capabilities=_capabilities - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)changeType;
-(id)dictionaryRepresentation;
-(CKDPZoneCapabilities *)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(CKDPZoneCapabilities *)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(char)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setChangeType:(int)arg1 ;
-(void)setDeleteType:(int)arg1 ;
-(void)setHasDeleteType:(char)arg1 ;
-(char)hasDeleteType;
-(int)deleteType;
-(char)hasCapabilities;
-(void)setHasChangeType:(char)arg1 ;
-(char)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(id)deleteTypeAsString:(int)arg1 ;
-(int)StringAsDeleteType:(id)arg1 ;
@end
