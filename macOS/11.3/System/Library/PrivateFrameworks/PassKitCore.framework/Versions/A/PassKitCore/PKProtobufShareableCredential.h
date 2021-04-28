/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufShareableCredential : PBCodable <NSCopying> {

	NSString* _cardConfigurationIdentifier;
	NSString* _credentialIdentifier;
	NSString* _credentialIdentifierHash;
	NSString* _encryptedPushProvisioningTarget;
	NSString* _nonce;
	NSString* _ownerDisplayName;
	NSString* _sharingInstanceIdentifier;
	int _status;
	SCD_Struct_PK1 _has;

}

@property (nonatomic,readonly) char hasEncryptedPushProvisioningTarget; 
@property (nonatomic,retain) NSString * encryptedPushProvisioningTarget;              //@synthesize encryptedPushProvisioningTarget=_encryptedPushProvisioningTarget - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) char hasCredentialIdentifierHash; 
@property (nonatomic,retain) NSString * credentialIdentifierHash;                     //@synthesize credentialIdentifierHash=_credentialIdentifierHash - In the implementation block
@property (nonatomic,readonly) char hasOwnerDisplayName; 
@property (nonatomic,retain) NSString * ownerDisplayName;                             //@synthesize ownerDisplayName=_ownerDisplayName - In the implementation block
@property (nonatomic,readonly) char hasCredentialIdentifier; 
@property (nonatomic,retain) NSString * credentialIdentifier;                         //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,readonly) char hasCardConfigurationIdentifier; 
@property (nonatomic,retain) NSString * cardConfigurationIdentifier;                  //@synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier - In the implementation block
@property (nonatomic,readonly) char hasSharingInstanceIdentifier; 
@property (nonatomic,retain) NSString * sharingInstanceIdentifier;                    //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,readonly) char hasNonce; 
@property (nonatomic,retain) NSString * nonce;                                        //@synthesize nonce=_nonce - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)status;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(NSString *)ownerDisplayName;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(void)setCardConfigurationIdentifier:(NSString *)arg1 ;
-(NSString *)cardConfigurationIdentifier;
-(void)setEncryptedPushProvisioningTarget:(NSString *)arg1 ;
-(void)setCredentialIdentifierHash:(NSString *)arg1 ;
-(char)hasEncryptedPushProvisioningTarget;
-(char)hasCredentialIdentifierHash;
-(char)hasOwnerDisplayName;
-(char)hasCredentialIdentifier;
-(char)hasCardConfigurationIdentifier;
-(char)hasSharingInstanceIdentifier;
-(char)hasNonce;
-(NSString *)encryptedPushProvisioningTarget;
-(NSString *)credentialIdentifierHash;
@end
