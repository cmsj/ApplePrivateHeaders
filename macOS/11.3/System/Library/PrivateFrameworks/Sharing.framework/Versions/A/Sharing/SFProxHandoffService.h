/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFService, NSObject;

@interface SFProxHandoffService : NSObject {

	char _activateCalled;
	/*^block*/id _activateCompletion;
	char _invalidateCalled;
	SFService* _service;
	int _serviceState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(void)_serviceStart;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_cleanup;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activated;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_completedWithError:(id)arg1 ;
@end

