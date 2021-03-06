/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UARPControllerInternalDelegate.h>

@protocol OS_os_log;
@class NSXPCConnection, NSError, NSObject, UARPController;

@interface UARPControllerXPC : NSObject <UARPControllerInternalDelegate> {

	NSXPCConnection* _xpcConnection;
	NSError* _lastProviderError;
	/*^block*/id _providerErrorReply;
	NSObject*<OS_os_log> _xpcLog;
	UARPController* _controller;

}

@property (readonly) NSXPCConnection * xpcConnection; 
@property (readonly) char useAssetAvailabilityNotifications; 
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(id)initWithController:(id)arg1 ;
-(void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3 ;
-(id)invocationForProviderSelector:(SEL)arg1 ;
-(char)performSynchronousProviderInvocation:(id)arg1 accessory:(id)arg2 requireKnown:(char)arg3 description:(const char*)arg4 ;
-(char)addAccessory:(id)arg1 assetID:(id)arg2 ;
-(char)removeAccessory:(id)arg1 ;
-(char)changeAssetLocation:(id)arg1 assetID:(id)arg2 ;
-(char)downloadAvailableFirmwareUpdate:(id)arg1 assetID:(id)arg2 withUserIntent:(char)arg3 ;
-(char)downloadReleaseNotes:(id)arg1 assetID:(id)arg2 ;
-(void)sendFirmwareUpdateProgressForAccessory:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4 ;
-(char)checkForUpdate:(id)arg1 ;
-(char)personalizationVectorForAccessory:(id)arg1 assetTag:(unsigned)arg2 outVector:(unsigned*)arg3 ;
-(void)manifestPropertiesReceivedForAccessory:(id)arg1 assetTag:(unsigned)arg2 properties:(id)arg3 ;
-(char)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3 ;
-(id)getAssetIDForAccessoryID:(id)arg1 ;
-(char)useAssetAvailabilityNotifications;
@end

