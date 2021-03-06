/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSDateComponents, NSString;

@interface EWSSerializableTimeZoneTime : NSObject <XSDefinitionProvider> {

	long long _Bias;
	NSDateComponents* _Time;
	long long _DayOrder;
	long long _Month;
	long long _DayOfWeek;
	NSString* _Year;

}

@property (assign,nonatomic) long long Bias;                        //@synthesize Bias=_Bias - In the implementation block
@property (nonatomic,retain) NSDateComponents * Time;               //@synthesize Time=_Time - In the implementation block
@property (assign,nonatomic) long long DayOrder;                    //@synthesize DayOrder=_DayOrder - In the implementation block
@property (assign,nonatomic) long long Month;                       //@synthesize Month=_Month - In the implementation block
@property (assign,nonatomic) long long DayOfWeek;                   //@synthesize DayOfWeek=_DayOfWeek - In the implementation block
@property (nonatomic,copy) NSString * Year;                         //@synthesize Year=_Year - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setYear:(NSString *)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(void)setTime:(NSDateComponents *)arg1 ;
-(void)setBias:(long long)arg1 ;
-(void)setDayOfWeek:(long long)arg1 ;
-(long long)Month;
-(long long)DayOfWeek;
-(void)setDayOrder:(long long)arg1 ;
-(long long)Bias;
-(char)isEqualToSerializableTimeZoneTime:(id)arg1 ;
-(char)matchesPatternForDate:(id)arg1 withBias:(long long)arg2 inCalendar:(id)arg3 ;
-(NSDateComponents *)Time;
-(long long)DayOrder;
-(NSString *)Year;
@end

