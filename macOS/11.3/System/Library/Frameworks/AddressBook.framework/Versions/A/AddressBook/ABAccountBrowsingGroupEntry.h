/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABBrowsingGroupEntry.h>

@class ABAccount, ABAddressBook;

@interface ABAccountBrowsingGroupEntry : ABBrowsingGroupEntry {

	ABAccount* _account;
	ABAddressBook* _addressBook;

}

@property (retain,readonly) ABAccount * account;                      //@synthesize account=_account - In the implementation block
@property (retain,readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
+(id)identifierForAccount:(id)arg1 ;
-(id)description;
-(ABAccount *)account;
-(ABAddressBook *)addressBook;
-(char)canCreatePeople;
-(char)canDeletePeople;
-(char)canDrop;
-(id)actionScope;
-(id)initWithName:(id)arg1 account:(id)arg2 addressBook:(id)arg3 ;
-(char)canCreateGroup;
-(id)createHelperWithFactory:(id)arg1 ;
-(char)canCreateGroupFromSelection;
-(char)shouldImportToDefaultAccount;
-(char)containsPeople:(id)arg1 ;
-(id)iconWithStyleProvider:(id)arg1 ;
@end

