/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/Versions/A/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <CacheDelete/CacheDeleteServiceProtocol.h>

@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)servicePing:(/*^block*/id)arg1 ;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
@end
