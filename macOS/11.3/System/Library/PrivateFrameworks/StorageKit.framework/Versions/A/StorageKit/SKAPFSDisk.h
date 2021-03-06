/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageKit.framework/Versions/A/StorageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StorageKit/StorageKit-Structs.h>
#import <StorageKit/SKDisk.h>
#import <libobjc.A.dylib/SKEncryptedDiskProtocol.h>

@class NSString;

@interface SKAPFSDisk : SKDisk <SKEncryptedDiskProtocol> {

	char _isEncrypted;
	char _isConvertingToEncrypted;
	char _isConvertingToDecrypted;
	char _defaultEffaceable;
	char _canBeMountedReadWrite;
	NSString* _apfsUUID;
	unsigned long long _usedSpace;
	unsigned long long _reserveSpace;
	unsigned long long _quotaSpace;
	NSString* _apfsVolumeGroupUUID;
	NSString* _apfsContainerUUID;
	NSString* _apfsRole;

}

@property (retain) NSString * apfsUUID;                             //@synthesize apfsUUID=_apfsUUID - In the implementation block
@property (retain) NSString * apfsContainerUUID;                    //@synthesize apfsContainerUUID=_apfsContainerUUID - In the implementation block
@property (assign) unsigned long long reserveSpace;                 //@synthesize reserveSpace=_reserveSpace - In the implementation block
@property (assign) unsigned long long quotaSpace;                   //@synthesize quotaSpace=_quotaSpace - In the implementation block
@property (assign) unsigned long long usedSpace;                    //@synthesize usedSpace=_usedSpace - In the implementation block
@property (assign) char isEncrypted;                                //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (assign) char isConvertingToEncrypted;                    //@synthesize isConvertingToEncrypted=_isConvertingToEncrypted - In the implementation block
@property (assign) char isConvertingToDecrypted;                    //@synthesize isConvertingToDecrypted=_isConvertingToDecrypted - In the implementation block
@property (assign) char defaultEffaceable;                          //@synthesize defaultEffaceable=_defaultEffaceable - In the implementation block
@property (assign) char canBeMountedReadWrite;                      //@synthesize canBeMountedReadWrite=_canBeMountedReadWrite - In the implementation block
@property (retain) NSString * apfsRole;                             //@synthesize apfsRole=_apfsRole - In the implementation block
@property (retain) NSString * apfsVolumeGroupUUID;                  //@synthesize apfsVolumeGroupUUID=_apfsVolumeGroupUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)matchesDictionary:(id)arg1 ;
-(char)_iCloudRecoveryManageFDEUsers:(PCSIdentityDataRef)arg1 withPCSIdentitySet:(PCSIdentitySetDataRef)arg2 addingUsers:(id)arg3 removingUsers:(id)arg4 handlingProgress:(/*^block*/id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(char)_iCloudRecoveryManageFDEUsers:(PCSIdentityDataRef)arg1 withPCSIdentitySet:(PCSIdentitySetDataRef)arg2 addingUsers:(id)arg3 removingUsers:(id)arg4 resettingUserPasswords:(id)arg5 handlingProgress:(/*^block*/id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(char)_unlockWithiCloudRecovery:(PCSIdentityDataRef)arg1 withPCSIdentitySet:(PCSIdentitySetDataRef)arg2 ;
-(NSString *)apfsContainerUUID;
-(char)canBeMountedReadWrite;
-(id)unwrappediCloudRecoveryKeyForPCSIdentity:(PCSIdentityDataRef)arg1 orPCSIdentitySet:(PCSIdentitySetDataRef)arg2 ;
-(char)deleteSnapshots:(id)arg1 error:(id*)arg2 ;
-(id)allSnapshotUUIDs;
-(char)renameSnapshot:(id)arg1 newName:(id)arg2 error:(id*)arg3 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)container;
-(id)dictionaryRepresentation;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)apfsVolumeGroupUUID;
-(char)isEncrypted;
-(char)unlockWithPassword:(id)arg1 ;
-(void)setIsEncrypted:(char)arg1 ;
-(char)createSnapshot:(id)arg1 error:(id*)arg2 ;
-(char)revertToSnapshot:(id)arg1 error:(id*)arg2 ;
-(id)getAPFSVolumeRole;
-(char)defaultEffaceable;
-(NSString *)apfsUUID;
-(id)getFDEUsers;
-(char)validateEncryptionPassword:(id)arg1 ;
-(char)manageFDEUsersWithPassword:(id)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 handlingProgress:(/*^block*/id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)removeVolumeWithProgress:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)isConvertingToDecrypted;
-(char)isConvertingToEncrypted;
-(id)allSnapshotNames;
-(char)rootFromSnapshot:(id)arg1 error:(id*)arg2 ;
-(char)deleteSnapshot:(id)arg1 error:(id*)arg2 ;
-(void)setAPFSVolumeRole:(id)arg1 ;
-(unsigned long long)usedSpace;
-(char)establishReserveKEK:(id)arg1 ;
-(id)getFDEUserDictionaries;
-(char)updatePrebootWithProgress:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)quotaSpace;
-(unsigned long long)reserveSpace;
-(id)validateEncryptionPassword:(id)arg1 forUser:(id)arg2 ;
-(char)manageFDEUsersWithPassword:(id)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 resettingUserPasswords:(id)arg4 handlingProgress:(/*^block*/id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(char)iCloudRecoveryManageFDEUsers:(PCSIdentityDataRef)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 handlingProgress:(/*^block*/id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(char)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(PCSIdentitySetDataRef)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 handlingProgress:(/*^block*/id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(char)iCloudRecoveryManageFDEUsers:(PCSIdentityDataRef)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 resettingUserPasswords:(id)arg4 handlingProgress:(/*^block*/id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(char)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(PCSIdentitySetDataRef)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 resettingUserPasswords:(id)arg4 handlingProgress:(/*^block*/id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(id)unlockWithPassword:(id)arg1 forUser:(id)arg2 ;
-(char)unlockWithiCloudRecovery:(PCSIdentityDataRef)arg1 ;
-(char)unlockWithiCloudRecoveryPCSSet:(PCSIdentitySetDataRef)arg1 ;
-(id)decryptWithPassword:(id)arg1 ;
-(id)decryptWithPassword:(id)arg1 forUser:(id)arg2 ;
-(char)changeDiskOldPassword:(id)arg1 toNewPassword:(id)arg2 withHint:(id)arg3 ;
-(void)setReserveSpace:(unsigned long long)arg1 ;
-(void)setQuotaSpace:(unsigned long long)arg1 ;
-(void)setUsedSpace:(unsigned long long)arg1 ;
-(void)setCanBeMountedReadWrite:(char)arg1 ;
-(id)minimalDictionaryRepresentation;
-(void)setApfsUUID:(NSString *)arg1 ;
-(void)setApfsContainerUUID:(NSString *)arg1 ;
-(void)setApfsRole:(NSString *)arg1 ;
-(void)setDefaultEffaceable:(char)arg1 ;
-(void)setIsConvertingToEncrypted:(char)arg1 ;
-(void)setIsConvertingToDecrypted:(char)arg1 ;
-(NSString *)apfsRole;
-(void)setApfsVolumeGroupUUID:(NSString *)arg1 ;
@end

