/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/CNUIUndoableCommand.h>

@class CNContact, NSString;

@interface CNUIDeleteContactCommand : CNUIUndoableCommand {

	CNContact* _contact;
	NSString* _containerIdentifier;

}

@property (nonatomic,retain) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(id)actionName;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(char)arg2 ;
-(void)executeWithCNSaveRequest:(id)arg1 ;
-(void)executeUndoWithCNSaveRequest:(id)arg1 ;
-(id)initWithContact:(id)arg1 containerIdentifier:(id)arg2 contactStore:(id)arg3 ignoresGuardianRestrictions:(char)arg4 ;
@end

