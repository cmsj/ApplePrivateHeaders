/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLSyncStep.h>

@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep {

	Class _taskClass;
	CPLEngineSyncTask* _currentTask;

}

@property (nonatomic,readonly) Class taskClass;                              //@synthesize taskClass=_taskClass - In the implementation block
@property (nonatomic,readonly) CPLEngineSyncTask * currentTask;              //@synthesize currentTask=_currentTask - In the implementation block
-(CPLEngineSyncTask *)currentTask;
-(id)descriptionForTasks;
-(char)launchNecessaryTasks;
-(void)cancelAllTasks:(char)arg1 ;
-(char)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(char*)arg3 ;
-(void)moveTasksToBackground;
-(id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 taskClass:(Class)arg3 ;
-(id)newTask;
-(Class)taskClass;
@end

