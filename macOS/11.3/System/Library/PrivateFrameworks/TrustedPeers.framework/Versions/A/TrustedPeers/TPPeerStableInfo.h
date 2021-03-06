/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrustedPeers/TrustedPeers-Structs.h>
@class TPPolicyVersion, NSDictionary, NSString, NSData;

@interface TPPeerStableInfo : NSObject {

	int _syncUserControllableViews;
	unsigned long long _clock;
	TPPolicyVersion* _frozenPolicyVersion;
	TPPolicyVersion* _flexiblePolicyVersion;
	NSDictionary* _policySecrets;
	NSString* _deviceName;
	NSString* _serialNumber;
	NSString* _osVersion;
	NSData* _recoverySigningPublicKey;
	NSData* _recoveryEncryptionPublicKey;
	NSData* _data;
	NSData* _sig;

}

@property (assign,nonatomic) unsigned long long clock;                          //@synthesize clock=_clock - In the implementation block
@property (nonatomic,retain) NSDictionary * policySecrets;                      //@synthesize policySecrets=_policySecrets - In the implementation block
@property (nonatomic,retain) NSData * recoverySigningPublicKey;                 //@synthesize recoverySigningPublicKey=_recoverySigningPublicKey - In the implementation block
@property (nonatomic,retain) NSData * recoveryEncryptionPublicKey;              //@synthesize recoveryEncryptionPublicKey=_recoveryEncryptionPublicKey - In the implementation block
@property (nonatomic,retain) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * sig;                                      //@synthesize sig=_sig - In the implementation block
@property (readonly) TPPolicyVersion * frozenPolicyVersion;                     //@synthesize frozenPolicyVersion=_frozenPolicyVersion - In the implementation block
@property (readonly) TPPolicyVersion * flexiblePolicyVersion;                   //@synthesize flexiblePolicyVersion=_flexiblePolicyVersion - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                           //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) int syncUserControllableViews;                   //@synthesize syncUserControllableViews=_syncUserControllableViews - In the implementation block
-(char)checkSignatureWithKey:(id)arg1 ;
-(void)setSig:(NSData *)arg1 ;
-(id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 syncUserControllableViews:(int)arg5 deviceName:(id)arg6 serialNumber:(id)arg7 osVersion:(id)arg8 recoverySigningPubKey:(id)arg9 recoveryEncryptionPubKey:(id)arg10 data:(id)arg11 sig:(id)arg12 ;
-(char)isEqualToPeerStableInfo:(id)arg1 ;
-(TPPolicyVersion *)frozenPolicyVersion;
-(TPPolicyVersion *)flexiblePolicyVersion;
-(void)setPolicySecrets:(NSDictionary *)arg1 ;
-(void)setRecoverySigningPublicKey:(NSData *)arg1 ;
-(void)setRecoveryEncryptionPublicKey:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)serialNumber;
-(NSString *)deviceName;
-(NSString *)osVersion;
-(unsigned long long)clock;
-(void)setClock:(unsigned long long)arg1 ;
-(NSData *)sig;
-(int)syncUserControllableViews;
-(id)initWithData:(id)arg1 sig:(id)arg2 ;
-(NSData *)recoverySigningPublicKey;
-(NSData *)recoveryEncryptionPublicKey;
-(id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 syncUserControllableViews:(int)arg5 deviceName:(id)arg6 serialNumber:(id)arg7 osVersion:(id)arg8 signingKeyPair:(id)arg9 recoverySigningPubKey:(id)arg10 recoveryEncryptionPubKey:(id)arg11 error:(id*)arg12 ;
-(NSDictionary *)policySecrets;
-(id)bestPolicyVersion;
@end

