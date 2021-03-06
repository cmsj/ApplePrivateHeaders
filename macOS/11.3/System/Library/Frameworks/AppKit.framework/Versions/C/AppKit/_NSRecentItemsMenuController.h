/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppKit/AppKit-Structs.h>
@class NSMutableDictionary, NSObject, NSOperationQueue;

@interface _NSRecentItemsMenuController : NSObject {

	NSMutableDictionary* _recents;
	int _recentsLimit;
	NSMutableDictionary* orderedPendingRecentDocumentURLsPerKey;
	NSObject*<OS_dispatch_queue> pendingRecentsQueue;
	NSOperationQueue* _backgroundRecentDocumentResolutionQueue;
	NSMutableDictionary* _cachedRecentDocumentInfoPerKey;
	NSOperationQueue* _recentDocumentAccessQueue;

}

@property (retain) NSOperationQueue * recentDocumentAccessQueue;              //@synthesize recentDocumentAccessQueue=_recentDocumentAccessQueue - In the implementation block
+(id)_recentMenuItemTitlesFromLocationComponentChains:(id)arg1 includingIcons:(char)arg2 ;
+(id)_recentMenuItemTitlesFromRecentDocumentInfos:(id)arg1 includingIcons:(char)arg2 ;
-(void)dealloc;
-(id)init;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(id)_menuName;
-(unsigned long long)_preferredRecentsLimit;
-(void)__noteNewRecentDocumentURL:(id)arg1 forKey:(id)arg2 ;
-(id)recordsKey;
-(unsigned long long)maximumRecentDocumentCount;
-(id)_recentDocumentRecordsKeyForMenuTag:(long long)arg1 ;
-(id)_recentDocumentRecordsKeyForMenu:(id)arg1 ;
-(id)_recentDocumentRecordsKeyForUserInterfaceItem:(id)arg1 ;
-(void)_readRecentDocumentDefaultsForKey:(id)arg1 ;
-(OpaqueLSSharedFileListRefRef)_perAppRecentDocumentFileList;
-(void)_writeRecentDocumentDefaultsForKey:(id)arg1 ;
-(void)_updateOpenRecentDocumentsWithNewEntries:(id)arg1 documentsSnapshot:(id)arg2 ;
-(NSOperationQueue *)recentDocumentAccessQueue;
-(void)_notePendingRecentDocumentURLsForKey:(id)arg1 documentsSnapshot:(id)arg2 ;
-(void)_finishNotePendingRecentDocumentURLsForKey:(id)arg1 ;
-(id)_recentDocumentInfoForKey:(id)arg1 ;
-(void)_startResolvingRecentDocumentURLsForKey:(id)arg1 includingResolved:(char)arg2 preliminaryResultsHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_updateMenu:(id)arg1 withRecentDocumentInfos:(id)arg2 includingIcons:(char)arg3 ;
-(id)_resolveRecentDocumentsForKey:(id)arg1 asynchronousUpdater:(/*^block*/id)arg2 ;
-(void)_depopulateOpenRecentMenu:(id)arg1 ;
-(id)_insertItemInMenu:(id)arg1 atIndex:(long long)arg2 ;
-(SEL)_selectorForClearRecentItems;
-(id)_addClearMenuItemToMenu:(id)arg1 withTitle:(id)arg2 ;
-(void)_setOpenRecentMenu:(id)arg1 ;
-(void)_mountedVolumesDidChange:(id)arg1 ;
-(void)_noteRecentDocumentInfoRemoved:(id)arg1 forKey:(id)arg2 ;
-(char)_validateClearRecentItems:(id)arg1 ;
-(void)_invalidateRecentDocumentInfosForVolumeURL:(id)arg1 ;
-(void)_invalidateUnresolvedRecentDocumentInfos;
-(void)noteNewRecentDocumentURL:(id)arg1 ;
-(void)_clearRecentDocuments:(id)arg1 ;
-(id)_recentDocumentURLsForKey:(id)arg1 ;
-(void)_populateOpenRecentMenu:(id)arg1 includingIcons:(char)arg2 ;
-(id)_createOpenRecentMenuItem;
-(void)_finishRestoreForMenus:(id)arg1 ;
-(void)_handleOpenRecentItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRecentDocumentAccessQueue:(NSOperationQueue *)arg1 ;
@end

