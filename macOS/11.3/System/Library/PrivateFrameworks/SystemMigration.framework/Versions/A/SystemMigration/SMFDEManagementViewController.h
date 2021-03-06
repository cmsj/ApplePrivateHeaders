/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSLayoutConstraint, NSArray, NSString, NSWindow;

@interface SMFDEManagementViewController : NSWindowController {

	char _simpleMode;
	char _tokenOnlyMode;
	char _continueEnabled;
	char _diskPasswordOnly;
	NSLayoutConstraint* _diskPassToButtonConstraint;
	NSLayoutConstraint* _userTableToButtonConstraint;
	NSArray* _userList;
	NSString* _fdePassword;
	NSArray* _incomingUsers;
	NSWindow* _sheetWindow;
	/*^block*/id _completionHandler;

}

@property (assign) char diskPasswordOnly;                                         //@synthesize diskPasswordOnly=_diskPasswordOnly - In the implementation block
@property (retain) NSArray * incomingUsers;                                       //@synthesize incomingUsers=_incomingUsers - In the implementation block
@property (__weak) NSWindow * sheetWindow;                                        //@synthesize sheetWindow=_sheetWindow - In the implementation block
@property (copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) char continueEnabled;                                          //@synthesize continueEnabled=_continueEnabled - In the implementation block
@property (assign) NSLayoutConstraint * diskPassToButtonConstraint;               //@synthesize diskPassToButtonConstraint=_diskPassToButtonConstraint - In the implementation block
@property (assign) NSLayoutConstraint * userTableToButtonConstraint;              //@synthesize userTableToButtonConstraint=_userTableToButtonConstraint - In the implementation block
@property (retain) NSArray * userList;                                            //@synthesize userList=_userList - In the implementation block
@property (assign) char simpleMode;                                               //@synthesize simpleMode=_simpleMode - In the implementation block
@property (assign) char tokenOnlyMode;                                            //@synthesize tokenOnlyMode=_tokenOnlyMode - In the implementation block
@property (retain) NSString * fdePassword;                                        //@synthesize fdePassword=_fdePassword - In the implementation block
@property (readonly) char collectingDiskPassword; 
@property (readonly) NSString * instructionText; 
@property (readonly) NSString * passwordButtonLabel; 
+(id)keyPathsForValuesAffectingInstructionText;
+(id)keyPathsForValuesAffectingCollectingDiskPassword;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSWindow *)sheetWindow;
-(NSArray *)userList;
-(void)pressedCancel:(id)arg1 ;
-(void)setSheetWindow:(NSWindow *)arg1 ;
-(void)pressedPasswordButton:(id)arg1 ;
-(NSString *)passwordButtonLabel;
-(NSString *)instructionText;
-(char)simpleMode;
-(void)setSimpleMode:(char)arg1 ;
-(void)setTokenOnlyMode:(char)arg1 ;
-(void)showForIncomingUsers:(id)arg1 overWindow:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSString *)fdePassword;
-(void)setUserList:(NSArray *)arg1 ;
-(void)setIncomingUsers:(NSArray *)arg1 ;
-(char)tokenOnlyMode;
-(void)setDiskPasswordOnly:(char)arg1 ;
-(NSLayoutConstraint *)diskPassToButtonConstraint;
-(NSLayoutConstraint *)userTableToButtonConstraint;
-(void)setContinueEnabled:(char)arg1 ;
-(char)diskPasswordOnly;
-(void)dismissWindow;
-(void)pressedContinue:(id)arg1 ;
-(char)collectingDiskPassword;
-(void)pressedAuthorizeDiskPassword:(id)arg1 ;
-(void)setDiskPassToButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUserTableToButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFdePassword:(NSString *)arg1 ;
-(char)continueEnabled;
-(NSArray *)incomingUsers;
@end

