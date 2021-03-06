/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookUndoableCommand.h>

@class NSString, NSArray, ABAddressBook;

@interface ABRemoveMembersCommand : ABBookUndoableCommand {

	NSString* _groupIdentifier;
	NSArray* _memberIdentifiers;
	ABAddressBook* _addressBook;
	char ignoresGuardianRestrictions;

}
-(void)dealloc;
-(void)execute;
-(char)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(char)arg1 ;
-(void)executeUndo;
-(id)_fetchMembers;
-(id)_fetchGroup;
-(void)_removePeople:(id)arg1 fromGroup:(id)arg2 ;
-(void)_removeSubgroups:(id)arg1 fromGroup:(id)arg2 ;
-(void)_addPeople:(id)arg1 toGroup:(id)arg2 ;
-(void)_addSubgroups:(id)arg1 toGroup:(id)arg2 ;
-(id)initWithGroup:(id)arg1 members:(id)arg2 addressBook:(id)arg3 ;
@end

