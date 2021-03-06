/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerUI/PowerUISmartChargeClientManaging.h>

@protocol OS_os_log;
@class NSString, NSXPCConnection, NSObject;

@interface PowerUISmartChargeClient : NSObject <PowerUISmartChargeClientManaging> {

	NSString* _clientName;
	NSXPCConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSString * clientName;                     //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                  //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteInterface;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)status;
-(NSString *)clientName;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(char)isOBCSupported;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1 ;
-(void)enterDevelopmentMode;
-(void)resetDevelopmentMode;
-(char)setState:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)isOBCEngaged:(char*)arg1 asDesktopDevice:(char*)arg2 chargingOverrideAllowed:(char*)arg3 withError:(id*)arg4 ;
-(void)isOBCEngagedAsDesktopDeviceWithHandler:(/*^block*/id)arg1 ;
-(id)initWithClientName:(id)arg1 ;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1 ;
-(char)disableSmartCharging:(id*)arg1 ;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(char)temporarilyDisableSmartCharging:(id*)arg1 ;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(char)enableSmartCharging:(id*)arg1 ;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(char)temporarilyEnableCharging:(id*)arg1 ;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1 ;
-(char)isOBCEngagedAsDesktopDevice:(char*)arg1 chargingOverrideAllowed:(char*)arg2 withError:(id*)arg3 ;
-(char)isOBCEngaged:(id*)arg1 ;
-(id)fullChargeDeadline:(id*)arg1 ;
-(id)powerLogStatus;
-(id)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(char)arg2 withError:(id*)arg3 ;
-(void)engageFrom:(id)arg1 until:(id)arg2 repeatUntil:(id)arg3 overrideAllSignals:(char)arg4 ;
-(void)resetEngagementOverride;
-(char)setChargingStatus:(char)arg1 ;
-(char)setDesktopMode:(id)arg1 ;
-(void)resetDesktopMode;
@end

