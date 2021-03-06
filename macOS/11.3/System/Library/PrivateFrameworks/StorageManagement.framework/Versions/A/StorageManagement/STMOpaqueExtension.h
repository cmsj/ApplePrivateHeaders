/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageManagement.framework/Versions/A/StorageManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/STMExtensionNotificationPosting.h>

@class NSExtension, NSXPCListener, NSString;

@interface STMOpaqueExtension : NSObject <NSXPCListenerDelegate, STMExtensionNotificationPosting> {

	NSExtension* _underlyingExtension;
	NSXPCListener* _listener;

}

@property (retain) NSExtension * underlyingExtension;                   //@synthesize underlyingExtension=_underlyingExtension - In the implementation block
@property (retain) NSXPCListener * listener;                            //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)identifier;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)___nsx_pingHost:(/*^block*/id)arg1 ;
-(id)listenerEndpoint;
-(id)initWithExtension:(id)arg1 ;
-(NSExtension *)underlyingExtension;
-(void)extension:(id)arg1 partialResourceItems:(id)arg2 ;
-(void)extension:(id)arg1 notifyResourcesDidChange:(id)arg2 ;
-(void)extension:(id)arg1 notifyTipsDidChange:(id)arg2 ;
-(void)extension:(id)arg1 notifyTotalSpaceUsedDidChange:(id)arg2 ;
-(void)setUnderlyingExtension:(NSExtension *)arg1 ;
@end

