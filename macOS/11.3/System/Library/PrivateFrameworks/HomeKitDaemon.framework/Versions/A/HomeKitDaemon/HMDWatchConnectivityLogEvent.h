/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDWatchConnectivityLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	char _reportComplete;
	unsigned long long _watchAddedNotificationCount;
	unsigned long long _watchRemovedNotificationCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long watchAddedNotificationCount;                //@synthesize watchAddedNotificationCount=_watchAddedNotificationCount - In the implementation block
@property (assign,nonatomic) unsigned long long watchRemovedNotificationCount;              //@synthesize watchRemovedNotificationCount=_watchRemovedNotificationCount - In the implementation block
@property (assign,getter=isReportComplete,nonatomic) char reportComplete;                   //@synthesize reportComplete=_reportComplete - In the implementation block
-(id)init;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)watchAddedNotificationCount;
-(void)setWatchAddedNotificationCount:(unsigned long long)arg1 ;
-(unsigned long long)watchRemovedNotificationCount;
-(void)setWatchRemovedNotificationCount:(unsigned long long)arg1 ;
-(char)isReportComplete;
-(void)setReportComplete:(char)arg1 ;
@end

