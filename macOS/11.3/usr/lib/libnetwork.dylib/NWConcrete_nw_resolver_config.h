/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_resolver_config.h>

@protocol OS_xpc_object, OS_dispatch_source, OS_nw_fd_wrapper;
@class NSObject, NSString;

@interface NWConcrete_nw_resolver_config : NSObject <OS_nw_resolver_config> {

	NSObject*<OS_xpc_object> dictionary;
	unsigned char identifier[16];
	NSObject*<OS_dispatch_source> kernel_event_source;
	NSObject*<OS_nw_fd_wrapper> kernel_event_wrapper;
	NSObject*<OS_nw_fd_wrapper> agent_fd;
	os_unfair_lock_s lock;
	unsigned generation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
@end

