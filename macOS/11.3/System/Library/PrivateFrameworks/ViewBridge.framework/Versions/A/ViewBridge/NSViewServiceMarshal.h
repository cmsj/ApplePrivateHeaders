/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AuxiliaryCallsService.h>
#import <libobjc.A.dylib/NSViewServiceMarshal.h>

@protocol NSViewServiceMarshal <NSVB_ViewServiceUIBehaviorInterface>
@required
-(void)hostWindowReceivedEventType:(unsigned long long)arg1;
-(void)hostWindowWillBeginSheet;
-(void)hostWindowDidEndSheet;
-(void)endPrivateEventLoop;
-(void)bootstrap:(SCD_Struct_NS9)arg1 withReply:(/*^block*/id)arg2;
-(void)setViewVibrantBlendingStyle:(unsigned long long)arg1;
-(void)setRemoteViewEffectiveAppearance:(id)arg1;
-(void)beginHostAppModalSession:(id)arg1 parameters:(const SCD_Struct_NS11*)arg2 title:(id)arg3 style:(unsigned long long)arg4 size:(CGSize)arg5 withReply:(/*^block*/id)arg6;
-(void)endHostAppModalSession:(id)arg1;
-(void)validateAction:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)performAction:(id)arg1 forTarget:(id)arg2;
-(void)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)cancelActionHitRemoteView:(/*^block*/id)arg1;
-(void)setServiceObject:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)remoteViewGeometryDidChange:(CGRect)arg1 transaction:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)obtainFirstResponderState:(/*^block*/id)arg1;
-(void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(char)arg2 inActiveApp:(char)arg3 inVisibleWindow:(char)arg4 reply:(/*^block*/id)arg5;
-(void)remoteViewResignedFirstResponderInActiveApp:(char)arg1 inFavorOf:(unsigned char)arg2;
-(void)remoteViewWillStartLiveResize;
-(void)remoteViewDidEndLiveResize:(/*^block*/id)arg1;
-(void)hostWindowBecameKeyInActiveApp:(char)arg1 firstResponderState:(unsigned char)arg2 isContentView:(char)arg3;
-(void)hostWindowResignedKeyFocus:(char)arg1 inActiveApp:(char)arg2 isContentView:(char)arg3;
-(void)hostAppAccentColorDidChange:(id)arg1;
-(void)hostWindowLevelDidChange:(long long)arg1;
-(void)remoteViewContainingWindowOcclusionStateDidChange:(unsigned long long)arg1;
-(void)willBecomeAssociatedWithHostWindow:(unsigned)arg1 atLevel:(long long)arg2 isFunctionRow:(char)arg3;
-(void)didBecomeAssociatedWithHostWindow:(unsigned)arg1 withKeyness:(char)arg2 isFirstResponder:(char)arg3 withSheet:(char)arg4 inActiveApp:(char)arg5;
-(void)setAccessoryViewSize:(CGSize)arg1 alignmentRectInsets:(NSEdgeInsets)arg2;
-(void)setRemoteAccessoryViewCanBecomeKeyView:(char)arg1;
-(void)accessibilityTokenForFocusedUIElement:(/*^block*/id)arg1;
-(void)allowAppNap:(char)arg1;
-(void)remoteViewIsContentView:(char)arg1;
-(void)invokeBlockOnCurrentFenceIfAny:(/*^block*/id)arg1;
-(void)refreshAccessoryViewBitmap:(id)arg1;
-(void)remoteViewBackingScaleFactorDidChange:(double)arg1;
-(void)remoteViewCaresAboutTouchBars:(char)arg1;
-(void)remoteViewDidChangeState:(unsigned char)arg1 ofPopoverBar:(id)arg2 forItem:(id)arg3;
-(void)snapshot:(/*^block*/id)arg1;
-(void)advanceToRunPhase:(/*^block*/id)arg1;
-(void)forgetAccessoryView;

@end

#import <libobjc.A.dylib/NSVBXPCConnectionClient.h>

@protocol NSSecureCoding, NSObject;
@class NSObject, NSString, NSAccessibilityRemoteUIElement, NSDictionary, NSResponder, NSXPCInterface, NSVB_ViewServiceBehaviorProxy, NSLayoutConstraint, NSViewBridge, NSServiceViewController, NSXPCConnection, NSMutableArray, NSArray, NSCFRunLoopObserver, NSWindow;

@interface NSViewServiceMarshal : NSView <NSXPCListenerDelegate, AuxiliaryCallsService, NSViewServiceMarshal, NSVBXPCConnectionClient> {

	NSObject*<NSSecureCoding> _hostAppClientParameters;
	NSString* _extensionIdentifier;
	NSEdgeInsets _alignmentRectInsets;
	CGSize _mostRecentlyReportedContentMinSize;
	CGSize _mostRecentlyReportedContentMaxSize;
	unsigned long long _serviceFlags;
	NSAccessibilityRemoteUIElement* _hostAccessibilityParent;
	NSDictionary* _accessoryAccessibilityChildren;
	NSResponder* _suspendedFirstResponder;
	unsigned long long _clientRequestedStyleMask;
	unsigned long long _windowIsOrdering;
	CGSRegionObjectRef _windowResizingRegion;
	CGSRegionObjectRef _visibleRegion;
	NSXPCInterface* _clientExportedInterface;
	unsigned _mostRecentlyReportedWindowContextID;
	NSVB_ViewServiceBehaviorProxy* _clientExportedObject;
	NSVB_ViewServiceBehaviorProxy* _uiBehaviorProxy;
	double _remoteViewBackingScaleFactor;
	NSLayoutConstraint* _layoutConstraintWidth;
	NSLayoutConstraint* _layoutConstraintHeight;
	NSString* _remoteViewIdentifier;
	id<NSObject> _activity;
	CGSize _sizeHint;
	CGRect _remoteViewFrameInScreenCoords;
	NSViewBridge* _bridge;
	NSServiceViewController* _viewController;
	NSXPCConnection* _auxiliaryServiceConnection;
	NSXPCConnection* _remoteViewMarshalConnection;
	unsigned char _bridgePhase;
	unsigned long long _advanceBeyondRunPhaseCount;
	unsigned long long _reportControllerWindow;
	/*^block*/id _hostWindowKeynessReactionPending;
	/*^block*/id _remoteViewFirstResponderReactionPending;
	NSMutableArray* _resizeTransactionsInProgress;
	unsigned _windowFrameAnimationsInProgress;
	unsigned char _windowKeyness;
	long long _windowOrderingMode;
	os_unfair_lock_s _retainReleaseLock;
	unsigned _advancedBeyondConfigPhase : 1;
	unsigned _deferResizeRequestsUntilAfterRunPhase : 1;
	unsigned _didConfigForRemoteViewControllerInterface : 1;
	unsigned _didSetView : 1;
	unsigned _hadAccessibilityParent : 1;
	unsigned _hasActivatedTSM : 1;
	unsigned _hostWindowFrameAnimationInProgress : 1;
	unsigned _hostWindowHasSheet : 1;
	unsigned _hostWindowIsKey : 1;
	unsigned _hostWindowKeynessChangeInProgress : 1;
	unsigned _invalid : 1;
	unsigned _notificationsRegistered : 1;
	unsigned _orderingWindow : 1;
	unsigned _remoteAccessoryViewCanBecomeKeyView : 1;
	unsigned _remoteFirstResponderChangeInProgress : 1;
	unsigned _remoteViewGeometryChangeInProgress : 1;
	unsigned _remoteViewIsContentView : 1;
	unsigned _reportedLackOfAccessibilityParent : 1;
	unsigned _resizeRequestCompletionInProgress : 1;
	unsigned _setStyleMaskInProgress : 1;
	unsigned _setWindowFrameInProgress : 1;
	unsigned _settingFirstResponder : 1;
	unsigned _shouldOrderWindowOut : 1;
	unsigned _shouldReportConstraintsOfWindowMinMaxSize : 1;
	unsigned _transactionBegun : 1;
	unsigned _willReportConstraintsOfWindowMinMaxSize : 1;
	unsigned _willUpdateAccessibilityChildren : 1;
	unsigned _hostWindowIsFunctionRow : 1;
	NSArray* _mostRecentlySentTouchBarsDescription;
	NSCFRunLoopObserver* _touchBarsObserver;
	NSWindow* _sheetOrderingFront;
	unsigned _phasedKeyCount;
	unsigned _marshalIgnoredMouseEventsDuringBootstrap : 1;
	char _remoteViewDidMoveInProgress;
	unsigned _hostWindowID;

}

@property (readonly) char hostWindowHasSheet; 
@property (readonly) NSWindow * viewControllerWindow; 
@property (readonly) char isAssociatedWithRemoteWindow; 
@property (assign) unsigned char bridgePhase;                                             //@synthesize bridgePhase=_bridgePhase - In the implementation block
@property (retain) NSAccessibilityRemoteUIElement * hostAccessibilityParent;              //@synthesize hostAccessibilityParent=_hostAccessibilityParent - In the implementation block
@property (retain) NSDictionary * accessoryAccessibilityChildren;                         //@synthesize accessoryAccessibilityChildren=_accessoryAccessibilityChildren - In the implementation block
@property (readonly) char hostWindowKeynessChangeInProgress; 
@property (assign) char settingFirstResponder; 
@property (retain) NSArray * mostRecentlySentTouchBarsDescription;                        //@synthesize mostRecentlySentTouchBarsDescription=_mostRecentlySentTouchBarsDescription - In the implementation block
@property (readonly) NSString * extensionIdentifier; 
@property (assign) char reportedLackOfAccessibilityParent; 
@property (assign) char hadAccessibilityParent; 
@property (readonly) char remoteViewIsContentView; 
@property (readonly) unsigned long long serviceFlags;                                     //@synthesize serviceFlags=_serviceFlags - In the implementation block
@property (readonly) NSServiceViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (readonly) CGSize sizeHint; 
@property (readonly) char invalid; 
@property (readonly) char isValid; 
@property (readonly) NSViewBridge * bridge;                                               //@synthesize bridge=_bridge - In the implementation block
@property (readonly) CGSize remoteViewSize; 
@property (assign) CGRect remoteViewFrameInScreenCoords;                                  //@synthesize remoteViewFrameInScreenCoords=_remoteViewFrameInScreenCoords - In the implementation block
@property (readonly) NSString * remoteViewIdentifier;                                     //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (readonly) unsigned hostWindowID;                                               //@synthesize hostWindowID=_hostWindowID - In the implementation block
@property (retain) NSVB_ViewServiceBehaviorProxy * uiBehaviorProxy;                       //@synthesize uiBehaviorProxy=_uiBehaviorProxy - In the implementation block
@property (readonly) NSEdgeInsets alignmentRectInsets;                                    //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (readonly) char hostWindowFrameAnimationInProgress; 
@property (readonly) char remoteViewDidMoveInProgress;                                    //@synthesize remoteViewDidMoveInProgress=_remoteViewDidMoveInProgress - In the implementation block
@property (readonly) SCD_Struct_NS5 hostAppAuditToken; 
@property (readonly) NSObject*<NSSecureCoding> hostAppClientParameters;                   //@synthesize hostAppClientParameters=_hostAppClientParameters - In the implementation block
@property (readonly) char hostWindowIsFunctionRow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceMarshalForServiceWindow:(id)arg1 ;
+(char)considerWindowForRendezvous:(id)arg1 ;
+(id)serviceMarshalForAppModalSession:(int)arg1 ;
+(void)patchNSView;
+(void)patchNSWindow;
+(short)requestUserInteractionWithPatience:(double)arg1 options:(unsigned long long)arg2 sender:(ProcessSerialNumber)arg3 ;
+(char)allowSetObjectForKey:(id)arg1 bridge:(id)arg2 bridgePhase:(unsigned char)arg3 withReply:(/*^block*/id)arg4 ;
+(id)semaphoreForViewBridgePrivateMode;
+(char)serviceWindowWouldActivate:(id)arg1 ;
+(char)responder:(id)arg1 isFieldEditorFor:(id)arg2 ;
+(void)logIfFirstRepsonderOf:(id)arg1 isNot:(id)arg2 ;
+(id)auxiliaryProxyFor:(const char*)arg1 ;
+(void)choseNotToRendezvous:(id)arg1 because:(const char*)arg2 ;
+(id)serviceMarshals;
+(char)beginFreeWindowRendezvous:(id)arg1 ;
+(id)hostApp;
+(void)windowDidOrderOnScreenAndFinishAnimating:(id)arg1 ;
+(id)viewBridgeAuxiliaryProxyForConnection:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
+(void)informHostsOfConnectionToService:(int)arg1 ;
+(id)serviceMarshalForTouchBarChanges;
+(id)serviceMarshalForHostWindow:(unsigned)arg1 ;
+(id)serviceMarshalForRemoteViewIdentifier:(id)arg1 ;
+(id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2 ;
+(void)windowWillOrderOnScreen:(id)arg1 ;
-(os_unfair_lock_s*)retainReleaseLock;
-(void)__vbWithLockPerform:(/*^block*/id)arg1 ;
-(void)__vbSuperRelease;
-(char)hostWindowIsFunctionRow;
-(void)adjustWindowContext;
-(CGSize)remoteViewSize;
-(void)constrainContentViewSize:(CGSize)arg1 ofWindow:(id)arg2 ;
-(char)hostWindowFrameAnimationInProgress;
-(void)forgetConstraints;
-(CGRect)remoteViewFrameInScreenCoords;
-(void)requestFrame:(CGRect)arg1 transaction:(id)arg2 animate:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)forgetViewController:(id)arg1 ;
-(void)didSetView;
-(void)hostWindowReceivedMouseEventType:(unsigned long long)arg1 ;
-(void)hostWindowReceivedEventType:(unsigned long long)arg1 ;
-(void)hostWindowWillBeginSheet;
-(void)hostWindowDidEndSheet;
-(void)endPrivateEventLoop;
-(void)bootstrap:(SCD_Struct_NS9)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setViewVibrantBlendingStyle:(unsigned long long)arg1 ;
-(void)setRemoteViewEffectiveAppearance:(id)arg1 ;
-(void)beginHostAppModalSession:(id)arg1 parameters:(const SCD_Struct_NS11*)arg2 title:(id)arg3 style:(unsigned long long)arg4 size:(CGSize)arg5 withReply:(/*^block*/id)arg6 ;
-(void)endHostAppModalSession:(id)arg1 ;
-(void)validateAction:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)performAction:(id)arg1 forTarget:(id)arg2 ;
-(void)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)cancelActionHitRemoteView:(/*^block*/id)arg1 ;
-(void)setServiceObject:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)remoteViewGeometryDidChange:(CGRect)arg1 transaction:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)obtainFirstResponderState:(/*^block*/id)arg1 ;
-(void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(char)arg2 inActiveApp:(char)arg3 inVisibleWindow:(char)arg4 reply:(/*^block*/id)arg5 ;
-(void)remoteViewResignedFirstResponderInActiveApp:(char)arg1 inFavorOf:(unsigned char)arg2 ;
-(void)remoteViewWillStartLiveResize;
-(void)remoteViewDidEndLiveResize:(/*^block*/id)arg1 ;
-(void)hostWindowBecameKeyInActiveApp:(char)arg1 firstResponderState:(unsigned char)arg2 isContentView:(char)arg3 ;
-(void)hostWindowResignedKeyFocus:(char)arg1 inActiveApp:(char)arg2 isContentView:(char)arg3 ;
-(void)hostAppAccentColorDidChange:(id)arg1 ;
-(void)hostWindowLevelDidChange:(long long)arg1 ;
-(void)remoteViewContainingWindowOcclusionStateDidChange:(unsigned long long)arg1 ;
-(void)willBecomeAssociatedWithHostWindow:(unsigned)arg1 atLevel:(long long)arg2 isFunctionRow:(char)arg3 ;
-(void)didBecomeAssociatedWithHostWindow:(unsigned)arg1 withKeyness:(char)arg2 isFirstResponder:(char)arg3 withSheet:(char)arg4 inActiveApp:(char)arg5 ;
-(void)setAccessoryViewSize:(CGSize)arg1 alignmentRectInsets:(NSEdgeInsets)arg2 ;
-(void)setRemoteAccessoryViewCanBecomeKeyView:(char)arg1 ;
-(void)accessibilityTokenForFocusedUIElement:(/*^block*/id)arg1 ;
-(void)allowAppNap:(char)arg1 ;
-(void)remoteViewIsContentView:(char)arg1 ;
-(void)invokeBlockOnCurrentFenceIfAny:(/*^block*/id)arg1 ;
-(void)refreshAccessoryViewBitmap:(id)arg1 ;
-(void)remoteViewBackingScaleFactorDidChange:(double)arg1 ;
-(void)remoteViewCaresAboutTouchBars:(char)arg1 ;
-(void)remoteViewDidChangeState:(unsigned char)arg1 ofPopoverBar:(id)arg2 forItem:(id)arg3 ;
-(void)setUiBehaviorProxy:(NSVB_ViewServiceBehaviorProxy *)arg1 ;
-(void)forwardPotentialCommandEquivalentToAuxService:(id)arg1 eventDeliveredByAppKit:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)serviceWindowWouldActivate;
-(char)beginHostSheet:(id)arg1 isCritical:(char)arg2 ;
-(int)hostAppProcessIdentifier;
-(void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 ;
-(unsigned char)bridgePhase;
-(void)setRemoteObject:(id)arg1 forKey:(id)arg2 ;
-(void)windowReceivedScrollWheel:(id)arg1 ;
-(NSAccessibilityRemoteUIElement *)hostAccessibilityParent;
-(char)hadAccessibilityParent;
-(char)reportedLackOfAccessibilityParent;
-(void)setHadAccessibilityParent:(char)arg1 ;
-(void)setReportedLackOfAccessibilityParent:(char)arg1 ;
-(void)viewDidChangeEffectiveAppearance:(id)arg1 ;
-(void)frameOfServiceWindowDidChange:(CGRect)arg1 fauxSynchronously:(char)arg2 ;
-(char)dragWindow:(id)arg1 relativeToMouseDown:(CGPoint)arg2 ;
-(char)setWindow:(id)arg1 frame:(CGRect)arg2 display:(char)arg3 stashSize:(char)arg4 ;
-(void)setEventMaskBasedOnWindow:(id)arg1 ;
-(id)orderedDrawerAndWindowKeyLoopGroupingViews:(id)arg1 ;
-(void)setWindow:(id)arg1 styleMask:(unsigned long long)arg2 ;
-(void)hierarchyDidChangeInView:(id)arg1 ;
-(void)orderWindow:(id)arg1 mode:(long long)arg2 relativeTo:(long long)arg3 ;
-(void)whileOrderingSheetFront:(id)arg1 withParent:(id)arg2 performActions:(/*^block*/id)arg3 ;
-(char)sendEvent:(id)arg1 to:(id)arg2 ;
-(char)hostWindowIsKey:(id)arg1 ;
-(char)hostWindowHasSheet;
-(char)hostWindowKeynessChangeInProgress;
-(int)hostWindowBelongsToTopAppModalSession:(id)arg1 ;
-(void)window:(id)arg1 hasRegionForOpaqueViews:(CGSRegionObjectRef)arg2 blockingDraggableFrame:(CGRect)arg3 ;
-(char)eventResizingRegionContainsPoint:(CGPoint)arg1 ;
-(void)shakeWindow:(id)arg1 ;
-(void)resignKeyWindow:(id)arg1 ;
-(void)becomeKeyWindow:(id)arg1 ;
-(char)makeFirstResponder:(id)arg1 ofWindow:(id)arg2 ;
-(double)backingScaleFactor:(id)arg1 ;
-(char)isRunningADocModalAttachedSheet:(id)arg1 ;
-(void)reportingControllerWindow:(/*^block*/id)arg1 ;
-(void)sendMinMaxWindowSizesToHostIfNeeded:(id)arg1 now:(char)arg2 ;
-(NSWindow *)viewControllerWindow;
-(void)relinquishKeyboardFocus:(const char*)arg1 ;
-(void)resignFirstResponderIfNecessary;
-(void)maintainNotificationsForWindow:(char)arg1 ;
-(void)invalidateAccessoryView;
-(void)orderWindowOutIfNeeded:(id)arg1 ;
-(void)disengageFromAllWindows;
-(void)invalidateAndReleaseConnectionOnMainThread;
-(id)remoteViewMarshal:(const char*)arg1 ;
-(void)informHostOfConnectionToService:(int)arg1 ;
-(id)remoteViewMarshal:(const char*)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)failedImplicitResize:(CGSize)arg1 ofWindow:(id)arg2 withError:(id)arg3 ;
-(void)implicitResize:(CGSize)arg1 ofWindow:(id)arg2 ;
-(void)actualSize:(CGSize)arg1 differsFromSpecifiedSize:(CGSize)arg2 oldSize:(CGSize)arg3 ofWindow:(id)arg4 ;
-(void)actualOrigin:(CGPoint)arg1 differsFromSpecifiedOrigin:(CGPoint)arg2 oldOrigin:(CGPoint)arg3 ofWindow:(id)arg4 ;
-(CGRect)serviceWindowFrameForRemoteViewFrame;
-(void)secondGuessingRequestedOrigin:(CGPoint)arg1 whichDeviatesFromCorrectOrigin:(CGPoint)arg2 ofWindow:(id)arg3 ;
-(void)wrap:(id)arg1 swizzledSetFrameCommon:(CGRect)arg2 display:(char)arg3 stashSize:(char)arg4 ;
-(void)willNotRequestResize:(CGSize)arg1 ofWindow:(id)arg2 because:(const char*)arg3 ;
-(void)completeWithError:(id)arg1 andRequestedSize:(CGSize)arg2 withRemoteViewSize:(CGSize)arg3 andWindow:(id)arg4 ;
-(id)viewBridgeAuxiliaryProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addChildWindow:(id)arg1 ;
-(char)settingFirstResponder;
-(char)windowIsOrderingIn;
-(void)hostAppIsActive:(char)arg1 ;
-(unsigned char)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(char)arg2 inVisibleWindow:(char)arg3 ;
-(void)remoteViewChangedFirstResponder:(/*^block*/id)arg1 ;
-(void)remoteViewResignedFirstResponderInFavorOfAccessoryView:(char)arg1 ;
-(void)informHostOfChangeToFirstResponder:(id)arg1 forWindow:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(void)observeValueForFirstResponder:(id)arg1 ;
-(void)observeValueForContentMinSize:(id)arg1 ;
-(void)observeValueForContentMaxSize:(id)arg1 ;
-(void)observeValueForContentView:(id)arg1 ;
-(void)observeValueForAccessoryView:(id)arg1 ;
-(void)observeValueForWindow:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_serviceWindowDidResize:(id)arg1 ;
-(void)_serviceWindowDidBecomeKey:(id)arg1 ;
-(void)_serviceWindowDidResignKey:(id)arg1 ;
-(void)serviceWindowDidBecomeKey;
-(void)serviceWindowDidResignKey;
-(char)activateTSM:(const char*)arg1 ;
-(char)deactivateTSM:(const char*)arg1 ;
-(void)acquireKeyboardFocus:(const char*)arg1 ;
-(void)orderingWindow:(/*^block*/id)arg1 ;
-(void)becomeKeyBecause:(const char*)arg1 ;
-(void)hostWindowChangedKeyness:(/*^block*/id)arg1 ;
-(void)acquireKeyAppearanceBecauseHostWindow:(const char*)arg1 ;
-(void)considerChildWindowsOfWindow:(id)arg1 ;
-(void)_willBecomeAssociatedWithHostWindow:(unsigned)arg1 atLevel:(long long)arg2 isFunctionRow:(char)arg3 ;
-(void)actualFrame:(CGRect)arg1 differsFromSpecifiedFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 ofWindow:(id)arg4 ;
-(char)ensureWindowHasCorrectOrigin:(id)arg1 ;
-(char)shouldAllowAnimationForDefaultResizeBehavior;
-(void)updateWindow:(id)arg1 frameAnimationStatusAfterActions:(/*^block*/id)arg2 ;
-(void)remoteViewGeometryDidChangeDueToTransaction:(id)arg1 serviceWindowSize:(CGSize*)arg2 oldRemoteViewFrameSize:(CGSize)arg3 ;
-(void)_remoteViewGeometryDidChange:(id)arg1 serviceWindowSize:(CGSize*)arg2 oldRemoteViewFrameSize:(CGSize)arg3 ;
-(void)afterResignKey;
-(void)hostWindowResignedKey:(char)arg1 ;
-(char)responder:(id)arg1 isAccessoryViewOf:(id)arg2 ;
-(void)setSettingFirstResponder:(char)arg1 ;
-(unsigned char)setFirstResponderForRemoteView:(unsigned long long)arg1 ;
-(char)setAppearanceOfWindow:(id)arg1 ;
-(void)didStealKeyboardFocus;
-(void)didReleaseKeyboardFocus;
-(void)didLoseKeyboardFocus;
-(void)handlePotentialCommandEquivalent:(id)arg1 eventOwner:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)windowForContextID:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)remoteViewHasHostAppAccentColor:(id)arg1 ;
-(void)connectToAuxiliaryService:(id)arg1 window:(unsigned)arg2 ;
-(void)setBridgePhase:(unsigned char)arg1 ;
-(char)remoteViewIsContentView;
-(char)ensureClientExportedObject;
-(void)_bootstrap:(const SCD_Struct_NS9*)arg1 replyData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)cancelActionHitRemoteView;
-(void)whileFilteringResponderChain:(/*^block*/id)arg1 ;
-(void)wrap:(id)arg1 sendEvent:(id)arg2 ;
-(void)subvertedWindowMovedEvent:(id)arg1 forWindow:(id)arg2 ;
-(void)windowReceivedLeftMouseDown:(id)arg1 ;
-(void)_orderWindow:(id)arg1 mode:(long long)arg2 relativeTo:(long long)arg3 ;
-(id)fakeMenuItemForTarget:(id)arg1 withAction:(SEL)arg2 ;
-(SCD_Struct_NS14)findTargetAndAction:(id)arg1 ;
-(char)validateTargetAndAction:(SCD_Struct_NS14*)arg1 validateMenuItem:(SCD_Struct_NS15*)arg2 validateUserInterfaceItem:(SCD_Struct_NS15*)arg3 ;
-(void)setHostAccessibilityParent:(NSAccessibilityRemoteUIElement *)arg1 ;
-(void)cacheHostAccessibilityParentUsingToken:(id)arg1 ;
-(void)setEnhancedUserInterfaceAttribute:(id)arg1 ;
-(id)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 ;
-(id)updateAccessoryViewAccessibility:(id)arg1 ;
-(void)setAccessoryAccessibilityChildren:(NSDictionary *)arg1 ;
-(id)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 ;
-(NSDictionary *)accessoryAccessibilityChildren;
-(void)serviceAccessoryViewBecameFirstResponder:(char)arg1 ;
-(void)discloseAccessoryView:(char)arg1 withAnimationState:(int)arg2 andDuration:(double)arg3 ;
-(void)sendMinMaxWindowSizesToHostIfNeeded:(id)arg1 ;
-(id)accessibilityTokenForFocusedUIElement;
-(char)ensureClientExportedInterface;
-(id)concretizedWindowBackgroundColor;
-(void)_runCommandEquivalentEventLoop;
-(char)stopCommandEquivalentEventLoop;
-(void)runCommandEquivalentEventLoop;
-(void)_remoteViewDidChangeState:(unsigned char)arg1 ofPopoverBar:(id)arg2 forItem:(id)arg3 ;
-(void)hasTouchBars:(id)arg1 ;
-(void)hideTouchBarPopover:(id)arg1 ;
-(void)showTouchBarPopover:(id)arg1 fromItem:(id)arg2 withOverlayIdentifier:(id)arg3 withCloseButton:(char)arg4 withControlStrip:(char)arg5 withOptions:(id)arg6 ;
-(void)setMostRecentlySentTouchBarsDescription:(NSArray *)arg1 ;
-(char)isAssociatedWithRemoteWindow;
-(id)accessoryViewForWindow:(id)arg1 ;
-(char)shouldDrawSubviewsIntoLayer;
-(char)accessoryViewCanBecomeKeyView;
-(void)remoteViewReceivedLeftMouseDown:(long long)arg1 ;
-(void)_invokeBlockOnCurrentFenceIfAny:(/*^block*/id)arg1 ;
-(void)forwardActionUpHostResponderChain:(SEL)arg1 ;
-(void)withHostWindowFrameAnimationInProgress:(char)arg1 perform:(/*^block*/id)arg2 ;
-(void)setHostTouchBarItem:(id)arg1 itemPosition:(id)arg2 ;
-(void)setHostTouchBar:(id)arg1 description:(id)arg2 ;
-(void)setHostTouchBar:(id)arg1 principalItemIdentifier:(id)arg2 ;
-(void)setHostTouchBar:(id)arg1 escapeKeyReplacementItem:(id)arg2 ;
-(void)setRemoteViewFrameInScreenCoords:(CGRect)arg1 ;
-(unsigned long long)serviceFlags;
-(NSVB_ViewServiceBehaviorProxy *)uiBehaviorProxy;
-(NSArray *)mostRecentlySentTouchBarsDescription;
-(unsigned)hostWindowID;
-(char)remoteViewDidMoveInProgress;
-(id)retain;
-(oneway void)release;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(char)isValid;
-(id)initWithConnection:(id)arg1 ;
-(SCD_Struct_NS5)auditToken;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(id)window;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSEdgeInsets)alignmentRectInsets;
-(char)canBecomeKeyView;
-(void)addChildWindow:(id)arg1 ordered:(long long)arg2 ;
-(void)removeChildWindow:(id)arg1 ;
-(char)_ignoreBadFirstResponders;
-(NSServiceViewController *)viewController;
-(NSViewBridge *)bridge;
-(char)invalid;
-(NSString *)extensionIdentifier;
-(NSObject*<NSSecureCoding>)hostAppClientParameters;
-(CGSize)sizeHint;
-(char)advanceToRunPhase;
-(void)associateMouseAndMouseCursorPosition:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteViewControllerProxy:(/*^block*/id)arg1 ;
-(void)snapshot:(/*^block*/id)arg1 ;
-(void)retreatToConfigPhase;
-(void)advanceToRunPhase:(/*^block*/id)arg1 ;
-(void)forgetAccessoryView;
-(NSString *)remoteViewIdentifier;
-(SCD_Struct_NS5)hostAppAuditToken;
-(void)declineKeyboardEventsOtherThan:(id)arg1 ;
-(void)defaultResizeBehavior;
-(void)prepareWindow:(id)arg1 ;
@end

