/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CNContactCardViewControllerDelegate.h>

@class ABAddressBook, ABPerson, NSView, CNContactCardViewController, ABPersonViewNotificationWatcher, NSString;

@interface _ABPersonView : NSView <CNContactCardViewControllerDelegate> {

	ABAddressBook* _addressBook;
	ABPerson* _person;
	id _delegate;
	NSView* _view;
	id _reserved3;
	id _reserved2;
	id _watcher;
	CNContactCardViewController* _contactCardViewController;
	double _contentHeight;
	char _loaded;

}

@property (retain) ABAddressBook * addressBook;                                          //@synthesize addressBook=_addressBook - In the implementation block
@property (__weak) id<ABPersonViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) CGSize contentSize; 
@property (getter=isLoaded) char loaded;                                                 //@synthesize loaded=_loaded - In the implementation block
@property (retain) ABPersonViewNotificationWatcher * watcher;                            //@synthesize watcher=_watcher - In the implementation block
@property (retain) CNContactCardViewController * contactCardViewController;              //@synthesize contactCardViewController=_contactCardViewController - In the implementation block
@property (assign,nonatomic) double contentHeight;                                       //@synthesize contentHeight=_contentHeight - In the implementation block
@property (assign) char editing; 
@property (nonatomic,retain) ABPerson * person;                                          //@synthesize person=_person - In the implementation block
@property (assign) char shouldShowLinkedPeople; 
@property (assign) char shouldShowSuggestedFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reflectUpdatesMadeToContacts:(id)arg1 onPersonsInAddressBook:(id)arg2 ;
+(CGSize)defaultContentSize;
+(id)contactFromABPerson:(id)arg1 ;
+(id)keyPathsForValuesAffectingContentSize;
+(id)keyPathsForValuesAffectingEditing;
+(id)keyPathsForValuesAffectingLoaded;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ABPersonViewDelegate>)delegate;
-(void)setDelegate:(id<ABPersonViewDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(char)isLoaded;
-(ABPerson *)person;
-(void)setPerson:(ABPerson *)arg1 ;
-(char)hasChanges;
-(CGSize)preferredMinimumSize;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setDrawsBackground:(char)arg1 ;
-(void)commitEditing;
-(char)isEditable;
-(void)setEditable:(char)arg1 ;
-(void)setSelectable:(char)arg1 ;
-(void)setLoaded:(char)arg1 ;
-(CGSize)contentSize;
-(char)drawsBackground;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(char)isSelectable;
-(char)editing;
-(double)topMargin;
-(double)leftMargin;
-(double)bottomMargin;
-(double)rightMargin;
-(void)setEditing:(char)arg1 ;
-(id)contact;
-(void)setContact:(id)arg1 ;
-(double)contentHeight;
-(void)setContentHeight:(double)arg1 ;
-(CGRect)imageFrame;
-(ABAddressBook *)addressBook;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(void)setShouldSave:(char)arg1 ;
-(id)defaultProperties;
-(char)canEditContact;
-(CGRect)profilePhotoScreenRect;
-(id)profilePhotoImage;
-(id)hostWindowForShareSheet;
-(id)styleProvider;
-(void)setNameView:(id)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(void)notifyDelegateActionWasPerformed;
-(CNContactCardViewController *)contactCardViewController;
-(void)setPropertyKeysToDisplay:(id)arg1 ;
-(void)setContactCardViewController:(CNContactCardViewController *)arg1 ;
-(void)setHighlighted:(char)arg1 forProperty:(id)arg2 identifier:(id)arg3 ;
-(void)refreshView;
-(void)setPerson:(id)arg1 shouldShowLinkedPeople:(char)arg2 ;
-(void)setPerson:(id)arg1 shouldShowLinkedPeople:(char)arg2 shouldShowSuggestedFields:(char)arg3 ;
-(void)setContact:(id)arg1 shouldShowLinkedContacts:(char)arg2 ;
-(void)setContact:(id)arg1 shouldShowLinkedContacts:(char)arg2 shouldShowSuggestedFields:(char)arg3 ;
-(void)setAuthorizedMode:(unsigned long long)arg1 ;
-(void)setParentContainer:(id)arg1 ;
-(char)isAvailableKey:(id)arg1 ;
-(void)editProperty:(id)arg1 ;
-(void)editProperty:(id)arg1 label:(id)arg2 ;
-(void)beginEditingCustomImage;
-(void)clearCustomImage;
-(char)shouldShowLinkedPeople;
-(void)setShouldShowLinkedPeople:(char)arg1 ;
-(char)_quicklook_fetchAsynchronously;
-(void)set_quicklook_fetchAsynchronously:(char)arg1 ;
-(char)autoSave;
-(void)setAutoSave:(char)arg1 ;
-(char)showsShowInMapsButtons;
-(void)setShowsShowInMapsButtons:(char)arg1 ;
-(void)setShouldShowSuggestedFields:(char)arg1 ;
-(void)contactCardViewContollerDidLoad:(id)arg1 ;
-(void)contactCardViewControllerDesiredHeightDidChange:(id)arg1 ;
-(void)setPerson:(id)arg1 withSuggestedContact:(id)arg2 ;
-(char)shouldShowSuggestedFields;
-(void)addressBookWillReset:(id)arg1 ;
-(void)encapsulateSubtreeLayout;
-(void)ABPersonView_commonInit;
-(void)configureForContacts;
-(ABPersonViewNotificationWatcher *)watcher;
-(void)configureForPeople;
-(void)purgeAllContent;
-(void)purgeAllContentForStoreAtPath:(id)arg1 ;
-(void)setWatcher:(ABPersonViewNotificationWatcher *)arg1 ;
@end
