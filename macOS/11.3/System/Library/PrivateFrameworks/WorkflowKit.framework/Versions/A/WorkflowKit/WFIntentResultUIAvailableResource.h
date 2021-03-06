/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFResource.h>

@class INIntentExecutionInfo;

@interface WFIntentResultUIAvailableResource : WFResource {

	char _eligibleForWidgets;
	char _hasSuccessResponseWithDialog;
	INIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INIntentExecutionInfo * executionInfo;                            //@synthesize executionInfo=_executionInfo - In the implementation block
@property (getter=isEligibleForWidgets,nonatomic,readonly) char eligibleForWidgets;              //@synthesize eligibleForWidgets=_eligibleForWidgets - In the implementation block
@property (nonatomic,readonly) char hasSuccessResponseWithDialog;                                //@synthesize hasSuccessResponseWithDialog=_hasSuccessResponseWithDialog - In the implementation block
+(char)mustBeAvailableForDisplay;
-(char)isEligibleForWidgets;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(INIntentExecutionInfo *)executionInfo;
-(id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isEligibleForWidgets:(char)arg3 hasSuccessResponseWithDialog:(char)arg4 ;
-(char)hasSuccessResponseWithDialog;
@end

