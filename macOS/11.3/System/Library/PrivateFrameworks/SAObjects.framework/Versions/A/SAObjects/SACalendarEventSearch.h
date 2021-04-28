/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, NSArray;

@interface SACalendarEventSearch : SADomainCommand

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSNumber * limit; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSArray * participants; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)eventSearch;
+(id)eventSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)limit;
-(void)setLimit:(NSNumber *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)location;
-(id)groupIdentifier;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(NSArray *)participants;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)notes;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
@end
