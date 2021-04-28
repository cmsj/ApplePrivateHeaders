/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMXPCProxyCreating.h>

@protocol EMRemoteProxyGenerator;
@class EMRemoteConnection;

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating> {

	char _synchronous;
	EMRemoteConnection* _remoteInterface;
	id<EMRemoteProxyGenerator> _proxyGenerator;
	/*^block*/id _reattemptHandler;

}

@property (nonatomic,readonly) EMRemoteConnection * remoteInterface;                 //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,retain) id<EMRemoteProxyGenerator> proxyGenerator;              //@synthesize proxyGenerator=_proxyGenerator - In the implementation block
@property (nonatomic,copy,readonly) id reattemptHandler;                             //@synthesize reattemptHandler=_reattemptHandler - In the implementation block
@property (getter=isSynchronous,nonatomic,readonly) char synchronous;                //@synthesize synchronous=_synchronous - In the implementation block
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(char)isSynchronous;
-(EMRemoteConnection *)remoteInterface;
-(id)reattemptingRemoteObjectProxy;
-(id)reattemptHandler;
-(id)initWithRemoteInterface:(id)arg1 proxyGenerator:(id)arg2 synchronous:(char)arg3 reattemptHandler:(/*^block*/id)arg4 ;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(/*^block*/id)arg1 ;
-(id<EMRemoteProxyGenerator>)proxyGenerator;
-(void)setProxyGenerator:(id<EMRemoteProxyGenerator>)arg1 ;
@end
