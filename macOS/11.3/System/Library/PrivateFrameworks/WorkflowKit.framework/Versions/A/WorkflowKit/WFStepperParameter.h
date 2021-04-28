/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSNumber, NSString;

@interface WFStepperParameter : WFParameter {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSString* _singularNoun;
	NSString* _pluralNoun;

}

@property (nonatomic,copy,readonly) NSString * singularNoun;                            //@synthesize singularNoun=_singularNoun - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluralNoun;                              //@synthesize pluralNoun=_pluralNoun - In the implementation block
@property (nonatomic,readonly) NSNumber * minimumValue;                                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabelFormatString; 
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(id)localizedLabel;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(NSString *)localizedLabelFormatString;
-(id)localizedLabelWithState:(id)arg1 includingPrefix:(char)arg2 ;
-(NSString *)singularNoun;
-(NSString *)pluralNoun;
@end
