/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/Versions/A/ContextKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContextKit/ContextKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CKContextSemaphore : NSObject <NSSecureCoding> {

	char _semaOwner;
	unsigned _sema;
	unsigned long long _shmSize;
	SCD_Struct_CK0* _shm;
	NSObject*<OS_xpc_object> _shmObject;

}
+(void)initialize;
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)sharedMemorySize;
-(char)busy;
-(long long)pending;
-(void)notify;
-(char)tryAcquire;
-(unsigned long long)gauge;
-(void)resetPending;
-(long long)waitFor:(double)arg1 ;
-(void)incPending;
-(id)initSemaphoreForXPCService;
-(unsigned long long)activeGauge;
-(void)setActiveGauge:(unsigned long long)arg1 ;
-(void)decPending;
-(unsigned long long)pendingExceptionsCount;
-(unsigned long long)numAcquired;
-(unsigned long long)requestsServed;
-(void)notifyAll;
@end

