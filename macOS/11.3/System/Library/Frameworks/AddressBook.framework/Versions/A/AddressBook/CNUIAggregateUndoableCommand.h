/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/CNUIUndoableCommand.h>

@class NSString, NSArray;

@interface CNUIAggregateUndoableCommand : CNUIUndoableCommand {

	NSString* _actionName;
	NSArray* _undoableCommands;

}

@property (nonatomic,retain) NSString * actionName;                   //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,retain) NSArray * undoableCommands;              //@synthesize undoableCommands=_undoableCommands - In the implementation block
-(void)setActionName:(NSString *)arg1 ;
-(NSString *)actionName;
-(id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(char)arg2 ;
-(void)executeWithCNSaveRequest:(id)arg1 ;
-(void)executeUndoWithCNSaveRequest:(id)arg1 ;
-(NSArray *)undoableCommands;
-(id)initWithUndoableCommands:(id)arg1 actionName:(id)arg2 contactStore:(id)arg3 ignoresGuardianRestrictions:(char)arg4 ;
-(void)setUndoableCommands:(NSArray *)arg1 ;
@end

