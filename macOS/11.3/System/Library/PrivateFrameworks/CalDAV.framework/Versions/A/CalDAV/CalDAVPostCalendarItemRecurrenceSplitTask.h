/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSURL, NSDate, NSString, CoreDAVResponseItem;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask {

	char _isFloating;
	char _isAllDay;
	NSURL* _resourceURL;
	NSDate* _recurrenceDate;
	NSString* _uidForCreatedSeries;
	NSString* _previousScheduleTag;
	NSString* _previousETag;
	NSURL* _postURLWithQuery;
	CoreDAVResponseItem* _updatedResponseItem;
	CoreDAVResponseItem* _createdResponseItem;

}

@property (nonatomic,retain) NSURL * postURLWithQuery;                               //@synthesize postURLWithQuery=_postURLWithQuery - In the implementation block
@property (nonatomic,retain) CoreDAVResponseItem * updatedResponseItem;              //@synthesize updatedResponseItem=_updatedResponseItem - In the implementation block
@property (nonatomic,retain) CoreDAVResponseItem * createdResponseItem;              //@synthesize createdResponseItem=_createdResponseItem - In the implementation block
@property (nonatomic,retain) NSURL * resourceURL;                                    //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,retain) NSDate * recurrenceDate;                                //@synthesize recurrenceDate=_recurrenceDate - In the implementation block
@property (nonatomic,retain) NSString * uidForCreatedSeries;                         //@synthesize uidForCreatedSeries=_uidForCreatedSeries - In the implementation block
@property (nonatomic,retain) NSString * previousScheduleTag;                         //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                //@synthesize previousETag=_previousETag - In the implementation block
@property (assign,nonatomic) char isFloating;                                        //@synthesize isFloating=_isFloating - In the implementation block
@property (assign,nonatomic) char isAllDay;                                          //@synthesize isAllDay=_isAllDay - In the implementation block
-(id)description;
-(void)setResourceURL:(NSURL *)arg1 ;
-(NSURL *)resourceURL;
-(id)url;
-(char)isFloating;
-(char)isAllDay;
-(void)setIsAllDay:(char)arg1 ;
-(id)httpMethod;
-(void)setRecurrenceDate:(NSDate *)arg1 ;
-(void)setIsFloating:(char)arg1 ;
-(NSDate *)recurrenceDate;
-(id)_recurrenceDateString;
-(NSString *)uidForCreatedSeries;
-(id)urlWithQuery;
-(NSString *)previousScheduleTag;
-(NSString *)previousETag;
-(void)_updateBothResponseItems;
-(id)_dataForItem:(id)arg1 ;
-(CoreDAVResponseItem *)updatedResponseItem;
-(id)_etagForItem:(id)arg1 ;
-(id)_scheduleTagForItem:(id)arg1 ;
-(id)_documentForItem:(id)arg1 ;
-(CoreDAVResponseItem *)createdResponseItem;
-(id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 floating:(char)arg3 allday:(char)arg4 ;
-(id)additionalHeaderValues;
-(id)updatedETag;
-(id)updatedScheduleTag;
-(id)updatedICSDocument;
-(id)createdURL;
-(id)createdETag;
-(id)createdScheduleTag;
-(id)createdICSDocument;
-(id)createdICSData;
-(id)requestBody;
-(void)setUidForCreatedSeries:(NSString *)arg1 ;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(void)setPreviousETag:(NSString *)arg1 ;
-(NSURL *)postURLWithQuery;
-(void)setPostURLWithQuery:(NSURL *)arg1 ;
-(void)setUpdatedResponseItem:(CoreDAVResponseItem *)arg1 ;
-(void)setCreatedResponseItem:(CoreDAVResponseItem *)arg1 ;
@end

