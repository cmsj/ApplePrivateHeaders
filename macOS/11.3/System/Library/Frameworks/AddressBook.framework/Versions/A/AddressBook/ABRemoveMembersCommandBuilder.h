/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABGroup, NSMutableArray, ABAddressBook;

@interface ABRemoveMembersCommandBuilder : NSObject {

	ABGroup* _group;
	NSMutableArray* _memberIdentifiers;
	ABAddressBook* _addressBook;

}

@property (readonly) unsigned long long countOfRemovedMembers; 
-(void)dealloc;
-(id)build;
-(void)removeMember:(id)arg1 ;
-(id)initWithGroup:(id)arg1 addressBook:(id)arg2 ;
-(unsigned long long)countOfRemovedMembers;
@end

