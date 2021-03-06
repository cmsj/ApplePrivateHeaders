/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Versions/A/ExchangeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EXSSyncProtocolDelegate.h>
#import <libobjc.A.dylib/EXSDataConsumerInstanceDelegate.h>

@protocol OS_dispatch_queue;
@class EXSAccount, EXSDataManager, NSObject, NSArray, EXSSyncProtocol, NSString;

@interface EXSSyncEngineInstance : NSObject <EXSSyncProtocolDelegate, EXSDataConsumerInstanceDelegate> {

	char _isRunning;
	EXSAccount* _account;
	EXSDataManager* _dataManager;
	NSObject*<OS_dispatch_queue> _dispatchWorkloop;
	NSArray* _dataConsumerPlugins;
	NSObject*<OS_dispatch_queue> _syncEngineInstanceQueue;
	EXSSyncProtocol* _syncProtocol;
	NSArray* _dataConsumerInstances;

}

@property (assign,nonatomic,__weak) EXSDataManager * dataManager;                               //@synthesize dataManager=_dataManager - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> dispatchWorkloop;              //@synthesize dispatchWorkloop=_dispatchWorkloop - In the implementation block
@property (assign,nonatomic,__weak) NSArray * dataConsumerPlugins;                              //@synthesize dataConsumerPlugins=_dataConsumerPlugins - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncEngineInstanceQueue;              //@synthesize syncEngineInstanceQueue=_syncEngineInstanceQueue - In the implementation block
@property (assign) char isRunning;                                                              //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) EXSSyncProtocol * syncProtocol;                                    //@synthesize syncProtocol=_syncProtocol - In the implementation block
@property (nonatomic,retain) NSArray * dataConsumerInstances;                                   //@synthesize dataConsumerInstances=_dataConsumerInstances - In the implementation block
@property (nonatomic,readonly) EXSAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isRunning;
-(EXSAccount *)account;
-(void)setIsRunning:(char)arg1 ;
-(void)shutdown;
-(void)accountChanged;
-(EXSDataManager *)dataManager;
-(void)setDataManager:(EXSDataManager *)arg1 ;
-(void)startup;
-(void)accountAdded;
-(void)accountRemoved;
-(void)dataConsumerInstance:(id)arg1 needsFoldersRepushed:(id)arg2 ;
-(void)dispatchOnWorkQueue:(/*^block*/id)arg1 ;
-(void)dataConsumerInstanceNeedsSync:(id)arg1 ;
-(void)dataConsumerInstanceHasFolderChanges:(id)arg1 ;
-(void)dataConsumerInstance:(id)arg1 hasItemChangesInFolder:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchWorkloop;
-(void)setDispatchWorkloop:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)immediatelySync;
-(void)setDataConsumerPlugins:(NSArray *)arg1 ;
-(void)setSyncEngineInstanceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)changeItemPostedNotificationHandler:(id)arg1 ;
-(void)setSyncProtocol:(EXSSyncProtocol *)arg1 ;
-(EXSSyncProtocol *)syncProtocol;
-(NSArray *)dataConsumerPlugins;
-(void)setDataConsumerInstances:(NSArray *)arg1 ;
-(NSArray *)dataConsumerInstances;
-(NSObject*<OS_dispatch_queue>)syncEngineInstanceQueue;
-(void)syncProtocolHasFolderChanges:(id)arg1 ;
-(void)syncProtocol:(id)arg1 hasItemChangesInFolder:(id)arg2 ;
-(id)initWithAccount:(id)arg1 dataManager:(id)arg2 dataConsumerPlugins:(id)arg3 dispatchWorkloop:(id)arg4 ;
@end

