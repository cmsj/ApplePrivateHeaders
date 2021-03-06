/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/PreferencesModule.h>
#import <libobjc.A.dylib/WKScriptMessageHandlerWithReply.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>

@class NSBox, NSTableView, NSImageView, NSTextField, NSButton, NSView, WKWebView, NSMutableArray, NSLayoutConstraint, SLSecureCursorAssertion, NSOcclusionDetectionView, NSString;

@interface ExtensionsPreferences : PreferencesModule <WKScriptMessageHandlerWithReply, NSTableViewDataSource, NSTableViewDelegate> {

	NSBox* _listBox;
	NSTableView* _listTableView;
	NSBox* _detailsBox;
	NSBox* _emptyBox;
	NSBox* _detailsSeperator;
	NSImageView* _detailsIconView;
	NSTextField* _detailsNameLabel;
	NSTextField* _detailsDescriptionLabel;
	NSButton* _preferencesButton;
	NSView* _permissionsContainer;
	NSButton* _moreExtensionsButton;
	NSView* _extensionsEnabledView;
	NSView* _extensionsDisabledView;
	WKWebView* _permissionsWebView;
	NSMutableArray* _orderedExtensions;
	char _didAwakeFromNib;
	char _dontRememberExtensionSelectionChanges;
	double _previousEnabledHeight;
	char _usingDisabledHeight;
	NSLayoutConstraint* _heightConstraint;
	SLSecureCursorAssertion* _cursorAssertion;
	NSOcclusionDetectionView* _occlusionDetectionView;
	char _windowIsOccluded;
	id _occlusionValidationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeFromNib;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(id)imageForPreferenceNamed:(id)arg1 ;
-(void)moduleWillBeRemoved;
-(void)willBeDisplayed;
-(void)moduleWasInstalled;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)safariHelpAnchor;
-(/*^block*/id)_extensionComparator;
-(void)selectExtensionWithIdentifier:(id)arg1 ;
-(void)_extensionWasAdded:(id)arg1 ;
-(void)_extensionWasRemoved:(id)arg1 ;
-(void)_extensionEnabledStateDidChange:(id)arg1 ;
-(void)_extensionsWereDisabled:(id)arg1 ;
-(void)_extensionsWereEnabled:(id)arg1 ;
-(void)_extensionPermissionDidChange:(id)arg1 ;
-(void)_extensionErrorOccurred:(id)arg1 ;
-(void)_updateViewsForDisabledStateWithAnimation:(char)arg1 ;
-(void)_prepareSecureCursorAssertion;
-(void)_prepareOcclusionDetectionView;
-(id)_selectedExtensionWrapper;
-(void)_updatePreferencesButtonVisibility;
-(void)_updatePermissionsAndErrorsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_editWebsites;
-(void)_allowOnAllWebsites;
-(void)_updatePermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateErrorsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateSecureAssertionState:(id)arg1 ;
-(void)_viewDidBecomeOccluded:(id)arg1 ;
-(void)_viewDidBecomeUnoccluded:(id)arg1 ;
-(void)openExtensionsGallery:(id)arg1 ;
-(void)uninstallExtension:(id)arg1 ;
-(void)showPreferencesPage:(id)arg1 ;
-(void)toggleExtensionEnabled:(id)arg1 ;
-(char)canEnableExtensions;
@end

