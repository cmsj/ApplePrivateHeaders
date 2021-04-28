/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropFindTask.h>

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {

	char _syncEvents;
	char _syncTodos;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;

}

@property (assign,nonatomic) char syncEvents;                                      //@synthesize syncEvents=_syncEvents - In the implementation block
@property (assign,nonatomic) char syncTodos;                                       //@synthesize syncTodos=_syncTodos - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterStartDate;              //@synthesize eventFilterStartDate=_eventFilterStartDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterEndDate;                //@synthesize eventFilterEndDate=_eventFilterEndDate - In the implementation block
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(void)setSyncEvents:(char)arg1 ;
-(void)setSyncTodos:(char)arg1 ;
-(char)syncTodos;
-(char)syncEvents;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(void)setEventFilterStartDate:(NSDateComponents *)arg1 ;
-(void)setEventFilterEndDate:(NSDateComponents *)arg1 ;
-(id)_icsDateStringForNSDateComponents:(id)arg1 ;
-(void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_appendComponentFiltersToXMLData:(id)arg1 ;
@end
