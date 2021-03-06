/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, JSContext, JSVirtualMachine, CCVegaJSDocument, CCVegaWorkerClient;

@interface CCVegaWorker : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _currentTimerIndex;
	NSMutableDictionary* _timers;
	BOOL _vegaLiteLoaded;
	BOOL _vegaParserLoaded;
	JSContext* context;
	JSVirtualMachine* virtualMachine;
	CCVegaJSDocument* document;
	CCVegaWorkerClient* currentClient;
	unsigned long long _dispatchQueueID;
	/*^block*/id _onDealloc;

}

@property (retain) JSVirtualMachine * virtualMachine; 
@property (retain) JSContext * context; 
@property (nonatomic,retain) CCVegaJSDocument * document; 
@property (__weak) CCVegaWorkerClient * currentClient; 
@property (copy) id onDealloc;                                         //@synthesize onDealloc=_onDealloc - In the implementation block
@property (readonly) unsigned long long dispatchQueueID;               //@synthesize dispatchQueueID=_dispatchQueueID - In the implementation block
+(void)cleanUp;
+(void)cleanUpWithCallback:(/*^block*/id)arg1 ;
+(id)sharedWorker;
-(void)dealloc;
-(id)init;
-(id)dispatchQueue;
-(id)initWithQueue:(id)arg1 ;
-(JSContext *)context;
-(CCVegaJSDocument *)document;
-(void)setContext:(JSContext *)arg1 ;
-(void)setDocument:(CCVegaJSDocument *)arg1 ;
-(CCVegaWorkerClient *)currentClient;
-(void)setupContext;
-(JSVirtualMachine *)virtualMachine;
-(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(void)setVirtualMachine:(JSVirtualMachine *)arg1 ;
-(void)setupTimerFunctions;
-(void)setupConsole;
-(void)registerProxyExpressionFunction:(id)arg1 ;
-(int)nextTimerIndex;
-(void)setOnDealloc:(id)arg1 ;
-(void)requireVegaLite;
-(void)requireVegaParser;
-(void)waitForWorker;
-(void)setCurrentClient:(CCVegaWorkerClient *)arg1 ;
-(unsigned long long)dispatchQueueID;
-(id)onDealloc;
@end

