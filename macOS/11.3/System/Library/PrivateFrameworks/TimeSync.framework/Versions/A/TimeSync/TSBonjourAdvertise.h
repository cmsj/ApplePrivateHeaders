/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/Versions/A/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TSBonjourAdvertiseDelegate;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject;

@interface TSBonjourAdvertise : NSObject {

	DNSServiceRef_tRef _sdRef;
	NSObject*<OS_dispatch_queue> _queue;
	id<TSBonjourAdvertiseDelegate> _delegate;

}

@property (assign,nonatomic) id<TSBonjourAdvertiseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<TSBonjourAdvertiseDelegate>)delegate;
-(void)setDelegate:(id<TSBonjourAdvertiseDelegate>)arg1 ;
-(char)stopAdvertising;
-(void)registeredServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 withFlags:(unsigned)arg4 ;
-(char)startAdvertisingWithError:(id*)arg1 ;
@end

