/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAppInstalledResource.h>

@class INIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource {

	char _intentIsSynced;
	char _actionRequiresRemoteExecution;
	INIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INIntentExecutionInfo * executionInfo;              //@synthesize executionInfo=_executionInfo - In the implementation block
@property (nonatomic,readonly) char intentIsSynced;                                //@synthesize intentIsSynced=_intentIsSynced - In the implementation block
@property (nonatomic,readonly) char actionRequiresRemoteExecution;                 //@synthesize actionRequiresRemoteExecution=_actionRequiresRemoteExecution - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isSyncedFromOtherDevice:(char)arg3 ;
-(char)intentIsEligibleForRemoteExecution;
-(char)intentIsLocallyAvailable;
-(void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1 ;
-(INIntentExecutionInfo *)executionInfo;
-(char)intentIsSynced;
-(char)actionRequiresRemoteExecution;
@end

