/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/Versions/A/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class CPAnalyticsEventMatcher, NSString, NSArray;

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher {

	CPAnalyticsEventMatcher* _eventMatcher;
	char _shouldLogEventName;
	NSString* _eventTypeLabel;
	NSArray* _eventPropertiesToLog;
	NSArray* _eventPublicPropertiesToLog;

}

@property (nonatomic,readonly) NSString * eventTypeLabel;                         //@synthesize eventTypeLabel=_eventTypeLabel - In the implementation block
@property (nonatomic,readonly) char shouldLogEventName;                           //@synthesize shouldLogEventName=_shouldLogEventName - In the implementation block
@property (nonatomic,readonly) NSArray * eventPropertiesToLog;                    //@synthesize eventPropertiesToLog=_eventPropertiesToLog - In the implementation block
@property (nonatomic,readonly) NSArray * eventPublicPropertiesToLog;              //@synthesize eventPublicPropertiesToLog=_eventPublicPropertiesToLog - In the implementation block
-(id)init;
-(id)initWithConfig:(id)arg1 ;
-(char)doesMatch:(id)arg1 ;
-(NSString *)eventTypeLabel;
-(char)shouldLogEventName;
-(NSArray *)eventPropertiesToLog;
-(NSArray *)eventPublicPropertiesToLog;
@end

