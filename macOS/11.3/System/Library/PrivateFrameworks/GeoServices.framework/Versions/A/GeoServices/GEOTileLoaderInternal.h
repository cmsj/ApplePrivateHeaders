/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTilePool;

@interface GEOTileLoaderInternal : NSObject {

	list<LoadItem, std::__1::allocator<LoadItem>>* _loadItems;
	GEOTilePool* _cache;
	GEOTilePool* _expiringCache;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>>* _timer;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)>>>* _freeableSizeRequesters;
	Ai _memoryHits;
	Ai _diskHits;
	Ai _networkHits;
	deque<ErrorInfo, std::__1::allocator<ErrorInfo>>* _recentErrors;

}
@end

