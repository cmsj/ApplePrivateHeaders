/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMVariableControllerProtocol, AMActionDelegate, AMActionRunnerProtocol;
#import <Automator/Automator-Structs.h>
@class NSMutableDictionary, NSDictionary, NSString, NSImage, _AMActionAuxiliary, _AMVariableActionTarget, AMWorkflow, NSArray, NSView, NSMutableArray, NSNumber, NSDate, NSBundle, NSSet, NSAttributedString, AMActionCompletionResults, NSError;

@interface AMAction : NSObject {

	NSMutableDictionary* _definition;
	NSDictionary* _argumentsWithOutlets;
	NSString* _currentInput;
	NSString* _error;
	NSString* _output;
	id _currentRunner;
	AMAction* _loopParent;
	NSString* _actionDescription;
	NSImage* _icon;
	unsigned long long _relevance;
	char _showsRelevance;
	char _stopped;
	id _future;
	id _future2;
	id _future3;
	id _future4;
	_AMActionAuxiliary* __auxiliaryStorage;
	id<AMVariableControllerProtocol> __variableController;
	_AMVariableActionTarget* __variableActionTarget;
	AMWorkflow* _workflow;
	id<AMActionDelegate> __delegate;
	NSImage* __largeIcon;
	id<AMActionRunnerProtocol> _runner;

}

@property (nonatomic,retain) id _output;                                                                   //@synthesize output=_output - In the implementation block
@property (assign,nonatomic,__weak) AMAction * loopParent;                                                 //@synthesize loopParent=_loopParent - In the implementation block
@property (assign,nonatomic,__weak) id<AMVariableControllerProtocol> _variableController;                  //@synthesize _variableController=__variableController - In the implementation block
@property (nonatomic,retain) _AMVariableActionTarget * _variableActionTarget;                              //@synthesize _variableActionTarget=__variableActionTarget - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _definition;                                            //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) _AMActionAuxiliary * _auxiliaryStorage;                                     //@synthesize _auxiliaryStorage=__auxiliaryStorage - In the implementation block
@property (assign,nonatomic,__weak) AMWorkflow * workflow;                                                 //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) id<AMActionDelegate> _delegate;                                        //@synthesize _delegate=__delegate - In the implementation block
@property (nonatomic,retain) NSImage * icon; 
@property (nonatomic,retain) NSImage * _icon;                                                              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSImage * largeIcon; 
@property (nonatomic,retain) NSImage * _largeIcon;                                                         //@synthesize _largeIcon=__largeIcon - In the implementation block
@property (nonatomic,readonly) NSString * iconPath; 
@property (assign,nonatomic,__weak) id<AMActionRunnerProtocol> runner;                                     //@synthesize runner=_runner - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * comment; 
@property (assign,setter=_setIsDeprecated:,getter=isDeprecated,nonatomic) char deprecated; 
@property (assign,setter=setDisabled:,getter=isDisabled,nonatomic) char disabled; 
@property (assign,setter=setCollapsed:,getter=isCollapsed,nonatomic) char collapsed; 
@property (nonatomic,readonly) char hasValueForCollapsed; 
@property (nonatomic,copy,readonly) NSMutableDictionary * _definitionForPasteboard; 
@property (nonatomic,readonly) NSArray * unlocalizedApplications; 
@property (nonatomic,retain) NSArray * keywords; 
@property (nonatomic,copy,readonly) NSDictionary * warningDictionary; 
@property (nonatomic,retain) NSArray * requiredResources; 
@property (nonatomic,retain) NSArray * resourceFailures; 
@property (nonatomic,readonly) char hasResourceFailures; 
@property (nonatomic,readonly) char hasView; 
@property (nonatomic,readonly) char isViewLoaded; 
@property (nonatomic,readonly) NSView * view; 
@property (nonatomic,readonly) char hasOutput; 
@property (assign,nonatomic) char hasBeenRun; 
@property (nonatomic,readonly) NSMutableArray * inputConnectionPoints; 
@property (nonatomic,readonly) NSMutableArray * outputConnectionPoints; 
@property (assign,nonatomic) unsigned long long relevance;                                                 //@synthesize relevance=_relevance - In the implementation block
@property (nonatomic,readonly) NSNumber * relevanceAsNSNumber; 
@property (nonatomic,retain) NSDate * dateAdded; 
@property (assign,nonatomic) unsigned long long useCount; 
@property (nonatomic,readonly) NSBundle * bundle; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * UUID; 
@property (getter=isGenericAction,nonatomic,readonly) char genericAction; 
@property (getter=_isPassThroughAction,nonatomic,readonly) char _passThroughAction; 
@property (assign,setter=setCustomAction:,getter=isCustomAction,nonatomic) char customAction; 
@property (nonatomic,retain) NSDictionary * providesDictionary; 
@property (nonatomic,readonly) NSString * providesContainer; 
@property (nonatomic,readonly) NSArray * _providesTypes; 
@property (nonatomic,copy,readonly) NSSet * outputTypeNames; 
@property (nonatomic,readonly) char providesOutput; 
@property (nonatomic,readonly) NSAttributedString * richTextOutput; 
@property (nonatomic,readonly) unsigned long long countOfOutput; 
@property (nonatomic,readonly) NSMutableArray * outputAsArrayOfResultsItems; 
@property (nonatomic,readonly) char hasOutputAsArrayOfResultsItems; 
@property (nonatomic,retain) NSDictionary * acceptsDictionary; 
@property (nonatomic,readonly) NSArray * _acceptsTypes; 
@property (nonatomic,copy,readonly) NSArray * _acceptsTypesOrSelectedInputType; 
@property (nonatomic,readonly) NSString * acceptsContainer; 
@property (nonatomic,copy,readonly) NSSet * inputTypeNames; 
@property (nonatomic,readonly) char acceptsInput; 
@property (nonatomic,readonly) char canIgnoreInput; 
@property (assign,nonatomic) char ignoresInput; 
@property (nonatomic,readonly) char hasGenericInputType; 
@property (nonatomic,readonly) char hasGenericOutputType; 
@property (assign,nonatomic) long long conversionLabel; 
@property (nonatomic,readonly) NSDictionary * arguments; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,readonly) char hasOptions; 
@property (nonatomic,retain) NSMutableDictionary * parameters; 
@property (nonatomic,retain) NSMutableDictionary * runtimeParameters; 
@property (nonatomic,retain) NSMutableDictionary * parameterProperties; 
@property (assign,nonatomic) NSRange errorRange; 
@property (nonatomic,retain) NSString * errorString; 
@property (nonatomic,retain) NSNumber * errorNumber; 
@property (getter=isLeaf,nonatomic,readonly) char leaf; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) AMActionCompletionResults * completionResults; 
@property (nonatomic,readonly) char _allowsDarkAppearance; 
@property (nonatomic,copy,readonly) NSArray * applications; 
@property (getter=isLoaded,nonatomic,readonly) char loaded; 
@property (nonatomic,readonly) NSError * loadingError; 
@property (nonatomic,readonly) char canShowWhenRun; 
@property (nonatomic,readonly) char canShowSelectedItemsWhenRun; 
@property (assign,nonatomic) char showWhenRun; 
@property (assign,nonatomic) char showOnlySelectedItemsWhenRun; 
@property (nonatomic,retain) NSArray * selectedShowWhenRunItemNames; 
@property (nonatomic,readonly) NSArray * allShowWhenRunItems; 
@property (nonatomic,readonly) NSArray * showWhenRunItemsForEditing; 
@property (nonatomic,readonly) NSArray * selectedShowWhenRunItems; 
@property (nonatomic,retain) NSArray * customActionVariablePropertyLists; 
@property (nonatomic,readonly) char containsVariables; 
@property (nonatomic,__weak,readonly) id<AMVariableControllerProtocol> variableController; 
@property (nonatomic,retain) NSString * selectedInputType; 
@property (nonatomic,retain) NSString * selectedOutputType; 
@property (assign) double progressValue; 
@property (nonatomic,retain) id output; 
@property (getter=isStopped,nonatomic,readonly) char stopped;                                              //@synthesize stopped=_stopped - In the implementation block
+(char)supportsRuntimeParameters;
+(char)checkCustomActionsDirectoryOnDisk;
+(char)writeCustomActionToDiskWithProperties:(id)arg1 ;
+(id)pasteboardPropertyListForActionOrProxyAction:(id)arg1 allowDefaultDefinitionFallback:(char)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)resume;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(id<AMActionDelegate>)_delegate;
-(NSString *)bundleIdentifier;
-(NSString *)version;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)value;
-(NSString *)bundleVersion;
-(NSString *)UUID;
-(void)pause;
-(NSView *)view;
-(void)reset;
-(NSDictionary *)arguments;
-(char)isLoaded;
-(void)_reset;
-(void)setValue:(NSString *)arg1 ;
-(char)isStopped;
-(void)stop;
-(NSNumber *)errorNumber;
-(NSString *)errorString;
-(NSBundle *)bundle;
-(NSArray *)keywords;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSImage *)_icon;
-(void)closed;
-(NSMutableDictionary *)parameters;
-(char)isCollapsed;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(char)isLeaf;
-(char)control:(id)arg1 isValidObject:(id)arg2 ;
-(char)isViewLoaded;
-(void)set_delegate:(id<AMActionDelegate>)arg1 ;
-(void)setCollapsed:(char)arg1 ;
-(_AMActionAuxiliary *)_auxiliaryStorage;
-(void)setDisabled:(char)arg1 ;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(NSArray *)applications;
-(void)_stop;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(id)_output;
-(void)setUUID:(NSString *)arg1 ;
-(void)activated;
-(id)definition;
-(void)_closed;
-(void)_activated;
-(NSMutableDictionary *)_definition;
-(char)isDisabled;
-(void)_updateParameters;
-(void)updateParameters;
-(NSString *)iconPath;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
-(NSMutableDictionary *)runtimeParameters;
-(id)categories;
-(char)hasOptions;
-(void)setCategories:(id)arg1 ;
-(void)setUseCount:(unsigned long long)arg1 ;
-(unsigned long long)useCount;
-(NSDate *)dateAdded;
-(id)output;
-(void)setOutput:(id)arg1 ;
-(void)setDateAdded:(NSDate *)arg1 ;
-(AMWorkflow *)workflow;
-(void)setWorkflow:(AMWorkflow *)arg1 ;
-(char)isDeprecated;
-(void)setErrorString:(NSString *)arg1 ;
-(void)setRunner:(id<AMActionRunnerProtocol>)arg1 ;
-(id<AMActionRunnerProtocol>)runner;
-(void)_stop:(id)arg1 ;
-(void)setApplications:(NSArray *)arg1 ;
-(NSImage *)largeIcon;
-(void)setLargeIcon:(NSImage *)arg1 ;
-(NSImage *)_largeIcon;
-(void)_opened;
-(double)progressValue;
-(void)willOpen;
-(void)willBecomeActive;
-(id)descriptionDictionary;
-(void)opened;
-(void)setRelevance:(unsigned long long)arg1 ;
-(unsigned long long)relevance;
-(void)setProgressValue:(double)arg1 ;
-(NSError *)loadingError;
-(id)errorWithException:(id)arg1 ;
-(NSMutableArray *)inputConnectionPoints;
-(NSMutableArray *)outputConnectionPoints;
-(NSMutableArray *)outputAsArrayOfResultsItems;
-(NSAttributedString *)richTextOutput;
-(NSString *)selectedInputType;
-(void)setSelectedInputType:(NSString *)arg1 ;
-(NSString *)selectedOutputType;
-(void)setSelectedOutputType:(NSString *)arg1 ;
-(void)generateUUIDs;
-(NSDictionary *)acceptsDictionary;
-(NSDictionary *)providesDictionary;
-(NSString *)acceptsContainer;
-(NSArray *)_acceptsTypes;
-(char)_isPassThroughAction;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(AMAction *)loopParent;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)didFinishRunningWithError:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)_runWithInputDeprecated:(id)arg1 ;
-(id)_runWithInput:(id)arg1 ;
-(void)setLoopParent:(AMAction *)arg1 ;
-(char)acceptsInput;
-(char)ignoresInput;
-(id)_emptyInput;
-(char)showWhenRun;
-(void)setHasBeenRun:(char)arg1 ;
-(id)createRuntimeParameters;
-(void)setRuntimeParameters:(NSMutableDictionary *)arg1 ;
-(void)willFinishRunning;
-(id)errorWithErrorDictionary:(id)arg1 ;
-(void)_resetForRunningLocally:(id)arg1 ;
-(void)setErrorNumber:(NSNumber *)arg1 ;
-(void)setErrorRange:(NSRange)arg1 ;
-(void)resetForLoop;
-(void)writeToDictionary:(id)arg1 ;
-(char)containsVariables;
-(char)parameterKeyIsBoundToAMTokenField:(id)arg1 ;
-(char)isAMAction__;
-(NSMutableDictionary *)_definitionForPasteboard;
-(char)hasView;
-(void)parametersUpdated;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(void)set_icon:(NSImage *)arg1 ;
-(void)set_largeIcon:(NSImage *)arg1 ;
-(id<AMVariableControllerProtocol>)variableController;
-(NSMutableDictionary *)parameterProperties;
-(id)_variablePropertyListsFromActionParameters;
-(char)isGenericAction;
-(NSArray *)_providesTypes;
-(char)canIgnoreInput;
-(char)canShowWhenRun;
-(void)addInputConnectionPoint:(id)arg1 ;
-(void)addOutputConnectionPoint:(id)arg1 ;
-(char)treatsOutputAsValue;
-(void)set_output:(id)arg1 ;
-(id)createOutputAsArrayOfResultsItems;
-(id)conversionPath;
-(NSRange)errorRange;
-(char)hasBeenRun;
-(id)_variablesCompletingSubstring:(id)arg1 ;
-(_AMVariableActionTarget *)_variableActionTarget;
-(void)set_variableActionTarget:(_AMVariableActionTarget *)arg1 ;
-(void)setVariableController:(id<AMVariableControllerProtocol>)arg1 ;
-(id<AMVariableControllerProtocol>)_variableController;
-(void)set_variableController:(id<AMVariableControllerProtocol>)arg1 ;
-(id)evaluateParameterValue:(id)arg1 ;
-(NSArray *)allShowWhenRunItems;
-(NSArray *)selectedShowWhenRunItemNames;
-(NSString *)providesContainer;
-(void)runWithInput:(id)arg1 loopParent:(id)arg2 ;
-(id)_runConversionActionWithInput:(id)arg1 error:(id*)arg2 ;
-(id)propertyListWithError:(id*)arg1 ;
-(void)_parametersUpdated;
-(void)parametersChanged;
-(void)setResourceFailures:(NSArray *)arg1 ;
-(NSArray *)resourceFailures;
-(char)hasResourceFailures;
-(char)providesOutput;
-(void)setIgnoresInput:(char)arg1 ;
-(char)hasGenericInputType;
-(char)hasGenericOutputType;
-(id)_descriptionViewItem;
-(NSArray *)unlocalizedApplications;
-(NSDictionary *)warningDictionary;
-(NSArray *)requiredResources;
-(void)setRequiredResources:(NSArray *)arg1 ;
-(char)hasValueForCollapsed;
-(void)_setIsDeprecated:(char)arg1 ;
-(id)deprecatedReplacementActionsStringAsHTML:(char)arg1 ;
-(void)setAcceptsDictionary:(NSDictionary *)arg1 ;
-(void)setProvidesDictionary:(NSDictionary *)arg1 ;
-(NSSet *)inputTypeNames;
-(NSArray *)_acceptsTypesOrSelectedInputType;
-(NSSet *)outputTypeNames;
-(void)setParameterProperties:(NSMutableDictionary *)arg1 ;
-(id)createNewParameterProperties;
-(void)updateParameterProperties;
-(char)isCustomAction;
-(void)setCustomAction:(char)arg1 ;
-(NSArray *)customActionVariablePropertyLists;
-(void)setCustomActionVariablePropertyLists:(NSArray *)arg1 ;
-(NSNumber *)relevanceAsNSNumber;
-(char)containsSearchValue:(id)arg1 mask:(long long)arg2 ;
-(char)containsKeywords:(id)arg1 ;
-(char)containsCategories:(id)arg1 ;
-(char)hasOutput;
-(char)acceptsProgramControl;
-(unsigned long long)countOfOutput;
-(char)hasOutputAsArrayOfResultsItems;
-(long long)conversionLabel;
-(void)setConversionLabel:(long long)arg1 ;
-(void)addToConversionPath:(id)arg1 ;
-(void)clearConversionPath;
-(char)_allowsDarkAppearance;
-(void)removeInputConnectionPoint:(id)arg1 ;
-(void)removeOutputConnectionPoint:(id)arg1 ;
-(void)markRemotelyStopped;
-(void)markRemotelyCompletedWithResults:(id)arg1 ;
-(AMActionCompletionResults *)completionResults;
-(void)logMessageWithLevel:(unsigned long long)arg1 format:(id)arg2 ;
-(void)setShowWhenRun:(char)arg1 ;
-(char)canShowSelectedItemsWhenRun;
-(char)showOnlySelectedItemsWhenRun;
-(void)setShowOnlySelectedItemsWhenRun:(char)arg1 ;
-(void)setSelectedShowWhenRunItemNames:(NSArray *)arg1 ;
-(NSArray *)showWhenRunItemsForEditing;
-(NSArray *)selectedShowWhenRunItems;
-(void)set_definition:(NSMutableDictionary *)arg1 ;
-(id)_am_convertForSendingOverXPCWithWorkflow:(id)arg1 ;
@end

