/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject {

	PLLazyObject* _lazyRecentDateRangeFormatter;
	PLLazyObject* _lazyDateRangeFormatter;
	PLLazyObject* _lazyYearlessDateRangeFormatter;
	PLLazyObject* _lazyMonthYearDateRangeFormatter;
	PLLazyObject* _lazyShortMonthYearDateRangeFormatter;
	PLLazyObject* _lazyYearDateRangeFormatter;

}
-(id)init;
-(id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 options:(unsigned long long)arg5 ;
-(id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 ;
-(id)dateRangeFormatterForCategory:(unsigned short)arg1 kind:(unsigned short)arg2 options:(unsigned long long)arg3 ;
-(id)newRecentDateRangeFormatter;
-(id)newDateRangeFormatter;
-(id)newYearlessDateRangeFormatter;
-(id)newMonthYearDateRangeFormatter;
-(id)newShortMonthYearDateRangeFormatter;
-(id)newYearDateRangeFormatter;
-(id)recentDateRangeFormatter;
-(id)dateRangeFormatter;
-(id)yearlessDateRangeFormatter;
-(id)monthYearDateRangeFormatter;
-(id)shortMonthYearDateRangeFormatter;
-(id)yearDateRangeFormatter;
@end
