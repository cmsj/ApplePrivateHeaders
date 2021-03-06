/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABHeaderGroupEntry.h>

@class ABAddressBook, ABGroup;

@interface ABSmartGroupsHeaderGroupEntry : ABHeaderGroupEntry {

	ABAddressBook* _addressBook;
	ABGroup* _group;

}

@property (retain,readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (retain,readonly) ABGroup * group;                          //@synthesize group=_group - In the implementation block
-(void)dealloc;
-(ABGroup *)group;
-(ABAddressBook *)addressBook;
-(id)selectHelperWithFactory:(id)arg1 ;
-(id)iconWithStyleProvider:(id)arg1 ;
-(char)canCreateGroupInSection;
-(id)createGroupInSectionHelperWithFactory:(id)arg1 ;
-(id)initWithName:(id)arg1 children:(id)arg2 addressBook:(id)arg3 ;
@end

