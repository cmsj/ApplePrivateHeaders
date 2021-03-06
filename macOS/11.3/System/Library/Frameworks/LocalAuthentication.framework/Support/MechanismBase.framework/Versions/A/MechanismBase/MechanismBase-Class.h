/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/Versions/A/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol LAContextExternalizationProt, LAUIDelegate;
@class MechanismContext, NSDictionary, NSMutableDictionary, EvaluationRequest, NSError, NSMutableArray;

@interface MechanismBase : NSObject <LAUIDelegate> {

	/*^block*/id _replyToRun;
	MechanismContext* _mechanismContext;
	NSDictionary* _eventProcessing;
	NSMutableDictionary* _hints;
	unsigned _instanceId;
	char _restartable;
	char _lastRestartAttempt;
	char _precedesUI;
	long long _eventIdentifier;
	long long _remoteViewController;
	EvaluationRequest* _request;
	id<LAContextExternalizationProt> _cachedExternalizationDelegate;
	NSDictionary* _internalOptions;
	long long _policy;
	NSDictionary* _policyOptions;
	NSDictionary* _activationParams;
	id<LAUIDelegate> _eventsDelegate;
	MechanismBase* _parent;
	MechanismBase* _preCompanion;
	MechanismBase* _postCompanion;
	/*^block*/id _showUIBlock;
	NSError* _silentFailure;
	NSMutableArray* _assertions;
	NSMutableDictionary* _partialResult;

}

@property (nonatomic,readonly) NSMutableArray * assertions;                                                        //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * partialResult;                                                  //@synthesize partialResult=_partialResult - In the implementation block
@property (nonatomic,readonly) long long eventIdentifier;                                                          //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) long long remoteViewController;                                                     //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,readonly) EvaluationRequest * request;                                                        //@synthesize request=_request - In the implementation block
@property (nonatomic,__weak,readonly) id<LAContextExternalizationProt> cachedExternalizationDelegate;              //@synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * internalOptions;                                                     //@synthesize internalOptions=_internalOptions - In the implementation block
@property (nonatomic,readonly) long long policy;                                                                   //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDictionary * policyOptions;                                                       //@synthesize policyOptions=_policyOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * activationParams;                                                      //@synthesize activationParams=_activationParams - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIDelegate> eventsDelegate;                                               //@synthesize eventsDelegate=_eventsDelegate - In the implementation block
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (getter=isRestartable,nonatomic,readonly) char restartable;                                              //@synthesize restartable=_restartable - In the implementation block
@property (getter=isLastRestartAttempt,nonatomic,readonly) char lastRestartAttempt;                                //@synthesize lastRestartAttempt=_lastRestartAttempt - In the implementation block
@property (assign,nonatomic,__weak) MechanismBase * parent;                                                        //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) MechanismBase * preCompanion;                                                         //@synthesize preCompanion=_preCompanion - In the implementation block
@property (nonatomic,retain) MechanismBase * postCompanion;                                                        //@synthesize postCompanion=_postCompanion - In the implementation block
@property (nonatomic,readonly) char precedesUI;                                                                    //@synthesize precedesUI=_precedesUI - In the implementation block
@property (nonatomic,copy) id showUIBlock;                                                                         //@synthesize showUIBlock=_showUIBlock - In the implementation block
@property (nonatomic,retain) NSError * silentFailure;                                                              //@synthesize silentFailure=_silentFailure - In the implementation block
+(unsigned)newInstanceId;
-(id)tccService;
-(id)tccError:(char)arg1 ;
-(void)noResponseEventWithParams:(id)arg1 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 skipReply:(char)arg3 ;
-(MechanismBase *)preCompanion;
-(void)cancelByParent:(id)arg1 ;
-(MechanismBase *)postCompanion;
-(void)succeedAuthenticationWithResult:(id)arg1 ;
-(void)setPartialResult:(NSMutableDictionary *)arg1 ;
-(void)yieldPartialResult:(long long)arg1 value:(id)arg2 ;
-(char)_isProcessedBy:(id)arg1 ;
-(id)availabilityEventsForPurpose:(long long)arg1 ;
-(char)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1 ;
-(id<LAContextExternalizationProt>)cachedExternalizationDelegate;
-(void)subMechanismCanRestart:(id)arg1 ;
-(id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 cachedExternalizationDelegate:(id)arg3 request:(id)arg4 ;
-(char)isTCCAllowedWithAuditTokenData:(id)arg1 optionAuditTokenData:(id)arg2 forcePrompt:(char)arg3 error:(id*)arg4 ;
-(void)yieldPartialResult:(id)arg1 ;
-(id)bestEffortAvailableMechanismForRequest:(id)arg1 error:(id*)arg2 ;
-(id)backgroundMechanismForEventProcessing:(id)arg1 ;
-(long long)remoteViewControllerForEventProcessing:(id)arg1 ;
-(char)requiresUiWithEventProcessing:(id)arg1 ;
-(id)additionalControllerInternalInfoForPolicy:(long long)arg1 ;
-(void)companionStateChanged:(id)arg1 newState:(char)arg2 ;
-(void)prepareForRestart;
-(void)holdAssertionUntilFinished:(id)arg1 ;
-(id)remoteAlertViewControllerName;
-(NSDictionary *)internalOptions;
-(NSDictionary *)policyOptions;
-(NSDictionary *)activationParams;
-(void)setActivationParams:(NSDictionary *)arg1 ;
-(char)isLastRestartAttempt;
-(void)setPreCompanion:(MechanismBase *)arg1 ;
-(void)setPostCompanion:(MechanismBase *)arg1 ;
-(char)precedesUI;
-(id)showUIBlock;
-(void)setShowUIBlock:(id)arg1 ;
-(NSError *)silentFailure;
-(void)setSilentFailure:(NSError *)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithParams:(id)arg1 request:(id)arg2 ;
-(id)description;
-(MechanismBase *)parent;
-(EvaluationRequest *)request;
-(char)isRunning;
-(id)externalizedContext;
-(long long)policy;
-(NSMutableArray *)assertions;
-(void)setParent:(MechanismBase *)arg1 ;
-(long long)eventIdentifier;
-(long long)remoteViewController;
-(void)willFinish;
-(void)cancelAuthentication;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id<LAUIDelegate>)eventsDelegate;
-(void)setEventsDelegate:(id<LAUIDelegate>)arg1 ;
-(char)isAvailableForPurpose:(long long)arg1 error:(id*)arg2 ;
-(id)findMechanismWithEventIdentifier:(long long)arg1 ;
-(void)setCredential:(id)arg1 credentialType:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)succeedAuthenticationWithDefaultResult;
-(void)failAuthenticationWithError:(id)arg1 ;
-(char)isRestartable;
-(void)fallbackToIdentifier:(long long)arg1 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(id)findMechanismToRetryWithEventIdentifier:(long long)arg1 ;
-(void)restartWithEventIdentifier:(long long)arg1 lastAttempt:(char)arg2 ;
-(void)setShowingCoachingHint:(char)arg1 reply:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)partialResult;
@end

