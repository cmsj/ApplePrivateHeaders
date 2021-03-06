/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntent, NSString, INIntentExecutionInfo;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {

	char _forceExecutionOnPhone;
	INIntent* _intent;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _subtitle;
	INIntentExecutionInfo* _resolvedExecutionInfo;

}

@property (nonatomic,readonly) char forceExecutionOnPhone;                                 //@synthesize forceExecutionOnPhone=_forceExecutionOnPhone - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                                 //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) INIntentExecutionInfo * resolvedExecutionInfo;              //@synthesize resolvedExecutionInfo=_resolvedExecutionInfo - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                            //@synthesize intent=_intent - In the implementation block
+(id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(char)arg2 groupIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)name;
-(id)localizedName;
-(NSString *)groupIdentifier;
-(NSString *)title;
-(NSString *)subtitle;
-(INIntent *)intent;
-(id)appIdentifier;
-(void)setIntent:(INIntent *)arg1 ;
-(long long)intentCategory;
-(id)intentDescription;
-(id)initWithIntent:(id)arg1 ;
-(id)localizedSubtitle;
-(id)serializedParameters;
-(id)metricsIdentifier;
-(void)initializeParameters;
-(id)localizedDescriptionSummary;
-(id)initWithIntent:(id)arg1 forceExecutionOnPhone:(char)arg2 ;
-(id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(char)arg2 ;
-(void)continueInAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4 ;
-(id)slots;
-(id)createResourceManager;
-(id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(char)forceExecutionOnPhone;
-(INIntentExecutionInfo *)resolvedExecutionInfo;
@end

