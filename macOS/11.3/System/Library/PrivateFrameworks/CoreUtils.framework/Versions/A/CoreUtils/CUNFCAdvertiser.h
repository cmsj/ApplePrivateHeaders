/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface CUNFCAdvertiser : NSObject {

	char _invalidateCalled;
	NSURL* _advertisementURI;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _tagStateChangedHandler;

}

@property (nonatomic,copy) NSURL * advertisementURI;                                  //@synthesize advertisementURI=_advertisementURI - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id tagStateChangedHandler;                                 //@synthesize tagStateChangedHandler=_tagStateChangedHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)advertisementURI;
-(id)tagStateChangedHandler;
-(void)_invalidateWithError:(id)arg1 ;
-(void)setAdvertisementURI:(NSURL *)arg1 ;
-(void)setTagStateChangedHandler:(id)arg1 ;
@end

