/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ViewBridge/ViewBridge-Structs.h>
@class NSString;

@interface NSCFRunLoopSemaphore : NSObject {

	CFStringRef _mode;
	NSString* _legend;
	NSString* _loggingDomain;
	unsigned _waiting : 1;
	unsigned _waited : 1;
	unsigned _signaled : 1;
	unsigned _stopped : 1;
	os_unfair_lock_s _retainReleaseLock;
	void* reserved;

}

@property (copy) NSString * legend;                     //@synthesize legend=_legend - In the implementation block
@property (copy) NSString * loggingDomain;              //@synthesize loggingDomain=_loggingDomain - In the implementation block
@property (readonly) CFStringRef mode;                  //@synthesize mode=_mode - In the implementation block
+(id)invocations;
+(void)_observe:(CFStringRef)arg1 whilePerforming:(/*^block*/id)arg2 ;
+(CFStringRef)currentRunLoopMode;
+(void)initialize;
+(CFStringRef)mode;
-(os_unfair_lock_s*)retainReleaseLock;
-(void)__vbWithLockPerform:(/*^block*/id)arg1 ;
-(void)__vbSuperRelease;
-(void)_log:(id)arg1 force:(char)arg2 ;
-(NSString *)loggingDomain;
-(void)setLoggingDomain:(NSString *)arg1 ;
-(id)retain;
-(oneway void)release;
-(void)dealloc;
-(id)init;
-(void)signal;
-(char)wait:(double)arg1 ;
-(void)wait;
-(CFStringRef)mode;
-(id)initWithMode:(CFStringRef)arg1 ;
-(NSString *)legend;
-(void)setLegend:(NSString *)arg1 ;
-(void)_log:(id)arg1 ;
@end

