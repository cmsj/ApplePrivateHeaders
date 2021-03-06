/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/WBSBookmarkDBAccess.h>

@class NSString;

@interface MacSafariBookmarkDBAccess : NSObject <WBSBookmarkDBAccess>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const void*)createDatabase;
-(void)resetDeviceIdentifier;
-(void)saveDatabase:(void*)arg1 ;
-(void)openDatabase:(void*)arg1 ;
-(void)closeDatabase:(void*)arg1 shouldSave:(char)arg2 ;
-(const CFDataRef)copySyncDataWithDatabase:(void*)arg1 ;
-(void)setSyncData:(CFDataRef)arg1 database:(void*)arg2 ;
-(void)clearAllSyncDataWithDatabase:(void*)arg1 ;
-(const CFArrayRef)copyChangesWithDatabase:(void*)arg1 changeToken:(const void*)arg2 ;
-(void)clearChangesWithChangeToken:(void*)arg1 database:(void*)arg2 ;
-(void)removeItemWithServerId:(CFStringRef)arg1 database:(void*)arg2 ;
-(void)beginMergingChangesWithDatabase:(void*)arg1 ;
-(void)finishMergingChangesWithDatabase:(void*)arg1 ;
-(const CFStringRef)copyServerIdWithItem:(void*)arg1 ;
-(void)setServerId:(CFStringRef)arg1 item:(void*)arg2 ;
-(const CFStringRef)copyParentServerIdWithItem:(void*)arg1 ;
-(const CFStringRef)copySyncKeyWithItem:(void*)arg1 ;
-(void)setSyncKey:(CFStringRef)arg1 item:(void*)arg2 ;
-(const CFDataRef)copySyncDataWithItem:(void*)arg1 ;
-(void)setSyncData:(CFDataRef)arg1 item:(void*)arg2 ;
-(int)changeTypeForChange:(void*)arg1 ;
-(char)changeIsBookmarkChange:(void*)arg1 ;
-(char)changeIsFolderChange:(void*)arg1 ;
-(const void*)copyChangedItemWithChange:(void*)arg1 ;
-(const CFStringRef)copyServerIdWithChange:(void*)arg1 ;
-(char)changeIsDAVMoveChange:(void*)arg1 ;
-(id)copyDeviceIdentifier;
-(char)performMaintenanceOnDatabase:(void*)arg1 afterVersion:(id)arg2 ;
-(const void*)createDatabaseWithoutLock;
-(void)saveBackupOfDatabase:(void*)arg1 withName:(id)arg2 ;
-(long long)localCloudKitMigrationState:(void*)arg1 ;
-(void)setLocalCloudKitMigrationState:(long long)arg1 database:(void*)arg2 ;
-(id)copyAccountHashWithDatabase:(void*)arg1 ;
-(void)setAccountHash:(id)arg1 database:(void*)arg2 ;
-(id)copyChangeTokenWithDatabase:(void*)arg1 ;
-(const void*)copyItemWithLocalID:(id)arg1 database:(void*)arg2 ;
-(id)copyLocalIDsInFolderWithLocalID:(id)arg1 database:(void*)arg2 ;
-(const void*)copyItemWithServerId:(id)arg1 database:(void*)arg2 ;
-(char)addItem:(void*)arg1 underFolderWithServerId:(id)arg2 database:(void*)arg3 ;
-(void)performDeduplicationWithDatabase:(void*)arg1 mode:(long long)arg2 ;
-(id)copyServerIdsInFolderWithServerId:(id)arg1 database:(void*)arg2 ;
-(void)setChildrenOrder:(id)arg1 forFolderWithServerId:(id)arg2 database:(void*)arg3 ;
-(id)copyServerIdInFolderBeforeServerId:(id)arg1 database:(void*)arg2 ;
-(id)copyServerIdInFolderAfterServerId:(id)arg1 database:(void*)arg2 ;
-(id)copyFirstServerIdInFolderWithServerId:(id)arg1 database:(void*)arg2 ;
-(id)copyLastServerIdInFolderWithServerId:(id)arg1 database:(void*)arg2 ;
-(long long)itemTypeWithItem:(void*)arg1 ;
-(char)item:(void*)arg1 isInFolderWithServerSyncId:(id)arg2 ;
-(char)item:(void*)arg1 isEqualToItem:(void*)arg2 ;
-(long long)folderTypeWithFolder:(void*)arg1 ;
-(const void*)createFolderWithType:(long long)arg1 database:(void*)arg2 ;
-(long long)bookmarkTypeWithBookmark:(void*)arg1 ;
-(const void*)createBookmarkWithType:(long long)arg1 database:(void*)arg2 ;
-(char)changeIsMoveChange:(void*)arg1 ;
-(id)copyDeletedBookmarkSyncDataWithChange:(void*)arg1 ;
-(void)setDeletedBookmarkSyncData:(id)arg1 change:(void*)arg2 ;
-(id)copyModifiedAttributesWithChange:(void*)arg1 ;
-(id)copyAttributesWithItem:(void*)arg1 ;
-(void)setModifiedAttributes:(id)arg1 item:(void*)arg2 ;
-(id)copyValueForKey:(id)arg1 item:(void*)arg2 ;
-(id)copyKnownFolderKeys;
-(id)copyKnownBookmarkKeys;
-(id)copyKnownReadingListItemKeys;
-(void)clearlAllLocalBookmarksForAutomatedTestingWithDatabase:(void*)arg1 ;
@end

