/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, TMBackup;


@protocol TMBackupStoreRoot <NSObject,TMCompleteBackupProvider,TMWritableBackupProvider>
@property (readonly) NSURL * machineStoreURL; 
@property (readonly) NSURL * inheritanceHistoryURL; 
@property (readonly) NSURL * liveVolumeMountPoint; 
@property (readonly) TMBackup * baselineBackupCandidate; 
@required
-(NSURL *)liveVolumeMountPoint;
-(TMBackup *)baselineBackupCandidate;
-(id)prepareAllBackupsForBrowsing:(id*)arg1;
-(id)prepareBackupForBrowsingWithDate:(id)arg1 error:(id*)arg2;
-(id)prepareLegacyBackupsDB:(id*)arg1;
-(char)finishBrowsingBackups:(id*)arg1;
-(NSURL *)machineStoreURL;
-(NSURL *)inheritanceHistoryURL;

@end

