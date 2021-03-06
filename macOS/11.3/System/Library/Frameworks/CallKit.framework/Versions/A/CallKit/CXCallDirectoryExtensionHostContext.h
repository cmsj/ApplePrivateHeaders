/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CXCallDirectoryProviderHostProtocol.h>

@protocol CXCallDirectoryProviderHostProtocol, OS_dispatch_queue;
@class NSObject, NSString;

@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol> {

	id<CXCallDirectoryProviderHostProtocol> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryProviderHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id<CXCallDirectoryProviderHostProtocol>)delegate;
-(void)setDelegate:(id<CXCallDirectoryProviderHostProtocol>)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)activate;
-(oneway void)isIncrementalLoadingAllowed:(/*^block*/id)arg1 ;
-(oneway void)addBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeAllBlockingEntriesWithReply:(/*^block*/id)arg1 ;
-(oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)removeAllIdentificationEntriesWithReply:(/*^block*/id)arg1 ;
-(oneway void)completeRequestWithReply:(/*^block*/id)arg1 ;
-(void)requestFailedWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

