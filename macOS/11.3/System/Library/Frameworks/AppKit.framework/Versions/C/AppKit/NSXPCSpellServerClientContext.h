/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSXPCSpellServerClient, NSString, NSObject, NSError;

@interface NSXPCSpellServerClientContext : NSObject {

	NSXPCSpellServerClient* _client;
	NSString* _messageName;
	NSObject*<OS_dispatch_semaphore> _waiter;
	NSError* _error;
	char _hasProxy;
	char _incrementIndexOnTimeout;

}
+(void)signalWaiter:(id)arg1 ;
-(void)dealloc;
-(id)error;
-(void)finish;
-(id)waiter;
-(id)client;
-(id)initWithClient:(id)arg1 messageName:(id)arg2 waitForReply:(char)arg3 incrementIndexOnTimeout:(char)arg4 ;
-(id)messageName;
-(id)proxy;
@end

