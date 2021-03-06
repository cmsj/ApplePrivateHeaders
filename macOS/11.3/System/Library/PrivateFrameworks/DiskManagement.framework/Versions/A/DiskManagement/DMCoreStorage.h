/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiskManagement.framework/Versions/A/DiskManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiskManagement/DiskManagement-Structs.h>
@interface DMCoreStorage : NSObject {

	id _instPriv;

}
-(int)checkNotUsedOrExportedByCoreStorage:(DMUDSPrivRec*)arg1 ;
-(int)doCallDaemonForCoreStorage:(id)arg1 inputDict:(id)arg2 outputDict:(id*)arg3 checkDelegate:(char)arg4 sync:(char)arg5 ;
-(int)isValidLVUUID:(id)arg1 ;
-(int)encodeReserveKekAuthRefIfAnyInDMCoreStorageOptions:(id)arg1 ;
-(int)checkPartitionScheme:(DMUDSPrivRec*)arg1 ;
-(int)isValidLVGUUID:(id)arg1 ;
-(int)isValidPVUUID:(id)arg1 ;
-(int)copyDiskForPhysicalVolume:(id)arg1 disk:(_DADisk*)arg2 ;
-(int)isValidLVFUUID:(id)arg1 ;
-(int)addPhysicalVolumeDisk:(DADiskRef)arg1 toLogicalVolumeGroup:(id)arg2 ;
-(int)resizePhysicalVolume:(id)arg1 size:(id)arg2 withNewMapEntries:(id)arg3 options:(id)arg4 ;
-(int)isDiskLogicalVolumeWithDesignatedBootCampVolume:(DADiskRef)arg1 bootCamp:(char*)arg2 ;
-(int)removePhysicalVolume:(id)arg1 options:(id)arg2 ;
-(int)renameLogicalVolumeGroup:(id)arg1 newName:(id)arg2 options:(id)arg3 ;
-(int)sizeForLogicalVolumeGroup:(id)arg1 size:(id*)arg2 ;
-(int)freeSpaceForLogicalVolumeGroup:(id)arg1 freeSpace:(id*)arg2 ;
-(int)isDamagedLogicalVolumeGroup:(id)arg1 damaged:(char*)arg2 how:(id*)arg3 ;
-(int)sizeForLogicalVolume:(id)arg1 size:(id*)arg2 ;
-(int)logicalVolumeGroupForPhysicalVolume:(id)arg1 logicalVolumeGroup:(id*)arg2 ;
-(int)isLogicalVolumeFamilyEncrypted:(id)arg1 isFullyOrPartiallyEncrypted:(char*)arg2 isLocked:(char*)arg3 ;
-(int)isLogicalVolumeFamilyEncrypted:(id)arg1 isFullyOrPartiallyEncrypted:(char*)arg2 isFullyEncrypted:(char*)arg3 encryptionType:(id*)arg4 isLocked:(char*)arg5 ;
-(int)isSparseLogicalVolumeGroup:(id)arg1 sparse:(char*)arg2 ;
-(int)encryptLogicalVolume:(id)arg1 options:(id)arg2 ;
-(int)isDiskSuitableForEncryption:(DADiskRef)arg1 suitable:(char*)arg2 why:(id*)arg3 options:(id)arg4 ;
-(int)isDiskSuitableForDecryption:(DADiskRef)arg1 suitable:(char*)arg2 why:(id*)arg3 options:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(id)initWithManager:(id)arg1 ;
-(int)encryptSuitableDisk:(DADiskRef)arg1 options:(id)arg2 ;
-(int)decryptSuitableDisk:(DADiskRef)arg1 options:(id)arg2 ;
-(int)logicalVolumeForDisk:(DADiskRef)arg1 logicalVolume:(id*)arg2 ;
-(int)isEncryptedDiskForLogicalVolume:(id)arg1 encrypted:(char*)arg2 locked:(char*)arg3 type:(id*)arg4 ;
-(int)logicalVolumeAndLogicalVolumeGroupForDisk:(DADiskRef)arg1 logicalVolume:(id*)arg2 logicalVolumeGroup:(id*)arg3 ;
-(int)physicalVolumesForLogicalVolumeGroup:(id)arg1 dictionaries:(id*)arg2 ;
-(int)physicalVolumeAndLogicalVolumeGroupForDisk:(DADiskRef)arg1 physicalVolume:(id*)arg2 logicalVolumeGroup:(id*)arg3 ;
-(int)destroyLogicalVolumeGroup:(id)arg1 options:(id)arg2 ;
-(int)finishRevertVolume:(id)arg1 ;
-(int)resizeLogicalVolume:(id)arg1 size:(id)arg2 options:(id)arg3 ;
-(int)makeSparseLogicalVolumeGroup:(id)arg1 options:(id)arg2 ;
-(int)logicalVolumeGroupForLogicalVolume:(id)arg1 logicalVolumeGroup:(id*)arg2 ;
-(int)isCompositeDiskForLogicalVolume:(id)arg1 composite:(char*)arg2 ;
-(int)nameForLogicalVolume:(id)arg1 name:(id*)arg2 ;
-(int)logicalVolumeGroups:(id*)arg1 ;
-(int)logicalVolumesForLogicalVolumeGroup:(id)arg1 dictionaries:(id*)arg2 ;
-(int)nameForLogicalVolumeGroup:(id)arg1 name:(id*)arg2 ;
-(int)logicalVolumeFamilyForLogicalVolume:(id)arg1 logicalVolumeFamily:(id*)arg2 ;
-(int)designatedPhysicalVolumeForResizeLogicalAndPhysicalStackForLogicalVolume:(id)arg1 physicalVolume:(id*)arg2 disk:(_DADisk*)arg3 ;
-(int)logicalVolumeGroupForLogicalVolumeFamily:(id)arg1 logicalVolumeGroup:(id*)arg2 ;
-(int)copyDiskForLogicalVolume:(id)arg1 disk:(_DADisk*)arg2 ;
-(int)unlockLogicalVolume:(id)arg1 options:(id)arg2 ;
-(int)convertDisk:(DADiskRef)arg1 options:(id)arg2 ;
-(int)revertVolume:(id)arg1 options:(id)arg2 ;
-(int)decryptLogicalVolume:(id)arg1 options:(id)arg2 ;
-(int)createLogicalVolumeGroup:(id)arg1 withDisks:(id)arg2 options:(id)arg3 ;
-(int)createLogicalVolumeOnLogicalVolumeGroup:(id)arg1 fs:(id)arg2 name:(id)arg3 size:(id)arg4 options:(id)arg5 ;
-(int)changePassphraseForLogicalVolume:(id)arg1 options:(id)arg2 ;
-(int)destroyLogicalVolume:(id)arg1 options:(id)arg2 ;
-(int)resizeLogicalAndPhysicalStackForLogicalVolume:(id)arg1 size:(id)arg2 withNewMapEntries:(id)arg3 options:(id)arg4 ;
@end

