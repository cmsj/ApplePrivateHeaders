/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/CNUIUndoableCommand.h>

@class CNUIUndoableCommand;

@interface CNUIRejectNonCuratedValueCommand : CNUIUndoableCommand {

	CNUIUndoableCommand* _command;

}

@property (nonatomic,retain) CNUIUndoableCommand * command;              //@synthesize command=_command - In the implementation block
-(CNUIUndoableCommand *)command;
-(void)setCommand:(CNUIUndoableCommand *)arg1 ;
-(id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(char)arg2 ;
-(void)executeWithCNSaveRequest:(id)arg1 ;
-(void)executeUndoWithCNSaveRequest:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 donaionStore:(id)arg2 nonCuratedValueToReject:(id)arg3 ignoresGuardianRestrictions:(char)arg4 ;
@end

