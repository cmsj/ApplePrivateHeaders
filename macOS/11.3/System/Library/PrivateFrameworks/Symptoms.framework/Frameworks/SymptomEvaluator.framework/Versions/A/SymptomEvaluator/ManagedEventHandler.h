/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ManagedEventHandler : NSObject {

	char* _notifyString;
	int _NotifyToken;
	char* _transportMessageString;
	NSMutableArray* _managedEvents;

}
+(void)initialize;
+(id)getHandlerByName:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(id)feedbackForEventId:(unsigned long long)arg1 ;
-(void)sendNotificationWithId:(unsigned long long)arg1 ;
-(void)populateReply:(id)arg1 ForId:(unsigned long long)arg2 Count:(unsigned long long)arg3 ;
@end

