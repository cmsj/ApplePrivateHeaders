/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMViewController.h>
#import <libobjc.A.dylib/SMCustomize_Client_Delegate.h>

@class SMCustomizeTree_Client, NSMutableArray, SMSystem_Client, NSNumber, NSProgressIndicator, SMCustomize_Client, NSImageView, NSTableView, NSLayoutConstraint, NSOutlineView, NSString, SMMigrationCustomizePasswordCollectWindowController, NSTextField, NSScrollView, SMMigrationCustomizeEditViewController, SMConflictResolutionViewController, SMFDEManagementViewController, NSAlert, NSAttributedString;

@interface SMMigrationCustomizeViewController : SMViewController <SMCustomize_Client_Delegate> {

	char _acceptActionAvailable;
	char _customizationIsReady;
	char _collectingPasswords;
	char _simpleMode;
	char _targetCanBecomeFDE;
	char _simpleModeResolveSeen;
	char _existingTokenAdmin;
	char _requestAlreadySubmitted;
	char _windowsUsersNeedLoginToTransfer;
	NSMutableArray* adminUserPasswordList;
	NSMutableArray* standardUserPasswordList;
	SMSystem_Client* _sourceSystem;
	unsigned long long _originatingApplication;
	NSNumber* _netSpace;
	NSNumber* _totalSize;
	NSProgressIndicator* _spaceSummaryProgressIndicator;
	NSMutableArray* _quickItems;
	SMCustomize_Client* _customizeClient;
	SMCustomizeTree_Client* _customizeTree;
	NSImageView* _toArrowIconView;
	NSTableView* _quickItemsTable;
	NSLayoutConstraint* _quickItemsTableWidthContstraint;
	NSOutlineView* _outlineView;
	NSString* _generatedStandardUserPassword;
	SMMigrationCustomizePasswordCollectWindowController* _passwordCollectWindowController;
	NSTextField* _adminUserInstructionsField;
	NSScrollView* _adminUserTable;
	NSString* _adminUserInstructions;
	NSTextField* _standardUserInstructionsField;
	NSScrollView* _standardUserTable;
	NSLayoutConstraint* _adminTableHeight;
	NSLayoutConstraint* _standardTableHeight;
	NSLayoutConstraint* _adminTableToBottomConstraint;
	NSLayoutConstraint* _adminTableToStandardTableConstraint;
	NSLayoutConstraint* _standardTableToTopConstraint;
	NSLayoutConstraint* _standardTableToBottomConstraint;
	/*^block*/id _cancelHandler;
	/*^block*/id _fdeConvertHandler;
	SMMigrationCustomizeEditViewController* _editViewController;
	SMConflictResolutionViewController* _conflictResolutionViewController;
	SMFDEManagementViewController* _fdeManagementViewController;
	/*^block*/id _completionHandler;
	/*^block*/id _connectionErrorHandler;
	NSAlert* _reconnectAlert;

}

@property (retain) SMSystem_Client * sourceSystem;                                                                     //@synthesize sourceSystem=_sourceSystem - In the implementation block
@property (assign) char acceptActionAvailable;                                                                         //@synthesize acceptActionAvailable=_acceptActionAvailable - In the implementation block
@property (assign) char customizationIsReady;                                                                          //@synthesize customizationIsReady=_customizationIsReady - In the implementation block
@property (assign) char simpleMode;                                                                                    //@synthesize simpleMode=_simpleMode - In the implementation block
@property (assign) char collectingPasswords;                                                                           //@synthesize collectingPasswords=_collectingPasswords - In the implementation block
@property (retain) NSMutableArray * quickItems;                                                                        //@synthesize quickItems=_quickItems - In the implementation block
@property (retain) SMCustomize_Client * customizeClient;                                                               //@synthesize customizeClient=_customizeClient - In the implementation block
@property (retain) SMCustomizeTree_Client * customizeTree;                                                             //@synthesize customizeTree=_customizeTree - In the implementation block
@property (retain) SMMigrationCustomizeEditViewController * editViewController;                                        //@synthesize editViewController=_editViewController - In the implementation block
@property (retain) SMConflictResolutionViewController * conflictResolutionViewController;                              //@synthesize conflictResolutionViewController=_conflictResolutionViewController - In the implementation block
@property (retain) SMFDEManagementViewController * fdeManagementViewController;                                        //@synthesize fdeManagementViewController=_fdeManagementViewController - In the implementation block
@property (copy) id completionHandler;                                                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) char simpleModeResolveSeen;                                                                         //@synthesize simpleModeResolveSeen=_simpleModeResolveSeen - In the implementation block
@property (retain) NSString * generatedStandardUserPassword;                                                           //@synthesize generatedStandardUserPassword=_generatedStandardUserPassword - In the implementation block
@property (retain) NSMutableArray * adminUserPasswordList; 
@property (retain) NSMutableArray * standardUserPasswordList; 
@property (retain) NSString * adminUserInstructions;                                                                   //@synthesize adminUserInstructions=_adminUserInstructions - In the implementation block
@property (assign) char existingTokenAdmin;                                                                            //@synthesize existingTokenAdmin=_existingTokenAdmin - In the implementation block
@property (copy) id connectionErrorHandler;                                                                            //@synthesize connectionErrorHandler=_connectionErrorHandler - In the implementation block
@property (assign) char requestAlreadySubmitted;                                                                       //@synthesize requestAlreadySubmitted=_requestAlreadySubmitted - In the implementation block
@property (retain) NSAlert * reconnectAlert;                                                                           //@synthesize reconnectAlert=_reconnectAlert - In the implementation block
@property (assign) char windowsUsersNeedLoginToTransfer;                                                               //@synthesize windowsUsersNeedLoginToTransfer=_windowsUsersNeedLoginToTransfer - In the implementation block
@property (readonly) unsigned long long viewModeTabIndex; 
@property (assign) unsigned long long originatingApplication;                                                          //@synthesize originatingApplication=_originatingApplication - In the implementation block
@property (retain) NSNumber * netSpace;                                                                                //@synthesize netSpace=_netSpace - In the implementation block
@property (retain) NSNumber * totalSize;                                                                               //@synthesize totalSize=_totalSize - In the implementation block
@property (readonly) NSAttributedString * descriptiveNetSpace; 
@property (readonly) NSAttributedString * descriptiveTotalSize; 
@property (readonly) NSAttributedString * spaceSummaryText; 
@property (readonly) NSAttributedString * spaceSummaryTextAdvanced; 
@property (__weak) NSProgressIndicator * spaceSummaryProgressIndicator;                                                //@synthesize spaceSummaryProgressIndicator=_spaceSummaryProgressIndicator - In the implementation block
@property (assign) NSImageView * toArrowIconView;                                                                      //@synthesize toArrowIconView=_toArrowIconView - In the implementation block
@property (assign) NSTableView * quickItemsTable;                                                                      //@synthesize quickItemsTable=_quickItemsTable - In the implementation block
@property (assign) NSLayoutConstraint * quickItemsTableWidthContstraint;                                               //@synthesize quickItemsTableWidthContstraint=_quickItemsTableWidthContstraint - In the implementation block
@property (assign) NSOutlineView * outlineView;                                                                        //@synthesize outlineView=_outlineView - In the implementation block
@property (assign) SMMigrationCustomizePasswordCollectWindowController * passwordCollectWindowController;              //@synthesize passwordCollectWindowController=_passwordCollectWindowController - In the implementation block
@property (assign) NSTextField * adminUserInstructionsField;                                                           //@synthesize adminUserInstructionsField=_adminUserInstructionsField - In the implementation block
@property (assign) NSScrollView * adminUserTable;                                                                      //@synthesize adminUserTable=_adminUserTable - In the implementation block
@property (assign) NSTextField * standardUserInstructionsField;                                                        //@synthesize standardUserInstructionsField=_standardUserInstructionsField - In the implementation block
@property (assign) NSScrollView * standardUserTable;                                                                   //@synthesize standardUserTable=_standardUserTable - In the implementation block
@property (assign) NSLayoutConstraint * adminTableHeight;                                                              //@synthesize adminTableHeight=_adminTableHeight - In the implementation block
@property (assign) NSLayoutConstraint * standardTableHeight;                                                           //@synthesize standardTableHeight=_standardTableHeight - In the implementation block
@property (assign) NSLayoutConstraint * adminTableToBottomConstraint;                                                  //@synthesize adminTableToBottomConstraint=_adminTableToBottomConstraint - In the implementation block
@property (assign) NSLayoutConstraint * adminTableToStandardTableConstraint;                                           //@synthesize adminTableToStandardTableConstraint=_adminTableToStandardTableConstraint - In the implementation block
@property (assign) NSLayoutConstraint * standardTableToTopConstraint;                                                  //@synthesize standardTableToTopConstraint=_standardTableToTopConstraint - In the implementation block
@property (assign) NSLayoutConstraint * standardTableToBottomConstraint;                                               //@synthesize standardTableToBottomConstraint=_standardTableToBottomConstraint - In the implementation block
@property (copy) id cancelHandler;                                                                                     //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (assign) char targetCanBecomeFDE;                                                                            //@synthesize targetCanBecomeFDE=_targetCanBecomeFDE - In the implementation block
@property (copy) id fdeConvertHandler;                                                                                 //@synthesize fdeConvertHandler=_fdeConvertHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)keyPathsForValuesAffectingDescriptiveNetSpace;
+(id)keyPathsForValuesAffectingDescriptiveTotalSize;
+(id)keyPathsForValuesAffectingSpaceSummaryText;
+(id)keyPathsForValuesAffectingSpaceSummaryTextAdvanced;
+(id)keyPathsForValuesAffectingViewModeTabIndex;
-(void)dealloc;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)awakeFromNib;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidAppear;
-(void)resetState;
-(NSOutlineView *)outlineView;
-(void)setOutlineView:(NSOutlineView *)arg1 ;
-(NSNumber *)totalSize;
-(void)setCancelHandler:(id)arg1 ;
-(void)setup;
-(void)daemonConnectionLost;
-(void)setConnectionErrorHandler:(id)arg1 ;
-(void)setTotalSize:(NSNumber *)arg1 ;
-(id)connectionErrorHandler;
-(id)cancelHandler;
-(SMFDEManagementViewController *)fdeManagementViewController;
-(void)pressedPasswordButton:(id)arg1 ;
-(void)setFdeManagementViewController:(SMFDEManagementViewController *)arg1 ;
-(SMSystem_Client *)sourceSystem;
-(void)pressedPromoteToAdminButton:(id)arg1 ;
-(void)reconnecting:(char)arg1 ;
-(void)setSourceSystem:(SMSystem_Client *)arg1 ;
-(char)pressedSelectButton:(id)arg1 ;
-(char)pressedBackButton:(id)arg1 ;
-(void)setQuickItems:(NSMutableArray *)arg1 ;
-(void)setEditViewController:(SMMigrationCustomizeEditViewController *)arg1 ;
-(void)setConflictResolutionViewController:(SMConflictResolutionViewController *)arg1 ;
-(void)setOriginatingApplication:(unsigned long long)arg1 ;
-(void)teardownTree;
-(NSTableView *)quickItemsTable;
-(NSImageView *)toArrowIconView;
-(void)setCollectingPasswords:(char)arg1 ;
-(char)windowsUsersNeedLoginToTransfer;
-(void)showWindowsUserRelogSheet;
-(void)setGeneratedStandardUserPassword:(NSString *)arg1 ;
-(void)recalculateQuickItemTableWidth;
-(char)collectingPasswords;
-(char)setupPasswordCollection;
-(char)requestAlreadySubmitted;
-(SMCustomizeTree_Client *)customizeTree;
-(void)setSimpleModeResolveSeen:(char)arg1 ;
-(SMConflictResolutionViewController *)conflictResolutionViewController;
-(char)hasAtleastOneSecureTokenHoldingAdmin;
-(void)showFileVaultManagementIfNeeded;
-(char)sufficientSpaceToMigrate;
-(SMCustomize_Client *)customizeClient;
-(void)setCustomizeClient:(SMCustomize_Client *)arg1 ;
-(SMMigrationCustomizeEditViewController *)editViewController;
-(SMMigrationCustomizePasswordCollectWindowController *)passwordCollectWindowController;
-(void)updateAcceptActionAvailable;
-(char)targetCanBecomeFDE;
-(id)fdeConvertHandler;
-(void)submitRequestWithFilevaultConversion:(char)arg1 for:(id)arg2 withPassword:(id)arg3 andBag:(id)arg4 ;
-(char)simpleMode;
-(void)setSimpleMode:(char)arg1 ;
-(void)submitRequest;
-(void)dumpNodeSpaceCalculationsForDebugging:(id)arg1 depth:(unsigned long long)arg2 ;
-(void)setRequestAlreadySubmitted:(char)arg1 ;
-(NSMutableArray *)standardUserPasswordList;
-(NSString *)generatedStandardUserPassword;
-(unsigned long long)originatingApplication;
-(void)setCustomizationIsReady:(char)arg1 ;
-(void)setWindowsUsersNeedLoginToTransfer:(char)arg1 ;
-(void)setupWindowsSystem;
-(void)setupMacSystem;
-(void)setupCommonSystem;
-(id)treeKeysToObserve;
-(NSMutableArray *)quickItems;
-(void)setCustomizeTree:(SMCustomizeTree_Client *)arg1 ;
-(void)setAdminUserPasswordList:(NSMutableArray *)arg1 ;
-(void)setStandardUserPasswordList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)adminUserPasswordList;
-(NSScrollView *)adminUserTable;
-(NSTextField *)adminUserInstructionsField;
-(NSLayoutConstraint *)adminTableToStandardTableConstraint;
-(NSLayoutConstraint *)adminTableHeight;
-(NSLayoutConstraint *)standardTableToTopConstraint;
-(NSLayoutConstraint *)standardTableHeight;
-(NSLayoutConstraint *)standardTableToBottomConstraint;
-(NSScrollView *)standardUserTable;
-(NSTextField *)standardUserInstructionsField;
-(char)existingTokenAdmin;
-(void)setStandardUserPasswordInstructionsWithExistingTokenAdmin:(char)arg1 ;
-(NSLayoutConstraint *)adminTableToBottomConstraint;
-(void)setAdminUserInstructions:(NSString *)arg1 ;
-(void)determineSimpleModeForMac;
-(void)setExistingTokenAdmin:(char)arg1 ;
-(unsigned long long)viewModeTabIndex;
-(void)setAcceptActionAvailable:(char)arg1 ;
-(NSNumber *)netSpace;
-(id)summarySpaceStringWithLocID:(id)arg1 ;
-(void)applySummaryTextStyling:(id)arg1 ;
-(NSProgressIndicator *)spaceSummaryProgressIndicator;
-(id)filesProcessedString;
-(char)customizationIsReady;
-(NSLayoutConstraint *)quickItemsTableWidthContstraint;
-(NSAlert *)reconnectAlert;
-(void)setReconnectAlert:(NSAlert *)arg1 ;
-(id)initWithConnectionErrorHandler:(/*^block*/id)arg1 ;
-(void)installCustomizeViewInSuperview:(id)arg1 ;
-(void)pressedEdit:(id)arg1 ;
-(void)setupForSystem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSAttributedString *)descriptiveNetSpace;
-(NSAttributedString *)descriptiveTotalSize;
-(NSAttributedString *)spaceSummaryText;
-(NSAttributedString *)spaceSummaryTextAdvanced;
-(id)customizeClientForSystem:(id)arg1 ;
-(id)destinationSystem;
-(char)acceptActionAvailable;
-(void)setNetSpace:(NSNumber *)arg1 ;
-(void)setSpaceSummaryProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setToArrowIconView:(NSImageView *)arg1 ;
-(void)setQuickItemsTable:(NSTableView *)arg1 ;
-(void)setQuickItemsTableWidthContstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPasswordCollectWindowController:(SMMigrationCustomizePasswordCollectWindowController *)arg1 ;
-(void)setAdminUserInstructionsField:(NSTextField *)arg1 ;
-(void)setAdminUserTable:(NSScrollView *)arg1 ;
-(NSString *)adminUserInstructions;
-(void)setStandardUserInstructionsField:(NSTextField *)arg1 ;
-(void)setStandardUserTable:(NSScrollView *)arg1 ;
-(void)setAdminTableHeight:(NSLayoutConstraint *)arg1 ;
-(void)setStandardTableHeight:(NSLayoutConstraint *)arg1 ;
-(void)setAdminTableToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAdminTableToStandardTableConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStandardTableToTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStandardTableToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTargetCanBecomeFDE:(char)arg1 ;
-(void)setFdeConvertHandler:(id)arg1 ;
-(char)simpleModeResolveSeen;
@end

