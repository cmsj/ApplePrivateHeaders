/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABCommand.h>

@class NSMutableArray, ABGroup;

@interface ABShowAsCommand : ABCommand {

	NSMutableArray* _selectedMembers;
	ABGroup* _selectedGroup;
	long long _personType;

}
-(void)dealloc;
-(void)undoIt;
-(void)redoIt;
-(char)doIt;
-(void)_showAs;
-(id)initWithGroup:(id)arg1 members:(id)arg2 showAs:(long long)arg3 addressBook:(id)arg4 ;
@end

