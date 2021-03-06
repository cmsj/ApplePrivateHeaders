/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSConnectionServiceDelegate.h>

@protocol RBSServiceDelegate, OS_dispatch_queue;
@class NSMutableSet, RBSConnection, NSObject, NSString;

@interface RBSService : NSObject <RBSConnectionServiceDelegate> {

	id<RBSServiceDelegate> _delegate;
	os_unfair_lock_s _lock;
	NSMutableSet* _inheritances;
	RBSConnection* _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)didReceiveInheritances:(id)arg1 ;
-(void)didLoseInheritances:(id)arg1 ;
-(id)inheritances;
@end

