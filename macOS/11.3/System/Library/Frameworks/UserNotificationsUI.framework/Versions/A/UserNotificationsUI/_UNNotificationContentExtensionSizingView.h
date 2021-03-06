/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/Versions/A/UserNotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUI/UserNotificationsUI-Structs.h>
#import <AppKit/NSView.h>

@protocol _UNNotificationContentExtensionSizingViewDelegate;
@class _UNMachSendRight;

@interface _UNNotificationContentExtensionSizingView : NSView {

	BOOL _inSetFrame;
	_UNMachSendRight* _currentFence;
	BOOL _sendFrameChangesToHost;
	id<_UNNotificationContentExtensionSizingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UNNotificationContentExtensionSizingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL sendFrameChangesToHost;                                                        //@synthesize sendFrameChangesToHost=_sendFrameChangesToHost - In the implementation block
-(id<_UNNotificationContentExtensionSizingViewDelegate>)delegate;
-(void)setDelegate:(id<_UNNotificationContentExtensionSizingViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)sendFrameChangesToHost;
-(void)setSendFrameChangesToHost:(BOOL)arg1 ;
@end

