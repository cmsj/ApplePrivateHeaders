/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRepeatAction.h>

@interface WFFiniteRepeatAction : WFRepeatAction {

	unsigned long long _numberOfLoops;

}
-(unsigned long long)numberOfLoops;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(char)shouldRepeatWithVariableSource:(id)arg1 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 workQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(id)repeatInputVariableName;
-(id)repeatCountVariableName;
-(void)setRepeatInput:(id)arg1 withVariableSource:(id)arg2 ;
-(id)repeatInputWithVariableSource:(id)arg1 ;
-(void)setRepeatCount:(long long)arg1 withVariableSource:(id)arg2 ;
-(long long)repeatCountWithVariableSource:(id)arg1 ;
@end
