/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASCUIView;

@interface ASCModalViewInteraction : NSObject {

	ASCUIView* _view;
	id _eventMonitor;
	id _didResignObserver;

}

@property (nonatomic,retain) id eventMonitor;                        //@synthesize eventMonitor=_eventMonitor - In the implementation block
@property (nonatomic,retain) id didResignObserver;                   //@synthesize didResignObserver=_didResignObserver - In the implementation block
@property (nonatomic,__weak,readonly) ASCUIView * view;              //@synthesize view=_view - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(ASCUIView *)view;
-(id)eventMonitor;
-(void)setEventMonitor:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)installWithCancelBlock:(/*^block*/id)arg1 ;
-(void)setDidResignObserver:(id)arg1 ;
-(id)didResignObserver;
@end

