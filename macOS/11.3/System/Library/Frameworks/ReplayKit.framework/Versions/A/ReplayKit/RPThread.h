/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/Versions/A/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReplayKit/ReplayKit-Structs.h>
@class NSString;

@interface RPThread : NSObject {

	/*function pointer*/void* _routine;
	void* _context;
	NSString* _threadName;
	OpaqueFigThreadRef _thread;
	opaque_pthread_mutex_t _stateMutex;
	char _isRunning;

}
-(void)dealloc;
-(char)start;
-(void)stop;
-(char)isRunning;
-(void)setIsRunning:(char)arg1 ;
-(id)initWithRoutine:(/*function pointer*/void*)arg1 context:(id)arg2 threadName:(id)arg3 ;
@end

