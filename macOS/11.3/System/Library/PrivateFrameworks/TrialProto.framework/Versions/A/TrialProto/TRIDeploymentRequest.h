/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSString, TRIApproval, TRIPBEnumArray;

@interface TRIDeploymentRequest : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * requestedTimestamp; 
@property (assign,nonatomic) char hasRequestedTimestamp; 
@property (nonatomic,copy) NSString * requestedBy; 
@property (assign,nonatomic) char hasRequestedBy; 
@property (nonatomic,retain) TRIApproval * programOfficeApproval; 
@property (assign,nonatomic) char hasProgramOfficeApproval; 
@property (nonatomic,retain) TRIPBEnumArray * deploymentTypeArray; 
@property (nonatomic,readonly) unsigned long long deploymentTypeArray_Count; 
+(id)descriptor;
@end
