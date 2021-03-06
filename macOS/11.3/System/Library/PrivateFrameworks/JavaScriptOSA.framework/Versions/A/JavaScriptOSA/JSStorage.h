/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JavaScriptOSA.framework/Versions/A/JavaScriptOSA
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptOSA/JavaScriptOSA-Structs.h>
@class NSString, NSArray, JSContext, NSMutableDictionary, NSMutableArray;

@interface JSStorage : NSObject {

	unsigned long long _errorNumber;
	unsigned long long _errorLineNum;
	unsigned long long _errorRangeStart;
	unsigned long long _errorRangeEnd;
	NSString* _errorMessage;
	NSString* _defaultTarget;
	/*function pointer*/void* _sendProc;
	/*function pointer*/void* _createProc;
	/*function pointer*/void* _createProgressProc;
	/*function pointer*/void* _releaseProgressProc;
	/*function pointer*/void* _activeProc;
	/*function pointer*/void* _resumeDispatchProc;
	void* _sendRefCon;
	void* _createRefCon;
	void* _activeRefCon;
	void* _resumeDispatchRefCon;
	void* _createProgressRefCon;
	void* _releaseProgressRefCon;
	NSArray* _sourceStyleAttributes;
	JSContext* _conversionContext;
	NSArray* _globalProperties;
	ComponentInstanceRecord* _componentInstance;
	NSMutableDictionary* _objects;
	NSMutableArray* _contextsBeingInspected;

}

@property (retain) NSMutableDictionary * objects;                              //@synthesize objects=_objects - In the implementation block
@property (retain) NSArray * globalProperties;                                 //@synthesize globalProperties=_globalProperties - In the implementation block
@property (retain) NSMutableArray * contextsBeingInspected;                    //@synthesize contextsBeingInspected=_contextsBeingInspected - In the implementation block
@property (assign) unsigned long long errorNumber;                             //@synthesize errorNumber=_errorNumber - In the implementation block
@property (assign) unsigned long long errorLineNum;                            //@synthesize errorLineNum=_errorLineNum - In the implementation block
@property (assign) unsigned long long errorRangeStart;                         //@synthesize errorRangeStart=_errorRangeStart - In the implementation block
@property (assign) unsigned long long errorRangeEnd;                           //@synthesize errorRangeEnd=_errorRangeEnd - In the implementation block
@property (retain) NSString * errorMessage;                                    //@synthesize errorMessage=_errorMessage - In the implementation block
@property (retain) NSString * defaultTarget;                                   //@synthesize defaultTarget=_defaultTarget - In the implementation block
@property (assign) /*function pointer*/void* sendProc;                         //@synthesize sendProc=_sendProc - In the implementation block
@property (assign) /*function pointer*/void* createProc;                       //@synthesize createProc=_createProc - In the implementation block
@property (assign) /*function pointer*/void* createProgressProc;               //@synthesize createProgressProc=_createProgressProc - In the implementation block
@property (assign) /*function pointer*/void* releaseProgressProc;              //@synthesize releaseProgressProc=_releaseProgressProc - In the implementation block
@property (assign) /*function pointer*/void* activeProc;                       //@synthesize activeProc=_activeProc - In the implementation block
@property (assign) /*function pointer*/void* resumeDispatchProc;               //@synthesize resumeDispatchProc=_resumeDispatchProc - In the implementation block
@property (assign) void* sendRefCon;                                           //@synthesize sendRefCon=_sendRefCon - In the implementation block
@property (assign) void* createRefCon;                                         //@synthesize createRefCon=_createRefCon - In the implementation block
@property (assign) void* activeRefCon;                                         //@synthesize activeRefCon=_activeRefCon - In the implementation block
@property (assign) void* resumeDispatchRefCon;                                 //@synthesize resumeDispatchRefCon=_resumeDispatchRefCon - In the implementation block
@property (assign) void* createProgressRefCon;                                 //@synthesize createProgressRefCon=_createProgressRefCon - In the implementation block
@property (assign) void* releaseProgressRefCon;                                //@synthesize releaseProgressRefCon=_releaseProgressRefCon - In the implementation block
@property (retain) NSArray * sourceStyleAttributes;                            //@synthesize sourceStyleAttributes=_sourceStyleAttributes - In the implementation block
@property (retain) JSContext * conversionContext;                              //@synthesize conversionContext=_conversionContext - In the implementation block
@property (assign) ComponentInstanceRecord* componentInstance;                 //@synthesize componentInstance=_componentInstance - In the implementation block
+(id)storageWithComponentInstance:(ComponentInstanceRecord*)arg1 ;
-(void)dealloc;
-(unsigned long long)errorNumber;
-(NSMutableDictionary *)objects;
-(int)startRecording:(unsigned*)arg1 ;
-(NSString *)errorMessage;
-(void)setErrorMessage:(NSString *)arg1 ;
-(int)stopRecording:(unsigned)arg1 ;
-(void)setObjects:(NSMutableDictionary *)arg1 ;
-(unsigned)addResult:(id)arg1 ;
-(id)itemForID:(unsigned)arg1 ;
-(unsigned)addContext:(id)arg1 ;
-(unsigned)addScript:(id)arg1 ;
-(void)setComponentInstance:(ComponentInstanceRecord*)arg1 ;
-(void)setErrorNumber:(unsigned long long)arg1 ;
-(ComponentInstanceRecord*)componentInstance;
-(void)setActiveProc:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)activeProc;
-(void)setSendProc:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)sendProc;
-(id)initWithComponentInstance:(ComponentInstanceRecord*)arg1 ;
-(NSString *)defaultTarget;
-(void)setDefaultTarget:(NSString *)arg1 ;
-(void)setErrorLineNum:(unsigned long long)arg1 ;
-(void)setErrorRangeStart:(unsigned long long)arg1 ;
-(void)setErrorRangeEnd:(unsigned long long)arg1 ;
-(unsigned long long)errorLineNum;
-(void)storeErrorInfoForScript:(id)arg1 exception:(id)arg2 message:(id)arg3 ;
-(id)scriptForID:(unsigned)arg1 ;
-(/*function pointer*/void*)createProgressProc;
-(void*)createProgressRefCon;
-(/*function pointer*/void*)releaseProgressProc;
-(void*)releaseProgressRefCon;
-(void*)sendRefCon;
-(void*)activeRefCon;
-(id)contextForID:(unsigned)arg1 ;
-(void)propagateTargetAndProcsToContext:(id)arg1 ;
-(void)setupProgressInContext:(id)arg1 ;
-(void)setIsEvaluating:(char)arg1 forContext:(unsigned)arg2 ;
-(void)teardownProgressInContext:(id)arg1 ;
-(void)setupContextForExecution:(unsigned)arg1 ;
-(void)contextWillBeInspected:(id)arg1 ;
-(void)contextDidFinishBeingInspected:(id)arg1 ;
-(void)teardownContextAfterExecution:(unsigned)arg1 ;
-(void)scriptShouldBeExecutedInContext:(unsigned)arg1 ;
-(int)handleEvent:(const AEDesc*)arg1 inContext:(unsigned)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned*)arg4 ;
-(id)evaluateScript:(id)arg1 inContextID:(unsigned)arg2 ;
-(id)displayStringForID:(unsigned)arg1 ;
-(id)sourceStringForID:(unsigned)arg1 ;
-(id)styleString:(id)arg1 ;
-(unsigned long long)errorRangeStart;
-(unsigned long long)errorRangeEnd;
-(int)dispose:(unsigned)arg1 ;
-(void)setValue:(long long)arg1 forInfoSelector:(unsigned)arg2 withID:(unsigned)arg3 ;
-(id)makeContextForID:(unsigned)arg1 ;
-(char)isScript:(unsigned)arg1 ;
-(char)isResult:(unsigned)arg1 ;
-(char)isContext:(unsigned)arg1 ;
-(long long)getValueForInfoSelector:(unsigned)arg1 withID:(unsigned)arg2 ;
-(void)setScript:(id)arg1 forID:(unsigned)arg2 ;
-(int)coerceToDesc:(unsigned)arg1 desiredType:(unsigned)arg2 modeFlags:(int)arg3 resultingDesc:(AEDesc*)arg4 ;
-(int)copySourceAttributes:(const _CFArray*)arg1 ;
-(void)styleAttributedString:(id)arg1 inRange:(NSRange)arg2 ;
-(NSArray *)sourceStyleAttributes;
-(id)_defaultSourceAttributes;
-(id)_unarchiveSourceAttributes:(id)arg1 ;
-(void)setSourceStyleAttributes:(NSArray *)arg1 ;
-(id)resultForID:(unsigned)arg1 ;
-(JSContext *)conversionContext;
-(unsigned)addLogString:(id)arg1 ;
-(void)setSendRefCon:(void*)arg1 ;
-(void)setSendProcOnAllContexts;
-(void)setActiveRefCon:(void*)arg1 ;
-(void)setActiveProcOnAllContexts;
-(void)setCreateProc:(/*function pointer*/void*)arg1 ;
-(void)setCreateRefCon:(void*)arg1 ;
-(/*function pointer*/void*)createProc;
-(void*)createRefCon;
-(void)setCreateProgressProc:(/*function pointer*/void*)arg1 ;
-(void)setCreateProgressRefCon:(void*)arg1 ;
-(void)setReleaseProgressProc:(/*function pointer*/void*)arg1 ;
-(void)setReleaseProgressRefCon:(void*)arg1 ;
-(void)setDefaultTargetOnAllContexts;
-(int)loadScriptData:(const AEDesc*)arg1 modeFlags:(int)arg2 resultingScriptID:(unsigned*)arg3 ;
-(int)executeScript:(unsigned)arg1 inContext:(unsigned)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned*)arg4 ;
-(int)disposeItem:(unsigned)arg1 ;
-(int)compileScriptData:(const AEDesc*)arg1 modeFlags:(int)arg2 scriptID:(unsigned*)arg3 ;
-(int)compileScriptData:(const AEDesc*)arg1 executeInContext:(unsigned)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned*)arg4 ;
-(int)displayResult:(unsigned)arg1 desiredType:(unsigned)arg2 modeFlags:(int)arg3 resultingResultData:(AEDesc*)arg4 ;
-(void)setResumeDispatchProc:(/*function pointer*/void*)arg1 ;
-(void)setResumeDispatchRefCon:(void*)arg1 ;
-(/*function pointer*/void*)resumeDispatchProc;
-(void*)resumeDispatchRefCon;
-(char)shouldScriptBeExecutedInContext:(unsigned)arg1 ;
-(void)scriptHasBeenExecutedInContext:(unsigned)arg1 ;
-(NSArray *)globalProperties;
-(int)closeComponent:(ComponentInstanceRecord*)arg1 ;
-(int)canPerformCommand:(short)arg1 ;
-(int)storeScript:(unsigned)arg1 desiredType:(unsigned)arg2 modeFlags:(int)arg3 resultingScriptData:(AEDesc*)arg4 ;
-(int)copyAttributedStringForItem:(unsigned)arg1 modeFlags:(int)arg2 resultingAttributedString:(const _CFAttributedString*)arg3 ;
-(int)getErrorDetail:(unsigned)arg1 desiredType:(unsigned)arg2 resultingErrorData:(AEDesc*)arg3 ;
-(int)setInfoForItem:(unsigned)arg1 infoSelector:(unsigned)arg2 value:(long long)arg3 ;
-(int)getInfoForItem:(unsigned)arg1 infoSelector:(unsigned)arg2 resultingResult:(long long*)arg3 ;
-(int)getScriptingComponentName:(AEDesc*)arg1 ;
-(int)copyItem:(unsigned)arg1 resultingItemID:(unsigned*)arg2 ;
-(int)copyScript:(unsigned)arg1 resultingScriptID:(unsigned*)arg2 ;
-(int)getSourceForID:(unsigned)arg1 desiredType:(unsigned)arg2 resultingDesc:(AEDesc*)arg3 ;
-(int)copySourceStringForScript:(unsigned)arg1 modeFlags:(int)arg2 resultingSourceString:(const _CFAttributedString*)arg3 ;
-(int)getSourceStyleNamesWithModeFlags:(int)arg1 result:(AEDesc*)arg2 ;
-(int)setSourceAttributes:(CFArrayRef)arg1 ;
-(int)coerceFromDesc:(const AEDesc*)arg1 modeFlags:(int)arg2 resultingItemID:(unsigned*)arg3 ;
-(int)setSendProc:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(int)getSendProc:(/*function pointer*/void**)arg1 refCon:(void*)arg2 ;
-(int)setActiveProc:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(int)getActiveProc:(/*function pointer*/void**)arg1 refCon:(void*)arg2 ;
-(int)setCreateProc:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(int)getCreateProc:(/*function pointer*/void**)arg1 refCon:(void*)arg2 ;
-(int)setCreateProgressProc:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(int)getCreateProgressProc:(/*function pointer*/void**)arg1 refCon:(void*)arg2 ;
-(int)setReleaseProgressProc:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(int)getReleaseProgressProc:(/*function pointer*/void**)arg1 refCon:(void*)arg2 ;
-(int)setDefaultTargetFromDesc:(const AEDesc*)arg1 ;
-(int)loadScriptData:(const AEDesc*)arg1 executeInContext:(unsigned)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned*)arg4 ;
-(int)compileScriptData:(const AEDesc*)arg1 executeInContext:(unsigned)arg2 desiredType:(unsigned)arg3 modeFlags:(int)arg4 resultingResultData:(AEDesc*)arg5 ;
-(int)setResumeDispatchProc:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(int)getResumeDispatchProc:(/*function pointer*/void**)arg1 refCon:(void*)arg2 ;
-(int)handleEvent:(const AEDesc*)arg1 inContext:(unsigned)arg2 modeFlags:(int)arg3 resultingReply:(AEDesc*)arg4 ;
-(int)makeContextWithNameData:(const AEDesc*)arg1 parentContext:(unsigned)arg2 resultingContextID:(unsigned*)arg3 ;
-(void)setConversionContext:(JSContext *)arg1 ;
-(void)setGlobalProperties:(NSArray *)arg1 ;
-(void)setContextsBeingInspected:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contextsBeingInspected;
-(void)stopObservingInspectedContext:(id)arg1 ;
-(void)inspectorDidDisconnect:(id)arg1 ;
-(void)startObservingInspectedContext:(id)arg1 ;
-(unsigned)getUnusedID;
-(id)scriptContextForID:(unsigned)arg1 ;
-(void)setContext:(id)arg1 forID:(unsigned)arg2 ;
@end

