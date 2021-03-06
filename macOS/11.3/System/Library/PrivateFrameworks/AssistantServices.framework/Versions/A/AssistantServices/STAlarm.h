/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/STSiriModelObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface STAlarm : STSiriModelObject <NSCopying> {

	char _enabled;
	long long _daysOfWeek;
	long long _hourOfDay;
	long long _minuteOfHour;
	NSString* _label;
	char _sleepAlarm;
	char _overrideAlarm;
	long long _bedtimeHour;
	long long _bedtimeMinute;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long daysOfWeek;                                   //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (assign,nonatomic) long long hourOfDay;                                    //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) long long minuteOfHour;                                 //@synthesize minuteOfHour=_minuteOfHour - In the implementation block
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isSleepAlarm,nonatomic) char sleepAlarm;                    //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (assign,getter=isOverrideAlarm,nonatomic) char overrideAlarm;              //@synthesize overrideAlarm=_overrideAlarm - In the implementation block
@property (assign,nonatomic) long long bedtimeHour;                                  //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) long long bedtimeMinute;                                //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(long long)hourOfDay;
-(long long)minuteOfHour;
-(void)setHourOfDay:(long long)arg1 ;
-(long long)bedtimeHour;
-(void)setBedtimeHour:(long long)arg1 ;
-(long long)bedtimeMinute;
-(void)setBedtimeMinute:(long long)arg1 ;
-(char)isSleepAlarm;
-(void)setMinuteOfHour:(long long)arg1 ;
-(long long)daysOfWeek;
-(void)setDaysOfWeek:(long long)arg1 ;
-(void)setSleepAlarm:(char)arg1 ;
-(char)isOverrideAlarm;
-(void)setOverrideAlarm:(char)arg1 ;
@end

