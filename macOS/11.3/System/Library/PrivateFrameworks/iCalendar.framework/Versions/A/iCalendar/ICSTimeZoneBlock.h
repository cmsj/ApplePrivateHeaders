/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent

@property (nonatomic,retain) ICSDate * dtstart; 
@property (nonatomic,retain) NSArray * rdate; 
@property (nonatomic,retain) NSArray * rrule; 
@property (assign,nonatomic) NSArray * tzname; 
@property (assign,nonatomic) long long tzoffsetfrom; 
@property (assign,nonatomic) long long tzoffsetto; 
-(long long)compare:(id)arg1 ;
-(char)validate:(id*)arg1 ;
-(ICSDate *)dtstart;
-(void)setDtstart:(ICSDate *)arg1 ;
-(void)setRdate:(NSArray *)arg1 ;
-(NSArray *)rdate;
-(void)setRrule:(NSArray *)arg1 ;
-(NSArray *)rrule;
-(long long)tzoffsetfrom;
-(long long)tzoffsetto;
-(NSArray *)tzname;
-(void)setTzname:(NSArray *)arg1 ;
-(void)setTzoffsetfrom:(long long)arg1 ;
-(void)setTzoffsetto:(long long)arg1 ;
-(void)addRecurrenceDate:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
@end

