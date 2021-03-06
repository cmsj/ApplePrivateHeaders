/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ScreenSaverDefaults, NSString, PHPhotoLibrary, NSArray, NSObject, PHCachingImageManager, PHImageRequestOptions, NSWindow, ILMediaBrowserView, NSView, NSPopUpButton, NSTextField, NSButton, NSMutableArray;

@interface ScreenSaverPhotoChooser : NSObject {

	ScreenSaverDefaults* _defaults;
	unsigned long long _currentPhotoChooserSource;
	NSString* _selectedLocalIdentifier;
	PHPhotoLibrary* _photosLibrary;
	NSArray* _latestPhotosProjects;
	NSArray* _latestPhotosEvents;
	NSArray* _defaultCollections;
	NSObject*<OS_dispatch_queue> _cacheMonitorQueue;
	PHCachingImageManager* _cacheMgr;
	PHImageRequestOptions* _cacheRequestOptions;
	long long _remoteAssetCount;
	long long _totalRemoteAssetCount;
	long long _failedfetchCount;
	char _monitoring;
	NSArray* _mediaBrowserViewTLOArray;
	NSWindow* _mediaChooserWindow;
	ILMediaBrowserView* _mediaBrowserView;
	NSArray* _customControlsViewTLOArray;
	NSView* _customControlsView;
	NSPopUpButton* _sourcePopUpButton;
	NSTextField* _sourceLabelField;
	NSButton* _sourceShuffleButton;
	/*^block*/id _sourceMenuLoadedBlock;
	NSMutableArray* _blocksToCallOnceFinishedLoading;

}
+(id)photoChooser;
+(id)_builtInCollectionsOrder;
-(void)dealloc;
-(id)init;
-(id)_defaultFetchOptions;
-(id)customControlsView;
-(void)changeToSourceType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_openLibraryWithUpgrade:(char)arg1 ;
-(id)_imagePathsForAssetsCollection:(id)arg1 ;
-(id)_imageFilesInDirectory:(id)arg1 ;
-(char)shufflesPhotos;
-(void)setShufflesPhotos:(char)arg1 ;
-(id)currentlySelectedIdentifierInsideSource;
-(id)sourceItemsForPhotoChooserSource:(unsigned long long)arg1 ;
-(void)_addHeaderString:(id)arg1 toMenu:(id)arg2 ;
-(void)iLifeEventClickedFromPopup:(id)arg1 ;
-(void)chooseFolderClickedFromMenu:(id)arg1 ;
-(void)chooseFromMediaBrowser:(id)arg1 ;
-(id)currentlySelectedName;
-(void)_presentAddFolderSheetOnWindow:(id)arg1 ;
-(void)generateSourcePopupMenu;
-(void)presentMediaBrowserSheetOnWindow:(id)arg1 ;
-(void)_resetLastViewedPhotoPath;
-(void)_generateRecentEventsList;
-(void)_generateDefaultCollections;
-(void)loadPhotoSourcesAndCallBlockWhenDone:(/*^block*/id)arg1 ;
-(id)_displayNameForIdentifier:(id)arg1 ;
-(void)changeToSourceType:(unsigned long long)arg1 identifier:(id)arg2 persistChange:(char)arg3 ;
-(id)_filePathForURL:(id)arg1 isInEligibleArray:(id)arg2 ;
-(id)_fetchPeopleAlbumAssets;
-(id)_fetchPersonAlbumAssetsForIdentifier:(id)arg1 ;
-(id)_fetchResultForIdentifier:(id)arg1 ;
-(void)_processCollectionList:(id)arg1 intoAssetPaths:(id)arg2 ;
-(void)_processAssetCollection:(id)arg1 intoAssetPaths:(id)arg2 ;
-(void)_processAsset:(id)arg1 intoAssetPaths:(id)arg2 ;
-(void)_monitorCacheLoading;
-(void)_initalizeDownloadProgress;
-(void)_resetToDefaultImageSelection;
-(void)_terminateDownloadProgress;
-(void)_updateDownloadProgress;
-(id)listOfPhotoPathsFromSelectedSource;
-(void)sourcePopUpClicked:(id)arg1 ;
-(void)sourceShuffleClicked:(id)arg1 ;
-(void)mediaBrowserChoosePhotoSet:(id)arg1 ;
-(void)mediaBrowserCancel:(id)arg1 ;
-(char)mediaBrowserView:(id)arg1 shouldDisplayMediaGroup:(id)arg2 ;
-(char)mediaBrowserView:(id)arg1 shouldDisplayMediaObject:(id)arg2 ;
-(char)mediaBrowserView:(id)arg1 shouldSelectMediaObject:(id)arg2 ;
-(char)mediaBrowserView:(id)arg1 shouldPreviewDoubleClickedItem:(id)arg2 ;
-(void)setLastViewedPhotoPath:(id)arg1 forScreenSaverView:(id)arg2 ;
@end

