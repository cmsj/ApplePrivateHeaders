/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@class WFAction, NSString;

@interface WFActionOutputVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;
	WFAction* _action;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * outputUUID; 
@property (nonatomic,__weak,readonly) WFAction * action;              //@synthesize action=_action - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(WFAction *)action;
-(id)UUID;
-(id)icon;
-(char)isAvailable;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
-(id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
-(id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4 ;
-(NSString *)outputUUID;
@end

