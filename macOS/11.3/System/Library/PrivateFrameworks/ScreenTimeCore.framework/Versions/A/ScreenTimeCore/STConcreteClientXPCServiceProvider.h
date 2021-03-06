/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/STClientXPCServiceProvider.h>

@protocol STPasscodeProviderService;
@class NSXPCListener, NSXPCInterface, NSString;

@interface STConcreteClientXPCServiceProvider : NSObject <NSXPCListenerDelegate, STClientXPCServiceProvider> {

	NSXPCListener* _activeListener;
	id<STPasscodeProviderService> _providedService;
	NSXPCInterface* _providedServiceInterface;

}

@property (retain) NSXPCListener * activeListener;                             //@synthesize activeListener=_activeListener - In the implementation block
@property (retain) id<STPasscodeProviderService> providedService;              //@synthesize providedService=_providedService - In the implementation block
@property (retain) NSXPCInterface * providedServiceInterface;                  //@synthesize providedServiceInterface=_providedServiceInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)providePasscodeProviderService;
-(void)setActiveListener:(NSXPCListener *)arg1 ;
-(void)setProvidedService:(id<STPasscodeProviderService>)arg1 ;
-(void)setProvidedServiceInterface:(NSXPCInterface *)arg1 ;
-(NSXPCListener *)activeListener;
-(id<STPasscodeProviderService>)providedService;
-(NSXPCInterface *)providedServiceInterface;
@end

