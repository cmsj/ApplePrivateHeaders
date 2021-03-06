/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSUpdate.framework/Versions/A/OSUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUOSULaterDelegate;
@class SUOSUTonightObserver, SUOSUAlarmObserver, SUOSULaterObserver, SUOSUPowerEventObserver;

@interface SUOSUScheduler : NSObject {

	unsigned long long _mode;
	SUOSUTonightObserver* _tonightObserver;
	SUOSUAlarmObserver* _oneHourObserver;
	SUOSULaterObserver* _armedObserver;
	SUOSUPowerEventObserver* _powerEventObserver;
	id<SUOSULaterDelegate> _delegate;

}

@property (retain) SUOSUTonightObserver * tonightObserver;                    //@synthesize tonightObserver=_tonightObserver - In the implementation block
@property (retain) SUOSUAlarmObserver * oneHourObserver;                      //@synthesize oneHourObserver=_oneHourObserver - In the implementation block
@property (retain) SUOSULaterObserver * armedObserver;                        //@synthesize armedObserver=_armedObserver - In the implementation block
@property (retain) SUOSUPowerEventObserver * powerEventObserver;              //@synthesize powerEventObserver=_powerEventObserver - In the implementation block
@property (retain) id<SUOSULaterDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long mode;                                   //@synthesize mode=_mode - In the implementation block
-(id<SUOSULaterDelegate>)delegate;
-(void)setDelegate:(id<SUOSULaterDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)initWithDelegate:(id)arg1 ;
-(void)disarmLaterObserver;
-(void)armObserverWithMode:(unsigned long long)arg1 ;
-(char)isArmed;
-(id)estimatedFireDate;
-(SUOSUAlarmObserver *)oneHourObserver;
-(SUOSUTonightObserver *)tonightObserver;
-(SUOSULaterObserver *)armedObserver;
-(id)_observerForMachineCapabilitiesWithMode:(unsigned long long)arg1 ;
-(void)setArmedObserver:(SUOSULaterObserver *)arg1 ;
-(id)_eventNameWithMode:(unsigned long long)arg1 ;
-(void)setTonightObserver:(SUOSUTonightObserver *)arg1 ;
-(void)setOneHourObserver:(SUOSUAlarmObserver *)arg1 ;
-(SUOSUPowerEventObserver *)powerEventObserver;
-(void)setPowerEventObserver:(SUOSUPowerEventObserver *)arg1 ;
@end

