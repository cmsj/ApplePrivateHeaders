/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class ACDStateManager, NSString, NSTextField, NSLayoutConstraint;

@interface ACDBaseViewController : NSViewController {

	char _isActivityInProgress;
	ACDStateManager* _stateManager;
	NSString* _warningMessage;
	double _messageNonZeroConstrain;
	NSTextField* _messageView;
	NSLayoutConstraint* _messageConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * messageConstraint;              //@synthesize messageConstraint=_messageConstraint - In the implementation block
@property (assign,nonatomic) double messageNonZeroConstrain;                      //@synthesize messageNonZeroConstrain=_messageNonZeroConstrain - In the implementation block
@property (assign,nonatomic) ACDStateManager * stateManager;                      //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,copy) NSString * warningMessage;                             //@synthesize warningMessage=_warningMessage - In the implementation block
@property (nonatomic,readonly) double messageZeroConstrain; 
@property (assign,nonatomic) char isActivityInProgress;                           //@synthesize isActivityInProgress=_isActivityInProgress - In the implementation block
@property (nonatomic,retain) NSTextField * messageView;                           //@synthesize messageView=_messageView - In the implementation block
-(void)dealloc;
-(id)init;
-(void)awakeFromNib;
-(void)setWarningMessage:(NSString *)arg1 ;
-(NSString *)warningMessage;
-(ACDStateManager *)stateManager;
-(void)didBecomeActive;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)didResignActive;
-(void)setStateManager:(ACDStateManager *)arg1 ;
-(void)handleFailoverWithCompletion:(/*^block*/id)arg1 ;
-(void)setMessage:(id)arg1 type:(unsigned long long)arg2 ;
-(double)messageZeroConstrain;
-(void)setIsActivityInProgress:(char)arg1 ;
-(char)isActivityInProgress;
-(NSTextField *)messageView;
-(void)setMessageView:(NSTextField *)arg1 ;
-(NSLayoutConstraint *)messageConstraint;
-(void)setMessageNonZeroConstrain:(double)arg1 ;
-(double)messageNonZeroConstrain;
-(void)setMessageConstraint:(NSLayoutConstraint *)arg1 ;
@end

