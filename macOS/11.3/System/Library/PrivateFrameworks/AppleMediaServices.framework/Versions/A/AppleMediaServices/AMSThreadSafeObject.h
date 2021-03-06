/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AMSThreadSafeObject : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id _underlyingObject;

}

@property (retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (retain) id underlyingObject;                                   //@synthesize underlyingObject=_underlyingObject - In the implementation block
-(id)init;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)underlyingObject;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUnderlyingObject:(id)arg1 ;
-(void)readWrite:(/*^block*/id)arg1 ;
-(void)read:(/*^block*/id)arg1 ;
-(id)accessAndSetObjectWithBlock:(/*^block*/id)arg1 ;
@end

