/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/Versions/A/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <AXRuntime/AXGroupable.h>

@class AXElementGroup, AXUIElement, NSString, NSArray, NSURL, NSDictionary;

@interface AXElement : NSObject <AXGroupable> {

	char _representsScannerGroup;
	AXUIElement* _uiElement;
	AXElementGroup* _parentGroup;
	NSString* _localizedStringKey;
	NSString* _localizationBundleID;
	NSString* _localizationBundlePath;
	NSString* _localizedStringTableName;
	AXElement* _cachedRemoteParent;
	AXElement* _cachedRemoteParentForContextID;
	CGPathRef _cachedPath;
	CGRect _cachedFrame;
	CGRect _cachedVisibleFrame;

}

@property (nonatomic,retain) AXUIElement * uiElement;                                                            //@synthesize uiElement=_uiElement - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParent;                                                     //@synthesize cachedRemoteParent=_cachedRemoteParent - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParentForContextID;                                         //@synthesize cachedRemoteParentForContextID=_cachedRemoteParentForContextID - In the implementation block
@property (nonatomic,retain) CGPathRef cachedPath;                                                               //@synthesize cachedPath=_cachedPath - In the implementation block
@property (assign,nonatomic) CGRect cachedFrame;                                                                 //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (assign,nonatomic) CGRect cachedVisibleFrame;                                                          //@synthesize cachedVisibleFrame=_cachedVisibleFrame - In the implementation block
@property (nonatomic,readonly) AXUIElementRef elementRef; 
@property (nonatomic,readonly) char isSystemWideElement; 
@property (assign,getter=isPassivelyListeningForEvents,nonatomic) char passivelyListeningForEvents; 
@property (nonatomic,readonly) AXElement * currentApplication; 
@property (nonatomic,readonly) NSArray * currentApplications; 
@property (nonatomic,readonly) NSArray * currentApplicationsIgnoringSiri; 
@property (nonatomic,readonly) AXElement * springBoardApplication; 
@property (nonatomic,readonly) AXElement * systemApplication; 
@property (nonatomic,readonly) AXElement * accessibilityUIServerApplication; 
@property (nonatomic,readonly) char isScreenLocked; 
@property (nonatomic,readonly) long long applicationOrientation; 
@property (nonatomic,readonly) NSArray * visibleElements; 
@property (nonatomic,readonly) AXElement * firstResponder; 
@property (nonatomic,readonly) AXElement * nativeFocusElement; 
@property (nonatomic,readonly) AXElement * nativeFocusPreferredElement; 
@property (nonatomic,readonly) AXElement * firstElementInApplication; 
@property (nonatomic,readonly) AXElement * firstElementInApplicationForFocus; 
@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) NSString * processName; 
@property (nonatomic,readonly) char isSpringBoard; 
@property (nonatomic,readonly) char isSystemApplication; 
@property (nonatomic,readonly) char isControlCenterVisible; 
@property (nonatomic,readonly) char isAXUIServer; 
@property (nonatomic,readonly) NSArray * explorerElements; 
@property (nonatomic,readonly) NSArray * nativeFocusableElements; 
@property (nonatomic,readonly) NSArray * elementsWithSemanticContext; 
@property (nonatomic,readonly) NSArray * siriContentNativeFocusableElements; 
@property (nonatomic,readonly) NSArray * siriContentElementsWithSemanticContext; 
@property (nonatomic,readonly) AXElement * application; 
@property (nonatomic,readonly) char isAccessibleElement; 
@property (nonatomic,readonly) char isVisible; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * speakThisString; 
@property (nonatomic,readonly) NSString * localizedStringKey;                                                    //@synthesize localizedStringKey=_localizedStringKey - In the implementation block
@property (nonatomic,readonly) NSString * localizationBundleID;                                                  //@synthesize localizationBundleID=_localizationBundleID - In the implementation block
@property (nonatomic,readonly) NSString * localizationBundlePath;                                                //@synthesize localizationBundlePath=_localizationBundlePath - In the implementation block
@property (nonatomic,readonly) NSString * localizedStringTableName;                                              //@synthesize localizedStringTableName=_localizedStringTableName - In the implementation block
@property (nonatomic,readonly) NSString * hint; 
@property (nonatomic,readonly) NSString * speechInputLabel; 
@property (nonatomic,readonly) NSArray * userInputLabels; 
@property (assign,nonatomic) NSString * value; 
@property (nonatomic,readonly) CGPathRef path; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) CGRect visibleFrame; 
@property (nonatomic,readonly) CGRect textCursorFrame; 
@property (nonatomic,readonly) CGPoint centerPoint; 
@property (nonatomic,readonly) CGPoint visiblePoint; 
@property (nonatomic,readonly) CGRect focusableFrameForZoom; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) AXElement * touchContainer; 
@property (nonatomic,readonly) unsigned long long containerType; 
@property (nonatomic,readonly) char isKeyboardKey; 
@property (nonatomic,readonly) char isTouchContainer; 
@property (nonatomic,readonly) char hasWebContent; 
@property (nonatomic,readonly) char hasTextEntry; 
@property (nonatomic,readonly) char isMathEquation; 
@property (nonatomic,readonly) unsigned windowContextId; 
@property (nonatomic,readonly) unsigned windowDisplayId; 
@property (nonatomic,readonly) NSArray * variantKeys; 
@property (nonatomic,readonly) char hasVariantKeys; 
@property (nonatomic,readonly) NSArray * textOperations; 
@property (nonatomic,readonly) NSArray * typingCandidates; 
@property (assign,nonatomic) char assistiveTechFocused; 
@property (nonatomic,readonly) NSArray * customActions; 
@property (nonatomic,readonly) NSArray * drags; 
@property (nonatomic,readonly) NSArray * drops; 
@property (nonatomic,readonly) char isAccessibilityOpaqueElementProvider; 
@property (nonatomic,readonly) NSDictionary * semanticContext; 
@property (nonatomic,readonly) AXElement * remoteParent; 
@property (nonatomic,readonly) AXElement * elementParent; 
@property (nonatomic,readonly) unsigned long long scanningBehaviorTraits; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) char applicationIsModal; 
@property (nonatomic,readonly) NSRange rowRange; 
@property (nonatomic,readonly) char required; 
@property (nonatomic,readonly) NSString * roleDescription; 
@property (nonatomic,readonly) NSString * textualContext; 
@property (nonatomic,readonly) char isComboBox; 
@property (assign,nonatomic) NSRange selectedTextRange; 
@property (getter=isNativeFocused,nonatomic,readonly) char nativeFocus; 
@property (nonatomic,readonly) char canPerformEscape; 
@property (nonatomic,readonly) char canPerformZoom; 
@property (nonatomic,readonly) NSArray * supportedGestures; 
@property (nonatomic,readonly) AXElement * elementForTextInsertionAndDeletion; 
@property (nonatomic,readonly) char isScannerElement; 
@property (nonatomic,readonly) char representsScannerGroup;                                                      //@synthesize representsScannerGroup=_representsScannerGroup - In the implementation block
@property (nonatomic,readonly) long long scannerActivateBehavior; 
@property (nonatomic,retain) AXElement * autoscrollTarget; 
@property (nonatomic,readonly) char isAutoscrolling; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * parent; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                                                       //@synthesize parentGroup=_parentGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemWideElement;
+(id)elementWithUIElement:(id)arg1 ;
+(id)elementWithAXUIElement:(AXUIElementRef)arg1 ;
+(id)elementsWithUIElements:(id)arg1 ;
+(id)primaryApp;
+(void)unregisterNotifications:(id)arg1 ;
+(void)registerNotifications:(id)arg1 withIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3 ;
+(id)elementAtCoordinate:(CGPoint)arg1 withVisualPadding:(char)arg2 ;
+(id)applicationAtCoordinate:(CGPoint)arg1 ;
+(id)elementWithData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(char)isValid;
-(NSString *)identifier;
-(CGPathRef)path;
-(NSString *)value;
-(NSURL *)url;
-(AXElement *)application;
-(int)pid;
-(NSString *)label;
-(NSArray *)parent;
-(NSString *)language;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)processName;
-(NSArray *)children;
-(id)serializeToData;
-(char)isGroup;
-(char)performAction:(int)arg1 ;
-(CGRect)visibleFrame;
-(CGRect)frame;
-(AXElement *)firstResponder;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 ;
-(char)isVisible;
-(AXElement *)currentApplication;
-(void)insertText:(id)arg1 ;
-(void)_updateLabel;
-(NSArray *)customActions;
-(NSArray *)textOperations;
-(NSRange)selectedTextRange;
-(unsigned long long)traits;
-(NSString *)bundleId;
-(char)isSystemApplication;
-(AXElement *)systemApplication;
-(char)isScreenLocked;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(void)scrollToTop;
-(char)required;
-(char)supportsAction:(int)arg1 ;
-(char)isMap;
-(NSString *)roleDescription;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(void)scrollToBottom;
-(char)press;
-(char)isSpringBoard;
-(unsigned long long)containerType;
-(void)updateCache:(long long)arg1 ;
-(char)scrollToVisible;
-(void)deleteText;
-(char)zoomIn;
-(char)zoomOut;
-(NSString *)hint;
-(id)accessibilityLocalizedStringKey;
-(char)longPress;
-(AXElementGroup *)parentGroup;
-(CGPoint)centerPoint;
-(CGRect)cachedFrame;
-(void)setCachedFrame:(CGRect)arg1 ;
-(id)initWithUIElement:(id)arg1 ;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(NSArray *)visibleElements;
-(id)previousElementsWithCount:(unsigned long long)arg1 ;
-(id)nextElementsWithCount:(unsigned long long)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(id)_objectForRange:(NSRange)arg1 withParameterizedAttribute:(long long)arg2 ;
-(NSArray *)currentApplications;
-(AXUIElement *)uiElement;
-(AXUIElementRef)elementRef;
-(void)setCachedVisibleFrame:(CGRect)arg1 ;
-(id)elementForAttribute:(long long)arg1 shouldFetchAttributes:(char)arg2 ;
-(id)_elementForAttribute:(long long)arg1 shouldUpdateCache:(char)arg2 shouldFetchAttributes:(char)arg3 ;
-(char)isSystemWideElement;
-(id)_axElementsForAXUIElements:(id)arg1 ;
-(id)elementForAttribute:(long long)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(NSArray *)userInputLabels;
-(CGPathRef)cachedPath;
-(unsigned)windowContextId;
-(CGPathRef)convertPath:(CGPathRef)arg1 fromContextId:(unsigned)arg2 ;
-(void)setCachedPath:(CGPathRef)arg1 ;
-(CGRect)cachedVisibleFrame;
-(id)containerTypes;
-(char)hasAllTraits:(unsigned long long)arg1 ;
-(char)hasAnyTraits:(unsigned long long)arg1 ;
-(AXElement *)touchContainer;
-(char)hasWebContent;
-(id)_textOperationsOperator;
-(AXElement *)remoteParent;
-(AXElement *)cachedRemoteParent;
-(void)setCachedRemoteParent:(AXElement *)arg1 ;
-(AXElement *)cachedRemoteParentForContextID;
-(void)setCachedRemoteParentForContextID:(AXElement *)arg1 ;
-(char)hasTextEntry;
-(char)isKeyboardKey;
-(char)isMathEquation;
-(char)_showContextMenuWithTargetPointValue:(id)arg1 ;
-(char)canPerformActivate;
-(char)canPerformSecondaryActivate;
-(char)canPerformEscape;
-(char)canPerformZoom;
-(char)canPerformTrackingDetail;
-(id)_remoteParentForContextID;
-(char)_performActivate;
-(CGPoint)visiblePoint;
-(char)performAction:(int)arg1 withValue:(id)arg2 ;
-(char)_zoomInOrOut:(char)arg1 ;
-(void)insertText:(id)arg1 asUndoableAction:(char)arg2 ;
-(id)_uiElementForTextInsertionAndDeletion;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(unsigned)displayIdForContextId:(unsigned)arg1 ;
-(unsigned)contextIdForPoint:(CGPoint)arg1 ;
-(id)elementForAttribute:(long long)arg1 parameter:(id)arg2 ;
-(id)elementsForAttribute:(long long)arg1 parameter:(id)arg2 ;
-(id)elementsForAttribute:(long long)arg1 ;
-(char)isPassivelyListeningForEvents;
-(void)setPassivelyListeningForEvents:(char)arg1 ;
-(NSArray *)currentApplicationsIgnoringSiri;
-(AXElement *)springBoardApplication;
-(char)applicationIsModal;
-(id)carPlaySystemApplication;
-(AXElement *)accessibilityUIServerApplication;
-(void)sendUserEventOccurred;
-(char)systemPressTVSelectButton;
-(char)systemPressTVPlayPauseButton;
-(char)systemPressTVUpButton;
-(char)systemPressTVDownButton;
-(char)systemPressTVLeftButton;
-(char)systemPressTVRightButton;
-(char)systemPressTVMenuButton;
-(char)systemLongPressTVMenuButton;
-(char)systemPressTVHomeButton;
-(char)systemLongPressTVHomeButton;
-(char)systemPressTVSiriButton;
-(CGRect)convertRect:(CGRect)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(void)clearCachedFrame:(char)arg1 cachedVisibleFrame:(char)arg2 ;
-(long long)applicationOrientation;
-(id)firstResponderForFocus;
-(AXElement *)nativeFocusElement;
-(AXElement *)nativeFocusPreferredElement;
-(AXElement *)firstElementInApplication;
-(AXElement *)firstElementInApplicationForFocus;
-(char)isControlCenterVisible;
-(char)isAXUIServer;
-(NSArray *)explorerElements;
-(NSArray *)nativeFocusableElements;
-(NSArray *)elementsWithSemanticContext;
-(NSArray *)siriContentNativeFocusableElements;
-(NSArray *)siriContentElementsWithSemanticContext;
-(id)elementsMatchingText:(id)arg1 ;
-(id)remoteApplication;
-(char)isAccessibleElement;
-(NSString *)speakThisString;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(NSString *)speechInputLabel;
-(id)auditIssuesForOptions:(id)arg1 ;
-(CGRect)textCursorFrame;
-(CGRect)focusableFrameForZoom;
-(char)isTouchContainer;
-(NSArray *)variantKeys;
-(char)hasVariantKeys;
-(NSArray *)typingCandidates;
-(void)setAssistiveTechFocused:(char)arg1 ;
-(char)assistiveTechFocused;
-(NSArray *)drags;
-(NSArray *)drops;
-(NSRange)rowRange;
-(NSString *)textualContext;
-(char)isComboBox;
-(CGRect)boundsForTextRange:(NSRange)arg1 ;
-(char)hasOnlyTraits:(unsigned long long)arg1 ;
-(double)distanceToElement:(id)arg1 ;
-(char)isAccessibilityOpaqueElementProvider;
-(char)isNativeFocused;
-(char)viewHierarchyHasNativeFocus;
-(char)setNativeFocus;
-(char)eligibleForIconVision;
-(NSDictionary *)semanticContext;
-(AXElement *)elementParent;
-(unsigned long long)scanningBehaviorTraits;
-(char)showContextMenu;
-(char)canScrollInAtLeastOneDirection;
-(AXUIElementRef)scrollAncestorForScrollAction:(int)arg1 ;
-(unsigned)windowDisplayId;
-(NSArray *)supportedGestures;
-(void)insertTextWithAlternatives:(id)arg1 ;
-(id)alternativesForTextAtPosition:(unsigned long long)arg1 ;
-(AXElement *)elementForTextInsertionAndDeletion;
-(char)isScannerElement;
-(long long)scannerActivateBehavior;
-(AXElement *)autoscrollTarget;
-(void)setAutoscrollTarget:(AXElement *)arg1 ;
-(void)autoscrollInDirection:(unsigned long long)arg1 ;
-(void)pauseAutoscrolling;
-(char)isAutoscrolling;
-(void)increaseAutoscrollSpeed;
-(void)decreaseAutoscrollSpeed;
-(char)pressTVSelectButton;
-(char)pressTVBackButton;
-(char)pressTVMenuButton;
-(char)pressTVPlayPauseButton;
-(char)pressTVUpButton;
-(char)pressTVDownButton;
-(char)pressTVLeftButton;
-(char)pressTVRightButton;
-(char)pressTVPlayButton;
-(char)pressTVPauseButton;
-(char)pressTVStopButton;
-(char)pressTVRewindButton;
-(char)pressTVFastForwardButton;
-(char)pressTVNextTrackButton;
-(char)pressTVPreviousTrackButton;
-(char)pressTVSkipForwardsButton;
-(char)pressTVSkipBackwardsButton;
-(char)pressTVDataOnScreenButton;
-(char)pressTVMicButton;
-(void)setUiElement:(AXUIElement *)arg1 ;
-(NSString *)localizedStringKey;
-(NSString *)localizationBundleID;
-(NSString *)localizationBundlePath;
-(NSString *)localizedStringTableName;
-(char)representsScannerGroup;
-(id)makeLookingGlassRequest:(id)arg1 ;
@end

