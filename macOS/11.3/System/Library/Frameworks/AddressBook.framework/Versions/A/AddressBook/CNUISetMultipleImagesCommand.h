/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/CNUIUndoableCommand.h>

@class CNUIUndoableCommand;

@interface CNUISetMultipleImagesCommand : CNUIUndoableCommand {

	char _shouldSave;
	/*^block*/id _didExecuteBlock;
	CNUIUndoableCommand* _aggregateCommand;

}

@property (assign,nonatomic) char shouldSave;                                     //@synthesize shouldSave=_shouldSave - In the implementation block
@property (nonatomic,retain) CNUIUndoableCommand * aggregateCommand;              //@synthesize aggregateCommand=_aggregateCommand - In the implementation block
@property (nonatomic,copy) id didExecuteBlock;                                    //@synthesize didExecuteBlock=_didExecuteBlock - In the implementation block
+(id)makeAggregateCommandWithContactStore:(id)arg1 contacts:(id)arg2 imageData:(id)arg3 largeImageData:(id)arg4 clippingRect:(CGRect)arg5 imageType:(id)arg6 ignoresGuardianRestrictions:(char)arg7 shouldSave:(char)arg8 ;
-(id)actionName;
-(void)execute;
-(void)didExecute;
-(void)executeUndo;
-(void)executeRedo;
-(void)setShouldSave:(char)arg1 ;
-(char)shouldSave;
-(id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(char)arg2 ;
-(id)initWithContactStore:(id)arg1 contacts:(id)arg2 imageData:(id)arg3 largeImageData:(id)arg4 clippingRect:(CGRect)arg5 imageType:(id)arg6 ignoresGuardianRestrictions:(char)arg7 shouldSave:(char)arg8 ;
-(id)didExecuteBlock;
-(void)setDidExecuteBlock:(id)arg1 ;
-(CNUIUndoableCommand *)aggregateCommand;
-(void)setAggregateCommand:(CNUIUndoableCommand *)arg1 ;
@end

