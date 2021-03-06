/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/Versions/A/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSPerformanceLogger : MSASModelBase
+(id)sharedLogger;
+(void)nukeCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(char)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(void)_logSqliteErrorLine:(int)arg1 ;
-(void)startOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)stopOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)discardOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(/*^block*/id)arg3 ;
@end

