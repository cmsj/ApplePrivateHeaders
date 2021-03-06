/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/Versions/A/ExtensionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExtensionKit/ExtensionKit-Structs.h>
#import <Foundation/NSExtension.h>

@protocol PKPlugIn;
@class NSString, NSDictionary, NSUUID, NSMutableDictionary, NSBundle, NSSet;

@interface EXConcreteExtension : NSExtension {

	os_unfair_lock_s _unfairLock;
	char _observingHostAppStateChanges;
	NSString* _identifier;
	NSString* _version;
	NSDictionary* _attributes;
	NSDictionary* _infoDictionary;
	NSString* __localizedName;
	NSString* __localizedShortName;
	NSString* _extensionPointIdentifier;
	NSUUID* _connectionUUID;
	long long _wantsDedicatedQueue;
	id<PKPlugIn> __plugIn;
	NSMutableDictionary* __extensionServiceConnections;
	NSMutableDictionary* __extensionExpirationIdentifiers;
	NSMutableDictionary* __extensionContexts;
	id __stashedPlugInConnection;
	/*^block*/id _requestCompletionBlock;
	/*^block*/id _requestCancellationBlock;
	/*^block*/id _requestInterruptionBlock;
	/*^block*/id __requestPostCompletionBlock;
	/*^block*/id __requestPostCompletionBlockWithItems;
	NSBundle* __extensionBundle;
	NSSet* __allowedErrorClasses;

}

@property (copy,readonly) NSString * _localizedName;                                                                                                         //@synthesize _localizedName=__localizedName - In the implementation block
@property (copy,readonly) NSString * _localizedShortName;                                                                                                    //@synthesize _localizedShortName=__localizedShortName - In the implementation block
@property (setter=_setPlugIn:,retain) id<PKPlugIn> _plugIn;                                                                                                  //@synthesize _plugIn=__plugIn - In the implementation block
@property (retain,readonly) NSBundle * _extensionBundle;                                                                                                     //@synthesize _extensionBundle=__extensionBundle - In the implementation block
@property (copy) id _requestPostCompletionBlock;                                                                                                             //@synthesize _requestPostCompletionBlock=__requestPostCompletionBlock - In the implementation block
@property (copy) id _requestPostCompletionBlockWithItems;                                                                                                    //@synthesize _requestPostCompletionBlockWithItems=__requestPostCompletionBlockWithItems - In the implementation block
@property (readonly) double requestTeardownDelay; 
@property (copy) NSUUID * connectionUUID;                                                                                                                    //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (assign) long long wantsDedicatedQueue;                                                                                                            //@synthesize wantsDedicatedQueue=_wantsDedicatedQueue - In the implementation block
@property (setter=_setExtensionExpirationsIdentifiers:,retain) NSMutableDictionary * _extensionExpirationIdentifiers;                                        //@synthesize _extensionExpirationIdentifiers=__extensionExpirationIdentifiers - In the implementation block
@property (setter=_setExtensionServiceConnections:,retain) NSMutableDictionary * _extensionServiceConnections;                                               //@synthesize _extensionServiceConnections=__extensionServiceConnections - In the implementation block
@property (setter=_setExtensionContexts:,retain) NSMutableDictionary * _extensionContexts;                                                                   //@synthesize _extensionContexts=__extensionContexts - In the implementation block
@property (setter=_setExtensionState:,getter=_extensionState,copy) NSDictionary * _extensionState; 
@property (setter=_setAllowedErrorClasses:,copy) NSSet * _allowedErrorClasses;                                                                               //@synthesize _allowedErrorClasses=__allowedErrorClasses - In the implementation block
@property (assign,setter=_setObservingHostAppStateChanges:,getter=_isObservingHostAppStateChanges,nonatomic) char observingHostAppStateChanges;              //@synthesize observingHostAppStateChanges=_observingHostAppStateChanges - In the implementation block
@property (retain) id _stashedPlugInConnection;                                                                                                              //@synthesize _stashedPlugInConnection=__stashedPlugInConnection - In the implementation block
+(void)initialize;
+(id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2 ;
+(void)extensionsWithMatchingAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)endMatchingExtensions:(id)arg1 ;
+(id)extensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(char)arg2 error:(id*)arg3 ;
+(void)extensionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)extensionWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(char)_shouldLogExtensionDiscovery;
+(id)globalStateQueueForExtension:(id)arg1 ;
+(char)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(id)predicateForActivationRule:(id)arg1 ;
+(char)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(void)initializeFiltering;
+(char)_inputItemsMatchActiveWebPageAlternative:(id)arg1 ;
+(id)_inputItemsByApplyingActiveWebPageAlternative:(id)arg1 ifNeededByActivationRule:(id)arg2 ;
+(char)_evaluateActivationRule:(id)arg1 withInputItemsIfTheyMatchActiveWebPageAlternative:(id)arg2 matchResult:(out long long*)arg3 ;
+(char)_genericValuesMatchActiveWebPageAlternativeWithExtensionItems:(id)arg1 attachmentsLens:(/*^block*/id)arg2 registeredTypeIdentifiersLens:(/*^block*/id)arg3 isActiveWebPageAttachmentCheck:(/*^block*/id)arg4 ;
+(char)_evaluateActivationRule:(id)arg1 withDictionaryIfItMatchesActiveWebPageAlternative:(id)arg2 matchResult:(out long long*)arg3 ;
+(char)_matchingDictionaryMatchesActiveWebPageAlternative:(id)arg1 ;
+(id)_dictionaryIncludingOnlyItemsWithRegisteredTypeIdentifier:(id)arg1 fromMatchingDictionary:(id)arg2 ;
+(void)extensionsWithMatchingAttributes:(id)arg1 synchronously:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)identifier;
-(id)infoDictionary;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(id)version;
-(NSString *)_localizedName;
-(NSString *)_localizedShortName;
-(id)attributes;
-(id)_extensionContextForUUID:(id)arg1 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)_allowedErrorClasses;
-(id)_initWithPKPlugin:(id)arg1 ;
-(void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id*)arg3 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)beginExtensionRequestWithInputItems:(id)arg1 error:(id*)arg2 ;
-(void)cancelExtensionRequestWithIdentifier:(id)arg1 ;
-(char)attemptOptIn:(id*)arg1 ;
-(char)attemptOptOut:(id*)arg1 ;
-(void)_setAllowedErrorClasses:(id)arg1 ;
-(int)pidForRequestIdentifier:(id)arg1 ;
-(void)_safelyBeginUsing:(/*^block*/id)arg1 ;
-(void)_safelyEndUsing:(/*^block*/id)arg1 ;
-(char)_isPhotoServiceAccessGranted;
-(void)_kill:(int)arg1 ;
-(void)_hostWillEnterForegroundNote:(id)arg1 ;
-(void)_hostDidEnterBackgroundNote:(id)arg1 ;
-(void)_hostWillResignActiveNote:(id)arg1 ;
-(void)_hostDidBecomeActiveNote:(id)arg1 ;
-(void)_dropAssertion;
-(long long)wantsDedicatedQueue;
-(char)_wantsProcessPerRequest;
-(id<PKPlugIn>)_plugIn;
-(NSBundle *)_extensionBundle;
-(id)_requestPostCompletionBlock;
-(id)_requestPostCompletionBlockWithItems;
-(id)extensionPointIdentifier;
-(id)icons;
-(char)optedIn;
-(/*^block*/id)requestCompletionBlock;
-(/*^block*/id)requestCancellationBlock;
-(/*^block*/id)requestInterruptionBlock;
-(void)setRequestCancellationBlock:(/*^block*/id)arg1 ;
-(void)setRequestInterruptionBlock:(/*^block*/id)arg1 ;
-(char)_isMarkedNew;
-(void)setRequestCompletionBlock:(/*^block*/id)arg1 ;
-(void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_inputItemsByApplyingActiveWebPageAlternativeIfNeeded:(id)arg1 ;
-(NSMutableDictionary *)_extensionServiceConnections;
-(void)_setExtensionServiceConnections:(id)arg1 ;
-(NSMutableDictionary *)_extensionContexts;
-(void)_setExtensionContexts:(id)arg1 ;
-(void)setWantsDedicatedQueue:(long long)arg1 ;
-(id)_newExtensionContextAndGetConnection:(id*)arg1 assertion:(id)arg2 pkUUID:(id)arg3 inputItems:(id)arg4 ;
-(void)_reallyBeginExtensionRequestWithContext:(id)arg1 extensionServiceConnection:(id)arg2 listenerEndpoint:(id)arg3 synchronously:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)_bareExtensionServiceConnection;
-(void)_didCreateExtensionContext:(id)arg1 ;
-(id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 error:(id*)arg4 ;
-(void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 pkUUID:(id)arg2 processAssertion:(id)arg3 listenerEndpoint:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_safelyBeginUsingWithOptions:(unsigned long long)arg1 pkUUID:(id)arg2 withAssertion_onSafeQueue:(/*^block*/id)arg3 ;
-(char)_beginUsingAndCreateExtensionAssertion:(id*)arg1 options:(unsigned long long)arg2 pkUUID:(id)arg3 error:(id*)arg4 ;
-(id)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 error:(id*)arg3 ;
-(double)requestTeardownDelay;
-(id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2 ;
-(int)_plugInProcessIdentifier;
-(void)set_stashedPlugInConnection:(id)arg1 ;
-(void)_safelyBeginUsingSynchronously:(char)arg1 options:(unsigned long long)arg2 pkUUID:(id)arg3 withAssertion_onSafeQueue:(/*^block*/id)arg4 ;
-(void)_safelyEndUsingRequestWithPKUUID:(id)arg1 processAssertion:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(id)_stashedPlugInConnection;
-(id)extensionContexts;
-(char)_isSystemExtension;
-(NSUUID *)connectionUUID;
-(void)setConnectionUUID:(NSUUID *)arg1 ;
-(void)_setPlugIn:(id)arg1 ;
-(NSMutableDictionary *)_extensionExpirationIdentifiers;
-(void)_setExtensionExpirationsIdentifiers:(id)arg1 ;
-(void)set_requestPostCompletionBlock:(id)arg1 ;
-(void)set_requestPostCompletionBlockWithItems:(id)arg1 ;
-(char)_isObservingHostAppStateChanges;
-(void)_setObservingHostAppStateChanges:(char)arg1 ;
-(NSDictionary *)_extensionState;
-(void)_setExtensionState:(id)arg1 ;
-(void)_didShowExtensionManagementInterface;
-(void)_didShowNewExtensionIndicator;
-(void)_resetExtensionState;
@end

