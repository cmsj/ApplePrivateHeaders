/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/Versions/A/APTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <APTransport/APTransport-Structs.h>
@class NSObject;

@interface APDBrowserBluetoothHelper : NSObject {

	void* _eventHandlerContext;
	/*function pointer*/void* _eventHandlerFunc;
	OpaqueAPDBluetoothHelperRef _helperRef;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	char _isInvalidated;
	char _bluetoothPowerChangedListeningStarted;
	char _isBluetoothPoweredOn;

}

@property (assign,nonatomic) void* eventHandlerContext;                               //@synthesize eventHandlerContext=_eventHandlerContext - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* eventHandlerFunc;              //@synthesize eventHandlerFunc=_eventHandlerFunc - In the implementation block
@property (assign,nonatomic) OpaqueAPDBluetoothHelperRef helperRef;                   //@synthesize helperRef=_helperRef - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventQueue;               //@synthesize eventQueue=_eventQueue - In the implementation block
@property (assign,nonatomic) char isInvalidated;                                      //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (assign,nonatomic) char bluetoothPowerChangedListeningStarted;              //@synthesize bluetoothPowerChangedListeningStarted=_bluetoothPowerChangedListeningStarted - In the implementation block
-(void)dealloc;
-(id)init;
-(int)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(char)isInvalidated;
-(int)dispatchEvent:(unsigned)arg1 withEventInfo:(id)arg2 ;
-(void)setIsInvalidated:(char)arg1 ;
-(void)setEventHandlerFunc:(/*function pointer*/void*)arg1 ;
-(void)setEventHandlerContext:(void*)arg1 ;
-(/*function pointer*/void*)eventHandlerFunc;
-(void*)eventHandlerContext;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(int)ensureBluetoothPowerChangedListenerStopped;
-(void)setHelperRef:(OpaqueAPDBluetoothHelperRef)arg1 ;
-(int)ensureBluetoothPowerEventMonitorStarted;
-(id)getEventString:(unsigned)arg1 ;
-(OpaqueAPDBluetoothHelperRef)helperRef;
-(char)bluetoothPowerChangedListeningStarted;
-(int)getBluetoothPowerOn:(char*)arg1 ;
-(void)handleBluetoothChangedNotificationInternal:(id)arg1 ;
-(void)handleBluetoothChangedNotification:(id)arg1 ;
-(void)setBluetoothPowerChangedListeningStarted:(char)arg1 ;
-(int)setPowered:(char)arg1 ;
-(int)setEventHandler:(/*function pointer*/void*)arg1 context:(void*)arg2 helperRef:(OpaqueAPDBluetoothHelperRef)arg3 ;
-(int)startListeningToEvent:(unsigned)arg1 ;
-(int)stopListeningToEvent:(unsigned)arg1 ;
-(int)queryBluetoothPower:(char*)arg1 ;
-(int)setBluetoothPower:(char)arg1 ;
@end

