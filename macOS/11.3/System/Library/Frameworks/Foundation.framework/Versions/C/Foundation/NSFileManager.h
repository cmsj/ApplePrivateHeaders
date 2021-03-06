/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSValue, NSURL, NSString;

@interface NSFileManager : NSObject {

	id _delegate;
	NSValue* _weakDelegateValue;

}

@property (copy,readonly) NSURL * homeDirectoryForCurrentUser; 
@property (copy,readonly) NSURL * temporaryDirectory; 
@property (assign) id<NSFileManagerDelegate> delegate; 
@property (copy,readonly) NSString * currentDirectoryPath; 
@property (copy,readonly) id<NSObject><NSCopying><NSCoding> ubiquityIdentityToken; 
+(id)defaultManager;
-(void)dealloc;
-(id<NSFileManagerDelegate>)delegate;
-(void)setDelegate:(id<NSFileManagerDelegate>)arg1 ;
-(char)fileExistsAtPath:(id)arg1 ;
-(char)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(char)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(NSURL *)homeDirectoryForCurrentUser;
-(id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 ;
-(char)getRelationship:(long long*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4 ;
-(id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(NSURL *)temporaryDirectory;
-(id)stringWithFileSystemRepresentation:(const char*)arg1 length:(unsigned long long)arg2 ;
-(char)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorAtPath:(id)arg1 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(char)isExecutableFileAtPath:(id)arg1 ;
-(id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2 ;
-(id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(char)arg4 error:(id*)arg5 ;
-(char)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3 ;
-(char)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3 ;
-(char)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)directoryCanBeCreatedAtPath:(id)arg1 ;
-(id)displayNameAtPath:(id)arg1 ;
-(id)componentsToDisplayForPath:(id)arg1 ;
-(char)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3 ;
-(id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(char)isUbiquitousItemAtURL:(id)arg1 ;
-(id)_URLForTrashingItemAtURL:(id)arg1 create:(char)arg2 error:(id*)arg3 ;
-(id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)getRelationship:(long long*)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id*)arg5 ;
-(char)_newReplicatePath:(id)arg1 ref:(void*)arg2 atPath:(id)arg3 ref:(void*)arg4 operation:(int)arg5 fileMap:(id)arg6 handler:(id)arg7 ;
-(char)_removeFileAtPath:(id)arg1 handler:(id)arg2 shouldDeleteFork:(char)arg3 enteredDirectory:(char)arg4 ;
-(NSString *)currentDirectoryPath;
-(char)isWritableFileAtPath:(id)arg1 ;
-(char)_replicatePath:(id)arg1 atPath:(id)arg2 operation:(int)arg3 fileMap:(id)arg4 handler:(id)arg5 ;
-(id)_posixPathComponentsWithPath:(id)arg1 ;
-(const char*)fileSystemRepresentationWithPath:(id)arg1 ;
-(char)removeFileAtPath:(id)arg1 handler:(id)arg2 ;
-(char)_removeFileAtPath:(id)arg1 handler:(id)arg2 shouldDeleteFork:(char)arg3 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(char)arg4 error:(id*)arg5 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(char)arg4 ;
-(char)changeFileAttributes:(id)arg1 atPath:(id)arg2 ;
-(char)contentsEqualAtPath:(id)arg1 andPath:(id)arg2 ;
-(id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2 ;
-(id)_safeDelegate;
-(char)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)copyItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)moveItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)_processUsesCloudServices;
-(char)_processHasUbiquityContainerEntitlement;
-(char)_processCanAccessUbiquityIdentityToken;
-(void)_postUbiquityAccountChangeNotification:(id)arg1 ;
-(id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2 ;
-(id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)unmountVolumeAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_mountedVolumeURLsWithPhysicalDisksMatchingVolumeAtURL:(id)arg1 error:(id*)arg2 ;
-(char)_itemAtURLIsInAnyTrash:(id)arg1 ;
-(id)_displayPathForPath:(id)arg1 ;
-(char)changeCurrentDirectoryPath:(id)arg1 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(char)arg2 ;
-(char)fileExistsAtPath:(id)arg1 isDirectory:(char*)arg2 ;
-(char)isReadableFileAtPath:(id)arg1 ;
-(char)isDeletableFileAtPath:(id)arg1 ;
-(char)linkPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(char)copyPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(char)movePath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(id)subpathsAtPath:(id)arg1 ;
-(char)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(id)pathContentOfSymbolicLinkAtPath:(id)arg1 ;
-(char)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2 ;
-(char)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(id)contentsAtPath:(id)arg1 ;
-(id)fileSystemAttributesAtPath:(id)arg1 ;
-(id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2 ;
-(id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(char)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(char)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4 ;
-(char)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(char)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(char)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(char)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3 ;
-(id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(char)arg2 error:(id*)arg3 ;
-(id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(char)arg2 error:(id*)arg3 ;
-(char)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(char)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6 ;
-(char)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)setUbiquitous:(char)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4 ;
-(char)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)URLForUbiquityContainerIdentifier:(id)arg1 ;
-(id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3 ;
-(id<NSObject><NSCopying><NSCoding>)ubiquityIdentityToken;
-(void)_registerForUbiquityAccountChangeNotifications;
-(id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1 ;
-(void)getFileProviderMessageInterfacesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synchronouslyGetFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)homeDirectoryForUser:(id)arg1 ;
-(char)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2 ;
-(void)_performRemoveFileAtPath:(id)arg1 ;
-(char)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2 ;
-(char)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4 ;
-(char)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(void)_web_backgroundRemoveFileAtPath:(id)arg1 ;
-(char)_web_removeFileOnlyAtPath:(id)arg1 ;
-(void)_web_backgroundRemoveLeftoverFiles:(id)arg1 ;
-(id)_web_visibleItemsInDirectoryAtPath:(id)arg1 ;
-(id)_web_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)_web_carbonPathForPath_nowarn:(id)arg1 ;
-(char)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(char*)arg2 traverseLink:(char)arg3 ;
-(id)_web_startupVolumeName_nowarn;
-(char)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2 ;
-(void)_web_noteFileChangedAtPath_nowarn:(id)arg1 ;
-(char)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2 ;
@end

