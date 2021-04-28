/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort {

	id _delegate;
	unsigned long long _flags;
	unsigned _machPort;
	unsigned long long _reserved;

}

@property (readonly) unsigned machPort; 
+(id)port;
+(id)portWithMachPort:(unsigned)arg1 ;
+(char)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned long long)arg7 ;
+(void)parseMachMessage:(void*)arg1 localPort:(id*)arg2 remotePort:(id*)arg3 msgid:(unsigned*)arg4 components:(id*)arg5 ;
+(void)resetAllPorts;
+(id)portWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
+(void)_fixNSMachPortLeak;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(char)isEqual:(id)arg1 ;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isMemberOfClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)invalidate;
-(unsigned)machPort;
-(char)isValid;
-(id)delegate;
-(unsigned long long)_cfTypeID;
-(void)setDelegate:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3 ;
-(char)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(void)handlePortMessage:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(char)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(id)initWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(char)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
@end
