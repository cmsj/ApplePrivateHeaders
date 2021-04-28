/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/Versions/A/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AEAssessmentStateSourceRegistering.h>

@protocol OS_dispatch_queue;
@class AEXPCProxy, NSObject;

@interface AEAssessmentStateSourceRegisteringProxy : NSObject <AEAssessmentStateSourceRegistering> {

	AEXPCProxy* _xpcProxy;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)proxyWithEndpoint:(id)arg1 queue:(id)arg2 ;
+(id)daemonProxyWithQueue:(id)arg1 ;
-(void)registerPublisherWithLifetimeEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
