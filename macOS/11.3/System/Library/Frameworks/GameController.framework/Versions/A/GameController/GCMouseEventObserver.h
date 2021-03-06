/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCMouseEventObserverDelegate;
#import <GameController/GameController-Structs.h>
@interface GCMouseEventObserver : NSObject {

	CFMachPortRef _eventTap;
	CFRunLoopSourceRef _loopSource;
	id<GCMouseEventObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCMouseEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<GCMouseEventObserverDelegate>)delegate;
-(void)setDelegate:(id<GCMouseEventObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

