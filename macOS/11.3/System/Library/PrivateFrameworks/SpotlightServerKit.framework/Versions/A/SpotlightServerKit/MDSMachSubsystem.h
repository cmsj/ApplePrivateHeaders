/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServerKit.framework/Versions/A/SpotlightServerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SpotlightServerKit/SpotlightServerKit-Structs.h>
@class NSObject;

@interface MDSMachSubsystem : NSObject {

	mach_msg_dispatch_link* _dispatchChain;
	BOOL _shutDown;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CFDictionaryRef _deadNameObjectRecordMap;
	CFDictionaryRef _noSendersObjectRecordMap;
	CFDictionaryRef _sourcesByPort;
	CFDictionaryRef _channelsByPort;

}
-(id)retain;
-(oneway void)release;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)shutdown;
-(void)registerPort:(unsigned)arg1 rights:(unsigned long long)arg2 ;
-(char)registerForDeadNameNotification:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)machPortNotify:(SCD_Struct_MD3*)arg1 object:(id)arg2 ;
-(void)registerPort:(unsigned)arg1 withCallback:(/*function pointer*/void*)arg2 rights:(unsigned long long)arg3 ;
-(char)registerForDeadNameNotification:(unsigned)arg1 withSelector:(SEL)arg2 andObject:(id)arg3 ;
-(void)unregisterForDeadNameNotification:(unsigned)arg1 ;
-(char)registerForNoSendersNotification:(unsigned)arg1 withSelector:(SEL)arg2 andObject:(id)arg3 ;
-(void)unregisterForNoSendersNotification:(unsigned)arg1 ;
-(void)unregisterPort:(unsigned)arg1 ;
@end

