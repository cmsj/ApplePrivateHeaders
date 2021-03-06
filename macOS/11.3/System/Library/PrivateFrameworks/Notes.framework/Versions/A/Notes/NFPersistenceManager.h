/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NFPersistenceManager : NSObject
+(id)managedObjectContext;
+(id)persistentStoreCoordinator;
+(id)managedObjectModel;
+(id)persistentStoreCoordinatorAddPersistentStoreIfNecessary:(char)arg1 ;
+(char)isRunningInNotes;
+(char)isAppSandboxed;
+(id)notesContainerLibraryURL;
+(char)storeCoordinatorIsReadOnly;
+(id)_validStoreURLInDataDirectory:(id)arg1 movingOldStoreIfNeeded:(char)arg2 withCoordinator:(id)arg3 error:(id*)arg4 ;
+(char)_backupExistingStore:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3 ;
+(id)_storeURLForVersion:(unsigned long long)arg1 inDataDirectory:(id)arg2 ;
+(void)setStoreCoordinatorIsReadOnly:(char)arg1 ;
+(void)addPersistentStoreIfNeeded;
+(void)setNotesContainerLibraryURL:(id)arg1 ;
@end

