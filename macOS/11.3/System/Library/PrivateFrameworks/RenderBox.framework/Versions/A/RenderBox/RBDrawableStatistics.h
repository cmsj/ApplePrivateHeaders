/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/Versions/A/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol RBDrawableStatistics
@property (nonatomic,copy,readonly) NSDictionary * statistics; 
@property (nonatomic,copy) id statisticsHandler; 
@required
-(NSDictionary *)statistics;
-(void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;
-(id)statisticsHandler;
-(void)setStatisticsHandler:(/*^block*/id)arg1;

@end

