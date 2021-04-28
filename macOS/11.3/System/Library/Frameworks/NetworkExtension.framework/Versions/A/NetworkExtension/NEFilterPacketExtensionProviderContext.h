/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterExtensionProviderContext.h>

@protocol OS_nw_interpose;
@class NSObject, NSMutableDictionary;

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {

	os_unfair_lock_s _lock;
	NSObject*<OS_nw_interpose> _nw_interpose;
	NSMutableDictionary* _interposes;

}

@property (retain) NSObject*<OS_nw_interpose> nw_interpose;              //@synthesize nw_interpose=_nw_interpose - In the implementation block
@property (retain) NSMutableDictionary * interposes;                     //@synthesize interposes=_interposes - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)interposes;
-(void)setNw_interpose:(NSObject*<OS_nw_interpose>)arg1 ;
-(NSObject*<OS_nw_interpose>)nw_interpose;
-(void)setInterposes:(NSMutableDictionary *)arg1 ;
-(void)interposeHandleFlowEvent:(int)arg1 interface:(id)arg2 flow_id:(unsigned char)arg3 nexus_instance:(unsigned char)arg4 nexus_port:(unsigned)arg5 key:(void*)arg6 key_length:(unsigned)arg7 ;
-(char)interposeClaimWithUUID:(id)arg1 ;
-(void)dealloc;
-(id)extensionPoint;
-(void)stopWithReason:(int)arg1 ;
@end
