/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Versions/A/ExchangeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_workloop;
@class EXSDataManager, NSObject, EXSAccountManager, NSArray, NSMutableDictionary;

@interface EXSSyncEngine : NSObject {

	char _shouldStayRunning;
	EXSDataManager* _dataManager;
	NSObject*<OS_dispatch_workloop> _dispatchWorkloop;
	EXSAccountManager* _accountManager;
	NSArray* _dataConsumerPlugins;
	NSMutableDictionary* _syncEngineInstances;

}

@property (assign,nonatomic) char shouldStayRunning;                                        //@synthesize shouldStayRunning=_shouldStayRunning - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> dispatchWorkloop;              //@synthesize dispatchWorkloop=_dispatchWorkloop - In the implementation block
@property (nonatomic,retain) EXSAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) EXSDataManager * dataManager;                                  //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) NSArray * dataConsumerPlugins;                                 //@synthesize dataConsumerPlugins=_dataConsumerPlugins - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * syncEngineInstances;                     //@synthesize syncEngineInstances=_syncEngineInstances - In the implementation block
+(id)log;
-(id)init;
-(void)shutdown;
-(EXSAccountManager *)accountManager;
-(void)setAccountManager:(EXSAccountManager *)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(EXSDataManager *)dataManager;
-(void)setDataManager:(EXSDataManager *)arg1 ;
-(void)startup;
-(NSObject*<OS_dispatch_workloop>)dispatchWorkloop;
-(void)setDispatchWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(char)shouldStayRunning;
-(void)immediatelySync;
-(void)evaluateOurNeedToRun;
-(void)setDataConsumerPlugins:(NSArray *)arg1 ;
-(NSArray *)dataConsumerPlugins;
-(void)setShouldStayRunning:(char)arg1 ;
-(void)setSyncEngineInstances:(NSMutableDictionary *)arg1 ;
-(void)loadDataConsumerPlugins;
-(NSMutableDictionary *)syncEngineInstances;
-(void)loadDataConsumerPlugins:(id)arg1 ;
-(void)accountStartup:(id)arg1 isNewAccount:(char)arg2 ;
-(void)accountShutdown:(id)arg1 isRemovedAccount:(char)arg2 ;
@end

