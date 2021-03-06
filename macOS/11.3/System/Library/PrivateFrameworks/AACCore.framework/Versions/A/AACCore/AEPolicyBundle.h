/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/Versions/A/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AEPolicyStore, AEPerformancePrimitives;
@class NSObject, NSArray;

@interface AEPolicyBundle : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<AEPolicyStore> _policyStore;
	NSArray* _activations;
	id<AEPerformancePrimitives> _performancePrimitives;

}
-(id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 activations:(id)arg3 queue:(id)arg4 ;
-(void)activateSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)recoverySession;
@end

