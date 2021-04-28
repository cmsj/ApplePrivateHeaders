/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/CNUIUndoableCommand.h>

@class CNLabeledValue, CNContactStore;

@interface CNUIRejectSugggestedValueCommand : CNUIUndoableCommand {

	CNLabeledValue* _valueToReject;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNLabeledValue * valueToReject;              //@synthesize valueToReject=_valueToReject - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;               //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(char)arg2 ;
-(void)executeWithCNSaveRequest:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 suggestedValueToReject:(id)arg2 ignoresGuardianRestrictions:(char)arg3 ;
-(CNLabeledValue *)valueToReject;
-(void)setValueToReject:(CNLabeledValue *)arg1 ;
@end
