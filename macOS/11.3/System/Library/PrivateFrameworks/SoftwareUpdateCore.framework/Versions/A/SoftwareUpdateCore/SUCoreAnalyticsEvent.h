/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, NSDictionary;

@interface SUCoreAnalyticsEvent : NSObject {

	NSString* _eventName;
	NSMutableDictionary* _mutableEventPayload;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSString* _eventUUID;

}

@property (nonatomic,retain,readonly) NSString * eventName;                     //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSString * eventUUID;                              //@synthesize eventUUID=_eventUUID - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * eventPayload; 
-(void)_queue_setEventPayloadEntry:(id)arg1 value:(id)arg2 ;
-(void)_queue_setEventPayloadEntryToNull:(id)arg1 ;
-(void)_queue_removeEventPayloadEntry:(id)arg1 ;
-(NSString *)eventUUID;
-(void)setEventPayloadEntry:(id)arg1 value:(id)arg2 ;
-(void)setEventPayloadEntryToNull:(id)arg1 ;
-(void)removeEventPayloadEntry:(id)arg1 ;
-(void)setEventUUID:(NSString *)arg1 ;
-(id)description;
-(id)init;
-(id)initWithEventName:(id)arg1 ;
-(NSString *)eventName;
-(NSDictionary *)eventPayload;
@end

