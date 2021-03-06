/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TMThinningAlgorithm : NSObject {

	char _shouldKeepWeeklySnapshots;
	NSDate* _now;
	unsigned long long _numberOfHourlySnapshotsToKeep;
	unsigned long long _numberOfDailySnapshotsToKeep;

}

@property (assign) unsigned long long numberOfHourlySnapshotsToKeep;              //@synthesize numberOfHourlySnapshotsToKeep=_numberOfHourlySnapshotsToKeep - In the implementation block
@property (assign) unsigned long long numberOfDailySnapshotsToKeep;               //@synthesize numberOfDailySnapshotsToKeep=_numberOfDailySnapshotsToKeep - In the implementation block
@property (assign) char shouldKeepWeeklySnapshots;                                //@synthesize shouldKeepWeeklySnapshots=_shouldKeepWeeklySnapshots - In the implementation block
@property (retain) NSDate * now;                                                  //@synthesize now=_now - In the implementation block
+(id)backupThinningAlgorithm;
+(id)localSnapshotThinningAlgorithm;
-(NSDate *)now;
-(void)setNumberOfHourlySnapshotsToKeep:(unsigned long long)arg1 ;
-(void)setNumberOfDailySnapshotsToKeep:(unsigned long long)arg1 ;
-(void)setShouldKeepWeeklySnapshots:(char)arg1 ;
-(unsigned long long)numberOfHourlySnapshotsToKeep;
-(unsigned long long)numberOfDailySnapshotsToKeep;
-(char)shouldKeepWeeklySnapshots;
-(id)datesToRemoveFromSet:(id)arg1 ;
-(void)setNow:(NSDate *)arg1 ;
@end

