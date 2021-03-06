/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface GKInterfaceListener : NSObject {

	SCDynamicStoreRef _dynamicStore;
	opaque_pthread_mutex_t _notificationMutex;
	id _interfaceListenerDelegate;
	char _isWifiUp;
	char _isCellUp;
	int _notifyToken;
	char _monitoringAvailable;

}

@property (assign) char _isWifiUp;                                                       //@synthesize isWifiUp=_isWifiUp - In the implementation block
@property (assign) char _isCellUp;                                                       //@synthesize isCellUp=_isCellUp - In the implementation block
@property (assign) id<InterfaceListenerDelegate> interfaceListenerDelegate; 
-(void)dealloc;
-(id)init;
-(void)set_isCellUp:(char)arg1 ;
-(void)set_isWifiUp:(char)arg1 ;
-(id<InterfaceListenerDelegate>)interfaceListenerDelegate;
-(char)_isWifiUp;
-(char)_isCellUp;
-(char)stopChangeListener;
-(void)hasConnectionWithWifi:(char*)arg1 cell:(char*)arg2 ;
-(char)startChangeListener;
-(char)startRoutingChangeListener;
-(void)stopRoutingChangeListener;
-(void)setInterfaceListenerDelegate:(id<InterfaceListenerDelegate>)arg1 ;
@end

