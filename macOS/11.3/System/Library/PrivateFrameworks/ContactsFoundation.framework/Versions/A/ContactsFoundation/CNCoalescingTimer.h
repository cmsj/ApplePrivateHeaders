/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCancelable, CNScheduler;
@class CNUnfairLock;

@interface CNCoalescingTimer : NSObject {

	char _open;
	char _someoneWaiting;
	id<CNCancelable> _scheduledToken;
	id<CNScheduler> _downstreamScheduler;
	CNUnfairLock* _resourceLock;
	id<CNScheduler> _delayScheduler;
	/*^block*/id _block;
	double _delay;
	unsigned long long _options;

}

@property (nonatomic,retain) id<CNCancelable> scheduledToken;                          //@synthesize scheduledToken=_scheduledToken - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * resourceLock;                            //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> delayScheduler;                         //@synthesize delayScheduler=_delayScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> downstreamScheduler;                    //@synthesize downstreamScheduler=_downstreamScheduler - In the implementation block
@property (nonatomic,copy,readonly) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) double delay;                                           //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) char open;                                                //@synthesize open=_open - In the implementation block
@property (assign,getter=isSomeoneWaiting,nonatomic) char someoneWaiting;              //@synthesize someoneWaiting=_someoneWaiting - In the implementation block
+(id)os_log;
-(void)dealloc;
-(char)open;
-(unsigned long long)options;
-(id)block;
-(double)delay;
-(void)setOpen:(char)arg1 ;
-(CNUnfairLock *)resourceLock;
-(char)nts_isDoorOpened;
-(void)nts_letSomeoneIn;
-(void)nts_closeDoor;
-(void)nts_makeSomeoneWait;
-(void)setSomeoneWaiting:(char)arg1 ;
-(id<CNScheduler>)downstreamScheduler;
-(char)isSomeoneWaiting;
-(id<CNScheduler>)delayScheduler;
-(void)nts_openDoor;
-(void)setScheduledToken:(id<CNCancelable>)arg1 ;
-(id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(/*^block*/id)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5 ;
-(void)handleEvent;
-(id<CNCancelable>)scheduledToken;
@end

