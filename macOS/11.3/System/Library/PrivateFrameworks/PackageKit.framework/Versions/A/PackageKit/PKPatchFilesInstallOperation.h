/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation {

	PKPackageSpecifier* _currentPackageSpecifier;
	CompressionQueueContext_sRef _compressionQueue;
	char _useAFSCByDefault;

}
-(id)currentPackageSpecifier;
-(char)isCompressionEnabledForCurrentPackage;
-(void)queueSandboxFileForCompression:(id)arg1 ;
-(char)shouldPatchFileAtSubpath:(id)arg1 inComponent:(id)arg2 ;
-(char)patchFileAtSubpath:(id)arg1 inComponent:(id)arg2 atSandboxPrefix:(id)arg3 onDiskPrefix:(id)arg4 withRequirements:(id)arg5 error:(id*)arg6 ;
-(void)createCompressionQueue;
-(char)applyPatchesForPackageSpecifier:(id)arg1 error:(id*)arg2 ;
-(void)finishCompressionQueue;
-(char)isBackwardsIncompatibleCompressionEnabledForCurrentPackage;
-(int)installState;
-(void)main;
@end

