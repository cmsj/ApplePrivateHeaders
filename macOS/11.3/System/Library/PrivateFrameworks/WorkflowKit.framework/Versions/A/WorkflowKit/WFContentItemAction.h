/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@class WFContentProperty;

@interface WFContentItemAction : WFAction {

	WFContentProperty* _defaultProperty;

}

@property (nonatomic,readonly) Class contentItemClass; 
@property (nonatomic,readonly) WFContentProperty * defaultProperty;              //@synthesize defaultProperty=_defaultProperty - In the implementation block
-(id)description;
-(Class)contentItemClass;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)inputContentClasses;
-(char)outputsMultipleItems;
-(WFContentProperty *)defaultProperty;
-(char)inputsMultipleItems;
@end

