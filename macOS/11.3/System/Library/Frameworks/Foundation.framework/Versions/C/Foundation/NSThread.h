/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary, NSString;

@interface NSThread : NSObject {

	id _private;
	unsigned char _bytes[44];

}

@property (retain,readonly) NSMutableDictionary * threadDictionary; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
@property (assign) unsigned long long stackSize; 
@property (readonly) char isMainThread; 
@property (getter=isExecuting,readonly) char executing; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
+(id)callStackSymbols;
+(id)callStackReturnAddresses;
+(char)isMainThread;
+(void)sleepForTimeInterval:(double)arg1 ;
+(id)currentThread;
+(void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
+(double)threadPriority;
+(char)setThreadPriority:(double)arg1 ;
+(char)isDying;
+(id)mainThread;
+(char)isMultiThreaded;
+(void)sleepUntilDate:(id)arg1 ;
+(void)exit;
+(void)detachNewThreadWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(char)isMainThread;
-(void)start;
-(void)cancel;
-(NSMutableDictionary *)threadDictionary;
-(id)runLoop;
-(char)isCancelled;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(long long)qualityOfService;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(char)_setThreadPriority:(double)arg1 ;
-(char)isDying;
-(void)setStackSize:(unsigned long long)arg1 ;
-(unsigned long long)stackSize;
-(pthread_override_sRef)_beginQoSOverride:(unsigned)arg1 relativePriority:(int)arg2 ;
-(void)_endQoSOverride:(pthread_override_sRef)arg1 ;
-(void)_nq:(id)arg1 ;
@end

