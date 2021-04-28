/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLANKit/CoreWLANKit-Structs.h>
#import <AppKit/NSTabViewItem.h>
#import <libobjc.A.dylib/CWWiFiUIProxyClientDelegate.h>

@class AirPortOptionsTabView, CWWiFiClient, CWWiFiUIProxyClient, NSString, CWInterface;

@interface AirPortOptionsTabViewItem : NSTabViewItem <CWWiFiUIProxyClientDelegate> {

	AirPortOptionsTabView* _AirPortOptionsTabView;
	id _owner;
	CWWiFiClient* _wifiClient;
	CWWiFiUIProxyClient* _wifiUIClient;
	NSString* _interfaceName;
	char _isWiFiNetworkSyncEnabled;
	unsigned long long _modifierFlags;

}

@property (copy) NSString * interfaceName;                            //@synthesize interfaceName=_interfaceName - In the implementation block
@property (readonly) CWInterface * interface; 
@property (readonly) CWWiFiClient * wifiClient;                       //@synthesize wifiClient=_wifiClient - In the implementation block
@property (readonly) CWWiFiUIProxyClient * wifiUIClient;              //@synthesize wifiUIClient=_wifiUIClient - In the implementation block
@property (readonly) char isWiFiNetworkSyncEnabled;                   //@synthesize isWiFiNetworkSyncEnabled=_isWiFiNetworkSyncEnabled - In the implementation block
@property (readonly) unsigned long long modifierFlags;                //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForOwner:(id)arg1 ;
-(CWWiFiUIProxyClient *)wifiUIClient;
-(char)isWiFiNetworkSyncEnabled;
-(void)logMessageTracerAdvancedPrefs;
-(void)__asyncQueryWiFiNetworkSyncStatus;
-(char)applyForService:(SCNetworkServiceRef)arg1 withAuthorization:(id)arg2 ;
-(void)refreshForService:(SCNetworkServiceRef)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(unsigned long long)modifierFlags;
-(CWInterface *)interface;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)clientConnectionInterrupted;
-(char)hasUnsavedChanges;
-(void)setHasUnsavedChanges:(char)arg1 ;
-(CWWiFiClient *)wifiClient;
-(void)updateScanUI:(char)arg1 ;
@end
