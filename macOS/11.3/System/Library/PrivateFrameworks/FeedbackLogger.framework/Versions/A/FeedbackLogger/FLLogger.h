/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FeedbackLogger.framework/Versions/A/FeedbackLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FLLoggingContext, OS_os_log, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSDistributedNotificationCenter;

@interface FLLogger : NSObject {

	NSMutableDictionary* _persistentStores;
	NSObject*<FLLoggingContext> _context;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_source> _persistentStoreCacheTTLTimer;
	unsigned long long _persistentStoreCacheTTL;
	NSDistributedNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) NSMutableDictionary * persistentStores;                                  //@synthesize persistentStores=_persistentStores - In the implementation block
@property (nonatomic,retain) NSObject*<FLLoggingContext> context;                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> persistentStoreCacheTTLTimer;              //@synthesize persistentStoreCacheTTLTimer=_persistentStoreCacheTTLTimer - In the implementation block
@property (assign,nonatomic) unsigned long long persistentStoreCacheTTL;                              //@synthesize persistentStoreCacheTTL=_persistentStoreCacheTTL - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
+(id)sharedLogger;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(NSObject*<FLLoggingContext>)context;
-(void)setContext:(NSObject*<FLLoggingContext>)arg1 ;
-(NSDistributedNotificationCenter *)notificationCenter;
-(NSMutableDictionary *)persistentStores;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(char)closeOpenBatches;
-(id)persistentStoreForApplication:(id)arg1 ;
-(char)purgeBatchFromBundle:(id)arg1 withIdentifier:(id)arg2 ;
-(char)closeOpenBatchForBundle:(id)arg1 ;
-(void)closeAllStores;
-(void)closeStoreForApplicationFromNotification:(id)arg1 ;
-(void)report:(id)arg1 application:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(id)__dispatched_persistentStoreForApplication:(id)arg1 ;
-(void)resetStoreCacheTimer;
-(id)pathForApplication:(id)arg1 ;
-(void)setPersistentStoreCacheTTLTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)persistentStoreCacheTTLTimer;
-(unsigned long long)persistentStoreCacheTTL;
-(void)report:(id)arg1 application:(id)arg2 ;
-(void)setValue:(id)arg1 forUploadHeaderNamed:(id)arg2 ;
-(id)uploadHeaders;
-(void)scheduleImmediateUpload;
-(void)setPersistentStores:(NSMutableDictionary *)arg1 ;
-(void)setPersistentStoreCacheTTL:(unsigned long long)arg1 ;
@end
