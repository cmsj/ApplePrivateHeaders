/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCSolHeuristic : NSObject {

	char _alternate;
	char _enforcePublisherCap;
	NSArray* _groupSizes;
	long long _iterations;
	long long _maxPublisherOccurrences;
	long long _maxUnpaidArticles;
	long long _maxEvergreenArticles;
	long long _heuristicSampleSize;
	/*^block*/id _utilityBlock;

}
-(id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(char)arg7 maxUnpaidArticles:(long long)arg8 maxEvergreenArticles:(long long)arg9 heuristicSampleSize:(long long)arg10 utilityBlock:(/*^block*/id)arg11 ;
-(double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 ;
@end

