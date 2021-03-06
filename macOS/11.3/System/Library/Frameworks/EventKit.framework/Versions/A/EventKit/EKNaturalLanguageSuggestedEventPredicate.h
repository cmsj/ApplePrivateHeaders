/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKGeneralLookupPredicate.h>

@class NSDate, NSString;

@interface EKNaturalLanguageSuggestedEventPredicate : EKGeneralLookupPredicate {

	NSDate* _startDate;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)evaluateWithObject:(id)arg1 ;
-(id)predicateFormat;
-(NSDate *)startDate;
-(NSString *)searchString;
-(id)predicateForCoreData;
-(id)initWithStartDate:(id)arg1 searchString:(id)arg2 calendars:(id)arg3 ;
@end

