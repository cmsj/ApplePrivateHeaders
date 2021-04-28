/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>

@class WFGranularAccessResourcePerWorkflowState, NSSet;

@interface WFGranularAccessResource : WFAccessResource {

	WFGranularAccessResourcePerWorkflowState* _stateForRequestedEntries;

}

@property (nonatomic,readonly) WFGranularAccessResourcePerWorkflowState * currentGranularPerWorkflowState; 
@property (nonatomic,retain) WFGranularAccessResourcePerWorkflowState * stateForRequestedEntries;                       //@synthesize stateForRequestedEntries=_stateForRequestedEntries - In the implementation block
@property (nonatomic,readonly) NSSet * requestedEntries; 
@property (nonatomic,readonly) NSSet * valuesWithNotDeterminedAccess; 
@property (nonatomic,readonly) NSSet * valuesWithDeniedAccess; 
+(Class)perWorkflowStateClass;
-(id)description;
-(NSSet *)requestedEntries;
-(void)updateStateForRequestedEntries;
-(NSSet *)valuesWithNotDeterminedAccess;
-(NSSet *)valuesWithDeniedAccess;
-(WFGranularAccessResourcePerWorkflowState *)currentGranularPerWorkflowState;
-(void)setCurrentPerWorkflowState:(id)arg1 ;
-(unsigned long long)workflowLevelStatus;
-(id)updatedPerWorkflowStateForAuthorizationChoice:(char)arg1 overridingPreviouslyDeterminedAuthorizations:(char)arg2 ;
-(WFGranularAccessResourcePerWorkflowState *)stateForRequestedEntries;
-(void)setStateForRequestedEntries:(WFGranularAccessResourcePerWorkflowState *)arg1 ;
@end
