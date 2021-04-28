/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookUndoableCommand.h>

@class ABBookGroupAddMembersCommand, ABBookGroupAddSubgroupsCommand, NSSet;

@interface ABBookGroupAddRecordsCommand : ABBookUndoableCommand {

	ABBookGroupAddMembersCommand* _addMembersCommand;
	ABBookGroupAddSubgroupsCommand* _addSubgroupsCommand;
	char ignoresGuardianRestrictions;

}

@property (readonly) NSSet * newMemberUids; 
@property (readonly) NSSet * newSubgroupUids; 
-(void)dealloc;
-(id)actionName;
-(void)execute;
-(char)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(char)arg1 ;
-(void)executeUndo;
-(NSSet *)newMemberUids;
-(NSSet *)newSubgroupUids;
-(id)initWithAddressBook:(id)arg1 group:(id)arg2 newMemberUids:(id)arg3 newSubgroupUids:(id)arg4 ;
@end
