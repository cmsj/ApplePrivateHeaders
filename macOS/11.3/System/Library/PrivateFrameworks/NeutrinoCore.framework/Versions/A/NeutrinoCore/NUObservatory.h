/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUObservatory : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSMutableArray* _observations;

}
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(id)addObserverForKey:(long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_addObservation:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)_removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end
