/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class WFVariableString, NSString;

@interface WFVariableStringParameterState : NSObject <WFParameterState> {

	WFVariableString* _variableString;
	long long _userInputInsertionIndex;

}

@property (nonatomic,copy,readonly) WFVariableString * variableString;              //@synthesize variableString=_variableString - In the implementation block
@property (nonatomic,readonly) long long userInputInsertionIndex;                   //@synthesize userInputInsertionIndex=_userInputInsertionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithVariable:(id)arg1 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2 ;
-(id)initWithVariableString:(id)arg1 ;
-(id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;
-(WFVariableString *)variableString;
-(long long)userInputInsertionIndex;
@end
