/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleLOM/AppleLOM-Structs.h>
#import <AppleLOM/LOMDeviceServer.h>

@protocol OS_dispatch_source;
@class NSObject, LOMStateMachine;

@interface LOMDeviceServerConsolidated : LOMDeviceServer {

	unsigned _smcService;
	unsigned _sleepSMCNICEnable;
	NSObject*<OS_dispatch_source> _gpioResetTimer;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotifier;
	unsigned _powerNotifierConnect;
	SCD_Struct_LO5* _smcObject;
	LOMStateMachine* _stateMachine;

}

@property (assign) SCD_Struct_LO5* smcObject;                   //@synthesize smcObject=_smcObject - In the implementation block
@property (retain) LOMStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
-(id)description;
-(char)start;
-(void)stop;
-(id)serialize;
-(LOMStateMachine *)stateMachine;
-(void)setStateMachine:(LOMStateMachine *)arg1 ;
-(char)remove:(id)arg1 error:(out id*)arg2 ;
-(SCD_Struct_LO5*)smcObject;
-(char)setupNWStack:(id)arg1 ;
-(char)install:(id)arg1 error:(out id*)arg2 ;
-(char)enableSMC:(char)arg1 ;
-(char)getInfo:(id*)arg1 error:(out id*)arg2 ;
-(void)completeDeviceRequest:(id)arg1 ;
-(id)handleDeviceRequest:(id)arg1 error:(id*)arg2 ;
-(void)setupStateMachine;
-(char)smcOpen;
-(char)setupPowerStateNotification;
-(char)smcSetResetGPIO:(unsigned short)arg1 ;
-(void)smcClose;
-(void)handleSMCAction:(int)arg1 ;
-(void)teardownNWStack:(char)arg1 ;
-(char)smcSetLOMEnable:(char)arg1 ;
-(void)powerNotification:(unsigned long long)arg1 args:(void*)arg2 ;
-(void)setSmcObject:(SCD_Struct_LO5*)arg1 ;
@end
