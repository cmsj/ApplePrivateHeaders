/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKGeneralLookupPredicate.h>

@class NSDate, NSString;

@interface EKSuggestedEventPredicate : EKGeneralLookupPredicate {

	NSDate* _endDate;
	NSString* _opaqueKey;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * opaqueKey;              //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)opaqueKey;
-(id)predicateForCoreData;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 opaqueKey:(id)arg3 calendars:(id)arg4 ;
-(void)setOpaqueKey:(NSString *)arg1 ;
@end

