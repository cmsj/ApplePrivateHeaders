/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/Versions/A/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSDate, PCPersistentTimer;

@interface EKTravelEngineThrottle : NSObject {

	char _running;
	NSString* _eventExternalURL;
	/*^block*/id _requestHypothesisRefreshBlock;
	/*^block*/id _cancelHypothesisRequestRefreshBlock;
	/*^block*/id _emissionBlock;
	NSString* _throttleIdentifier;
	NSObject*<OS_dispatch_queue> _throttleQueue;
	NSDate* _nextEmissionDate;
	PCPersistentTimer* _emissionTimer;

}

@property (assign,nonatomic) char running;                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSString * throttleIdentifier;                           //@synthesize throttleIdentifier=_throttleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> throttleQueue;              //@synthesize throttleQueue=_throttleQueue - In the implementation block
@property (nonatomic,retain) NSDate * nextEmissionDate;                               //@synthesize nextEmissionDate=_nextEmissionDate - In the implementation block
@property (nonatomic,retain) PCPersistentTimer * emissionTimer;                       //@synthesize emissionTimer=_emissionTimer - In the implementation block
@property (retain) NSString * eventExternalURL;                                       //@synthesize eventExternalURL=_eventExternalURL - In the implementation block
@property (nonatomic,copy) id requestHypothesisRefreshBlock;                          //@synthesize requestHypothesisRefreshBlock=_requestHypothesisRefreshBlock - In the implementation block
@property (nonatomic,copy) id cancelHypothesisRequestRefreshBlock;                    //@synthesize cancelHypothesisRequestRefreshBlock=_cancelHypothesisRequestRefreshBlock - In the implementation block
@property (nonatomic,copy) id emissionBlock;                                          //@synthesize emissionBlock=_emissionBlock - In the implementation block
+(double)emissionThresholdTimeInterval;
+(double)_requestHypothesisRefreshInterval;
-(void)dealloc;
-(id)description;
-(id)init;
-(char)running;
-(void)tearDown;
-(NSObject*<OS_dispatch_queue>)throttleQueue;
-(void)setRunning:(char)arg1 ;
-(NSString *)eventExternalURL;
-(void)setEventExternalURL:(NSString *)arg1 ;
-(void)setRequestHypothesisRefreshBlock:(id)arg1 ;
-(void)setCancelHypothesisRequestRefreshBlock:(id)arg1 ;
-(void)setEmissionBlock:(id)arg1 ;
-(void)updatePredictedDepartureDate:(id)arg1 ;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)_registerForNotificationObservation;
-(void)_unregisterForNotificationObservation;
-(id)btaJobName;
-(void)_significantTimeChangeNotificationReceived;
-(void)setThrottleIdentifier:(NSString *)arg1 ;
-(NSString *)throttleIdentifier;
-(void)setThrottleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_uninstallEmissionTimer;
-(NSDate *)nextEmissionDate;
-(PCPersistentTimer *)emissionTimer;
-(void)_fireEmissionBlock;
-(void)_updateEmissionDate:(id)arg1 ;
-(void)_emissionTimerFired:(id)arg1 ;
-(void)setNextEmissionDate:(NSDate *)arg1 ;
-(void)_createEmissionTimerWithDate:(id)arg1 ;
-(id)emissionBlock;
-(void)setEmissionTimer:(PCPersistentTimer *)arg1 ;
-(id)requestHypothesisRefreshBlock;
-(id)cancelHypothesisRequestRefreshBlock;
@end

