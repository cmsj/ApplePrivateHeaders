/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKXPCForwarder : NSObject <NSCopying> {

	os_unfair_lock_s _lock;
	id _target;
	Class _targetClass;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(id)_initWithTarget:(id)arg1 targetClass:(Class)arg2 ;
-(void)clearTarget;
@end

