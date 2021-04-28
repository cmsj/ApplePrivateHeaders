/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HAPKeyStore <NSObject>
@property (nonatomic,readonly) NSString * activeControllerPairingIdentifier; 
@optional
-(char)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 error:(id*)arg3;
-(char)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long*)arg4 resumeSessionID:(unsigned long long)arg5 error:(id*)arg6;
-(char)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id*)arg2;
-(char)deleteAllPeripheralIdentifiers:(id*)arg1;
-(id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long*)arg2 resumeSessionID:(unsigned long long*)arg3 error:(id*)arg4;
-(id)getPeripherialIdentifiersAndAccessoryNames;

@required
-(id)getLocalPairingIdentity:(id*)arg1;
-(char)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2;
-(char)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(char)arg4 error:(id*)arg5;
-(id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(char*)arg2 error:(id*)arg3;
-(char)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2;
-(char)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(char)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(char)arg5 error:(id*)arg6;
-(char)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(char)arg3 error:(id*)arg4;
-(char)removeControllerKeyPairLeaveTombstone:(char)arg1 error:(id*)arg2;
-(id)getOrCreateLocalPairingIdentity:(id*)arg1;
-(char)saveLocalPairingIdentity:(id)arg1 syncable:(char)arg2 error:(id*)arg3;
-(char)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
-(char)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
-(char)updateActiveControllerPairingIdentifier:(id)arg1;
-(char)removeControllerKeyPairWithError:(id*)arg1;
-(char)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3;
-(char)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
-(char)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(char)arg2 error:(id*)arg3;
-(char)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
-(char)removeAllAccessoryKeys:(id*)arg1;
-(NSString *)activeControllerPairingIdentifier;

@end
