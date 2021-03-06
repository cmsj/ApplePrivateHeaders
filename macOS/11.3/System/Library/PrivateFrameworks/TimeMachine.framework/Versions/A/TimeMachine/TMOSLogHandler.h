/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeMachine/TimeMachine-Structs.h>
#import <TimeMachine/TMLoggingHandler.h>

@protocol OS_os_log;
@class NSObject, NSMutableDictionary;

@interface TMOSLogHandler : TMLoggingHandler {

	NSObject*<OS_os_log> _generalLogObject;
	NSMutableDictionary* _categoryLogObjects;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)handleMessage:(id)arg1 forRecord:(id)arg2 ;
-(id)_oslogForCategory:(id)arg1 ;
@end

