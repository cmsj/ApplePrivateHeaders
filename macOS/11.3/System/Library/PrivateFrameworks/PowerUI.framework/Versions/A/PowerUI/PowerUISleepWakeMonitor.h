/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log, _CDUserContext;
@class NSObject, PowerUISmartChargeManager, NSDate;

@interface PowerUISleepWakeMonitor : NSObject {

	char _enabled;
	unsigned long long _checkpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _log;
	id<_CDUserContext> _context;
	PowerUISmartChargeManager* _manager;
	NSDate* _desktopTransitionEvaluationDate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                              //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PowerUISmartChargeManager * manager;                   //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSDate * desktopTransitionEvaluationDate;              //@synthesize desktopTransitionEvaluationDate=_desktopTransitionEvaluationDate - In the implementation block
@property (assign,nonatomic) unsigned long long checkpoint;                         //@synthesize checkpoint=_checkpoint - In the implementation block
@property (assign,nonatomic) char enabled;                                          //@synthesize enabled=_enabled - In the implementation block
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(PowerUISmartChargeManager *)manager;
-(void)setManager:(PowerUISmartChargeManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_CDUserContext>)context;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(unsigned long long)checkpoint;
-(void)setCheckpoint:(unsigned long long)arg1 ;
-(id)initWithManager:(id)arg1 withCheckpoint:(unsigned long long)arg2 withLastDesktopCheck:(id)arg3 ;
-(NSDate *)desktopTransitionEvaluationDate;
-(void)restartDesktopTransitionCheck;
-(void)setupIOPMConnectionHandler;
-(id)nextWakeWithCheckpoint:(unsigned long long)arg1 withBatteryLevel:(int)arg2 withExternalConnected:(char)arg3 withFullChargeDeadline:(id)arg4 ;
-(void)setDesktopTransitionEvaluationDate:(NSDate *)arg1 ;
@end

