/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_resolution_report.h>

@protocol OS_nw_endpoint;
@class NSObject, NSString;

@interface NWConcrete_nw_resolution_report : NSObject <OS_nw_resolution_report> {

	unsigned long long milliseconds;
	NSObject*<OS_nw_endpoint> successful_endpoint;
	NSObject*<OS_nw_endpoint> preferred_endpoint;
	unsigned endpoint_count;
	int source;
	int protocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
@end
