/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTimerSource, CATTimer, CATIDSServiceConnectionKeepAliveTimerDelegate;
@interface CATIDSServiceConnectionKeepAliveTimer : NSObject {

	id<CATTimerSource> mTimerSource;
	double mWarningTimeout;
	double mDeathTimeout;
	id<CATTimer> mActiveTimer;
	id<CATIDSServiceConnectionKeepAliveTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATIDSServiceConnectionKeepAliveTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)warningTimerIdentifier;
+(id)deathTimerIdentifier;
-(void)dealloc;
-(void)invalidate;
-(id<CATIDSServiceConnectionKeepAliveTimerDelegate>)delegate;
-(void)setDelegate:(id<CATIDSServiceConnectionKeepAliveTimerDelegate>)arg1 ;
-(void)reset;
-(id)initWithTimerSource:(id)arg1 warningTimeout:(double)arg2 deathTimeout:(double)arg3 ;
-(void)armWarningTimer;
-(void)armDeathTimer;
@end
