/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString, NSDate;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _location;
	NSString* _relatedUniqueIdentifier;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)view;
-(NSString *)title;
-(void)updateActivity:(id)arg1 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(char)arg3 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 ;
-(id)eventFromStore:(id)arg1 ;
@end
