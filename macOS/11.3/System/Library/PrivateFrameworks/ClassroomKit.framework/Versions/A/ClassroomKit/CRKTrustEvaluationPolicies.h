/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CRKTrustEvaluationPolicies : NSObject {

	NSArray* _policyRefs;

}

@property (nonatomic,copy,readonly) NSArray * policyRefs;              //@synthesize policyRefs=_policyRefs - In the implementation block
+(id)defaultPolicicesForServerEvaluation;
+(id)defaultPoliciesForClientEvaluation;
-(id)init;
-(NSArray *)policyRefs;
-(id)initWithPolicyRefs:(id)arg1 ;
@end
