/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@class PKNotifyRegistration, NSString;

@interface PKNotifySubregistration : NSObject <PKInvalidatable> {

	os_unfair_lock_s _lock;
	PKNotifyRegistration* _parent;
	/*^block*/id _handler;
	BOOL _invalidated;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)isInvalidated;
-(void)_invalidateFromParent:(BOOL)arg1 ;
-(id)initWithParent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)invokeHandler;
@end

