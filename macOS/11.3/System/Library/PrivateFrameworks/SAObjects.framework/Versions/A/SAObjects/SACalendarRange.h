/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * end; 
@property (nonatomic,retain) SACalendar * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarRange;
+(id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(SACalendar *)start;
-(id)groupIdentifier;
-(SACalendar *)end;
-(void)setEnd:(SACalendar *)arg1 ;
-(void)setStart:(SACalendar *)arg1 ;
-(id)encodedClassName;
@end

