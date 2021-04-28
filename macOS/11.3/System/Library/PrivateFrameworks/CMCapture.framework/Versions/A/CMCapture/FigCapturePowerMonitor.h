/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCapturePowerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _torchHandler;
	OpaqueFigSimpleMutexRef _maxTorchLevelLock;
	float _maxTorchLevel;

}

@property (readonly) float maxTorchLevel; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)_powerNotification:(unsigned)arg1 ;
-(void)setPowerHandler:(/*^block*/id)arg1 ;
-(float)maxTorchLevel;
@end
