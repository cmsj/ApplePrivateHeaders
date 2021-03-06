/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookCommand.h>

@class NSPasteboard, ABGroup;

@interface ABBookGroupCopyCommand : ABBookCommand {

	NSPasteboard* _pasteboard;
	ABGroup* _group;

}
-(void)dealloc;
-(void)execute;
-(id)pasteboardData;
-(id)initWithPasteboard:(id)arg1 group:(id)arg2 ;
@end

