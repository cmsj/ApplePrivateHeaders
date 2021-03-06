/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDServiceSession, IMDAccount, IMDiMessageIDSTrustedData;

@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {

	IMDServiceSession* _serviceSession;
	IMDAccount* _account;
	IMDiMessageIDSTrustedData* _idsTrustedData;
	id _messageContext;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithServiceSession:(id)arg1 idsTrustedData:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
@end

