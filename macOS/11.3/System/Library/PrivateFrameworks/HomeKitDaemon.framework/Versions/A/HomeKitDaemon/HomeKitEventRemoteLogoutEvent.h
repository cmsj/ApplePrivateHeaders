/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>
#import <HomeKitDaemon/HomeKitEventRemoteLoginMetricProtocol.h>

@class AWDHomeKitRemoteLogout, NSDate, NSString;

@interface HomeKitEventRemoteLogoutEvent : HMDLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol> {

	AWDHomeKitRemoteLogout* _metric;
	NSDate* _startTime;

}

@property (nonatomic,readonly) AWDHomeKitRemoteLogout * metric;              //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setError:(id)arg1 ;
-(NSDate *)startTime;
-(AWDHomeKitRemoteLogout *)metric;
-(id)initWithSessionID:(id)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end
