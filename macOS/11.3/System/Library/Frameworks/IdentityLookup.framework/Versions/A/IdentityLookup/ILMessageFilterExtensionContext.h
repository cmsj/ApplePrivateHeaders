/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/Versions/A/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ILMessageFilterExtensionVendorProtocol.h>

@class NSString;

@interface ILMessageFilterExtensionContext : NSExtensionContext <ILMessageFilterExtensionVendorProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)finish;
-(id)extension;
-(oneway void)handleQueryRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)handleReportRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deferQueryRequestToNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)deferReportRequestToNetworkWithCompletion:(/*^block*/id)arg1 ;
@end

