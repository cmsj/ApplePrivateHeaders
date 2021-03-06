/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSString, NSImage, NSButton, NSTextField, NSStackView;

@interface NSNavSharedServerController : NSViewController {

	NSString* _statusText;
	NSString* _serverName;
	NSImage* _serverIcon;
	NSString* _userName;
	int _connectionState;
	NSButton* _connectAsButton;
	NSButton* _shareScreenButton;
	NSTextField* _serverNameTextField;
	NSTextField* _connectingTextField;
	char _isBannerView;
	char _isRemoteDisc;
	char _isUsingDisc;
	char _isWaitingForDisc;
	unsigned _watchingFrameChanges : 1;
	unsigned _reserved2 : 31;
	NSStackView* controlsStack;

}

@property (__weak) NSStackView * controlsStack; 
@property (copy) NSString * serverName;                               //@synthesize serverName=_serverName - In the implementation block
@property (retain) NSImage * serverIcon;                              //@synthesize serverIcon=_serverIcon - In the implementation block
@property (copy) NSString * statusText;                               //@synthesize statusText=_statusText - In the implementation block
@property (assign) char isBannerView;                                 //@synthesize isBannerView=_isBannerView - In the implementation block
@property (getter=isRemoteDisc) char remoteDisc;                      //@synthesize isRemoteDisc=_isRemoteDisc - In the implementation block
@property (getter=isUsingDisc) char usingDisc;                        //@synthesize isUsingDisc=_isUsingDisc - In the implementation block
@property (getter=isWaitingForDisc) char waitingForDisc;              //@synthesize isWaitingForDisc=_isWaitingForDisc - In the implementation block
@property (readonly) NSButton * connectAsButton; 
@property (readonly) NSButton * shareScreenButton; 
@property (copy) NSString * userName;                                 //@synthesize userName=_userName - In the implementation block
@property (assign) int connectionState;                               //@synthesize connectionState=_connectionState - In the implementation block
-(void)dealloc;
-(NSString *)userName;
-(void)sizeToFit;
-(NSStackView *)controlsStack;
-(char)isRemoteDisc;
-(int)connectionState;
-(void)setStatusText:(NSString *)arg1 ;
-(char)isUsingDisc;
-(char)isWaitingForDisc;
-(char)isBannerView;
-(NSButton *)connectAsButton;
-(NSString *)statusText;
-(void)updateButtonVisibilityState;
-(void)setUserName:(NSString *)arg1 ;
-(void)setConnectionState:(int)arg1 ;
-(void)updateStatus;
-(id)initAsSharedServerView;
-(id)initAsSharedServerBannerView;
-(NSButton *)shareScreenButton;
-(void)_frameChangedOnText:(id)arg1 ;
-(void)awakeFromNib;
-(void)updateStatusTextForConnectionState:(int)arg1 userName:(id)arg2 ;
-(void)updateConnectAsButtonForConnectionState:(int)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(NSImage *)serverIcon;
-(void)setServerIcon:(NSImage *)arg1 ;
-(void)setIsBannerView:(char)arg1 ;
-(void)setRemoteDisc:(char)arg1 ;
-(void)setUsingDisc:(char)arg1 ;
-(void)setWaitingForDisc:(char)arg1 ;
-(void)setControlsStack:(NSStackView *)arg1 ;
@end

