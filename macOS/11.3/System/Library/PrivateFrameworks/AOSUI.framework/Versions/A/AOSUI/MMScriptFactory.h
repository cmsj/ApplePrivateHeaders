/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MMScriptFactory : NSObject {

	NSString* _scriptNamespace;

}

@property (nonatomic,readonly) NSString * scriptNamespace;              //@synthesize scriptNamespace=_scriptNamespace - In the implementation block
-(id)initWithNamespace:(id)arg1 ;
-(id)initializationScript;
-(id)uuidGenerationScript;
-(id)resolveCallbackScript;
-(id)variableAssignmentWithName:(id)arg1 value:(id)arg2 ;
-(id)voidFunctionWithName:(id)arg1 parameterCount:(unsigned long long)arg2 callbackIndices:(id)arg3 ;
-(id)promiseFunctionWithName:(id)arg1 parameterCount:(unsigned long long)arg2 callbackIndices:(id)arg3 ;
-(id)_extractCallbackTokensFromBody:(id)arg1 ;
-(id)_extractArgumentListFromBody:(id)arg1 ;
-(id)_extractReturnTokenFromBody:(id)arg1 ;
-(id)_resolverFunctionCallWithToken:(id)arg1 arguments:(id)arg2 ;
-(id)_unresolverFunctionCallWithToken:(id)arg1 ;
-(id)_scriptWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(char)arg3 ;
-(id)_functionScriptWithName:(id)arg1 parameterCount:(unsigned long long)arg2 shouldReturnPromise:(char)arg3 callbackIndices:(id)arg4 ;
-(id)_variableAssignmentWithName:(id)arg1 value:(id)arg2 ;
-(id)_scriptLiteralWithObject:(id)arg1 ;
-(id)_scopeByNamespacingSource:(id)arg1 ;
-(id)_functionCallWithName:(id)arg1 arguments:(id)arg2 ;
-(id)_callbackWithBody:(id)arg1 parameterList:(id)arg2 ;
-(id)_genericIdentifiersWithPrefix:(id)arg1 count:(unsigned long long)arg2 ;
-(id)_applicationForCallbackWithName:(id)arg1 ;
-(id)_promiseWithName:(id)arg1 additionalSource:(id)arg2 ;
-(NSString *)scriptNamespace;
-(id)promiseFunctionWithName:(id)arg1 parameterCount:(unsigned long long)arg2 ;
-(id)voidFunctionWithName:(id)arg1 parameterCount:(unsigned long long)arg2 ;
@end

