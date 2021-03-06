/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/QLPreviewPanelDelegate.h>
#import <libobjc.A.dylib/QLPreviewPanelDataSource.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSPanel, NSTableView, NSButton, NSBox, _NSDocumentConflictNonTableView, NSURL, NSArray, NSImageView, NSFileVersion, NSString, NSOperationQueue, NSSet;

@interface NSDocumentConflictPanelController : NSObject <NSTableViewDataSource, NSTableViewDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, NSFilePresenter> {

	NSPanel* _panel;
	NSTableView* _tableView;
	NSButton* _keepButton;
	NSButton* _cancelButton;
	NSBox* _nonTableViewContainer;
	_NSDocumentConflictNonTableView* _nonTableView;
	NSURL* _url;
	NSArray* _conflicts;
	char _documentIsShared;
	NSImageView* _clickedImageView;
	id _clickedConflict;
	char _forceTableView;
	double _fullPanelHeight;
	double _staticHeight;

}

@property (readonly) NSFileVersion * currentVersion; 
@property (readonly) NSArray * selectedVersions; 
@property (readonly) NSArray * unselectedVersions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(void)dealloc;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(id)_panel;
-(void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(/*^block*/id)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)cancel:(id)arg1 ;
-(NSArray *)selectedVersions;
-(NSArray *)unselectedVersions;
-(NSFileVersion *)currentVersion;
-(void)beginConflictPanelForURL:(id)arg1 modalForWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateButtons;
-(char)acceptsPreviewPanelControl:(id)arg1 ;
-(void)beginPreviewPanelControl:(id)arg1 ;
-(void)endPreviewPanelControl:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewPanel:(id)arg1 ;
-(id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2 ;
-(void)_reloadConflictsRefreshingAll:(char)arg1 ;
-(void)_startLoadingThumbnailForConflict:(id)arg1 force:(char)arg2 ;
-(void)_windowBackingDidChange:(id)arg1 ;
-(void)_updateConflictDisplay;
-(id)_selectedConflicts;
-(id)_unselectedConflicts;
-(id)_keepButtonTitleForNumberOfSelectedVersions:(long long)arg1 totalNumber:(long long)arg2 ;
-(id)_makeVersionView;
-(char)_shouldShowTableView;
-(void)_updateNonTableView;
-(double)_desiredHeightOfPanel;
-(void)_enumerateAllRowViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)_conflictsForURL:(id)arg1 ;
-(void)keep:(id)arg1 ;
-(void)_selectedConflictsChanged;
-(void)_didClickOnImageView:(id)arg1 forConflict:(id)arg2 ;
-(char)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2 ;
-(char)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(char)previewPanel:(id)arg1 shouldShowShareButtonForItem:(id)arg2 ;
@end

