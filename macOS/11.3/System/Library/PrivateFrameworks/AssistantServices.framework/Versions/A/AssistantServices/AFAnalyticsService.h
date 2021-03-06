/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAnalyticsService <NSObject>
@required
-(oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;

@end

