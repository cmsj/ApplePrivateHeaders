/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/NSToolbarDelegate.h>
#import <libobjc.A.dylib/RolloverTrackingButtonDelegate.h>

@protocol ToolbarControllerDelegate;
@class NSWindow, BrowserToolbarItem, SearchProvidersController, ToolbarDownloadsButton, UnifiedFieldBezelView, UnifiedFieldContainerView, UnifiedField, ButtonPlus, NSSegmentedControl, NewTabTitlebarButton, CloudTabStore, SafariAppExtensionsController, NSToolbarItem, VisualTabPickerToolbarButton, NSString;

@interface ToolbarController : NSObject <NSToolbarDelegate, RolloverTrackingButtonDelegate> {

	NSWindow* _toolbarWindow;
	BrowserToolbarItem* _backForwardItem;
	BrowserToolbarItem* _autoFillItem;
	BrowserToolbarItem* _topSitesItem;
	BrowserToolbarItem* _homeItem;
	BrowserToolbarItem* _unifiedFieldContainerItem;
	BrowserToolbarItem* _textSizeItem;
	BrowserToolbarItem* _printItem;
	BrowserToolbarItem* _newTabItem;
	BrowserToolbarItem* _sidebarItem;
	BrowserToolbarItem* _historyItem;
	BrowserToolbarItem* _mailPageItem;
	BrowserToolbarItem* _showDownloadsItem;
	BrowserToolbarItem* _showWebInspectorItem;
	BrowserToolbarItem* _bookmarksBarItem;
	BrowserToolbarItem* _perSitePreferencesItem;
	BrowserToolbarItem* _contextFeedbackItem;
	SearchProvidersController* _searchProvidersController;
	BrowserToolbarItem* _backForwardCustomizeItem;
	BrowserToolbarItem* _unifiedFieldContainerCustomizeItem;
	BrowserToolbarItem* _textSizeCustomizeItem;
	ToolbarDownloadsButton* _showDownloadsButton;
	UnifiedFieldBezelView* _unifiedFieldBezelView;
	UnifiedFieldContainerView* _unifiedFieldContainerView;
	UnifiedFieldBezelView* _unifiedCustomizeFieldBezelView;
	UnifiedFieldContainerView* _unifiedCustomizeFieldContainerView;
	char _validatingExtensionToolbarItemsSoon;
	char _windowDidClose;
	char _addCloudTabsButtonIfAppropriateHasBeenCalled;
	char _autoHidesToolbarInFullScreen;
	UnifiedField* _unifiedField;
	UnifiedField* _unifiedCustomizeField;
	ButtonPlus* _sidebarButton;
	NSSegmentedControl* _backForwardSegmentedControl;
	NSSegmentedControl* _backForwardCustomizeSegmentedControl;
	NSSegmentedControl* _textSizeSegmentedControl;
	NSSegmentedControl* _textSizeCustomizeSegmentedControl;
	NewTabTitlebarButton* _newTabButton;
	id<ToolbarControllerDelegate> _delegate;
	CloudTabStore* _cloudTabStore;
	SafariAppExtensionsController* _extensionsController;
	NSToolbarItem* _tabPickerItem;
	VisualTabPickerToolbarButton* _tabPickerButton;
	BrowserToolbarItem* _cloudTabsItem;
	BrowserToolbarItem* _shareItem;
	BrowserToolbarItem* _privacyReportItem;
	ButtonPlus* _contextFeedbackButton;

}

@property (nonatomic,readonly) NSSegmentedControl * backForwardCustomizeSegmentedControl;                //@synthesize backForwardCustomizeSegmentedControl=_backForwardCustomizeSegmentedControl - In the implementation block
@property (nonatomic,readonly) NSSegmentedControl * textSizeSegmentedControl;                            //@synthesize textSizeSegmentedControl=_textSizeSegmentedControl - In the implementation block
@property (nonatomic,readonly) NSSegmentedControl * textSizeCustomizeSegmentedControl;                   //@synthesize textSizeCustomizeSegmentedControl=_textSizeCustomizeSegmentedControl - In the implementation block
@property (nonatomic,readonly) UnifiedField * unifiedCustomizeField;                                     //@synthesize unifiedCustomizeField=_unifiedCustomizeField - In the implementation block
@property (nonatomic,retain) ButtonPlus * contextFeedbackButton;                                         //@synthesize contextFeedbackButton=_contextFeedbackButton - In the implementation block
@property (assign,nonatomic,__weak) id<ToolbarControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) CloudTabStore * cloudTabStore;                                     //@synthesize cloudTabStore=_cloudTabStore - In the implementation block
@property (nonatomic,__weak,readonly) SafariAppExtensionsController * extensionsController;              //@synthesize extensionsController=_extensionsController - In the implementation block
@property (nonatomic,readonly) NSToolbarItem * tabPickerItem;                                            //@synthesize tabPickerItem=_tabPickerItem - In the implementation block
@property (nonatomic,readonly) VisualTabPickerToolbarButton * tabPickerButton;                           //@synthesize tabPickerButton=_tabPickerButton - In the implementation block
@property (assign,nonatomic) char autoHidesToolbarInFullScreen;                                          //@synthesize autoHidesToolbarInFullScreen=_autoHidesToolbarInFullScreen - In the implementation block
@property (nonatomic,readonly) NSSegmentedControl * backForwardSegmentedControl;                         //@synthesize backForwardSegmentedControl=_backForwardSegmentedControl - In the implementation block
@property (nonatomic,readonly) ToolbarDownloadsButton * showDownloadsButton; 
@property (nonatomic,readonly) ButtonPlus * sidebarButton;                                               //@synthesize sidebarButton=_sidebarButton - In the implementation block
@property (nonatomic,readonly) NewTabTitlebarButton * newTabButton;                                      //@synthesize newTabButton=_newTabButton - In the implementation block
@property (nonatomic,readonly) BrowserToolbarItem * cloudTabsItem;                                       //@synthesize cloudTabsItem=_cloudTabsItem - In the implementation block
@property (nonatomic,readonly) BrowserToolbarItem * shareItem;                                           //@synthesize shareItem=_shareItem - In the implementation block
@property (nonatomic,readonly) BrowserToolbarItem * lastVisibleItemWithView; 
@property (nonatomic,readonly) BrowserToolbarItem * firstVisibleItemWithView; 
@property (nonatomic,readonly) BrowserToolbarItem * privacyReportItem;                                   //@synthesize privacyReportItem=_privacyReportItem - In the implementation block
@property (nonatomic,readonly) UnifiedField * unifiedField;                                              //@synthesize unifiedField=_unifiedField - In the implementation block
@property (nonatomic,copy) NSString * unifiedFieldPlaceholderString; 
@property (nonatomic,readonly) char toolbarContainsUnifiedField; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeDuplicateShareButtonsIfNeeded;
+(void)insertShareButtonIfNeeded;
+(void)insertTabPickerButtonIfNeeded;
+(CGSize)extensionToolbarBadgeOutset;
-(id<ToolbarControllerDelegate>)delegate;
-(void)setDelegate:(id<ToolbarControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)toolbarWindow;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(void)toolbarWillAddItem:(id)arg1 ;
-(void)toolbarDidRemoveItem:(id)arg1 ;
-(void)rolloverTrackingButton:(id)arg1 didMouseDown:(id)arg2 ;
-(void)toolbarDidReorderItem:(id)arg1 ;
-(void)windowWillClose;
-(char)autoHidesToolbarInFullScreen;
-(void)setAutoHidesToolbarInFullScreen:(char)arg1 ;
-(void)attachToWindow:(id)arg1 ;
-(BrowserToolbarItem *)shareItem;
-(void)_downloadDidStart:(id)arg1 ;
-(void)_parentalControlsDidChange;
-(void)insertExtensionToolbarItemWithIdentifier:(id)arg1 ;
-(void)rolloverTrackingButton:(id)arg1 mouseDidEnterOrExit:(char)arg2 ;
-(UnifiedField *)unifiedField;
-(char)isBackForwardVisible;
-(NSSegmentedControl *)backForwardSegmentedControl;
-(char)toolbarContainsUnifiedField;
-(BrowserToolbarItem *)privacyReportItem;
-(BrowserToolbarItem *)cloudTabsItem;
-(id)initWithCloudTabStore:(id)arg1 extensionsController:(id)arg2 searchProvidersController:(id)arg3 ;
-(ToolbarDownloadsButton *)showDownloadsButton;
-(void)validateExtensionToolbarItemsSoon;
-(void)updateBackForwardState;
-(void)windowWillUseFullScreenPresentationOptions:(unsigned long long)arg1 ;
-(ButtonPlus *)sidebarButton;
-(void)detachFromWindow;
-(void)setUnifiedFieldPlaceholderString:(NSString *)arg1 ;
-(BrowserToolbarItem *)lastVisibleItemWithView;
-(BrowserToolbarItem *)firstVisibleItemWithView;
-(char)isSidebarButtonVisible;
-(VisualTabPickerToolbarButton *)tabPickerButton;
-(void)_downloadsDidChange:(id)arg1 ;
-(void)_migrateOldSafariToolbarConfiguration;
-(void)_migrateSafariToolbarConfigurationV3;
-(void)_downloadsTotalProgressDidChange:(id)arg1 ;
-(void)_didEndCustomizationPalette:(id)arg1 ;
-(id)_createToolbar;
-(void)_updateToolbarSettings;
-(void)_updateTemporaryDownloadsButtonVisibility;
-(void)validateExtensionToolbarItems;
-(unsigned long long)_computedInsertionIndexForExtensionToolbarItem:(id)arg1 ;
-(unsigned long long)_proposedToolbarItemIndexForAddedExtension;
-(void)_saveExtensionsToolbarConfiguration;
-(char)_toolbarContainsFlexibleSpaceItem;
-(void)_setUpToolbarButton:(id)arg1 ;
-(void)_addTemporaryDownloadsButtonIfAppropriate;
-(void)_removeTemporaryDownloadsButtonIfAppropriate;
-(id)_toolbarItemForShowDownloadsWindow:(char)arg1 ;
-(unsigned long long)_defaultDownloadsButtonIndexForToolbarItems:(id)arg1 ;
-(void)_addTemporaryDownloadsButton;
-(void)_removeTemporaryDownloadsButton;
-(void)_updateCenteredItemIdentifierWillAddFlexibleItem:(char)arg1 ;
-(id)_toolbarItemForBackForward:(char)arg1 ;
-(id)_toolbarItemForTopSites:(char)arg1 ;
-(id)_toolbarItemForHome:(char)arg1 ;
-(id)_toolbarItemForAutoFill:(char)arg1 ;
-(id)_toolbarItemForTextSize:(char)arg1 ;
-(id)_toolbarItemForUnifiedFieldContainer:(char)arg1 ;
-(id)_toolbarItemForPrint:(char)arg1 ;
-(id)_toolbarItemForSidebar:(char)arg1 ;
-(id)_toolbarItemForNewTab:(char)arg1 ;
-(id)_toolbarItemForHistory:(char)arg1 ;
-(id)_toolbarItemForMailWebPage:(char)arg1 ;
-(id)_toolbarItemForPerSitePreferences:(char)arg1 ;
-(id)_toolbarItemForContextFeedback:(char)arg1 ;
-(id)_toolbarItemForPrivacyReport:(char)arg1 ;
-(id)_toolbarItemForShowWebInspector:(char)arg1 ;
-(id)_toolbarItemForBookmarksBar:(char)arg1 ;
-(id)_toolbarItemForCloudTabs:(char)arg1 ;
-(id)_toolbarItemForShare:(char)arg1 ;
-(id)_toolbarItemForTabPicker:(char)arg1 ;
-(void)_prepareBackForwardSegmentedControl:(id)arg1 ;
-(NSSegmentedControl *)backForwardCustomizeSegmentedControl;
-(NSSegmentedControl *)textSizeSegmentedControl;
-(void)_prepareTextSizeSegmentedControl:(id)arg1 ;
-(void)_updateZoomTextLabel;
-(id)_zoomTextLabel;
-(NSSegmentedControl *)textSizeCustomizeSegmentedControl;
-(NewTabTitlebarButton *)newTabButton;
-(id)_createUnifiedField;
-(UnifiedField *)unifiedCustomizeField;
-(void)_setUpToolbarSegmentedControl:(id)arg1 ;
-(NSString *)unifiedFieldPlaceholderString;
-(id)_unifiedFieldContainerView;
-(id)_unifiedCustomizeFieldContainerView;
-(CGSize)_sizeMatchingUnifiedFieldHeightForSegmentedControlToolbarItem:(id)arg1 ;
-(CloudTabStore *)cloudTabStore;
-(SafariAppExtensionsController *)extensionsController;
-(NSToolbarItem *)tabPickerItem;
-(ButtonPlus *)contextFeedbackButton;
-(void)setContextFeedbackButton:(ButtonPlus *)arg1 ;
@end

