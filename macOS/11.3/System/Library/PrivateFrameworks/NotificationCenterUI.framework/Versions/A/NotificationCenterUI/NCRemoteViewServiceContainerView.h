/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotificationCenterUI.framework/Versions/A/NotificationCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenterUI/NotificationCenterUI-Structs.h>
#import <AppKit/NSView.h>

@protocol NCRemoteServiceContainerViewDelegate;
@class _NCMachSendRight;

@interface NCRemoteViewServiceContainerView : NSView {

	BOOL _inSetFrame;
	_NCMachSendRight* _currentFence;
	BOOL _sendFrameChangesToHost;
	id<NCRemoteServiceContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCRemoteServiceContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL sendFrameChangesToHost;                                           //@synthesize sendFrameChangesToHost=_sendFrameChangesToHost - In the implementation block
-(id<NCRemoteServiceContainerViewDelegate>)delegate;
-(void)setDelegate:(id<NCRemoteServiceContainerViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)sendFrameChangesToHost;
-(void)setSendFrameChangesToHost:(BOOL)arg1 ;
@end

