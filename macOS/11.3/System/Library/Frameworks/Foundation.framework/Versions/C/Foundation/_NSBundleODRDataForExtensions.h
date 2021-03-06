/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSBundleODRDataCommon.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_NSBundleResourceRequestAppExtensionProtocol.h>

@class NSXPCConnection, NSString;

@interface _NSBundleODRDataForExtensions : _NSBundleODRDataCommon <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)accessSandboxExtension:(id)arg1 ;
-(void)hostApplicationAssetPacksBecameAvailable:(id)arg1 ;
-(void)hostApplicationAssetPacksBecameUnavailable:(id)arg1 ;
@end

