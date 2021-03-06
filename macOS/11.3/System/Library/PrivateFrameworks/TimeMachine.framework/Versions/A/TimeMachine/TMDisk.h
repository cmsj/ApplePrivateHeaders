/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TimeMachine/TimeMachine-Structs.h>
@class NSURL, NSDictionary, NSString, NSSet, NSNumber, NSArray;

@interface TMDisk : NSObject {

	NSURL* _mountPointURL;
	DADiskRef _diskRef;
	short _volumeRefNum;
	statfs _stfs;
	NSDictionary* _diskArbDescription;
	unsigned long long _knownTraits;
	unsigned long long _traits;
	NSString* _volumeUUID;
	long long _lastSnapshotXIDSum;
	long long _lastSnapshotCount;
	long long _lastSnapshotDatalessCount;
	NSString* _mountPointPath;

}

@property (readonly) NSURL * mountPointURL;                                         //@synthesize mountPointURL=_mountPointURL - In the implementation block
@property (readonly) NSString * mountPoint;                                         //@synthesize mountPointPath=_mountPointPath - In the implementation block
@property (readonly) DADiskRef diskRef; 
@property (readonly) statfs statfs;                                                 //@synthesize stfs=_stfs - In the implementation block
@property (readonly) NSDictionary * diskArbDescription; 
@property (readonly) int device; 
@property (readonly) NSString * deviceNode; 
@property (readonly) char isInternalDevice; 
@property (readonly) NSString * filesystemTypeName; 
@property (readonly) NSString * volumeName; 
@property (readonly) NSString * volumeUUID; 
@property (readonly) short volumeRefNum;                                            //@synthesize volumeRefNum=_volumeRefNum - In the implementation block
@property (readonly) char isEncrypted; 
@property (readonly) char canBeEncryptedWithoutDestroyingOtherVolumes; 
@property (readonly) char isStartupDisk; 
@property (readonly) char mountedLocally; 
@property (readonly) char mountedVisibly; 
@property (readonly) char mountedReadOnly; 
@property (readonly) char isJournaled; 
@property (readonly) char ignoringOwnership; 
@property (readonly) char isBackupVolume; 
@property (readonly) unsigned long long mediumType; 
@property (readonly) DADiskRef liveDiskRef; 
@property (readonly) TMDisk * liveDisk; 
@property (readonly) NSSet * physicalWholeDiskIdentifiers; 
@property (readonly) char isHFS; 
@property (readonly) char isHFSExtended; 
@property (readonly) char isXSAN; 
@property (readonly) char isEXFAT; 
@property (readonly) char isFAT; 
@property (readonly) char isNTFS; 
@property (readonly) char isSMB; 
@property (readonly) char isAFP; 
@property (readonly) char isWindows; 
@property (readonly) char isAPFS; 
@property (readonly) char isAPFSSnapshot; 
@property (readonly) NSNumber * capacity; 
@property (readonly) NSNumber * bytesFree; 
@property (readonly) NSNumber * bytesUsed; 
@property (readonly) char sharesSpaceWithROSPSystemOrDataVolume; 
@property (readonly) char appearsEmpty; 
@property (readonly) char eligibleForBackup; 
@property (readonly) char includedByDefault; 
@property (readonly) char backedByDiskImage; 
@property (readonly) char isAppleBootPartition; 
@property (readonly) char supportsBackupStores; 
@property (readonly) char supportsBackupDiskImages; 
@property (readonly) char isRecoveryVolume; 
@property (readonly) char isCaseSensitive; 
@property (readonly) char mountedTargetDiskMode; 
@property (readonly) char eligibleForSetUpOffer; 
@property (readonly) NSString * apfsSnapshotName; 
@property (readonly) unsigned long long apfsSnapshotXID; 
@property (readonly) NSString * apfsSnapshotUUID; 
@property (readonly) NSArray * mountedDisksInVolumeGroup; 
@property (readonly) NSString * apfsVolumeGroupUUID; 
@property (readonly) NSNumber * apfsVolumeRole; 
@property (readonly) char isROSPSystemVolume; 
@property (readonly) char isROSPDataVolume; 
@property (readonly) char isBackupDataVolume; 
@property (readonly) char isCoreStorage; 
+(void)enumerateMountedDisksUsingBlock:(/*^block*/id)arg1 ;
+(id)diskForMountPoint:(id)arg1 error:(id*)arg2 ;
+(id)diskForMountPoint:(id)arg1 ;
+(id)systemDiskForVolumeGroupUUID:(id)arg1 ;
+(id)dataDiskForVolumeGroupUUID:(id)arg1 ;
+(id)bootedROSPSystemVolume;
+(id)diskForDiskRef:(DADiskRef)arg1 ;
+(id)bootedROSPDataVolume;
+(id)diskForVolumeUUID:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)device;
-(NSNumber *)capacity;
-(char)isCaseSensitive;
-(NSString *)volumeUUID;
-(NSString *)mountPoint;
-(DADiskRef)liveDiskRef;
-(NSURL *)mountPointURL;
-(NSString *)volumeName;
-(long long)fileSystemType;
-(char)isJournaled;
-(char)isAPFS;
-(char)isHFS;
-(char)isEXFAT;
-(char)isWindows;
-(char)isROSPSystemVolume;
-(char)isROSPDataVolume;
-(NSString *)apfsVolumeGroupUUID;
-(char)isBackupDataVolume;
-(char)isAPFSSnapshot;
-(char)_isCaseSensitive;
-(statfs)statfs;
-(NSString *)deviceNode;
-(char)backedByDiskImage;
-(id)volumeUUID:(id*)arg1 ;
-(char)eligibleForBackup;
-(char)includedByDefault;
-(id)initWithStatfs:(statfs)arg1 diskRef:(DADiskRef)arg2 ;
-(DADiskRef)diskRef;
-(NSDictionary *)diskArbDescription;
-(char)isCoreStorage;
-(unsigned)coreStorageConversionProgress:(double*)arg1 ;
-(char)ignoringOwnership;
-(char)_answerForTrait:(unsigned long long)arg1 question:(/*^block*/id)arg2 ;
-(char)isFAT;
-(char)isNTFS;
-(NSString *)apfsSnapshotName;
-(TMDisk *)liveDisk;
-(unsigned long long)apfsSnapshotXID;
-(id)privateSizeOfAPFSSnapshotsFromStartXID:(unsigned long long)arg1 to:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSNumber *)bytesFree;
-(NSNumber *)bytesUsed;
-(id)calculateVolumeBytesUsedIncludingSnapshots;
-(id)calculateBytesUsedByAllSnapshots:(id*)arg1 ;
-(char)_eligibleForBackup;
-(char)isXSAN;
-(char)mountedLocally;
-(NSNumber *)apfsVolumeRole;
-(char)isRecoveryVolume;
-(char)mountedVisibly;
-(char)isAppleBootPartition;
-(char)isBackupVolume;
-(char)_includedByDefault;
-(char)isStartupDisk;
-(char)mountedReadOnly;
-(char)isInternalDevice;
-(char)_backedByDiskImage;
-(char)_isAppleBootPartition;
-(char)_isRecoveryVolume;
-(char)_supportsBackupStores;
-(char)isHFSExtended;
-(char)_supportsBackupDiskImages;
-(char)_mountedTargetDiskMode;
-(char)_eligibleForSetUpOffer;
-(char)appearsEmpty;
-(char)mountedTargetDiskMode;
-(char)configureNetworkVolumeOptionsAndDisablePrimaryReconnect:(char)arg1 ;
-(char)isAFP;
-(char)isSMB;
-(id)apfsSnapshots:(id*)arg1 ;
-(short)volumeRefNum;
-(unsigned long long)mediumType;
-(NSString *)filesystemTypeName;
-(char)isEncrypted;
-(char)canBeEncryptedWithoutDestroyingOtherVolumes;
-(char)enableJournaling;
-(char)setIgnoringOwnership:(char)arg1 ;
-(NSString *)apfsSnapshotUUID;
-(id)calculateSnapshotUniqueSize:(id*)arg1 ;
-(NSSet *)physicalWholeDiskIdentifiers;
-(id)calculateLiveVolumeBytesUsed;
-(char)sharesSpaceWithROSPSystemOrDataVolume;
-(char)supportsBackupStores;
-(char)supportsBackupDiskImages;
-(char)eligibleForSetUpOffer;
-(char)configureReconnectTimeoutsAndQOSForBackup;
-(id)apfsSnapshotsByName:(id*)arg1 ;
-(id)apfsSnapshotNames:(id*)arg1 ;
-(id)apfsDatalessSnapshotNames:(id*)arg1 ;
-(char)createAPFSSnapshot:(id)arg1 error:(id*)arg2 ;
-(char)deleteAPFSSnapshot:(id)arg1 error:(id*)arg2 ;
-(char)renameAPFSSnapshot:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(char)waitForSnapshotDeletionUntil:(id)arg1 error:(id*)arg2 ;
-(char)makeDatalessAPFSSnapshot:(id)arg1 error:(id*)arg2 ;
-(char)mountAPFSSnapshot:(id)arg1 atMountPoint:(id)arg2 error:(id*)arg3 ;
-(id)privateSizeOfAPFSSnapshotsFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(NSArray *)mountedDisksInVolumeGroup;
@end

