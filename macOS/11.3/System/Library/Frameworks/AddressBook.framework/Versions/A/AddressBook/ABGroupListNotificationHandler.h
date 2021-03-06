/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABAccountCollection;
@class ABAddressBook, ABGroupEntriesList, ABAbstractGroupEntriesFactory, NSArray;

@interface ABGroupListNotificationHandler : NSObject {

	ABAddressBook* _addressBook;
	ABGroupEntriesList* _groupEntriesList;
	ABAbstractGroupEntriesFactory* _groupEntriesFactory;
	id<ABAccountCollection> _accountCollection;
	NSArray* _emptyAccountIdentifiers;

}
-(void)dealloc;
-(void)handleLocalAddressBookNotification:(id)arg1 ;
-(void)handleExternalAddressBookNotification:(id)arg1 ;
-(void)handleAccountRepositoryChangeNotification:(id)arg1 ;
-(void)handleAccountConfigurationChangeNotification:(id)arg1 ;
-(id)initWithAddressBook:(id)arg1 groupEntriesList:(id)arg2 groupEntriesFactory:(id)arg3 accountCollection:(id)arg4 ;
-(id)emptyAccountIdentifiers;
-(char)doesLocalNotificationContainGroupChanges:(id)arg1 ;
-(char)doesLocalNotificationContainEmptyAccountsChanges:(id)arg1 ;
-(char)doesExternalNotificationContainGroupChanges:(id)arg1 ;
-(void)rebuildGroupEntriesListWithAccounts:(id)arg1 ;
-(char)didEmptyAccountsChange;
-(void)handleDefaultAccountChangedNotification:(id)arg1 ;
@end

