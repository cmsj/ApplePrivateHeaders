/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFCodableAttributeBackedParameter.h>

@protocol WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;
@class INCodableAttribute, INStringLocalizer, NSString;

@interface WFDynamicResolveParameter : WFParameter <WFCodableAttributeBackedParameter> {

	INCodableAttribute* _codableAttribute;
	INStringLocalizer* _stringLocalizer;
	id<WFDynamicResolveParameterDataSource> _dataSource;
	id<WFDynamicResolveParameterDelegate> _delegate;

}

@property (nonatomic,retain) INCodableAttribute * codableAttribute;                                  //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,retain) INStringLocalizer * stringLocalizer;                                    //@synthesize stringLocalizer=_stringLocalizer - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicResolveParameterDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicResolveParameterDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFDynamicResolveParameterDelegate>)delegate;
-(void)setDelegate:(id<WFDynamicResolveParameterDelegate>)arg1 ;
-(id<WFDynamicResolveParameterDataSource>)dataSource;
-(void)setDataSource:(id<WFDynamicResolveParameterDataSource>)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(INStringLocalizer *)stringLocalizer;
-(id)localizedLabelForState:(id)arg1 ;
-(void)setStringLocalizer:(INStringLocalizer *)arg1 ;
-(void)setCodableAttribute:(INCodableAttribute *)arg1 ;
-(void)resolveOptionsForUserInput:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)endResolutionSession;
-(void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

