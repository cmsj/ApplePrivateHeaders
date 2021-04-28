/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/CNFamilyMemberEditControlsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsObserver.h>
#import <libobjc.A.dylib/CNContactListControllerDelegate.h>

@protocol CNSchedulerProvider, CNFamilyMemberContactsViewControllerDelegate, CNUICoreFamilyMemberContactsDataSource;
@class FAFamilyMember, CNContactStore, CNContactPickerInProccessViewController, NSButton, NSSegmentedControl, NSString;

@interface CNFamilyMemberContactsViewController : NSViewController <CNFamilyMemberEditControlsViewControllerDelegate, CNUICoreFamilyMemberContactsObserver, CNContactListControllerDelegate> {

	FAFamilyMember* _familyMember;
	CNContactStore* _localContactStore;
	CNContactStore* _familyMemberScopedContactStore;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNFamilyMemberContactsViewControllerDelegate> _delegate;
	id<CNUICoreFamilyMemberContactsDataSource> _dataSource;
	CNContactPickerInProccessViewController* _familyScopedContactPicker;
	NSButton* _doneButton;
	NSButton* _editButton;
	NSSegmentedControl* _segmentedControl;

}

@property (nonatomic,readonly) CNContactStore * localContactStore;                                               //@synthesize localContactStore=_localContactStore - In the implementation block
@property (nonatomic,readonly) CNContactStore * familyMemberScopedContactStore;                                  //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                        //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<CNFamilyMemberContactsViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsDataSource> dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) CNContactPickerInProccessViewController * familyScopedContactPicker;              //@synthesize familyScopedContactPicker=_familyScopedContactPicker - In the implementation block
@property (nonatomic,readonly) NSButton * doneButton;                                                            //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) NSButton * editButton;                                                            //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,readonly) NSSegmentedControl * segmentedControl;                                            //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) FAFamilyMember * familyMember;                                                    //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) long long countOfFamilyMemberContacts; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginEditing;
-(id<CNFamilyMemberContactsViewControllerDelegate>)delegate;
-(CGSize)preferredMinimumSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<CNUICoreFamilyMemberContactsDataSource>)dataSource;
-(void)loadView;
-(void)cancelOperation:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(void)cancelButtonPressed:(id)arg1 ;
-(NSSegmentedControl *)segmentedControl;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setupButtons;
-(NSButton *)doneButton;
-(void)doneButtonPressed:(id)arg1 ;
-(FAFamilyMember *)familyMember;
-(void)familyMemberContactItemsDidChange;
-(long long)fetchStatus;
-(CNContactStore *)familyMemberScopedContactStore;
-(long long)countOfFamilyMemberContacts;
-(NSButton *)editButton;
-(void)setupViewHierarchy;
-(void)dismissRequested:(char)arg1 ;
-(void)selectionChanged:(char)arg1 ;
-(id)initWithFamilyMember:(id)arg1 delegate:(id)arg2 ;
-(void)setupUI;
-(void)setupConstraints;
-(void)setupFamilyScopedContactPicker;
-(void)editButtonPressed:(id)arg1 ;
-(void)segmentedControlChanged:(id)arg1 ;
-(CNContactPickerInProccessViewController *)familyScopedContactPicker;
-(void)showAddToContactsDropdown;
-(void)removeSelectedContactFromFamilyMemberContacts;
-(void)addContactFromLocalContacts:(id)arg1 ;
-(void)addNewContact:(id)arg1 ;
-(void)updateFamilyMemberContactsByRemovingContacts:(id)arg1 ;
-(void)finishEdtiting;
-(void)updateFamilyMemberContactsByAddingContacts:(id)arg1 ;
-(void)didPressDoneFamilyMemberEditControlsViewController:(id)arg1 ;
-(void)didPressCancelFamilyMemberEditControlsViewController:(id)arg1 ;
-(CNContactStore *)localContactStore;
@end
