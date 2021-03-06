/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSUI/MMService.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>
#import <libobjc.A.dylib/MMWebKitViewControllerDelegate.h>
#import <libobjc.A.dylib/MMServicePreflightProtocol.h>
#import <libobjc.A.dylib/MMMobileDocumentsTableRowDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSMutableDictionary, MMWebKitViewController, MMModalDialog, NSProgress, NSOperationQueue, NSObject, NSWindow, NSTextField, NSButton, NSTableView, NSTabView, NSTabViewItem, NSOutlineView, iCloudTouchBarController, NSArray, NSDictionary, NSImageView, NSLayoutConstraint, NSTimer, NSView, NSProgressIndicator, NSTouchBar, NSString;

@interface MMMobileDocumentsService : MMService <NSTouchBarProvider, MMWebKitViewControllerDelegate, MMServicePreflightProtocol, MMMobileDocumentsTableRowDelegate> {

	NSMutableArray* cachedListOfApps;
	NSMutableDictionary* _rowViews;
	NSMutableArray* cachedListOfLiverPoolApps;
	NSMutableDictionary* _liverPoolrowViews;
	MMWebKitViewController* _webKitViewController;
	MMModalDialog* _confirmModalDialog;
	NSProgress* _confirmProgress;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_semaphore> _stopDialogSemaphore;
	double _progressSpinnerStopTime;
	char _isMigrationInProgress;
	char _shouldSignOut;
	char _preflightDialogIsDone;
	char _preflightCalledForSignout;
	char _isSigningOut;
	char _isShowingDisableStop;
	char _didEncounterLoadError;
	NSWindow* _mobileDocumentsOptionsSheet;
	NSTextField* _mobileDocumentsOptionsTitle;
	NSButton* _mobileDocumentDoneButton;
	NSTableView* _mobileDocumentsOptionsTable;
	NSTabView* _optionsTab;
	NSTabViewItem* _documentsAndDataTab;
	NSTabViewItem* _liverpoolTab;
	NSTextField* _lookMeUpByEmailOptionsTitle;
	NSOutlineView* _liverPoolOptionsTable;
	iCloudTouchBarController* _optionsTouchBarController;
	iCloudTouchBarController* _disableiCloudDriveTouchBarController;
	iCloudTouchBarController* _upgradeDevicesTouchBarController;
	NSArray* _upgradeDeviceList;
	NSArray* _incompatibleDeviceList;
	unsigned long long _devicesState;
	NSDictionary* _deviceList;
	NSWindow* _upgradeDevicesSheet;
	NSImageView* _upgradeDevicesImageView;
	NSTextField* _upgradeDevicesTitleTextField;
	NSButton* _upgradeDevicesCancelButton;
	NSButton* _upgradeDevicesContinueButton;
	NSTextField* _upgradeDevicesMessageTextField;
	NSTextField* _upgradeDevicesSecondaryMessageTextField;
	NSLayoutConstraint* _upgradeDevicesSingleDeviceTypeConstraint;
	NSLayoutConstraint* _upgradeDevicesSecondaryDeviceTypeConstraint;
	NSTimer* _migrationStatusCheckTimer;
	NSWindow* _disableiCloudDriveSheet;
	NSView* _disableiCloudDriveSheetView;
	NSImageView* _disableiCloudDriveImageView;
	NSTextField* _disableiCloudDriveTitleTextField;
	NSTextField* _disableiCloudDriveMessageTextField;
	NSButton* _disableiCloudDriveCancelButton;
	NSButton* _disableiCloudDriveStopButton;
	NSProgressIndicator* _disableiCloudDriveProgress;
	NSProgress* _downloadProgress;
	NSProgress* _uploadProgress;
	NSTextField* _disableiCloudDriveProgressTextField;
	NSProgress* _stopProgress;
	/*^block*/id _stopCompletionHandler;
	NSLayoutConstraint* _exsistingProgressTextToButtonConstraint;

}

@property (retain) iCloudTouchBarController * optionsTouchBarController;                          //@synthesize optionsTouchBarController=_optionsTouchBarController - In the implementation block
@property (retain) iCloudTouchBarController * disableiCloudDriveTouchBarController;               //@synthesize disableiCloudDriveTouchBarController=_disableiCloudDriveTouchBarController - In the implementation block
@property (retain) iCloudTouchBarController * upgradeDevicesTouchBarController;                   //@synthesize upgradeDevicesTouchBarController=_upgradeDevicesTouchBarController - In the implementation block
@property (retain) NSArray * upgradeDeviceList;                                                   //@synthesize upgradeDeviceList=_upgradeDeviceList - In the implementation block
@property (retain) NSArray * incompatibleDeviceList;                                              //@synthesize incompatibleDeviceList=_incompatibleDeviceList - In the implementation block
@property (assign,nonatomic) unsigned long long devicesState;                                     //@synthesize devicesState=_devicesState - In the implementation block
@property (assign) NSWindow * parentWindow; 
@property (retain) NSDictionary * deviceList;                                                     //@synthesize deviceList=_deviceList - In the implementation block
@property (assign) char shouldSignOut;                                                            //@synthesize shouldSignOut=_shouldSignOut - In the implementation block
@property (assign) char preflightDialogIsDone;                                                    //@synthesize preflightDialogIsDone=_preflightDialogIsDone - In the implementation block
@property (assign) char preflightCalledForSignout;                                                //@synthesize preflightCalledForSignout=_preflightCalledForSignout - In the implementation block
@property (assign) char isSigningOut;                                                             //@synthesize isSigningOut=_isSigningOut - In the implementation block
@property (retain) NSWindow * upgradeDevicesSheet;                                                //@synthesize upgradeDevicesSheet=_upgradeDevicesSheet - In the implementation block
@property (__weak) NSImageView * upgradeDevicesImageView;                                         //@synthesize upgradeDevicesImageView=_upgradeDevicesImageView - In the implementation block
@property (__weak) NSTextField * upgradeDevicesTitleTextField;                                    //@synthesize upgradeDevicesTitleTextField=_upgradeDevicesTitleTextField - In the implementation block
@property (__weak) NSButton * upgradeDevicesCancelButton;                                         //@synthesize upgradeDevicesCancelButton=_upgradeDevicesCancelButton - In the implementation block
@property (__weak) NSButton * upgradeDevicesContinueButton;                                       //@synthesize upgradeDevicesContinueButton=_upgradeDevicesContinueButton - In the implementation block
@property (__weak) NSTextField * upgradeDevicesMessageTextField;                                  //@synthesize upgradeDevicesMessageTextField=_upgradeDevicesMessageTextField - In the implementation block
@property (__weak) NSTextField * upgradeDevicesSecondaryMessageTextField;                         //@synthesize upgradeDevicesSecondaryMessageTextField=_upgradeDevicesSecondaryMessageTextField - In the implementation block
@property (__weak) NSLayoutConstraint * upgradeDevicesSingleDeviceTypeConstraint;                 //@synthesize upgradeDevicesSingleDeviceTypeConstraint=_upgradeDevicesSingleDeviceTypeConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * upgradeDevicesSecondaryDeviceTypeConstraint;              //@synthesize upgradeDevicesSecondaryDeviceTypeConstraint=_upgradeDevicesSecondaryDeviceTypeConstraint - In the implementation block
@property (readonly) char showSecondaryDeviceTypeField; 
@property (retain) NSTimer * migrationStatusCheckTimer;                                           //@synthesize migrationStatusCheckTimer=_migrationStatusCheckTimer - In the implementation block
@property (retain) MMWebKitViewController * webKitViewController;                                 //@synthesize webKitViewController=_webKitViewController - In the implementation block
@property (retain) MMModalDialog * confirmModalDialog;                                            //@synthesize confirmModalDialog=_confirmModalDialog - In the implementation block
@property (retain) NSProgress * confirmProgress;                                                  //@synthesize confirmProgress=_confirmProgress - In the implementation block
@property (assign) char isShowingDisableStop;                                                     //@synthesize isShowingDisableStop=_isShowingDisableStop - In the implementation block
@property (assign) char isMigrationInProgress;                                                    //@synthesize isMigrationInProgress=_isMigrationInProgress - In the implementation block
@property (retain) NSWindow * disableiCloudDriveSheet;                                            //@synthesize disableiCloudDriveSheet=_disableiCloudDriveSheet - In the implementation block
@property (__weak) NSView * disableiCloudDriveSheetView;                                          //@synthesize disableiCloudDriveSheetView=_disableiCloudDriveSheetView - In the implementation block
@property (__weak) NSImageView * disableiCloudDriveImageView;                                     //@synthesize disableiCloudDriveImageView=_disableiCloudDriveImageView - In the implementation block
@property (__weak) NSTextField * disableiCloudDriveTitleTextField;                                //@synthesize disableiCloudDriveTitleTextField=_disableiCloudDriveTitleTextField - In the implementation block
@property (__weak) NSTextField * disableiCloudDriveMessageTextField;                              //@synthesize disableiCloudDriveMessageTextField=_disableiCloudDriveMessageTextField - In the implementation block
@property (__weak) NSButton * disableiCloudDriveCancelButton;                                     //@synthesize disableiCloudDriveCancelButton=_disableiCloudDriveCancelButton - In the implementation block
@property (__weak) NSButton * disableiCloudDriveStopButton;                                       //@synthesize disableiCloudDriveStopButton=_disableiCloudDriveStopButton - In the implementation block
@property (__weak) NSProgressIndicator * disableiCloudDriveProgress;                              //@synthesize disableiCloudDriveProgress=_disableiCloudDriveProgress - In the implementation block
@property (retain) NSProgress * downloadProgress;                                                 //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (retain) NSProgress * uploadProgress;                                                   //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (__weak) NSTextField * disableiCloudDriveProgressTextField;                             //@synthesize disableiCloudDriveProgressTextField=_disableiCloudDriveProgressTextField - In the implementation block
@property (retain) NSProgress * stopProgress;                                                     //@synthesize stopProgress=_stopProgress - In the implementation block
@property (copy) id stopCompletionHandler;                                                        //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (assign,nonatomic) char didEncounterLoadError;                                          //@synthesize didEncounterLoadError=_didEncounterLoadError - In the implementation block
@property (__weak) NSLayoutConstraint * exsistingProgressTextToButtonConstraint;                  //@synthesize exsistingProgressTextToButtonConstraint=_exsistingProgressTextToButtonConstraint - In the implementation block
@property (retain) NSWindow * mobileDocumentsOptionsSheet;                                        //@synthesize mobileDocumentsOptionsSheet=_mobileDocumentsOptionsSheet - In the implementation block
@property (__weak) NSTextField * mobileDocumentsOptionsTitle;                                     //@synthesize mobileDocumentsOptionsTitle=_mobileDocumentsOptionsTitle - In the implementation block
@property (__weak) NSTextField * lookMeUpByEmailOptionsTitle;                                     //@synthesize lookMeUpByEmailOptionsTitle=_lookMeUpByEmailOptionsTitle - In the implementation block
@property (__weak) NSButton * mobileDocumentDoneButton;                                           //@synthesize mobileDocumentDoneButton=_mobileDocumentDoneButton - In the implementation block
@property (__weak) NSTableView * mobileDocumentsOptionsTable;                                     //@synthesize mobileDocumentsOptionsTable=_mobileDocumentsOptionsTable - In the implementation block
@property (__weak) NSOutlineView * liverPoolOptionsTable;                                         //@synthesize liverPoolOptionsTable=_liverPoolOptionsTable - In the implementation block
@property (__weak) NSTabView * optionsTab;                                                        //@synthesize optionsTab=_optionsTab - In the implementation block
@property (__weak) NSTabViewItem * documentsAndDataTab;                                           //@synthesize documentsAndDataTab=_documentsAndDataTab - In the implementation block
@property (__weak) NSTabViewItem * liverpoolTab;                                                  //@synthesize liverpoolTab=_liverpoolTab - In the implementation block
@property (readonly) NSTouchBar * touchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingShowSecondaryDeviceTypeField;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_dsid;
-(id)icon;
-(NSTouchBar *)touchBar;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(NSProgress *)downloadProgress;
-(void)showMoreInfo:(id)arg1 ;
-(void)_updateConstraints;
-(NSDictionary *)deviceList;
-(NSProgress *)uploadProgress;
-(char)isMigrationInProgress;
-(void)setWebKitViewController:(MMWebKitViewController *)arg1 ;
-(MMWebKitViewController *)webKitViewController;
-(void)_updateUI;
-(id)initWithServiceID:(id)arg1 forAccount:(id)arg2 ;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)isDataService;
-(void)preflightDSEEnableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)DSEEnableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willSelect;
-(void)didBecomeActive;
-(void)downloadAndSignoutOfiCloudDriveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)uploadAndSignoutOfiCloudDriveWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getiCloudStorageUsageDict;
-(void)mobileDocumentsLookMeUpTableRowDidChange:(id)arg1 ;
-(void)mobileDocumentsTableRowDidChange:(id)arg1 withRow:(id)arg2 ;
-(void)_serviceEnableChanged:(id)arg1 ;
-(void)_handleWillExceedCloudStorage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showUpsellStorageWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showWillExceedMaxTierQuotaSheet:(id)arg1 storageAvailable:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showManageWebView;
-(void)setDidEncounterLoadError:(char)arg1 ;
-(void)callCompletionWithResult:(char)arg1 ;
-(void)_closeWebViewWindow;
-(char)didEncounterLoadError;
-(void)mmWebKitViewControllerDidCancel:(id)arg1 ;
-(void)mmWebKitViewControllerDidSucceed:(id)arg1 ;
-(void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2 ;
-(void)mmWebKitViewControllerDidFinishLoading:(id)arg1 ;
-(void)mmWebKitViewControllerDidDismiss:(id)arg1 ;
-(void)loadNibsNeeded;
-(void)setIsMigrationInProgress:(char)arg1 ;
-(void)stopListeningForACAccountStoreNotifications;
-(NSWindow *)mobileDocumentsOptionsSheet;
-(NSButton *)mobileDocumentDoneButton;
-(iCloudTouchBarController *)optionsTouchBarController;
-(NSWindow *)upgradeDevicesSheet;
-(NSButton *)upgradeDevicesContinueButton;
-(NSButton *)upgradeDevicesCancelButton;
-(iCloudTouchBarController *)upgradeDevicesTouchBarController;
-(NSWindow *)disableiCloudDriveSheet;
-(NSButton *)disableiCloudDriveStopButton;
-(NSButton *)disableiCloudDriveCancelButton;
-(iCloudTouchBarController *)disableiCloudDriveTouchBarController;
-(void)setPreflightDialogIsDone:(char)arg1 ;
-(void)setConfirmModalDialog:(MMModalDialog *)arg1 ;
-(void)downloadAndOptOutOfiCloudDriveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)uploadAndOptOutOfiCloudDriveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)confirmUserWantsToDisableiCloudDriveAndDesktopWithDialogCompletion:(/*^block*/id)arg1 ;
-(void)_showMigrationConfirmationSheet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)iCloudHomeShouldEnable;
-(char)_acIsEnabled;
-(char)_isMigrationComplete;
-(void)startListeningForACAccountStoreNotifications;
-(void)_setMigrationCompleteOnAppleAccount;
-(void)showMobileDocumentsOptionsSheet:(id)arg1 ;
-(id)testingEligibleDevicesList;
-(void)setUpgradeDeviceList:(NSArray *)arg1 ;
-(id)testingNotEligibleDevicesList;
-(void)setIncompatibleDeviceList:(NSArray *)arg1 ;
-(char)_getMobileDevices;
-(NSArray *)upgradeDeviceList;
-(NSArray *)incompatibleDeviceList;
-(void)_showNoDevicesMigrationConfirmationSheet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showMultipleDevicesConfirmationSheetWithParentWindow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSImageView *)upgradeDevicesImageView;
-(NSTextField *)upgradeDevicesTitleTextField;
-(void)_updateSheet;
-(void)iCloudDesktopPressed:(char)arg1 withRow:(id)arg2 ;
-(NSTabViewItem *)documentsAndDataTab;
-(NSTabViewItem *)liverpoolTab;
-(NSTableView *)mobileDocumentsOptionsTable;
-(NSOutlineView *)liverPoolOptionsTable;
-(void)reloadLiverPoolOptionsData:(id)arg1 ;
-(void)_updateOptionsUI;
-(void)_acaccountStoreChanged:(id)arg1 ;
-(NSTimer *)migrationStatusCheckTimer;
-(void)migrationStatusTimerFireMethod:(id)arg1 ;
-(void)setMigrationStatusCheckTimer:(NSTimer *)arg1 ;
-(char)_isiCloudHomeAvailable;
-(char)_isiCloudHomeEnabled;
-(MMModalDialog *)confirmModalDialog;
-(void)setConfirmProgress:(NSProgress *)arg1 ;
-(NSProgressIndicator *)disableiCloudDriveProgress;
-(NSTextField *)disableiCloudDriveProgressTextField;
-(NSLayoutConstraint *)exsistingProgressTextToButtonConstraint;
-(NSView *)disableiCloudDriveSheetView;
-(void)setiCloudHome:(char)arg1 withDataclassOption:(id)arg2 ;
-(id)getUsageDictionaries;
-(char)validateUsageDictionary:(id)arg1 ;
-(id)totalSpaceNeeded:(id)arg1 ;
-(void)revealFoldersInFinder;
-(void)_updatePrimaryDeviceTypeField;
-(char)showSecondaryDeviceTypeField;
-(void)_updateSecondaryDeviceTypeField;
-(NSLayoutConstraint *)upgradeDevicesSingleDeviceTypeConstraint;
-(NSLayoutConstraint *)upgradeDevicesSecondaryDeviceTypeConstraint;
-(id)incompatibleDevicesDescriptionString;
-(id)_attributedDeviceListString:(id)arg1 lines:(unsigned long long)arg2 ;
-(id)upgradeDevicesDescriptionString;
-(NSTextField *)upgradeDevicesMessageTextField;
-(NSTextField *)upgradeDevicesSecondaryMessageTextField;
-(id)_arrayToCSVString:(id)arg1 ;
-(id)_truncatedDeviceString:(id)arg1 size:(unsigned long long)arg2 ;
-(id)_readDeviceArrayFromDefaults:(id)arg1 ;
-(char)brCanIngestFolderWithStats:(id)arg1 ;
-(id)getDocumentsDict;
-(id)getDesktopDict;
-(id)DebugUsageDictValueForKey;
-(void)setMobileDocumentsOptionsSheet:(NSWindow *)arg1 ;
-(void)setIsSigningOut:(char)arg1 ;
-(void)handleOperationCompletion:(id)arg1 ;
-(void)setIsShowingDisableStop:(char)arg1 ;
-(void)showDownloadDisableiCloudDriveSheetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUploadProgress:(NSProgress *)arg1 ;
-(void)showUploadDisableiCloudDriveSheetWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isShowingDisableStop;
-(void)endUploadDisableiCloudDriveSheet:(long long)arg1 ;
-(void)endDownloadDisableiCloudDriveSheet:(long long)arg1 ;
-(NSImageView *)disableiCloudDriveImageView;
-(char)isSigningOut;
-(NSTextField *)disableiCloudDriveTitleTextField;
-(NSTextField *)disableiCloudDriveMessageTextField;
-(void)disableStop:(id)arg1 ;
-(void)setStopProgress:(NSProgress *)arg1 ;
-(void)setStopCompletionHandler:(id)arg1 ;
-(NSProgress *)stopProgress;
-(void)endiCloudDriveSheet:(id)arg1 ;
-(char)_areChangesPending;
-(void)endDevicesConfirmationSheet:(long long)arg1 ;
-(void)endModalDialog:(id)arg1 ;
-(void)monitorGlobalActivity;
-(void)handleDisableFailed:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openFinderWindowOnDisable;
-(NSTextField *)mobileDocumentsOptionsTitle;
-(void)setMobileDocumentsOptionsTitle:(NSTextField *)arg1 ;
-(void)setMobileDocumentDoneButton:(NSButton *)arg1 ;
-(void)setMobileDocumentsOptionsTable:(NSTableView *)arg1 ;
-(NSTabView *)optionsTab;
-(void)setOptionsTab:(NSTabView *)arg1 ;
-(void)setDocumentsAndDataTab:(NSTabViewItem *)arg1 ;
-(void)setLiverpoolTab:(NSTabViewItem *)arg1 ;
-(NSTextField *)lookMeUpByEmailOptionsTitle;
-(void)setLookMeUpByEmailOptionsTitle:(NSTextField *)arg1 ;
-(NSProgress *)confirmProgress;
-(void)setLiverPoolOptionsTable:(NSOutlineView *)arg1 ;
-(void)setOptionsTouchBarController:(iCloudTouchBarController *)arg1 ;
-(void)setDisableiCloudDriveTouchBarController:(iCloudTouchBarController *)arg1 ;
-(void)setUpgradeDevicesTouchBarController:(iCloudTouchBarController *)arg1 ;
-(unsigned long long)devicesState;
-(void)setDevicesState:(unsigned long long)arg1 ;
-(void)setDeviceList:(NSDictionary *)arg1 ;
-(char)shouldSignOut;
-(void)setShouldSignOut:(char)arg1 ;
-(char)preflightDialogIsDone;
-(char)preflightCalledForSignout;
-(void)setPreflightCalledForSignout:(char)arg1 ;
-(void)setUpgradeDevicesSheet:(NSWindow *)arg1 ;
-(void)setUpgradeDevicesImageView:(NSImageView *)arg1 ;
-(void)setUpgradeDevicesTitleTextField:(NSTextField *)arg1 ;
-(void)setUpgradeDevicesCancelButton:(NSButton *)arg1 ;
-(void)setUpgradeDevicesContinueButton:(NSButton *)arg1 ;
-(void)setUpgradeDevicesMessageTextField:(NSTextField *)arg1 ;
-(void)setUpgradeDevicesSecondaryMessageTextField:(NSTextField *)arg1 ;
-(void)setUpgradeDevicesSingleDeviceTypeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpgradeDevicesSecondaryDeviceTypeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDisableiCloudDriveSheet:(NSWindow *)arg1 ;
-(void)setDisableiCloudDriveSheetView:(NSView *)arg1 ;
-(void)setDisableiCloudDriveImageView:(NSImageView *)arg1 ;
-(void)setDisableiCloudDriveTitleTextField:(NSTextField *)arg1 ;
-(void)setDisableiCloudDriveMessageTextField:(NSTextField *)arg1 ;
-(void)setDisableiCloudDriveCancelButton:(NSButton *)arg1 ;
-(void)setDisableiCloudDriveStopButton:(NSButton *)arg1 ;
-(void)setDisableiCloudDriveProgress:(NSProgressIndicator *)arg1 ;
-(void)setDisableiCloudDriveProgressTextField:(NSTextField *)arg1 ;
-(id)stopCompletionHandler;
-(void)setExsistingProgressTextToButtonConstraint:(NSLayoutConstraint *)arg1 ;
@end

