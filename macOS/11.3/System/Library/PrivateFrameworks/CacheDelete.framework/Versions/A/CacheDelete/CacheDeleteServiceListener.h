/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/Versions/A/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CacheDeleteListener.h>
#import <CacheDelete/CacheDeleteServiceProtocol.h>

@protocol OS_dispatch_queue;
@class CacheDeleteServiceInfo, NSXPCListenerEndpoint, NSObject;

@interface CacheDeleteServiceListener : CacheDeleteListener <CacheDeleteServiceProtocol> {

	char _legacyCallbacks;
	char _anonymous;
	CacheDeleteServiceInfo* _serviceInfo;
	NSXPCListenerEndpoint* _endpoint;
	/*^block*/id _purgeable;
	/*^block*/id _purge;
	/*^block*/id _periodic;
	/*^block*/id _cancel;
	/*^block*/id _notify;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id purgeable;                                          //@synthesize purgeable=_purgeable - In the implementation block
@property (nonatomic,copy) id purge;                                              //@synthesize purge=_purge - In the implementation block
@property (nonatomic,copy) id periodic;                                           //@synthesize periodic=_periodic - In the implementation block
@property (nonatomic,copy) id cancel;                                             //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,copy) id notify;                                             //@synthesize notify=_notify - In the implementation block
@property (nonatomic,copy) id callback;                                           //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (readonly) char legacyCallbacks;                                        //@synthesize legacyCallbacks=_legacyCallbacks - In the implementation block
@property (readonly) char anonymous;                                              //@synthesize anonymous=_anonymous - In the implementation block
@property (nonatomic,readonly) CacheDeleteServiceInfo * serviceInfo;              //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint;                            //@synthesize endpoint=_endpoint - In the implementation block
+(id)cacheDeleteServiceListener:(id)arg1 options:(id)arg2 ;
-(void)setPurgeable:(/*^block*/id)arg1 purge:(/*^block*/id)arg2 cancel:(/*^block*/id)arg3 periodic:(/*^block*/id)arg4 notify:(/*^block*/id)arg5 callback:(/*^block*/id)arg6 entitlements:(id)arg7 ;
-(void)setPurge:(id)arg1 ;
-(void)setPeriodic:(id)arg1 ;
-(char)legacyCallbacks;
-(id)periodic;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)cancel;
-(NSXPCListenerEndpoint *)endpoint;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)purge;
-(char)anonymous;
-(CacheDeleteServiceInfo *)serviceInfo;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(void)setCancel:(id)arg1 ;
-(id)notify;
-(void)setNotify:(id)arg1 ;
-(id)purgeable;
-(void)setPurgeable:(id)arg1 ;
-(void)setNotifyCallback:(/*^block*/id)arg1 ;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)servicePing:(/*^block*/id)arg1 ;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
@end

