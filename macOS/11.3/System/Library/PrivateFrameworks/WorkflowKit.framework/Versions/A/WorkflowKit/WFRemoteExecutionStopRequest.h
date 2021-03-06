/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString;

@interface WFRemoteExecutionStopRequest : WFRemoteExecutionRequest {

	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(long long)version;
-(NSString *)requestIdentifier;
-(id)initWithRequestIdentifier:(id)arg1 ;
-(char)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
@end

