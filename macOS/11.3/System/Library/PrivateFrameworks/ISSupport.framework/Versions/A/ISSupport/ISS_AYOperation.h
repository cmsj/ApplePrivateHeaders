/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AYGroup, AYNotificationDelegate;
@class NSThread, NSLock, NSError, NSMutableDictionary;

@interface ISS_AYOperation : NSObject <NSCopying> {

	id _asyncProxy;
	NSThread* _currentThread;
	NSThread* _baseThread;
	ISS_AYOperation* _parentOperation;
	ISS_AYOperation* _mainOperation;
	ISS_AYOperation* _currentChildOperation;
	id<AYGroup> _group;
	NSLock* _operationLock;
	NSError* _error;
	char _operationEnded;
	char _operationAborted;
	char _silent;
	int _currentMark;
	void* _reserved;
	id _derivedResult;
	int _derivedHttpStatusCode;
	id<AYNotificationDelegate> _notificationDelegate;
	NSMutableDictionary* _privateInfos;

}
+(void)initialize;
+(id)mainThread;
+(void)unblockAllOperationsForGroup:(id)arg1 ;
+(void)pushInvocation:(id)arg1 ;
+(void)_initCurrentThread;
+(void)_initMainThread;
+(void)unlockOperations;
+(void)lockOperations;
+(void)_delayCurrentThreadForRecentlyAbortedOperations;
+(char)_lockWaitingForOperation;
+(char)_dispatchNextOperationInQueue;
+(void)_workerThread;
+(void)_launchOneThread;
+(void)_noLockForThread:(id)arg1 ;
+(void)_lockForAllThreads;
+(char)popOperation:(id)arg1 ;
+(void)endAllPendingOperationsOfGroup:(id)arg1 withError:(id)arg2 ;
+(void)abortAllOperations;
+(void)waitForOperationsToEndWithDelegate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)parentOperation;
-(char)isAsync;
-(void)setInfo:(id)arg1 forKey:(id)arg2 ;
-(id)infoForKey:(id)arg1 ;
-(void)removeInfoForKey:(id)arg1 ;
-(id)operationGroup;
-(void)setOperationGroup:(id)arg1 ;
-(id)operationThread;
-(long long)operationProgress;
-(long long)operationTotal;
-(void)abortOperation;
-(id)async;
-(void)setNotificationDelegate:(id)arg1 ;
-(id)notificationDelegate;
-(void)endOperationWithError:(id)arg1 ;
-(void)finalizeOperation;
-(void)postOperation;
-(char)isSilent;
-(void)setSilent:(char)arg1 ;
-(void)setDerivedResult:(id)arg1 ;
-(void)setDerivedHttpStatusCode:(int)arg1 ;
-(id)derivedResult;
-(int)derivedHttpStatusCode;
-(id)syncFor:(id)arg1 ;
-(int)_attemptNum;
-(void)runOperationWithTimeOut:(unsigned)arg1 ;
-(void)markWithTag:(int)arg1 ;
-(void)markWithTag:(int)arg1 notify:(char)arg2 ;
-(void)notifyWithName:(id)arg1 infos:(id)arg2 ;
-(char)isRunLoopBased;
-(void)_setCurrentChildOperation:(id)arg1 ;
-(void)_setCurrentThread:(id)arg1 ;
-(void)lockOperation;
-(void)unlockOperation;
-(int)currentMark;
-(char)operationWasAborted;
-(void)resetOperation;
-(id)mainOperation;
-(char)handleEventInThread:(id)arg1 ;
-(id)_currentChildOperation;
-(void)_handleEventRecursively:(id)arg1 ;
-(void)_sendEventToThreadLocked:(id)arg1 ;
-(void)operationWillAbort;
-(void)operationHasAborted;
-(char)operationCanAbort;
-(void)handleNotificationOfChildOperation:(id)arg1 notification:(id)arg2 ;
-(id)baseThread;
-(void)sendEventToThread:(id)arg1 ;
@end

