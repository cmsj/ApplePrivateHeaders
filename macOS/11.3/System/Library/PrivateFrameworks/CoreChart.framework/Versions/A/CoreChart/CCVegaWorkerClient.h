/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCVegaWorkerClientDelegate;
@class NSMutableDictionary, CCVegaWorker, NSObject;

@interface CCVegaWorkerClient : NSObject {

	NSMutableDictionary* _expressionFunctions;
	char isValid;
	CCVegaWorker* worker;
	NSObject*<CCVegaWorkerClientDelegate> delegate;

}

@property (retain) CCVegaWorker * worker; 
@property (__weak) NSObject*<CCVegaWorkerClientDelegate> delegate; 
@property (assign) char isValid; 
-(char)isValid;
-(NSObject*<CCVegaWorkerClientDelegate>)delegate;
-(void)setDelegate:(NSObject*<CCVegaWorkerClientDelegate>)arg1 ;
-(void)setIsValid:(char)arg1 ;
-(CCVegaWorker *)worker;
-(void)setWorker:(CCVegaWorker *)arg1 ;
-(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(id)evaluateExpressionFunction:(id)arg1 ;
-(void)clientEnter;
-(void)clientDidExecuteTimerCallback;
-(void)clientExit;
-(void)waitForWorker;
-(id)initWithWorker:(id)arg1 delegate:(id)arg2 ;
-(void)runBlockAsync:(/*^block*/id)arg1 ;
-(void)runBlockSync:(/*^block*/id)arg1 ;
@end

