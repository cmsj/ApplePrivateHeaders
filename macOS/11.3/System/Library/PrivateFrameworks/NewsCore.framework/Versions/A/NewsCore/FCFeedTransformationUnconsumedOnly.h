/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming> {

	id<FCFeedTransforming> _innerFilter;

}

@property (nonatomic,retain) id<FCFeedTransforming> innerFilter;              //@synthesize innerFilter=_innerFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCFeedTransforming>)innerFilter;
-(id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(/*^block*/id)arg5 dateOfArticleIDConsumptionProvider:(/*^block*/id)arg6 maxVersionConsumedProvider:(/*^block*/id)arg7 dateOfMaxVersionConsumptionProvider:(/*^block*/id)arg8 ;
-(void)setInnerFilter:(id<FCFeedTransforming>)arg1 ;
@end

