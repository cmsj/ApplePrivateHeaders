/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TIAnalyticsServiceProvider;
@class NSObject, NSMutableDictionary;

@interface TIAnalyticsService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _eventSpecs;
	id<TIAnalyticsServiceProvider> _provider;

}

@property (nonatomic,readonly) NSMutableDictionary * eventSpecs;                     //@synthesize eventSpecs=_eventSpecs - In the implementation block
@property (nonatomic,readonly) id<TIAnalyticsServiceProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)sharedInstance;
+(void)setMockInstance:(id)arg1 ;
-(id)init;
-(id)initWithProvider:(id)arg1 ;
-(id<TIAnalyticsServiceProvider>)provider;
-(NSMutableDictionary *)eventSpecs;
-(void)registerEventSpec:(id)arg1 ;
-(void)registerEventSpec:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)registerEventSpec:(id)arg1 error:(id*)arg2 ;
-(void)_registerEventSpec:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 ;
-(void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 ;
-(void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(char)arg4 ;
-(void)dispatchEventWithName:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(char)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(char)dispatchEventWithName:(id)arg1 error:(id*)arg2 ;
-(char)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id*)arg3 ;
-(char)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id*)arg3 ;
-(char)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id*)arg4 ;
-(char)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(char)arg4 error:(id*)arg5 ;
-(void)_dispatchEventWithName:(id)arg1 payload:(id)arg2 values:(id)arg3 inputMode:(id)arg4 testingParameters:(id)arg5 allowSparsePayload:(char)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3 ;
-(id)settingsFromInputMode:(id)arg1 eventSpec:(id)arg2 errors:(id)arg3 ;
-(id)settingsFromPayload:(id)arg1 andValues:(id)arg2 eventSpec:(id)arg3 allowSparsePayload:(char)arg4 errors:(id)arg5 ;
-(void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3 ;
-(void)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2 ;
-(void)queueCompletionHandler:(/*^block*/id)arg1 ;
@end
