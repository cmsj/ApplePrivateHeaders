/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTTodayResultsAggregator.h>

@protocol NTTodayResultsAggregator;
@class NSString;

@interface NTNewsTodayResultsContentFillAggregator : NSObject <NTTodayResultsAggregator> {

	double _minHeadlineScale;
	double _maxHeadlineScale;
	id<NTTodayResultsAggregator> _aggregator;

}

@property (assign,nonatomic) double minHeadlineScale;                              //@synthesize minHeadlineScale=_minHeadlineScale - In the implementation block
@property (assign,nonatomic) double maxHeadlineScale;                              //@synthesize maxHeadlineScale=_maxHeadlineScale - In the implementation block
@property (nonatomic,retain) id<NTTodayResultsAggregator> aggregator;              //@synthesize aggregator=_aggregator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NTTodayResultsAggregator>)aggregator;
-(void)setAggregator:(id<NTTodayResultsAggregator>)arg1 ;
-(void)setMinHeadlineScale:(double)arg1 ;
-(void)setMaxHeadlineScale:(double)arg1 ;
-(double)minHeadlineScale;
-(double)maxHeadlineScale;
-(id)initWithAggregator:(id)arg1 minHeadlineScale:(double)arg2 maxHeadlineScale:(double)arg3 ;
-(id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3 ;
-(id)_aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3 scale:(double)arg4 ;
-(id)_bestResultOfResults:(id)arg1 withBudgetInfo:(id)arg2 ;
@end

