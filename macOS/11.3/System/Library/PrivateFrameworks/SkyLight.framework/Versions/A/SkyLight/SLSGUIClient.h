/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SkyLight/SLSDisplayControlClient.h>
#import <libobjc.A.dylib/SLSGUIClientProtocol.h>
#import <libobjc.A.dylib/SLSDisplayControlServiceProtocol.h>

@class SLSXPCService, NSString;

@interface SLSGUIClient : SLSDisplayControlClient <SLSGUIClientProtocol, SLSDisplayControlServiceProtocol> {

	SLSXPCService* _service;

}

@property (nonatomic,retain) SLSXPCService * service;               //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configGUIClient:(id)arg1 error:(id*)arg2 notifyQueue:(id)arg3 notificationType:(unsigned long long)arg4 notificationBlock:(/*^block*/id)arg5 ;
-(void)dealloc;
-(id)init;
-(SLSXPCService *)service;
-(void)terminateConnection:(id*)arg1 ;
-(void)setService:(SLSXPCService *)arg1 ;
-(id)initGUIClient:(id)arg1 error:(id*)arg2 notifyQueue:(id)arg3 notificationType:(unsigned long long)arg4 notificationBlock:(/*^block*/id)arg5 ;
-(unsigned long long)requestDisplaysIdle:(id)arg1 error:(id*)arg2 ;
-(int)validateIdleRequest:(id)arg1 ;
@end

