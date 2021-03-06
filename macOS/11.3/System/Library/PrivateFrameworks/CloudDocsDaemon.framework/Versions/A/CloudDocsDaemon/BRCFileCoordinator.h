/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileCoordinator.h>

@protocol OS_dispatch_source;
@class BRCAccountSession, NSURL, NSObject;

@interface BRCFileCoordinator : NSFileCoordinator {

	BRCAccountSession* _session;
	unsigned long long _startStamp;
	NSURL* _url1;
	NSURL* _url2;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _doneHandler;
	char _cancelled;
	char _isUpdateForReconnecting;
	char _forRead;

}

@property (assign,nonatomic) char isUpdateForReconnecting;              //@synthesize isUpdateForReconnecting=_isUpdateForReconnecting - In the implementation block
@property (nonatomic,readonly) char forRead;                            //@synthesize forRead=_forRead - In the implementation block
+(void)itemDidChangeAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemAtPath:(id)arg1 origLogicalName:(id)arg2 didBounceToNewLogicalName:(id)arg3 ;
+(void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(char)arg5 ;
-(void)cancel;
-(char)forRead;
-(id)initWithSession:(id)arg1 forRead:(char)arg2 doneHandler:(/*^block*/id)arg3 ;
-(void)setIsUpdateForReconnecting:(char)arg1 ;
-(void)cancelAfterDelay:(double)arg1 ;
-(void)_willRequestCoordinationWithContext:(id)arg1 url1:(id)arg2 url2:(id)arg3 ;
-(void)_didObtainCoordination:(id)arg1 context:(id)arg2 url1:(id)arg3 url2:(id)arg4 handler:(/*^block*/id)arg5 fcHandler:(/*^block*/id)arg6 error:(id)arg7 ;
-(void)scheduleReadOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(/*^block*/id)arg4 ;
-(void)scheduleDeleteOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(/*^block*/id)arg4 ;
-(void)scheduleUpdateOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(/*^block*/id)arg4 ;
-(void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(char)arg3 queue:(id)arg4 taskTracker:(id)arg5 accessor:(/*^block*/id)arg6 ;
-(char)isUpdateForReconnecting;
@end

