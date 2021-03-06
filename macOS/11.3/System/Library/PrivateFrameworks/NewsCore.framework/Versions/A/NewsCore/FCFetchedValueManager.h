/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFetchedValueManagerObserving.h>
#import <libobjc.A.dylib/FCBoostableOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCFetchedValueManager.h>

@protocol FCFetchedValueManager <NSObject>
@property (nonatomic,readonly) id<NFCopying> value; 
@required
-(id<NFCopying>)value;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)fetchValueWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2;

@end


@class FCFetchedValueDescriptor, FCBoostableOperationThrottler, FCFetchedValueObservable, NSString;

@interface FCFetchedValueManager : NSObject <FCFetchedValueManagerObserving, FCBoostableOperationThrottlerDelegate, FCFetchedValueManager> {

	FCFetchedValueDescriptor* _descriptor;
	FCBoostableOperationThrottler* _operationThrottler;
	FCFetchedValueObservable* _observable;

}

@property (nonatomic,copy,readonly) FCFetchedValueDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) FCBoostableOperationThrottler * operationThrottler;              //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (nonatomic,readonly) FCFetchedValueObservable * observable;                           //@synthesize observable=_observable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NFCopying> value; 
-(id)init;
-(id<NFCopying>)value;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FCFetchedValueDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
-(FCFetchedValueObservable *)observable;
-(FCBoostableOperationThrottler *)operationThrottler;
-(void)fetchedObjectManager:(id)arg1 valueDidChange:(id)arg2 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_optionsForCachePolicy:(unsigned long long)arg1 ;
-(id)_updateDependentManagersPromiseWithQualityOfService:(long long)arg1 ;
-(unsigned long long)_cachePolicyForOptions:(unsigned long long)arg1 ;
-(void)fetchValueWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)valuePromiseWithQualityOfService:(long long)arg1 ;
@end

