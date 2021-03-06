/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMiCalItem.h>

@class NSDate, NSString;

@interface _AMiCalTodo : _AMiCalItem

@property (copy) NSDate * completionDate; 
@property (copy) NSDate * dueDate; 
@property (assign) int priority; 
@property (readonly) long long sequence; 
@property (copy,readonly) NSDate * stampDate; 
@property (copy) NSString * summary; 
@property (copy) NSString * objectDescription; 
@property (copy,readonly) NSString * uid; 
@property (copy) NSString * url; 
-(NSString *)url;
-(NSString *)uid;
-(void)setUrl:(NSString *)arg1 ;
-(long long)sequence;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(NSString *)objectDescription;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSDate *)dueDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)summary;
-(NSDate *)stampDate;
-(void)setObjectDescription:(NSString *)arg1 ;
-(id)displayAlarms;
-(id)mailAlarms;
-(id)openFileAlarms;
-(id)soundAlarms;
@end

