/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/Versions/A/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSArray, NSDate, NSTimeZone, NSDictionary;

@interface USUsageReport : NSObject <NSSecureCoding> {

	double _screenTime;
	NSDateInterval* _longestSession;
	NSArray* _categoryUsage;
	unsigned long long _pickupsWithoutApplicationUsage;
	NSDate* _firstPickup;
	NSDateInterval* _interval;
	NSTimeZone* _timeZone;
	NSDate* _lastEventDate;

}

@property (readonly) double screenTime;                                                    //@synthesize screenTime=_screenTime - In the implementation block
@property (copy,readonly) NSDateInterval * longestSession;                                 //@synthesize longestSession=_longestSession - In the implementation block
@property (copy,readonly) NSArray * categoryUsage;                                         //@synthesize categoryUsage=_categoryUsage - In the implementation block
@property (readonly) unsigned long long pickupsWithoutApplicationUsage;                    //@synthesize pickupsWithoutApplicationUsage=_pickupsWithoutApplicationUsage - In the implementation block
@property (copy,readonly) NSDate * firstPickup;                                            //@synthesize firstPickup=_firstPickup - In the implementation block
@property (copy,readonly) NSDateInterval * interval;                                       //@synthesize interval=_interval - In the implementation block
@property (copy,readonly) NSTimeZone * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (copy,readonly) NSDate * lastEventDate;                                          //@synthesize lastEventDate=_lastEventDate - In the implementation block
@property (copy,readonly) NSDictionary * userNotificationsByBundleIdentifier; 
@property (copy,readonly) NSDictionary * pickupsByBundleIdentifier; 
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDateInterval *)interval;
-(NSDate *)lastEventDate;
-(NSArray *)categoryUsage;
-(NSDate *)firstPickup;
-(id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 pickupsWithoutApplicationUsage:(unsigned long long)arg4 firstPickup:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8 ;
-(id)_addNotifications:(id)arg1 andPickups:(id)arg2 toApplicationUsageInCategoryUsage:(id)arg3 ;
-(void)_usUsageReportCommonInitWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 pickupsWithoutApplicationUsage:(unsigned long long)arg4 firstPickup:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8 ;
-(NSDictionary *)userNotificationsByBundleIdentifier;
-(NSDictionary *)pickupsByBundleIdentifier;
-(double)screenTime;
-(NSDateInterval *)longestSession;
-(unsigned long long)pickupsWithoutApplicationUsage;
-(id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 notifications:(id)arg4 pickupsByBundleIdentifier:(id)arg5 pickupsWithoutApplicationUsage:(unsigned long long)arg6 firstPickup:(id)arg7 interval:(id)arg8 timeZone:(id)arg9 lastEventDate:(id)arg10 ;
@end

