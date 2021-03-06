/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SMCopyEngineDelegate;
@class NSURL, NSObject, NSMutableArray;

@interface SMPreflightEngine : NSObject {

	SMPreflightEngine* _engine;
	NSURL* _targetSystemPath;
	NSObject*<SMCopyEngineDelegate> _delegate;
	NSMutableArray* _preflightActions;

}

@property (retain) NSMutableArray * preflightActions;                                      //@synthesize preflightActions=_preflightActions - In the implementation block
@property (__weak) SMPreflightEngine * engine;                                             //@synthesize engine=_engine - In the implementation block
@property (retain) NSURL * targetSystemPath;                                               //@synthesize targetSystemPath=_targetSystemPath - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SMCopyEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)run;
-(id)init;
-(NSObject*<SMCopyEngineDelegate>)delegate;
-(void)setDelegate:(NSObject*<SMCopyEngineDelegate>)arg1 ;
-(unsigned long long)totalSize;
-(SMPreflightEngine *)engine;
-(void)setEngine:(SMPreflightEngine *)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)setPreflightActions:(NSMutableArray *)arg1 ;
-(void)setTargetSystemPath:(NSURL *)arg1 ;
-(NSMutableArray *)preflightActions;
-(id)initWithTargetSystem:(id)arg1 ;
-(NSURL *)targetSystemPath;
@end

