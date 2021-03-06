/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDProcessMemoryPressureNotificationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _processMemoryState;
	NSString* _dataSyncState;

}

@property (nonatomic,readonly) NSString * processMemoryState;              //@synthesize processMemoryState=_processMemoryState - In the implementation block
@property (nonatomic,readonly) NSString * dataSyncState;                   //@synthesize dataSyncState=_dataSyncState - In the implementation block
+(id)createEventWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2 ;
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(id)initWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2 ;
-(NSString *)processMemoryState;
@end

