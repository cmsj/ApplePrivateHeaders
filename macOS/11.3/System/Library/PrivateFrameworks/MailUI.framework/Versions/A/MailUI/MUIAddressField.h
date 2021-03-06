/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/CNAutocompleteResultWindowDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/NSTokenFieldDelegate.h>
#import <libobjc.A.dylib/NSEditorRegistration.h>
#import <libobjc.A.dylib/NSCandidateListTouchBarItemDelegate.h>
#import <libobjc.A.dylib/NSTouchBarDelegate.h>

@protocol MUIAddressFieldContextProvider, MUIAddressFieldSenderAddressHandler, CNCancelable, MUITokenAddressDelegate;
@class NSString, NSScrollView, NSButton, CNAutocompleteResultWindow, CNAutocompleteStore, CNAutocompleteResult, NSLayoutConstraint, NSMapTable, MUITokenAddressField, NSArray;

@interface MUIAddressField : NSControl <CNAutocompleteResultWindowDelegate, CNAutocompleteFetchDelegate, CNContactPickerDelegate, NSTableViewDataSource, NSTableViewDelegate, NSTokenFieldDelegate, NSEditorRegistration, NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate> {

	SEL _action;
	id _target;
	long long _style;
	char _isShowingContactPicker;
	char _shouldDrawFocusRing;
	char _isBoundToTokenField;
	char _isShowingSelectedCompletion;
	char _hideInitialEmptyCandidateList;
	char _ignoreCompletionForTextChange;
	id<MUIAddressFieldContextProvider> _delegate;
	id<MUIAddressFieldSenderAddressHandler> _senderAddressHandler;
	NSString* _accountIdentifier;
	NSString* _senderAddress;
	NSString* _senderDomain;
	NSScrollView* _scrollView;
	NSButton* _addContactButton;
	CNAutocompleteResultWindow* _autocompleteResultWindow;
	CNAutocompleteStore* _autocompleteStore;
	CNAutocompleteResult* _selectedResult;
	NSString* _currentPrefix;
	id<CNCancelable> _currentSearchRequest;
	id<CNCancelable> _lastSuccessfulSearchRequest;
	long long _addressDisplayMode;
	id _tokenValue;
	NSLayoutConstraint* _addContactButtonTrailingConstraint;
	NSLayoutConstraint* _tokenFieldTrailingConstraint;
	NSLayoutConstraint* _tokenFieldBottomConstraint;
	NSMapTable* _representedObjectsCache;
	NSString* _lastSendingAddress;
	NSString* _previousPrimaryAddress;
	MUITokenAddressField* _tokenField;
	NSLayoutConstraint* _addressFieldHeightConstraint;
	id<MUITokenAddressDelegate> _tokenAddressDelegate;
	NSRange _editingRange;

}

@property (nonatomic,retain) NSScrollView * scrollView;                                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSButton * addContactButton;                                                      //@synthesize addContactButton=_addContactButton - In the implementation block
@property (nonatomic,retain) CNAutocompleteResultWindow * autocompleteResultWindow;                            //@synthesize autocompleteResultWindow=_autocompleteResultWindow - In the implementation block
@property (nonatomic,readonly) CNAutocompleteStore * autocompleteStore;                                        //@synthesize autocompleteStore=_autocompleteStore - In the implementation block
@property (nonatomic,retain) CNAutocompleteResult * selectedResult;                                            //@synthesize selectedResult=_selectedResult - In the implementation block
@property (nonatomic,copy) NSString * currentPrefix;                                                           //@synthesize currentPrefix=_currentPrefix - In the implementation block
@property (nonatomic,retain) id<CNCancelable> currentSearchRequest;                                            //@synthesize currentSearchRequest=_currentSearchRequest - In the implementation block
@property (nonatomic,retain) id<CNCancelable> lastSuccessfulSearchRequest;                                     //@synthesize lastSuccessfulSearchRequest=_lastSuccessfulSearchRequest - In the implementation block
@property (assign,nonatomic) NSRange editingRange;                                                             //@synthesize editingRange=_editingRange - In the implementation block
@property (assign,nonatomic) long long addressDisplayMode;                                                     //@synthesize addressDisplayMode=_addressDisplayMode - In the implementation block
@property (nonatomic,retain) id tokenValue;                                                                    //@synthesize tokenValue=_tokenValue - In the implementation block
@property (assign,nonatomic) char isShowingContactPicker;                                                      //@synthesize isShowingContactPicker=_isShowingContactPicker - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * addContactButtonTrailingConstraint;                   //@synthesize addContactButtonTrailingConstraint=_addContactButtonTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * tokenFieldTrailingConstraint;                         //@synthesize tokenFieldTrailingConstraint=_tokenFieldTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * tokenFieldBottomConstraint;                           //@synthesize tokenFieldBottomConstraint=_tokenFieldBottomConstraint - In the implementation block
@property (nonatomic,retain) NSMapTable * representedObjectsCache;                                             //@synthesize representedObjectsCache=_representedObjectsCache - In the implementation block
@property (assign,nonatomic) char shouldDrawFocusRing;                                                         //@synthesize shouldDrawFocusRing=_shouldDrawFocusRing - In the implementation block
@property (assign,nonatomic) char isBoundToTokenField;                                                         //@synthesize isBoundToTokenField=_isBoundToTokenField - In the implementation block
@property (assign,nonatomic) char isShowingSelectedCompletion;                                                 //@synthesize isShowingSelectedCompletion=_isShowingSelectedCompletion - In the implementation block
@property (nonatomic,copy) NSString * lastSendingAddress;                                                      //@synthesize lastSendingAddress=_lastSendingAddress - In the implementation block
@property (nonatomic,copy) NSString * previousPrimaryAddress;                                                  //@synthesize previousPrimaryAddress=_previousPrimaryAddress - In the implementation block
@property (assign,nonatomic) char hideInitialEmptyCandidateList;                                               //@synthesize hideInitialEmptyCandidateList=_hideInitialEmptyCandidateList - In the implementation block
@property (nonatomic,retain) MUITokenAddressField * tokenField;                                                //@synthesize tokenField=_tokenField - In the implementation block
@property (assign,nonatomic) char ignoreCompletionForTextChange;                                               //@synthesize ignoreCompletionForTextChange=_ignoreCompletionForTextChange - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * addressFieldHeightConstraint;                                //@synthesize addressFieldHeightConstraint=_addressFieldHeightConstraint - In the implementation block
@property (nonatomic,retain) id<MUITokenAddressDelegate> tokenAddressDelegate;                                 //@synthesize tokenAddressDelegate=_tokenAddressDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MUIAddressFieldContextProvider> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MUIAddressFieldSenderAddressHandler> senderAddressHandler;              //@synthesize senderAddressHandler=_senderAddressHandler - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                                                           //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) NSString * senderDomain;                                                            //@synthesize senderDomain=_senderDomain - In the implementation block
@property (nonatomic,retain) NSArray * addresses; 
@property (nonatomic,readonly) NSArray * rawAddresses; 
@property (nonatomic,readonly) NSArray * chosenRawAddresses; 
@property (nonatomic,readonly) char isEmpty; 
@property (assign,nonatomic) long long style; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readablePasteboardTypes;
+(id)_contactPicker;
+(id)keyPathsForValuesAffectingAddresses;
-(void)dealloc;
-(char)isEmpty;
-(id)initWithCoder:(id)arg1 ;
-(id<MUIAddressFieldContextProvider>)delegate;
-(void)setDelegate:(id<MUIAddressFieldContextProvider>)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setEnabled:(char)arg1 ;
-(SEL)action;
-(long long)style;
-(void)setAction:(SEL)arg1 ;
-(NSArray *)addresses;
-(void)setStyle:(long long)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(NSScrollView *)scrollView;
-(id)accessibilityChildren;
-(void)setNextKeyView:(id)arg1 ;
-(void)setAccessibilityTitleUIElement:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(char)canBecomeKeyView;
-(void)drawFocusRingMask;
-(id)makeTouchBar;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(void)_windowWillClose:(id)arg1 ;
-(CGRect)focusRingMaskBounds;
-(id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2 ;
-(void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2 ;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(void)_configureConstraints;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3 ;
-(char)tokenField:(id)arg1 characterAtIndex:(unsigned long long)arg2 shouldTerminateString:(id)arg3 ;
-(NSRange)editingRange;
-(void)_registerForNotifications;
-(void)_windowDidResize:(id)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSString *)lastSendingAddress;
-(void)setLastSendingAddress:(NSString *)arg1 ;
-(CNAutocompleteResult *)selectedResult;
-(void)setSelectedResult:(CNAutocompleteResult *)arg1 ;
-(CNAutocompleteStore *)autocompleteStore;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(char)_hasFocus;
-(char)shouldDrawFocusRing;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(void)_cancelCompletion;
-(NSString *)senderDomain;
-(void)contactPickerWillClose:(id)arg1 ;
-(void)contactPickerDidClose:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(MUITokenAddressField *)tokenField;
-(void)setTokenField:(MUITokenAddressField *)arg1 ;
-(void)selectedResult:(id)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(NSString *)currentPrefix;
-(id)headerForNilPrefixResults;
-(void)setTokenValue:(id)arg1 ;
-(void)_closeCompletion;
-(void)setSenderDomain:(NSString *)arg1 ;
-(void)_muiAddressFieldCommonInit;
-(void)_configureScrollView;
-(void)_configureTokenField;
-(void)_configureAddContactButton;
-(void)_refreshAddressDisplayMode;
-(NSButton *)addContactButton;
-(void)_sharedPreferencesChanged:(id)arg1 ;
-(void)_tokenFieldGainedFocus:(id)arg1 ;
-(void)_tokenFieldMouseAction:(id)arg1 ;
-(void)_cancelAndCloseCompletion;
-(void)_scrollerStyleDidChange:(id)arg1 ;
-(void)_windowDidChangeKeyStatus:(id)arg1 ;
-(void)bindOrUnbindToTokenField:(char)arg1 ;
-(char)isBoundToTokenField;
-(void)setIsBoundToTokenField:(char)arg1 ;
-(void)_tokenFieldCommitedEditing:(id)arg1 ;
-(void)_showContactPicker:(id)arg1 ;
-(void)_updateTrailingConstraints;
-(NSLayoutConstraint *)addContactButtonTrailingConstraint;
-(NSLayoutConstraint *)tokenFieldTrailingConstraint;
-(id<CNCancelable>)currentSearchRequest;
-(void)setCurrentSearchRequest:(id<CNCancelable>)arg1 ;
-(void)_startCompleting;
-(CNAutocompleteResultWindow *)autocompleteResultWindow;
-(void)setAutocompleteResultWindow:(CNAutocompleteResultWindow *)arg1 ;
-(void)setIgnoreCompletionForTextChange:(char)arg1 ;
-(void)_updateAutocompleteTouchBarButtons;
-(void)_displayNextPeoplePrediction;
-(void)_showSelectedCompletionInField;
-(id)_completionStringForSelectedRecord;
-(void)setIsShowingSelectedCompletion:(char)arg1 ;
-(long long)addressDisplayMode;
-(void)setAddressDisplayMode:(long long)arg1 ;
-(id)tokenValue;
-(id)_editingStringWithRange:(NSRange*)arg1 ;
-(id)_addressesWithTokens:(id)arg1 tokenConverter:(/*^block*/id)arg2 ;
-(id)_tokensWithGroupTokensExpanded:(id)arg1 ;
-(void)_updateSenderAddressHandler;
-(void)_updateSelectedResultAndShowInField:(id)arg1 ;
-(void)setLastSuccessfulSearchRequest:(id<CNCancelable>)arg1 ;
-(void)_presentAutocompletionResultWindow;
-(id<CNCancelable>)lastSuccessfulSearchRequest;
-(void)setShouldDrawFocusRing:(char)arg1 ;
-(NSLayoutConstraint *)addressFieldHeightConstraint;
-(void)setAddressFieldHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAddContactButton:(NSButton *)arg1 ;
-(void)setAddContactButtonTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTokenFieldTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEditingRange:(NSRange)arg1 ;
-(char)isShowingSelectedCompletion;
-(char)ignoreCompletionForTextChange;
-(void)_completeSelection:(id)arg1 ;
-(void)setCurrentPrefix:(NSString *)arg1 ;
-(NSMapTable *)representedObjectsCache;
-(id<MUITokenAddressDelegate>)tokenAddressDelegate;
-(void)_updateEditingRange;
-(CGRect)_adjustedFrameForAutocompleteResultWindow;
-(id<MUIAddressFieldSenderAddressHandler>)senderAddressHandler;
-(NSString *)previousPrimaryAddress;
-(void)setPreviousPrimaryAddress:(NSString *)arg1 ;
-(char)_allowNextPeoplePrediction;
-(char)hideInitialEmptyCandidateList;
-(void)setHideInitialEmptyCandidateList:(char)arg1 ;
-(void)setIsShowingContactPicker:(char)arg1 ;
-(void)_addAddress:(id)arg1 contact:(id)arg2 ;
-(char)isShowingContactPicker;
-(void)_resizeFieldIfNeeded;
-(char)_addressFieldNeedsToBeScrollable;
-(NSLayoutConstraint *)tokenFieldBottomConstraint;
-(NSArray *)chosenRawAddresses;
-(NSArray *)rawAddresses;
-(void)_objectDidTriggerAction:(id)arg1 ;
-(void)setSenderAddressHandler:(id<MUIAddressFieldSenderAddressHandler>)arg1 ;
-(void)setTokenFieldBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRepresentedObjectsCache:(NSMapTable *)arg1 ;
-(void)setTokenAddressDelegate:(id<MUITokenAddressDelegate>)arg1 ;
@end

