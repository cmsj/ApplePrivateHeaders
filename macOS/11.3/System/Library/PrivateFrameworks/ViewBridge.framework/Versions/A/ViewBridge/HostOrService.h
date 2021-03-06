/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ViewBridge/ViewBridge-Structs.h>
@class HostAndService, NSXPCConnection, NSDictionary, NSString;

@interface HostOrService : NSObject {

	unsigned _window;
	HostAndService* _hostAndService;
	NSXPCConnection* _connection;
	NSDictionary* _secBundleInfo;
	long long _secBundleInfoOnce;
	unsigned _didBeginTransaction : 1;
	long long _applicationDisplayNameOnce;
	NSString* _applicationDisplayName;

}

@property (assign) HostAndService * hostAndService;                  //@synthesize hostAndService=_hostAndService - In the implementation block
@property (readonly) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (readonly) NSDictionary * secBundleInfo; 
@property (readonly) LSASNRef applicationSerialNumber; 
@property (readonly) NSString * applicationDisplayName; 
@property (readonly) unsigned window;                                //@synthesize window=_window - In the implementation block
-(void)didStealKeyboardFocus;
-(void)didReleaseKeyboardFocus;
-(void)didLoseKeyboardFocus;
-(HostAndService *)hostAndService;
-(id)quickDescription;
-(void)setHostAndService:(HostAndService *)arg1 ;
-(NSDictionary *)secBundleInfo;
-(void)forEvent:(CGEventRef)arg1 invokeWithFlatEvent:(/*^block*/id)arg2 ;
-(void)joinPair:(id)arg1 reply:(/*^block*/id)arg2 configure:(/*^block*/id)arg3 ;
-(id)secBundleIdentifier;
-(int)owningProcessForWindow:(unsigned)arg1 ;
-(char)colorHasMeaningfulAlpha:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(unsigned)window;
-(LSASNRef)applicationSerialNumber;
-(void)invalidate:(id)arg1 ;
-(NSString *)applicationDisplayName;
-(void)post:(CGEventRef)arg1 ;
@end

