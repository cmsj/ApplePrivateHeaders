/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/Frameworks/UAEHCommon.framework/Versions/A/UAEHCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UAEHCommon/UAEHCommon-Structs.h>
@class NSXPCConnection;

@interface UAEHCommonDriver : NSObject {

	/*function pointer*/void* _enableCaptureFunction;
	/*function pointer*/void* _safeToQuitFunction;
	int _settingsBlockGen;
	char __didRegisterForNotifications;
	char __notificationsPaused;
	NSXPCConnection* __hudXPCConnection;

}

@property (nonatomic,retain) NSXPCConnection * _hudXPCConnection;              //@synthesize _hudXPCConnection=__hudXPCConnection - In the implementation block
@property (assign,nonatomic) char _didRegisterForNotifications;                //@synthesize _didRegisterForNotifications=__didRegisterForNotifications - In the implementation block
@property (assign,nonatomic) char _notificationsPaused;                        //@synthesize _notificationsPaused=__notificationsPaused - In the implementation block
-(id)init;
-(char)handleEvent:(const UAEvent*)arg1 ;
-(void)setupInitialState;
-(char)_notificationsPaused;
-(void)applySettingsFromPreferences;
-(void)startListeningForSettingsNotifications;
-(void)stopListeningForSettingsNotifications;
-(void)set_notificationsPaused:(char)arg1 ;
-(char)_didRegisterForNotifications;
-(void)set_didRegisterForNotifications:(char)arg1 ;
-(id)_settingsChangedNotificationsToObserve;
-(void)_settingsDidChangeNotification:(id)arg1 ;
-(id)initWithEnableCaptureFunction:(/*function pointer*/void*)arg1 safeToQuitFunction:(/*function pointer*/void*)arg2 ;
-(void)startDriver;
-(void)userSessionDidChange;
-(void)pauseListeningForSettingsNotifications;
-(void)resumeListeningForSettingsNotifications;
-(void)_informDaemonOfSafeToQuit;
-(void)_showTransientHUDForCurrentStateOfFeature:(id)arg1 enabled:(char)arg2 ;
-(char)isSafeToQuit;
-(NSXPCConnection *)_hudXPCConnection;
-(void)set_hudXPCConnection:(NSXPCConnection *)arg1 ;
@end

