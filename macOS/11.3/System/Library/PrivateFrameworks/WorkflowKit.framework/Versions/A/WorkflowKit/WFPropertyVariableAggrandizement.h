/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic,readonly) NSString * propertyName; 
@property (nonatomic,readonly) id<WFPropertyListObject> propertyUserInfo; 
@property (nonatomic,readonly) char negativeProperty; 
@property (nonatomic,readonly) NSString * negativePropertyName; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 ;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 negativeProperty:(char)arg3 negativePropertyName:(id)arg4 ;
-(id<WFPropertyListObject>)propertyUserInfo;
-(char)negativeProperty;
-(NSString *)negativePropertyName;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

