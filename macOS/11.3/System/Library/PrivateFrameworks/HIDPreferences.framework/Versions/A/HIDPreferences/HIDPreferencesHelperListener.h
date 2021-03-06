/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HIDPreferences.framework/Versions/A/HIDPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface HIDPreferencesHelperListener : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSMutableArray* _clients;

}
-(id)init;
-(void)removeClient:(id)arg1 ;
-(void)acceptConnection:(id)arg1 ;
-(char)setupListener;
@end

