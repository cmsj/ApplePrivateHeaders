/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateIntervalFormatter, NSCalendar, NSLocale;

@interface PLDateIntervalFormatter : NSObject {

	char _alwaysShowYear;
	NSDateIntervalFormatter* _dateIntervalFormatter;
	NSCalendar* _gmtCalendar;
	NSLocale* _locale;

}

@property (nonatomic,readonly) NSDateIntervalFormatter * dateIntervalFormatter;              //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
@property (nonatomic,readonly) NSCalendar * gmtCalendar;                                     //@synthesize gmtCalendar=_gmtCalendar - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) char alwaysShowYear;                                            //@synthesize alwaysShowYear=_alwaysShowYear - In the implementation block
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(char)arg4 ;
+(id)_currentLocalDate;
+(id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(char)arg2 displayLongMonth:(char)arg3 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(NSCalendar *)gmtCalendar;
-(char)alwaysShowYear;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(char)arg4 ;
-(char)_yearIsNeededForDisplayingDate:(id)arg1 ;
-(void)setAlwaysShowYear:(char)arg1 ;
@end

