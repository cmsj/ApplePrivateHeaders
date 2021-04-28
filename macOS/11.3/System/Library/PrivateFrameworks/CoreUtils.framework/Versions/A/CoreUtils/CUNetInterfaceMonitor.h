/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CUNetInterfaceMonitor : NSObject {

	char _invalidateCalled;
	char _invalidateDone;
	SCDynamicStoreRef _scStore;
	LogCategory* _ucat;
	unsigned _flags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _flagsChangedHandler;
	/*^block*/id _primaryIPChangedHandler;
	/*^block*/id _primaryNetworkChangedHandler;
	NSString* _primaryNetworkSignature;
	SCD_Union_CU15 _primaryIPv4Addr;
	SCD_Union_CU15 _primaryIPv6Addr;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id flagsChangedHandler;                                     //@synthesize flagsChangedHandler=_flagsChangedHandler - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* primaryIPv4Addr;              //@synthesize primaryIPv4Addr=_primaryIPv4Addr - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* primaryIPv6Addr;              //@synthesize primaryIPv6Addr=_primaryIPv6Addr - In the implementation block
@property (nonatomic,copy) id primaryIPChangedHandler;                                 //@synthesize primaryIPChangedHandler=_primaryIPChangedHandler - In the implementation block
@property (nonatomic,copy) id primaryNetworkChangedHandler;                            //@synthesize primaryNetworkChangedHandler=_primaryNetworkChangedHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryNetworkSignature;                //@synthesize primaryNetworkSignature=_primaryNetworkSignature - In the implementation block
-(unsigned)flags;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(id)flagsChangedHandler;
-(/*function pointer*/void*)primaryIPv4Addr;
-(/*function pointer*/void*)primaryIPv6Addr;
-(id)primaryIPChangedHandler;
-(id)primaryNetworkChangedHandler;
-(NSString *)primaryNetworkSignature;
-(void)_networkInterfacesChanged:(char)arg1 ;
-(void)_primaryIPChanged:(char)arg1 ;
-(void)setFlagsChangedHandler:(id)arg1 ;
-(void)setPrimaryIPChangedHandler:(id)arg1 ;
-(void)setPrimaryNetworkChangedHandler:(id)arg1 ;
@end
