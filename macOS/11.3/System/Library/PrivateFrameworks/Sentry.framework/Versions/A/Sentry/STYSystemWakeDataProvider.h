/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Versions/A/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STYIOPMNotificationDelegate.h>
#import <libobjc.A.dylib/STYWakeDataProvider.h>

@protocol STYWakeDataConsumer;
@class SignpostSupportObjectExtractor, NSDictionary, STYIOPMNotificationMonitor, STYHIDWakeEventFetcher, NSString;

@interface STYSystemWakeDataProvider : NSObject <STYIOPMNotificationDelegate, STYWakeDataProvider> {

	SignpostSupportObjectExtractor* _signpostExtractor;
	NSDictionary* _signpostMap;
	unsigned _ioRegEntryForPM;
	STYIOPMNotificationMonitor* _iopmNotificationMonitor;
	STYHIDWakeEventFetcher* _hidWakeEventFetcher;
	id<STYWakeDataConsumer> _consumer;

}

@property (__weak) id<STYWakeDataConsumer> consumer;                //@synthesize consumer=_consumer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)startMonitoring;
-(id)initWithConsumer:(id)arg1 ;
-(id<STYWakeDataConsumer>)consumer;
-(void)setConsumer:(id<STYWakeDataConsumer>)arg1 ;
-(void)handleSignpostInterval:(id)arg1 ;
-(unsigned long long)sleepType;
-(unsigned long long)firstHidWakeEventAfter:(unsigned long long)arg1 before:(unsigned long long)arg2 ;
-(unsigned long long)lastWakeTime:(unsigned long long*)arg1 ;
-(void)handleSignpost:(id)arg1 ;
-(void)handleSignpostProcessingCompletion:(id)arg1 ;
-(void)stopMonitoringWakeSignposts;
-(void)startMonitoringWakeSignposts;
-(void)receivedPowerManagerNotification:(unsigned long long)arg1 atTimestamp:(unsigned long long)arg2 ;
@end
