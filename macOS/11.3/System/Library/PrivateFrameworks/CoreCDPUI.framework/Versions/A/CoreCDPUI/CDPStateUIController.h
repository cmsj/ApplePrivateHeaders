/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/Versions/A/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CDPStateBaseUIController.h>

@protocol CDPWindowDelegateProtocol;
@class NSView, NSWindow, NSImageView;

@interface CDPStateUIController : CDPStateBaseUIController {

	NSView* _iCDPWindowView;
	NSWindow* _iCDPWindow;
	id<CDPWindowDelegateProtocol> _delegate;
	NSImageView* _displayImageView;

}

@property (nonatomic,retain) NSWindow * iCDPWindow;                               //@synthesize iCDPWindow=_iCDPWindow - In the implementation block
@property (nonatomic,retain) NSView * iCDPWindowView;                             //@synthesize iCDPWindowView=_iCDPWindowView - In the implementation block
@property (nonatomic,retain) NSImageView * displayImageView;                      //@synthesize displayImageView=_displayImageView - In the implementation block
@property (nonatomic,retain) id<CDPWindowDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<CDPWindowDelegateProtocol>)delegate;
-(void)setDelegate:(id<CDPWindowDelegateProtocol>)arg1 ;
-(void)endCDPView;
-(void)changeView:(id)arg1 ;
-(NSView *)iCDPWindowView;
-(NSWindow *)iCDPWindow;
-(void)setupCDPView:(id)arg1 ;
-(NSImageView *)displayImageView;
-(void)showCDPView:(id)arg1 ;
-(void)showCDPView:(id)arg1 modalForWindow:(id)arg2 ;
-(void)setICDPWindowView:(NSView *)arg1 ;
-(void)setICDPWindow:(NSWindow *)arg1 ;
-(void)setDisplayImageView:(NSImageView *)arg1 ;
@end
