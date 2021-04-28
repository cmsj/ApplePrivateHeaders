/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPersonMergingControllerDelegate;
@class ABPerson, ABGroup, NSMutableArray, NSArray, NSMutableSet, NSMutableDictionary, ABAddressBook, ABAccount, ABMultiDictionary;

@interface ABPersonMergingController : NSObject {

	ABPerson* _meCard;
	ABGroup* _group;
	NSMutableArray* _allPeople;
	NSArray* _personProperties;
	NSMutableArray* _deletedPeople;
	NSMutableArray* _addedPeople;
	NSMutableArray* _updatedPeople;
	NSMutableArray* _updatedPeopleProperties;
	NSMutableSet* _updatedPeopleSet;
	NSMutableArray* _addedToGroup;
	NSMutableDictionary* _selfMergedPeople;
	NSMutableDictionary* _mergedIntoGroup;
	ABAddressBook* _targetAddressBook;
	ABAccount* _targetAccount;
	ABMultiDictionary* _collisionMap;
	id<ABPersonMergingControllerDelegate> _delegate;

}

@property (retain) ABAddressBook * targetAddressBook; 
@property (retain) ABAccount * targetAccount;                                             //@synthesize targetAccount=_targetAccount - In the implementation block
@property (assign) id<NSObject><ABPersonMergingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<NSObject><ABPersonMergingControllerDelegate>)delegate;
-(void)setDelegate:(id<NSObject><ABPersonMergingControllerDelegate>)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(void)setMeCard:(id)arg1 ;
-(id)allPeople;
-(void)_addPeople:(id)arg1 usingAddressBook:(id)arg2 ;
-(id)allPersonProperties;
-(unsigned long long)_insertionIndexForPerson:(id)arg1 ;
-(void)addPerson:(id)arg1 ;
-(void)deletePerson:(id)arg1 ;
-(id)deletedPeople;
-(char)findSimilarMultiValuesForPerson:(id)arg1 ;
-(void)mergeSimilarMultiValuesForPerson:(id)arg1 ;
-(id)updateCard:(id)arg1 withImportedCard:(id)arg2 ;
-(id)duplicatesForPeople:(id)arg1 ;
-(void)addMember:(id)arg1 toGroup:(id)arg2 ;
-(id)addedToGroup;
-(id)addedPeople;
-(id)updatedPeople;
-(ABAddressBook *)targetAddressBook;
-(id)updateCard:(id)arg1 withImportedCard:(id)arg2 replaceValues:(char)arg3 ;
-(char)shouldMergeValuesForProperty:(id)arg1 ;
-(id)findExistingPeopleWhoseNamesMatchPeople:(id)arg1 ;
-(ABAccount *)targetAccount;
-(id)collisionMap;
-(char)applyChangesAndSave:(char)arg1 ;
-(char)hasPendingChanges;
-(void)setTargetAddressBook:(ABAddressBook *)arg1 ;
-(id)emulateUpdateCard:(id)arg1 withImportedCard:(id)arg2 changes:(id)arg3 inAddressBook:(id)arg4 ;
-(char)applyChanges;
-(void)setTargetAccount:(ABAccount *)arg1 ;
@end
