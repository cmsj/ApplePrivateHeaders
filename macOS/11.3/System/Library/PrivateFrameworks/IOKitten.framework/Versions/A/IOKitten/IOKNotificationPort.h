/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/Versions/A/IOKitten
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IOKitten/IOKitten-Structs.h>
@class NSObject;

@interface IOKNotificationPort : NSObject {

	IONotificationPortRef _port;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) IONotificationPortRef port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned machPort; 
-(void)dealloc;
-(id)init;
-(unsigned)machPort;
-(IONotificationPortRef)port;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initOnDispatchQueue:(id)arg1 ;
-(id)initWithMasterPort:(unsigned)arg1 onDispatchQueue:(id)arg2 ;
@end

