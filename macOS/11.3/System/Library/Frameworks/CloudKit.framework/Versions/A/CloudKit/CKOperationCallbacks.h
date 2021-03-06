/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKOperationCallbacks
@required
-(void)handleLongLivedOperationDidPersist;
-(void)handleSystemDidImposeInfo:(id)arg1;
-(void)handleRequestDidComplete:(id)arg1;
-(void)handleOperationDidCompleteWithMetrics:(id)arg1 error:(id)arg2;
-(void)handleDiscretionaryOperationShouldStart:(char)arg1 nonDiscretionary:(char)arg2 error:(id)arg3;
-(void)handleDiscretionaryOperationShouldSuspend;
-(void)handleDaemonOperationWillStartWithClassName:(id)arg1 isTopLevelDaemonOperation:(char)arg2 replyBlock:(/*^block*/id)arg3;

@end

