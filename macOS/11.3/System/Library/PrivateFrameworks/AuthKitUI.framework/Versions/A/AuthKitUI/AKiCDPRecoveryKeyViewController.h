/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol AKiCDPRecoveryKeyDelegate, MBSecondPartyHost;
@class NSTextField, NSView, NSString, OBTemplateView;

@interface AKiCDPRecoveryKeyViewController : NSViewController {

	char _showErrorString;
	char _recoveryKeyTextFieldEnabled;
	char _noRecoveryKeyButtonVisible;
	char _noRecoveryKeyButtonEnabled;
	NSTextField* _recoveryKeyTextField;
	NSView* _progressView;
	NSString* _recoveryKey;
	id<AKiCDPRecoveryKeyDelegate> _delegate;
	id<MBSecondPartyHost> _assistant;
	OBTemplateView* _templateView;

}

@property (assign) id<AKiCDPRecoveryKeyDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign) id<MBSecondPartyHost> assistant;                      //@synthesize assistant=_assistant - In the implementation block
@property (nonatomic,retain) OBTemplateView * templateView;              //@synthesize templateView=_templateView - In the implementation block
@property (retain) NSTextField * recoveryKeyTextField;                   //@synthesize recoveryKeyTextField=_recoveryKeyTextField - In the implementation block
@property (retain) NSView * progressView;                                //@synthesize progressView=_progressView - In the implementation block
@property (retain) NSString * recoveryKey;                               //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (assign) char showErrorString;                                 //@synthesize showErrorString=_showErrorString - In the implementation block
@property (assign) char recoveryKeyTextFieldEnabled;                     //@synthesize recoveryKeyTextFieldEnabled=_recoveryKeyTextFieldEnabled - In the implementation block
@property (assign) char noRecoveryKeyButtonVisible;                      //@synthesize noRecoveryKeyButtonVisible=_noRecoveryKeyButtonVisible - In the implementation block
@property (assign) char noRecoveryKeyButtonEnabled;                      //@synthesize noRecoveryKeyButtonEnabled=_noRecoveryKeyButtonEnabled - In the implementation block
-(id<AKiCDPRecoveryKeyDelegate>)delegate;
-(void)setDelegate:(id<AKiCDPRecoveryKeyDelegate>)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(OBTemplateView *)templateView;
-(id<MBSecondPartyHost>)assistant;
-(id)initWithDelegate:(id)arg1 assistant:(id)arg2 ;
-(void)startRecoveryKeyFlow;
-(void)setAssistant:(id<MBSecondPartyHost>)arg1 ;
-(NSTextField *)recoveryKeyTextField;
-(NSView *)progressView;
-(void)setShowErrorString:(char)arg1 ;
-(void)setNoRecoveryKeyButtonEnabled:(char)arg1 ;
-(void)setNoRecoveryKeyButtonVisible:(char)arg1 ;
-(void)validateRecoveryKey;
-(void)setRecoveryKeyTextFieldEnabled:(char)arg1 ;
-(NSString *)recoveryKey;
-(void)recoveryTextFieldAction:(id)arg1 ;
-(void)noRecoveryKeyButtonPressed:(id)arg1 ;
-(void)setRecoveryKeyTextField:(NSTextField *)arg1 ;
-(void)setProgressView:(NSView *)arg1 ;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(char)showErrorString;
-(char)recoveryKeyTextFieldEnabled;
-(char)noRecoveryKeyButtonVisible;
-(char)noRecoveryKeyButtonEnabled;
-(void)setTemplateView:(OBTemplateView *)arg1 ;
@end

