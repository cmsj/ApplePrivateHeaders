/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDiMessagePipelineResources;

@interface IMPlayedReceiptProcessingPipelineComponent : IMPipelineComponent {

	IMDiMessagePipelineResources* _pipelineResources;

}

@property (nonatomic,readonly) IMDiMessagePipelineResources * pipelineResources;              //@synthesize pipelineResources=_pipelineResources - In the implementation block
-(id)_account;
-(id)_messageStore;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithPipelineResources:(id)arg1 ;
-(IMDiMessagePipelineResources *)pipelineResources;
-(void)_markMessageAsPlayedAndNotify:(id)arg1 session:(id)arg2 chat:(id)arg3 date:(id)arg4 ;
-(id)_idsAccount;
@end

