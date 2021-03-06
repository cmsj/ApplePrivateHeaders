/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic,readonly) NSString * dateStyle; 
@property (nonatomic,readonly) NSString * timeStyle; 
@property (nonatomic,readonly) NSString * relativeDateStyle; 
@property (nonatomic,readonly) NSString * customDateFormat; 
@property (nonatomic,readonly) char includesTimeForISO8601; 
+(id)defaultAggrandizement;
-(NSString *)dateStyle;
-(NSString *)timeStyle;
-(NSString *)relativeDateStyle;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 ;
-(id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includesTimeForISO8601:(char)arg5 ;
-(id)initWithRelativeDateStyle:(id)arg1 timeStyle:(id)arg2 ;
-(id)initWithRelativeTimeStyle;
-(id)initWithISO8601DateStyleAndTime:(char)arg1 ;
-(id)initWithRFC2822DateStyle;
-(id)initWithCustomDateFormat:(id)arg1 ;
-(NSString *)customDateFormat;
-(char)includesTimeForISO8601;
@end

