/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/Versions/A/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>

@class NSString, WPDaemonServer, NSSet, NSIndexSet;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate> {

	char _isHomePod;
	char _restricted;
	char _testMode;
	long long _state;
	NSString* _name;
	WPDaemonServer* _server;
	NSSet* _cbManagers;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (__weak) WPDaemonServer * server;                             //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char isHomePod;                          //@synthesize isHomePod=_isHomePod - In the implementation block
@property (assign,nonatomic) char restricted;                           //@synthesize restricted=_restricted - In the implementation block
@property (assign,nonatomic) char testMode;                             //@synthesize testMode=_testMode - In the implementation block
@property (nonatomic,retain) NSSet * cbManagers;                        //@synthesize cbManagers=_cbManagers - In the implementation block
@property (nonatomic,readonly) char isInternalBuild; 
@property (nonatomic,readonly) NSIndexSet * scanWhiteList; 
@property (nonatomic,readonly) NSIndexSet * advWhiteList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)isInternalBuild;
+(id)scanWhiteList;
+(id)advWhiteList;
+(id)wpStateAsString:(long long)arg1 ;
+(id)cbStateAsString:(long long)arg1 ;
+(void)initializeAdvBlackList:(id)arg1 AdvWhiteList:(id)arg2 ScanBlackList:(id)arg3 ScanWhiteList:(id)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(long long)state;
-(void)cleanup;
-(void)setName:(NSString *)arg1 ;
-(void)setServer:(WPDaemonServer *)arg1 ;
-(WPDaemonServer *)server;
-(char)restricted;
-(void)setState:(long long)arg1 ;
-(void)update;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(char)testMode;
-(void)setTestMode:(char)arg1 ;
-(char)isInternalBuild;
-(char)isHomePod;
-(void)setRestricted:(char)arg1 ;
-(NSSet *)cbManagers;
-(void)setCbManagers:(NSSet *)arg1 ;
-(NSIndexSet *)scanWhiteList;
-(NSIndexSet *)advWhiteList;
-(id)generateStateDumpStrings;
-(void)cbManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(id)initWithServer:(id)arg1 Name:(id)arg2 ;
-(void)generateStateDump;
-(void)updateState:(long long)arg1 Restricted:(char)arg2 ;
-(char)isScanWhitelistedForType:(unsigned char)arg1 ;
-(char)isAdvertisingWhitelistedForType:(unsigned char)arg1 ;
@end

