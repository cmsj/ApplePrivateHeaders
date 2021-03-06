/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSServicesMonitorObserver.h>

@class NSMutableDictionary, NSString;

@interface AMServicesController : NSObject <NSServicesMonitorObserver> {

	NSMutableDictionary* __servicesMonitorsByURL;
	NSMutableDictionary* __completionHandlersByURL;
	NSMutableDictionary* __timersByURL;

}

@property (nonatomic,retain) NSMutableDictionary * _servicesMonitorsByURL;                //@synthesize _servicesMonitorsByURL=__servicesMonitorsByURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _completionHandlersByURL;              //@synthesize _completionHandlersByURL=__completionHandlersByURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _timersByURL;                          //@synthesize _timersByURL=__timersByURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServicesController;
-(void)dealloc;
-(id)init;
-(void)servicesDidChange;
-(void)_timeoutTimerFired:(id)arg1 ;
-(NSMutableDictionary *)_servicesMonitorsByURL;
-(NSMutableDictionary *)_timersByURL;
-(void)set_servicesMonitorsByURL:(NSMutableDictionary *)arg1 ;
-(void)set_completionHandlersByURL:(NSMutableDictionary *)arg1 ;
-(void)set_timersByURL:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_completionHandlersByURL;
-(void)_clearServiceActivationStateAtURL:(id)arg1 ;
-(void)_serviceFoundForServicesMonitor:(id)arg1 url:(id)arg2 ;
-(char)_activateServiceAction:(id)arg1 error:(id*)arg2 ;
-(char)activateServiceAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

