/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, SUCoreLog, NSDictionary;

@interface SUCoreAnalyticsEventSubmitter : NSObject {

	NSMutableDictionary* _events;
	NSObject*<OS_dispatch_queue> _stateQueue;
	SUCoreLog* _eventSubmitterLogger;

}

@property (nonatomic,retain,readonly) NSDictionary * events; 
@property (nonatomic,retain) SUCoreLog * eventSubmitterLogger;              //@synthesize eventSubmitterLogger=_eventSubmitterLogger - In the implementation block
-(SUCoreLog *)eventSubmitterLogger;
-(void)_queue_setEvent:(id)arg1 ;
-(void)_queue_removeEvent:(id)arg1 ;
-(void)_queue_removeEventsWithName:(id)arg1 ;
-(void)_queue_removeAllEvents;
-(void)_queue_submitEvent:(id)arg1 ;
-(void)_queue_submitEventsWithName:(id)arg1 ;
-(void)_queue_submitAllEvents;
-(void)_queue_registerSendEvent:(id)arg1 ;
-(void)removeEventsWithName:(id)arg1 ;
-(void)submitEventsWithName:(id)arg1 ;
-(void)submitAllEvents;
-(void)setEventSubmitterLogger:(SUCoreLog *)arg1 ;
-(id)init;
-(void)setEvent:(id)arg1 ;
-(NSDictionary *)events;
-(void)removeAllEvents;
-(void)removeEvent:(id)arg1 ;
-(void)submitEvent:(id)arg1 ;
@end
