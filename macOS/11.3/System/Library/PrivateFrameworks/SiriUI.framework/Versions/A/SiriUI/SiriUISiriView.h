/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>
#import <SiriUI/SiriUISiriStatusViewDelegate.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewHosting.h>

@protocol SiriUISiriViewDelegate;
@class NSView, SiriUISiriStatusView, SiriUIHelpButton, SiriUIButton, SiriUIConfiguration, NSString;

@interface SiriUISiriView : NSView <SiriUISiriStatusViewDelegate, AFUISiriRemoteViewHosting> {

	char _disabled;
	char _statusViewHidden;
	char _keepStatusViewHidden;
	NSView* _remoteContentView;
	SiriUISiriStatusView* _statusView;
	SiriUIHelpButton* _helpButton;
	SiriUIButton* _reportBugButton;
	SiriUIConfiguration* _configuration;
	id<SiriUISiriViewDelegate> _delegate;
	long long _siriSessionState;
	long long _mode;

}

@property (__weak) SiriUISiriStatusView * statusView;                                 //@synthesize statusView=_statusView - In the implementation block
@property (__weak) SiriUIHelpButton * helpButton;                                     //@synthesize helpButton=_helpButton - In the implementation block
@property (__weak) SiriUIButton * reportBugButton;                                    //@synthesize reportBugButton=_reportBugButton - In the implementation block
@property (nonatomic,retain) SiriUIConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISiriViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char disabled;                                           //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) char statusViewHidden;                                   //@synthesize statusViewHidden=_statusViewHidden - In the implementation block
@property (assign,nonatomic) char keepStatusViewHidden;                               //@synthesize keepStatusViewHidden=_keepStatusViewHidden - In the implementation block
@property (assign,nonatomic) long long siriSessionState;                              //@synthesize siriSessionState=_siriSessionState - In the implementation block
@property (assign,nonatomic) long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSView * remoteContentView;                              //@synthesize remoteContentView=_remoteContentView - In the implementation block
-(id<SiriUISiriViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUISiriViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(void)awakeFromNib;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(SiriUIConfiguration *)configuration;
-(char)disabled;
-(char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1 ;
-(void)setDisabled:(char)arg1 ;
-(void)setConfiguration:(SiriUIConfiguration *)arg1 ;
-(SiriUIHelpButton *)helpButton;
-(void)setHelpButton:(SiriUIHelpButton *)arg1 ;
-(void)setStatusView:(SiriUISiriStatusView *)arg1 ;
-(SiriUISiriStatusView *)statusView;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)audioInputPowerLevelDidUpdate:(float)arg1 ;
-(void)setStatusViewHidden:(char)arg1 ;
-(void)setHelpButtonEmphasized:(char)arg1 ;
-(void)pulseHelpButton;
-(void)setBugReportingAvailable:(char)arg1 ;
-(SiriUIButton *)reportBugButton;
-(void)_updateControlsAppearance;
-(void)_animateButtonsHidden:(char)arg1 ;
-(char)_showsReportBugButton;
-(void)siriStatusViewWasClicked:(id)arg1 ;
-(void)siriStatusViewHoldDidBegin:(id)arg1 ;
-(void)siriStatusViewHoldDidEnd:(id)arg1 ;
-(void)siriStatusView:(id)arg1 didReceiveTextInput:(id)arg2 ;
-(NSView *)remoteContentView;
-(void)setRemoteContentView:(NSView *)arg1 ;
-(void)setSiriSessionState:(long long)arg1 ;
-(void)helpButtonTapped:(id)arg1 ;
-(void)closeButtonTapped:(id)arg1 ;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)reportBugButtonTapped:(id)arg1 ;
-(void)audioOutputPowerLevelDidUpdate:(float)arg1 ;
-(void)setReportBugButton:(SiriUIButton *)arg1 ;
-(char)statusViewHidden;
-(char)keepStatusViewHidden;
-(void)setKeepStatusViewHidden:(char)arg1 ;
-(long long)siriSessionState;
@end
