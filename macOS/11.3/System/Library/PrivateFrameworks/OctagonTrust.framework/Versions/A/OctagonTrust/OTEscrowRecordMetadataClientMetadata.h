/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/Versions/A/OctagonTrust
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying> {

	unsigned long long _devicePlatform;
	unsigned long long _secureBackupMetadataTimestamp;
	unsigned long long _secureBackupNumericPassphraseLength;
	unsigned long long _secureBackupUsesComplexPassphrase;
	unsigned long long _secureBackupUsesNumericPassphrase;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSString* _deviceMid;
	NSString* _deviceModel;
	NSString* _deviceModelClass;
	NSString* _deviceModelVersion;
	NSString* _deviceName;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) char hasSecureBackupMetadataTimestamp; 
@property (assign,nonatomic) unsigned long long secureBackupMetadataTimestamp;                    //@synthesize secureBackupMetadataTimestamp=_secureBackupMetadataTimestamp - In the implementation block
@property (assign,nonatomic) char hasSecureBackupNumericPassphraseLength; 
@property (assign,nonatomic) unsigned long long secureBackupNumericPassphraseLength;              //@synthesize secureBackupNumericPassphraseLength=_secureBackupNumericPassphraseLength - In the implementation block
@property (assign,nonatomic) char hasSecureBackupUsesComplexPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesComplexPassphrase;                //@synthesize secureBackupUsesComplexPassphrase=_secureBackupUsesComplexPassphrase - In the implementation block
@property (assign,nonatomic) char hasSecureBackupUsesNumericPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesNumericPassphrase;                //@synthesize secureBackupUsesNumericPassphrase=_secureBackupUsesNumericPassphrase - In the implementation block
@property (nonatomic,readonly) char hasDeviceColor; 
@property (nonatomic,retain) NSString * deviceColor;                                              //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,readonly) char hasDeviceEnclosureColor; 
@property (nonatomic,retain) NSString * deviceEnclosureColor;                                     //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
@property (nonatomic,readonly) char hasDeviceMid; 
@property (nonatomic,retain) NSString * deviceMid;                                                //@synthesize deviceMid=_deviceMid - In the implementation block
@property (nonatomic,readonly) char hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) char hasDeviceModelClass; 
@property (nonatomic,retain) NSString * deviceModelClass;                                         //@synthesize deviceModelClass=_deviceModelClass - In the implementation block
@property (nonatomic,readonly) char hasDeviceModelVersion; 
@property (nonatomic,retain) NSString * deviceModelVersion;                                       //@synthesize deviceModelVersion=_deviceModelVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                                               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) char hasDevicePlatform; 
@property (assign,nonatomic) unsigned long long devicePlatform;                                   //@synthesize devicePlatform=_devicePlatform - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)deviceName;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(char)hasDeviceName;
-(char)hasDeviceModel;
-(NSString *)deviceEnclosureColor;
-(void)setDeviceModelClass:(NSString *)arg1 ;
-(NSString *)deviceModelClass;
-(unsigned long long)devicePlatform;
-(NSString *)deviceMid;
-(NSString *)deviceModelVersion;
-(unsigned long long)secureBackupUsesNumericPassphrase;
-(unsigned long long)secureBackupNumericPassphraseLength;
-(unsigned long long)secureBackupMetadataTimestamp;
-(void)setDevicePlatform:(unsigned long long)arg1 ;
-(char)hasDevicePlatform;
-(void)setDeviceMid:(NSString *)arg1 ;
-(void)setDeviceModelVersion:(NSString *)arg1 ;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(unsigned long long)secureBackupUsesComplexPassphrase;
-(void)setSecureBackupUsesComplexPassphrase:(unsigned long long)arg1 ;
-(void)setSecureBackupUsesNumericPassphrase:(unsigned long long)arg1 ;
-(void)setSecureBackupNumericPassphraseLength:(unsigned long long)arg1 ;
-(void)setSecureBackupMetadataTimestamp:(unsigned long long)arg1 ;
-(void)setHasSecureBackupMetadataTimestamp:(char)arg1 ;
-(char)hasSecureBackupMetadataTimestamp;
-(void)setHasSecureBackupNumericPassphraseLength:(char)arg1 ;
-(char)hasSecureBackupNumericPassphraseLength;
-(void)setHasSecureBackupUsesComplexPassphrase:(char)arg1 ;
-(char)hasSecureBackupUsesComplexPassphrase;
-(void)setHasSecureBackupUsesNumericPassphrase:(char)arg1 ;
-(char)hasSecureBackupUsesNumericPassphrase;
-(char)hasDeviceColor;
-(char)hasDeviceEnclosureColor;
-(char)hasDeviceMid;
-(char)hasDeviceModelClass;
-(char)hasDeviceModelVersion;
-(void)setHasDevicePlatform:(char)arg1 ;
@end

