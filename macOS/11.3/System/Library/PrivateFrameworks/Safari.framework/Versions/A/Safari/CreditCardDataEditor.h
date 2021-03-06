/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/PanelPlusDelegate.h>
#import <libobjc.A.dylib/CreditCardDataEditorCellViewDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>

@protocol CreditCardDataEditorDelegate;
@class AuthorizationRequest, CreditCardNumberFieldEditor, NSArray, NSTableView, NSTextField, NSButton, NSLayoutConstraint, NSString;

@interface CreditCardDataEditor : NSViewController <PanelPlusDelegate, CreditCardDataEditorCellViewDelegate, NSTableViewDataSource, NSTableViewDelegate> {

	char _shouldPreventResigningFirstResponder;
	unsigned long long _ignoringCreditCardDataChangeNotifications;
	AuthorizationRequest* _canShowCardNumbersAuthorizationRequest;
	CreditCardNumberFieldEditor* _creditCardNumberFieldEditor;
	NSArray* _virtualCardData;
	NSArray* _creditCardAndVirtualCardData;
	id<CreditCardDataEditorDelegate> _delegate;
	NSArray* _creditCardData;
	NSTableView* _tableView;
	NSTextField* _emptyTablePlaceholderText;
	NSButton* _addCreditCardButton;
	NSButton* _removeCreditCardButton;
	NSLayoutConstraint* _addRemoveButtonEqualWidthsConstraint;

}

@property (nonatomic,copy) NSArray * creditCardData;                                                        //@synthesize creditCardData=_creditCardData - In the implementation block
@property (assign,nonatomic,__weak) NSTableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * emptyTablePlaceholderText;                                //@synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText - In the implementation block
@property (assign,nonatomic,__weak) NSButton * addCreditCardButton;                                         //@synthesize addCreditCardButton=_addCreditCardButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * removeCreditCardButton;                                      //@synthesize removeCreditCardButton=_removeCreditCardButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * addRemoveButtonEqualWidthsConstraint;              //@synthesize addRemoveButtonEqualWidthsConstraint=_addRemoveButtonEqualWidthsConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<CreditCardDataEditorDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_creditCardIconForNumberAllowingPartialMatch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CreditCardDataEditorDelegate>)delegate;
-(void)setDelegate:(id<CreditCardDataEditorDelegate>)arg1 ;
-(NSTableView *)tableView;
-(void)awakeFromNib;
-(id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)viewWillAppear;
-(void)setTableView:(NSTableView *)arg1 ;
-(void)hideSheet:(id)arg1 ;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(NSArray *)creditCardData;
-(void)removeSelectedItems:(id)arg1 ;
-(NSTextField *)emptyTablePlaceholderText;
-(void)setEmptyTablePlaceholderText:(NSTextField *)arg1 ;
-(char)tableView:(id)arg1 keyDown:(id)arg2 ;
-(void)_updateCreditCardAndVirtualCardData;
-(void)_updateVisibilityOfPlaceholderText;
-(void)setCreditCardData:(NSArray *)arg1 ;
-(void)_reloadTableData;
-(NSButton *)addCreditCardButton;
-(void)resetCreditCardData;
-(void)_addVirtualCardData;
-(void)creditCardDataChanged;
-(void)_updateRemoveButtons;
-(void)_performBlockIgnoringCreditCardDataChangeNotifications:(/*^block*/id)arg1 ;
-(void)_removeCreditCardsAtIndexes:(id)arg1 ;
-(void)_updateCreditCard:(id)arg1 withCreditCardData:(id)arg2 ;
-(void)_addCreditCard:(id)arg1 ;
-(id)_indexesOfCreditCardsWithNumber:(id)arg1 excludingCard:(id)arg2 ;
-(void)_preventResigningFirstResponderWhilePerformingBlock:(/*^block*/id)arg1 ;
-(char)_canRemoveSelectedItems;
-(id)_groupCellViewForTableView:(id)arg1 row:(long long)arg2 ;
-(id)_cardDataAtRowIndex:(long long)arg1 ;
-(long long)_virtualCardOffsetInTableView;
-(char)_isCreditCardNumberTextField:(id)arg1 ;
-(char)_shouldSetNumberOfCreditCardData:(id)arg1 toCreditCardNumber:(id)arg2 ;
-(id)_expirationDateForDate:(id)arg1 ;
-(void)creditCardDataEditorCellView:(id)arg1 didSetObjectValue:(id)arg2 forTextFieldWithIdentifier:(id)arg3 ;
-(void)creditCardDataEditorCellView:(id)arg1 willAbortEditingForTextFieldWithIdentifier:(id)arg2 ;
-(char)creditCardDataEditorCellView:(id)arg1 shouldEndEditingTextInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3 ;
-(void)creditCardDataEditorCellView:(id)arg1 textDidChangeInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3 ;
-(void)addCreditCard:(id)arg1 ;
-(void)setAddCreditCardButton:(NSButton *)arg1 ;
-(NSButton *)removeCreditCardButton;
-(void)setRemoveCreditCardButton:(NSButton *)arg1 ;
-(NSLayoutConstraint *)addRemoveButtonEqualWidthsConstraint;
-(void)setAddRemoveButtonEqualWidthsConstraint:(NSLayoutConstraint *)arg1 ;
@end

