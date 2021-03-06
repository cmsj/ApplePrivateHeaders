/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSDate, NSString;

@interface SACalendarEventSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,copy) NSDate * snippetEndDate; 
@property (nonatomic,copy) NSDate * snippetStartDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)eventSnippet;
+(id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSDate *)snippetEndDate;
-(void)setSnippetEndDate:(NSDate *)arg1 ;
-(NSDate *)snippetStartDate;
-(void)setSnippetStartDate:(NSDate *)arg1 ;
@end

