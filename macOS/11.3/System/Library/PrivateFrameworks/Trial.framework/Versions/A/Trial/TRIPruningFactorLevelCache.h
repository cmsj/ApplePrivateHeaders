/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Versions/A/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRIFactorLevelCaching.h>

@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {

	_PASLock* _lock;
	_PASSimpleCoalescingTimer* _pruningTimer;
	double _pruningDelaySeconds;

}
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateFactorLevelsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithPruningDelaySeconds:(double)arg1 loadFactorLevels:(/*^block*/id)arg2 ;
-(void)pruneSynchronously;
-(void)_populateCacheForRequiredKey:(id)arg1 guardedData:(id)arg2 ;
-(id)factorLevelCurrentlyCachedForFactorName:(id)arg1 ;
@end

