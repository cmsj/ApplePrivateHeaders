/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABCommandExecutionPolicy.h>

@class ABAddressBook;

@interface ABAddressBookCommandExecutionPolicy : ABCommandExecutionPolicy {

	ABAddressBook* _addressBook;
	SEL _saveHook;

}
-(void)dealloc;
-(void)runWithBlock:(/*^block*/id)arg1 ;
-(void)saveHook;
-(void)nullSaveHook;
-(id)initWithAddressBook:(id)arg1 saveOnExecute:(char)arg2 ;
@end
