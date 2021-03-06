/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface ManagedEventTransport : NSObject {

	unsigned long long _event_id;
	NSObject*<OS_xpc_object> _listener;
	NSMutableDictionary* _dynamicEventHandlers;
	NSMutableDictionary* _staticEventHandlers;

}
+(id)sharedInstance;
+(void)setListeningPort:(const char*)arg1 ;
+(BOOL)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2 ;
+(id)feedbackForEventId:(unsigned long long)arg1 ;
+(unsigned long long)obtainEventId:(id)arg1 ;
+(void)retireEventId:(unsigned long long)arg1 ;
-(id)init;
-(void)setListeningPort:(const char*)arg1 ;
-(BOOL)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2 ;
-(id)feedbackForEventId:(unsigned long long)arg1 ;
-(unsigned long long)obtainEventId:(id)arg1 ;
-(void)retireEventId:(unsigned long long)arg1 ;
-(void)sendReplyInfo:(id)arg1 onConnection:(id)arg2 withErrCode:(unsigned long long)arg3 forId:(unsigned long long)arg4 name:(char*)arg5 date:(id)arg6 reason:(char*)arg7 reasonCode:(unsigned long long)arg8 info:(id)arg9 ;
-(void)_createReply:(id)arg1 forConnection:(id)arg2 ;
@end

