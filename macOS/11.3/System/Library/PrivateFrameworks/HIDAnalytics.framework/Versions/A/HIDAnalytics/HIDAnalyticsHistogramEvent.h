/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/Versions/A/HIDAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDAnalytics/HIDAnalytics-Structs.h>
#import <HIDAnalytics/HIDAnalyticsEvent.h>

@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {

	HIDAnalyticsHistogramEventField* _field;
	char _isUpdated;

}
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)addField:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
@end

