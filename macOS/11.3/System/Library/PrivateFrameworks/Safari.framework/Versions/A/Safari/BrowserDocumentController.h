/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSDocumentController.h>
#import <libobjc.A.dylib/NSUserInterfaceValidations.h>

@interface BrowserDocumentController : NSDocumentController <NSUserInterfaceValidations> {

	unsigned long long _browsingModeForNewDocument;

}

@property (assign,nonatomic) unsigned long long browsingModeForNewDocument;              //@synthesize browsingModeForNewDocument=_browsingModeForNewDocument - In the implementation block
+(id)sharedDocumentController;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)openDocument:(id)arg1 ;
-(id)typeForContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maximumRecentDocumentCount;
-(id)makeUntitledDocumentOfType:(id)arg1 error:(id*)arg2 ;
-(id)_openableFileExtensions;
-(id)openDocumentWithContentsOfURL:(id)arg1 display:(char)arg2 ;
-(id)goToURL:(id)arg1 windowPolicy:(long long)arg2 ;
-(id)openEmptyBrowserDocumentWithBrowsingMode:(unsigned long long)arg1 ;
-(id)goToURLFromExternalApplication:(id)arg1 forcingHTMLMIMEType:(char)arg2 openInNewPrivateWindowIfNecessary:(char)arg3 bundleIdentifierOfApplicationThatInitiatedNavigation:(id)arg4 ;
-(id)orderedBrowserDocuments;
-(void)newTab:(id)arg1 ;
-(id)frontmostBrowserDocument;
-(id)frontmostBrowserDocumentPassingTest:(/*^block*/id)arg1 ;
-(id)findOrCreateFrontmostBrowserDocument;
-(void)createPrivateBrowsingDocument:(id)arg1 ;
-(id)goToURL:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const TabPlacementHint*)arg3 ;
-(void)goHome:(id)arg1 ;
-(void)setBrowsingModeForNewDocument:(unsigned long long)arg1 ;
-(id)createHiddenEmptyBrowserDocumentWithBrowsingMode:(unsigned long long)arg1 configuration:(id)arg2 suppressSidebar:(char)arg3 isPopupWindow:(char)arg4 ;
-(void)openLocation:(id)arg1 ;
-(char)canGoHome;
-(void)searchWeb:(id)arg1 ;
-(void)newTabFromFileMenu:(id)arg1 ;
-(void)newTabAtEndFromFileMenu:(id)arg1 ;
-(char)canCreateNewTab;
-(char)_isNewTabDefaultForWindowUserTabbingPreference;
-(void)_setUpNewTabOrWindowMenuItem:(id)arg1 addOptionFlagModifier:(char)arg2 ;
-(void)showTopSitesWall:(id)arg1 ;
-(char)_canShowStartPage;
-(void)showStartPage:(id)arg1 ;
-(void)showFavorites:(id)arg1 ;
-(char)_canShowUnifiedField;
-(void)toggleBookmarksEditView:(id)arg1 ;
-(id)_frontmostBrowserDocumentIfAvailableUsingWindowPolicy:(long long)arg1 ;
-(void)toggleHistoryInBookmarksView:(id)arg1 ;
-(id)_goToEachRequest:(id)arg1 tabLabels:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 forSearch:(char)arg5 inNewProcess:(char)arg6 ;
-(id)_openDocumentWithContentsOfRequest:(id)arg1 behind:(char)arg2 display:(char)arg3 browsingMode:(unsigned long long)arg4 isPopupWindow:(char)arg5 ;
-(id)createAutomationSessionDocument;
-(id)browserDocuments;
-(id)_createEmptyBrowserDocumentAndDisplay:(char)arg1 behind:(char)arg2 loadWindow:(char)arg3 suppressSidebar:(char)arg4 isPopupWindow:(char)arg5 browsingMode:(unsigned long long)arg6 websiteDataStore:(id)arg7 restoringFromLastSession:(char)arg8 initialSize:(CGSize)arg9 ;
-(id)createHiddenEmptyBrowserDocumentWithBrowsingMode:(unsigned long long)arg1 isPopupWindow:(char)arg2 restoringFromLastSession:(char)arg3 initialSize:(CGSize)arg4 ;
-(id)activateFrontmostBrowserDocumentIfAvailable;
-(char)_browserDocumentIsAvailable:(id)arg1 usingWindowPolicy:(long long)arg2 ;
-(id)goToRequest:(id)arg1 tabLabel:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 inNewProcess:(char)arg5 ;
-(id)_goToRequest:(id)arg1 tabLabel:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 forSearch:(char)arg5 inNewProcess:(char)arg6 ;
-(id)goToURL:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const TabPlacementHint*)arg3 forSearch:(char)arg4 ;
-(id)goToRequest:(id)arg1 tabLabel:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 ;
-(void)_newTabInCurrentContext:(char)arg1 sender:(id)arg2 ;
-(id)frontmostNonPopupBrowserDocumentIfAvailableUsingWindowPolicy:(long long)arg1 browsingMode:(unsigned long long)arg2 ;
-(id)createHiddenEmptyBrowserDocumentWithBrowsingMode:(unsigned long long)arg1 isPopupWindow:(char)arg2 ;
-(id)_URLToVisitFromURL:(id)arg1 ;
-(void)createAutomationSessionDocument:(id)arg1 ;
-(char)anyInactiveTabs;
-(id)createHiddenEmptyBrowserDocument;
-(id)createHiddenBrowserDocumentForWebExtensionsWithBrowsingMode:(unsigned long long)arg1 shouldLoadUserStartPage:(char)arg2 isPopupWindow:(char)arg3 ;
-(id)createHiddenEmptyBrowserDocumentWithBrowsingMode:(unsigned long long)arg1 websiteDataStore:(id)arg2 suppressSidebar:(char)arg3 isPopupWindow:(char)arg4 ;
-(id)createHiddenEmptyBrowserDocumentWithoutLoadingWindowWithBrowsingMode:(unsigned long long)arg1 ;
-(id)findOrCreateFrontmostBrowserDocumentIncludingPopups;
-(id)goToCloudTab:(id)arg1 tabLabel:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 ;
-(void)enumerateBrowserDocumentsUsingBlock:(/*^block*/id)arg1 ;
-(id)tryMultipleURLs:(unique_ptr<WTF::Deque<NSURL *, 0>, std::__1::default_delete<WTF::Deque<NSURL *, 0>>>*)arg1 windowPolicy:(long long)arg2 httpReferrer:(id)arg3 ;
-(id)_URLFromShortcutFile:(id)arg1 ;
-(unsigned long long)browsingModeForNewDocument;
@end

