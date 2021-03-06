/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSSubscription.h>

@class EWSExchangeServiceBindingTask;

@interface EWSStreamingSubscription : EWSSubscription {

	char _shouldStream;
	EWSExchangeServiceBindingTask* _streamTask;

}

@property (retain) EWSExchangeServiceBindingTask * streamTask;              //@synthesize streamTask=_streamTask - In the implementation block
@property (assign) char shouldStream;                                       //@synthesize shouldStream=_shouldStream - In the implementation block
-(void)start;
-(void)stop;
-(void)unsubscribe;
-(void)exchangeServiceBindingTask:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)exchangeServiceBindingTask:(id)arg1 didFailWithError:(id)arg2 ;
-(void)exchangeServiceBindingTaskCompleted:(id)arg1 ;
-(id)nextTask;
-(id)newSubscriptionRequest;
-(char)shouldStream;
-(void)setShouldStream:(char)arg1 ;
-(EWSExchangeServiceBindingTask *)streamTask;
-(void)setStreamTask:(EWSExchangeServiceBindingTask *)arg1 ;
@end

