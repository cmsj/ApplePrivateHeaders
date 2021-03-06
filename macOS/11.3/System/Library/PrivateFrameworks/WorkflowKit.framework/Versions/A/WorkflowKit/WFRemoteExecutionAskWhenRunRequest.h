/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface WFRemoteExecutionAskWhenRunRequest : WFRemoteExecutionRequest {

	NSString* _associatedRunRequestIdentifier;
	NSArray* _parameterKeys;
	NSDictionary* _parameterKeysAndStates;
	NSString* _actionIdentifier;
	NSDictionary* _actionSerializedParameters;
	NSDictionary* _possibleStatesByParameterKey;
	NSMutableArray* _parameterKeysAndStatesData;
	NSMutableArray* _possibleStatesByParameterKeyData;

}

@property (nonatomic,retain) NSMutableArray * parameterKeysAndStatesData;                    //@synthesize parameterKeysAndStatesData=_parameterKeysAndStatesData - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleStatesByParameterKeyData;              //@synthesize possibleStatesByParameterKeyData=_possibleStatesByParameterKeyData - In the implementation block
@property (nonatomic,readonly) NSString * associatedRunRequestIdentifier;                    //@synthesize associatedRunRequestIdentifier=_associatedRunRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * parameterKeys;                                      //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterKeysAndStates;                        //@synthesize parameterKeysAndStates=_parameterKeysAndStates - In the implementation block
@property (nonatomic,readonly) NSString * actionIdentifier;                                  //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionSerializedParameters;                    //@synthesize actionSerializedParameters=_actionSerializedParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * possibleStatesByParameterKey;                  //@synthesize possibleStatesByParameterKey=_possibleStatesByParameterKey - In the implementation block
+(long long)version;
-(NSArray *)parameterKeys;
-(NSString *)actionIdentifier;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(char)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithAction:(id)arg1 parameters:(id)arg2 associatedRunRequestIdentifier:(id)arg3 possibleStatesByParameterKey:(id)arg4 ;
-(void)inflateParameterStatesWithAction:(id)arg1 ;
-(NSString *)associatedRunRequestIdentifier;
-(NSDictionary *)parameterKeysAndStates;
-(NSDictionary *)actionSerializedParameters;
-(NSDictionary *)possibleStatesByParameterKey;
-(NSMutableArray *)parameterKeysAndStatesData;
-(void)setParameterKeysAndStatesData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)possibleStatesByParameterKeyData;
-(void)setPossibleStatesByParameterKeyData:(NSMutableArray *)arg1 ;
@end

