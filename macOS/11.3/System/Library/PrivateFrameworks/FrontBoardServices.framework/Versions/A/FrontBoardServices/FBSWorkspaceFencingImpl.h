/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSWorkspaceFencing.h>

@protocol OS_dispatch_queue;
@class NSObject, FBSSerialQueue, BSMutableIntegerMap, BSMutableIntegerSet, NSString;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing> {

	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _callOutQueue;
	unsigned long long _signpostName;
	BSMutableIntegerMap* _triggerToFenceNameMap;
	BSMutableIntegerSet* _triggersToIgnore;
	char _synchronizingFence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestSystemAnimationFence;
-(char)isTrackingAnySystemAnimationFence;
-(char)trackSystemAnimationFence:(id)arg1 ;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 ;
@end

