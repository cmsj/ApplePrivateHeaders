/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSMutableSet, NSObject;

@interface CalAgentLinkConnection : NSObject {

	NSMutableSet* _operations;
	NSObject*<OS_xpc_object> _connection;

}
+(id)sharedInstance;
+(void)setConnectionForOperation:(id)arg1 ;
+(void)releaseConnectionForOperation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_interruptAllOperations;
-(void)_setConnectionForOperation:(id)arg1 ;
-(void)_releaseConnectionForOperation:(id)arg1 ;
@end

