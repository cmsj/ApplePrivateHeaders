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

@class CKDPZoneCapabilities, NSData, CKDPZone, NSString, CKDPDate;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {

	long long _assetQuotaUsage;
	long long _metadataQuotaUsage;
	CKDPZoneCapabilities* _capabilities;
	NSData* _clientChangeToken;
	NSData* _currentServerContinuationToken;
	int _deviceCount;
	CKDPZone* _targetZone;
	NSString* _zonePcsModificationDevice;
	CKDPDate* _zonePcsModificationTime;
	char _zoneKeyRollAllowed;
	char _zoneishPcsNeedsRolled;
	SCD_Struct_CK13 _has;

}

@property (nonatomic,readonly) char hasTargetZone; 
@property (nonatomic,retain) CKDPZone * targetZone;                                 //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,readonly) char hasCurrentServerContinuationToken; 
@property (nonatomic,retain) NSData * currentServerContinuationToken;               //@synthesize currentServerContinuationToken=_currentServerContinuationToken - In the implementation block
@property (nonatomic,readonly) char hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                            //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (assign,nonatomic) char hasDeviceCount; 
@property (assign,nonatomic) int deviceCount;                                       //@synthesize deviceCount=_deviceCount - In the implementation block
@property (assign,nonatomic) char hasAssetQuotaUsage; 
@property (assign,nonatomic) long long assetQuotaUsage;                             //@synthesize assetQuotaUsage=_assetQuotaUsage - In the implementation block
@property (assign,nonatomic) char hasMetadataQuotaUsage; 
@property (assign,nonatomic) long long metadataQuotaUsage;                          //@synthesize metadataQuotaUsage=_metadataQuotaUsage - In the implementation block
@property (nonatomic,readonly) char hasCapabilities; 
@property (nonatomic,retain) CKDPZoneCapabilities * capabilities;                   //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) char hasZoneishPcsNeedsRolled; 
@property (assign,nonatomic) char zoneishPcsNeedsRolled;                            //@synthesize zoneishPcsNeedsRolled=_zoneishPcsNeedsRolled - In the implementation block
@property (assign,nonatomic) char hasZoneKeyRollAllowed; 
@property (assign,nonatomic) char zoneKeyRollAllowed;                               //@synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed - In the implementation block
@property (nonatomic,readonly) char hasZonePcsModificationTime; 
@property (nonatomic,retain) CKDPDate * zonePcsModificationTime;                    //@synthesize zonePcsModificationTime=_zonePcsModificationTime - In the implementation block
@property (nonatomic,readonly) char hasZonePcsModificationDevice; 
@property (nonatomic,retain) NSString * zonePcsModificationDevice;                  //@synthesize zonePcsModificationDevice=_zonePcsModificationDevice - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(CKDPZoneCapabilities *)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(CKDPZoneCapabilities *)arg1 ;
-(CKDPZone *)targetZone;
-(void)setTargetZone:(CKDPZone *)arg1 ;
-(int)deviceCount;
-(void)setDeviceCount:(int)arg1 ;
-(NSData *)clientChangeToken;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(long long)assetQuotaUsage;
-(void)setAssetQuotaUsage:(long long)arg1 ;
-(long long)metadataQuotaUsage;
-(void)setMetadataQuotaUsage:(long long)arg1 ;
-(char)zoneKeyRollAllowed;
-(void)setZoneKeyRollAllowed:(char)arg1 ;
-(char)hasCapabilities;
-(void)setHasDeviceCount:(char)arg1 ;
-(char)hasDeviceCount;
-(void)setCurrentServerContinuationToken:(NSData *)arg1 ;
-(void)setZonePcsModificationTime:(CKDPDate *)arg1 ;
-(void)setZonePcsModificationDevice:(NSString *)arg1 ;
-(char)hasTargetZone;
-(char)hasCurrentServerContinuationToken;
-(char)hasClientChangeToken;
-(void)setHasAssetQuotaUsage:(char)arg1 ;
-(char)hasAssetQuotaUsage;
-(void)setHasMetadataQuotaUsage:(char)arg1 ;
-(char)hasMetadataQuotaUsage;
-(void)setZoneishPcsNeedsRolled:(char)arg1 ;
-(void)setHasZoneishPcsNeedsRolled:(char)arg1 ;
-(char)hasZoneishPcsNeedsRolled;
-(void)setHasZoneKeyRollAllowed:(char)arg1 ;
-(char)hasZoneKeyRollAllowed;
-(char)hasZonePcsModificationTime;
-(char)hasZonePcsModificationDevice;
-(NSData *)currentServerContinuationToken;
-(char)zoneishPcsNeedsRolled;
-(CKDPDate *)zonePcsModificationTime;
-(NSString *)zonePcsModificationDevice;
@end

