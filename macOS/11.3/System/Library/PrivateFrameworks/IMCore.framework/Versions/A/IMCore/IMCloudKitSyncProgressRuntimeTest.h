/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCloudKitEventNotificationManagerRuntimeTest.h>

@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest {

	unsigned long long _progressCount;
	unsigned long long _maxProgressCount;
	double _progressRescheduleDelay;

}

@property (assign) unsigned long long progressCount;                 //@synthesize progressCount=_progressCount - In the implementation block
@property (assign) unsigned long long maxProgressCount;              //@synthesize maxProgressCount=_maxProgressCount - In the implementation block
@property (assign) double progressRescheduleDelay;                   //@synthesize progressRescheduleDelay=_progressRescheduleDelay - In the implementation block
-(unsigned long long)maxProgressCount;
-(void)setMaxProgressCount:(unsigned long long)arg1 ;
-(void)setUp;
-(void)startTest;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(double)progressRescheduleDelay;
-(unsigned long long)progressCount;
-(void)setProgressCount:(unsigned long long)arg1 ;
-(void)setProgressRescheduleDelay:(double)arg1 ;
-(id)createSyncStatisticsForMockSyncState:(id)arg1 ;
@end

