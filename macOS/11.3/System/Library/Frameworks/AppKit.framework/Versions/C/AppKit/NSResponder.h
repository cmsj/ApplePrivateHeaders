/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSTouchBarProviderContainer.h>
#import <libobjc.A.dylib/NSUIActivityProvider.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>
#import <libobjc.A.dylib/_NSQuickActionItemSource.h>
#import <libobjc.A.dylib/NSDynamicPropertyContainer.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSKeyValueDependencyInfo, NSTouchBar, NSString, NSUserActivity, NSMenu;

@interface NSResponder : NSObject <NSTouchBarProviderContainer, NSUIActivityProvider, NSTouchBarProvider, _NSQuickActionItemSource, NSDynamicPropertyContainer, NSCoding> {

	id _nextResponder;
	AI _rc;
	NSKeyValueDependencyInfo* _dependencyInfo;

}

@property (readonly) NSTouchBar * touchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) NSResponder * _hostedFirstResponder; 
@property (readonly) NSString * _responderDebugDescription; 
@property (retain) NSUserActivity * userActivity; 
@property (retain) NSTouchBar * touchBar; 
@property (readonly) id<NSServicesRequestor> servicesRequestor; 
@property (__weak,readonly) id<NSServicesRequestor> servicesRequestor; 
@property (readonly) id<_NSQuickActionItemSource> additionalQuickActionItemSource; 
@property (assign) NSResponder * nextResponder; 
@property (readonly) char acceptsFirstResponder; 
@property (retain) NSMenu * menu; 
@property (retain) NSKeyValueDependencyInfo * dependencyInfo; 
@property (readonly) char _isDeallocating; 
+(char)automaticallyNotifiesObserversOfTouchBar;
+(char)automaticallyTracksDependenciesOnValueForKey:(id)arg1 ;
+(id)restorableStateKeyPaths;
+(char)automaticallyNotifiesObserversOfServicesRequestor;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMenu *)menu;
-(void)userActivityWasContinued:(id)arg1 ;
-(char)acceptsFirstResponder;
-(void)tabletPoint:(id)arg1 ;
-(void)pressureChangeWithEvent:(id)arg1 ;
-(void)setAccessibilitySubrole:(id)arg1 ;
-(id)accessibilitySubrole;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityDecrementButton;
-(id)accessibilityIncrementButton;
-(id)accessibilityParent;
-(id)accessibilityChildren;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(long long)accessibilityIndex;
-(id)accessibilityCustomActions;
-(CGRect)accessibilityFrame;
-(id)accessibilityChildrenInNavigationOrder;
-(char)isAccessibilityElement;
-(char)performKeyEquivalent:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(NSResponder *)nextResponder;
-(long long)accessibilityRowCount;
-(id)accessibilityVisibleChildren;
-(void)setAccessibilityIndex:(long long)arg1 ;
-(id)accessibilityRoleDescription;
-(long long)accessibilityColumnCount;
-(id)accessibilitySelectedChildren;
-(void)setAccessibilitySelectedChildren:(id)arg1 ;
-(id)accessibilitySelectedCells;
-(void)_touchesCancelledWithEvent:(id)arg1 ;
-(void)_touchesBeganWithEvent:(id)arg1 ;
-(void)_touchesMovedWithEvent:(id)arg1 ;
-(void)_touchesEndedWithEvent:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setTouchBar:(NSTouchBar *)arg1 ;
-(NSTouchBar *)touchBar;
-(id)validRequestorForSendType:(id)arg1 returnType:(id)arg2 ;
-(void)invalidateRestorableState;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(unsigned)_persistentUIWindowID;
-(void)doCommandBySelector:(SEL)arg1 ;
-(char)isAccessibilityFocused;
-(id)accessibilityIdentifier;
-(CGPoint)accessibilityLayoutPointForScreenPoint:(CGPoint)arg1 ;
-(CGSize)accessibilityLayoutSizeForScreenSize:(CGSize)arg1 ;
-(CGPoint)accessibilityScreenPointForLayoutPoint:(CGPoint)arg1 ;
-(CGSize)accessibilityScreenSizeForLayoutSize:(CGSize)arg1 ;
-(id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2 ;
-(id)accessibilityAttributedStringForRange:(NSRange)arg1 ;
-(NSRange)accessibilityRangeForLine:(long long)arg1 ;
-(id)accessibilityStringForRange:(NSRange)arg1 ;
-(NSRange)accessibilityRangeForPosition:(CGPoint)arg1 ;
-(NSRange)accessibilityRangeForIndex:(long long)arg1 ;
-(CGRect)accessibilityFrameForRange:(NSRange)arg1 ;
-(id)accessibilityRTFForRange:(NSRange)arg1 ;
-(NSRange)accessibilityStyleRangeForIndex:(long long)arg1 ;
-(long long)accessibilityLineForIndex:(long long)arg1 ;
-(char)accessibilityPerformCancel;
-(char)accessibilityPerformConfirm;
-(char)accessibilityPerformDecrement;
-(char)accessibilityPerformDelete;
-(char)accessibilityPerformIncrement;
-(char)accessibilityPerformPick;
-(char)accessibilityPerformPress;
-(char)accessibilityPerformRaise;
-(char)accessibilityPerformShowAlternateUI;
-(char)accessibilityPerformShowDefaultUI;
-(char)accessibilityPerformShowMenu;
-(char)isAccessibilitySelectorAllowed:(SEL)arg1 ;
-(void)setAccessibilityElement:(char)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityFocused:(char)arg1 ;
-(CGPoint)accessibilityActivationPoint;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(id)accessibilityTopLevelUIElement;
-(void)setAccessibilityTopLevelUIElement:(id)arg1 ;
-(id)accessibilityURL;
-(void)setAccessibilityURL:(id)arg1 ;
-(id)accessibilityValue;
-(void)setAccessibilityValue:(id)arg1 ;
-(id)accessibilityValueDescription;
-(void)setAccessibilityValueDescription:(id)arg1 ;
-(void)setAccessibilityVisibleChildren:(id)arg1 ;
-(id)accessibilityTitle;
-(void)setAccessibilityTitle:(id)arg1 ;
-(id)accessibilityTitleUIElement;
-(void)setAccessibilityTitleUIElement:(id)arg1 ;
-(id)accessibilityNextContents;
-(void)setAccessibilityNextContents:(id)arg1 ;
-(long long)accessibilityOrientation;
-(void)setAccessibilityOrientation:(long long)arg1 ;
-(id)accessibilityOverflowButton;
-(void)setAccessibilityOverflowButton:(id)arg1 ;
-(void)setAccessibilityParent:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
-(void)setAccessibilityPlaceholderValue:(id)arg1 ;
-(id)accessibilityPreviousContents;
-(void)setAccessibilityPreviousContents:(id)arg1 ;
-(void)setAccessibilityRole:(id)arg1 ;
-(void)setAccessibilityRoleDescription:(id)arg1 ;
-(id)accessibilitySearchButton;
-(void)setAccessibilitySearchButton:(id)arg1 ;
-(id)accessibilitySearchMenu;
-(void)setAccessibilitySearchMenu:(id)arg1 ;
-(char)isAccessibilitySelected;
-(void)setAccessibilitySelected:(char)arg1 ;
-(id)accessibilityServesAsTitleForUIElements;
-(void)setAccessibilityServesAsTitleForUIElements:(id)arg1 ;
-(id)accessibilityShownMenu;
-(void)setAccessibilityShownMenu:(id)arg1 ;
-(id)accessibilityMinValue;
-(void)setAccessibilityMinValue:(id)arg1 ;
-(id)accessibilityMaxValue;
-(void)setAccessibilityMaxValue:(id)arg1 ;
-(id)accessibilityLinkedUIElements;
-(void)setAccessibilityLinkedUIElements:(id)arg1 ;
-(id)accessibilityWindow;
-(void)setAccessibilityWindow:(id)arg1 ;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(id)accessibilityHelp;
-(void)setAccessibilityHelp:(id)arg1 ;
-(id)accessibilityFilename;
-(void)setAccessibilityFilename:(id)arg1 ;
-(char)isAccessibilityExpanded;
-(void)setAccessibilityExpanded:(char)arg1 ;
-(char)isAccessibilityEdited;
-(void)setAccessibilityEdited:(char)arg1 ;
-(char)isAccessibilityEnabled;
-(void)setAccessibilityEnabled:(char)arg1 ;
-(void)setAccessibilityChildren:(id)arg1 ;
-(void)setAccessibilityChildrenInNavigationOrder:(id)arg1 ;
-(id)accessibilityClearButton;
-(void)setAccessibilityClearButton:(id)arg1 ;
-(id)accessibilityCancelButton;
-(void)setAccessibilityCancelButton:(id)arg1 ;
-(char)isAccessibilityProtectedContent;
-(void)setAccessibilityProtectedContent:(char)arg1 ;
-(id)accessibilityContents;
-(void)setAccessibilityContents:(id)arg1 ;
-(char)isAccessibilityAlternateUIVisible;
-(void)setAccessibilityAlternateUIVisible:(char)arg1 ;
-(id)accessibilitySharedFocusElements;
-(void)setAccessibilitySharedFocusElements:(id)arg1 ;
-(char)isAccessibilityRequired;
-(void)setAccessibilityRequired:(char)arg1 ;
-(id)accessibilityCustomRotors;
-(void)setAccessibilityCustomRotors:(id)arg1 ;
-(id)accessibilityApplicationFocusedUIElement;
-(void)setAccessibilityApplicationFocusedUIElement:(id)arg1 ;
-(id)accessibilityMainWindow;
-(void)setAccessibilityMainWindow:(id)arg1 ;
-(char)isAccessibilityHidden;
-(void)setAccessibilityHidden:(char)arg1 ;
-(char)isAccessibilityFrontmost;
-(void)setAccessibilityFrontmost:(char)arg1 ;
-(id)accessibilityFocusedWindow;
-(void)setAccessibilityFocusedWindow:(id)arg1 ;
-(id)accessibilityWindows;
-(void)setAccessibilityWindows:(id)arg1 ;
-(id)accessibilityExtrasMenuBar;
-(void)setAccessibilityExtrasMenuBar:(id)arg1 ;
-(id)accessibilityMenuBar;
-(void)setAccessibilityMenuBar:(id)arg1 ;
-(id)accessibilityColumnTitles;
-(void)setAccessibilityColumnTitles:(id)arg1 ;
-(char)isAccessibilityOrderedByRow;
-(void)setAccessibilityOrderedByRow:(char)arg1 ;
-(long long)accessibilityHorizontalUnits;
-(void)setAccessibilityHorizontalUnits:(long long)arg1 ;
-(long long)accessibilityVerticalUnits;
-(void)setAccessibilityVerticalUnits:(long long)arg1 ;
-(id)accessibilityHorizontalUnitDescription;
-(void)setAccessibilityHorizontalUnitDescription:(id)arg1 ;
-(id)accessibilityVerticalUnitDescription;
-(void)setAccessibilityVerticalUnitDescription:(id)arg1 ;
-(id)accessibilityHandles;
-(void)setAccessibilityHandles:(id)arg1 ;
-(id)accessibilityWarningValue;
-(void)setAccessibilityWarningValue:(id)arg1 ;
-(id)accessibilityCriticalValue;
-(void)setAccessibilityCriticalValue:(id)arg1 ;
-(char)isAccessibilityDisclosed;
-(void)setAccessibilityDisclosed:(char)arg1 ;
-(id)accessibilityDisclosedByRow;
-(void)setAccessibilityDisclosedByRow:(id)arg1 ;
-(id)accessibilityDisclosedRows;
-(void)setAccessibilityDisclosedRows:(id)arg1 ;
-(long long)accessibilityDisclosureLevel;
-(void)setAccessibilityDisclosureLevel:(long long)arg1 ;
-(id)accessibilityMarkerUIElements;
-(void)setAccessibilityMarkerUIElements:(id)arg1 ;
-(id)accessibilityMarkerValues;
-(void)setAccessibilityMarkerValues:(id)arg1 ;
-(id)accessibilityMarkerGroupUIElement;
-(void)setAccessibilityMarkerGroupUIElement:(id)arg1 ;
-(long long)accessibilityUnits;
-(void)setAccessibilityUnits:(long long)arg1 ;
-(id)accessibilityUnitDescription;
-(void)setAccessibilityUnitDescription:(id)arg1 ;
-(long long)accessibilityRulerMarkerType;
-(void)setAccessibilityRulerMarkerType:(long long)arg1 ;
-(id)accessibilityMarkerTypeDescription;
-(void)setAccessibilityMarkerTypeDescription:(id)arg1 ;
-(id)accessibilityHorizontalScrollBar;
-(void)setAccessibilityHorizontalScrollBar:(id)arg1 ;
-(id)accessibilityVerticalScrollBar;
-(void)setAccessibilityVerticalScrollBar:(id)arg1 ;
-(id)accessibilityAllowedValues;
-(void)setAccessibilityAllowedValues:(id)arg1 ;
-(id)accessibilityLabelUIElements;
-(void)setAccessibilityLabelUIElements:(id)arg1 ;
-(float)accessibilityLabelValue;
-(void)setAccessibilityLabelValue:(float)arg1 ;
-(id)accessibilitySplitters;
-(void)setAccessibilitySplitters:(id)arg1 ;
-(void)setAccessibilityDecrementButton:(id)arg1 ;
-(void)setAccessibilityIncrementButton:(id)arg1 ;
-(id)accessibilityTabs;
-(void)setAccessibilityTabs:(id)arg1 ;
-(id)accessibilityHeader;
-(void)setAccessibilityHeader:(id)arg1 ;
-(void)setAccessibilityColumnCount:(long long)arg1 ;
-(void)setAccessibilityRowCount:(long long)arg1 ;
-(id)accessibilityColumns;
-(void)setAccessibilityColumns:(id)arg1 ;
-(id)accessibilityRows;
-(void)setAccessibilityRows:(id)arg1 ;
-(id)accessibilityVisibleRows;
-(void)setAccessibilityVisibleRows:(id)arg1 ;
-(id)accessibilitySelectedRows;
-(void)setAccessibilitySelectedRows:(id)arg1 ;
-(id)accessibilityVisibleColumns;
-(void)setAccessibilityVisibleColumns:(id)arg1 ;
-(id)accessibilitySelectedColumns;
-(void)setAccessibilitySelectedColumns:(id)arg1 ;
-(long long)accessibilitySortDirection;
-(void)setAccessibilitySortDirection:(long long)arg1 ;
-(id)accessibilityRowHeaderUIElements;
-(void)setAccessibilityRowHeaderUIElements:(id)arg1 ;
-(void)setAccessibilitySelectedCells:(id)arg1 ;
-(id)accessibilityVisibleCells;
-(void)setAccessibilityVisibleCells:(id)arg1 ;
-(id)accessibilityColumnHeaderUIElements;
-(void)setAccessibilityColumnHeaderUIElements:(id)arg1 ;
-(NSRange)accessibilityRowIndexRange;
-(void)setAccessibilityRowIndexRange:(NSRange)arg1 ;
-(NSRange)accessibilityColumnIndexRange;
-(void)setAccessibilityColumnIndexRange:(NSRange)arg1 ;
-(long long)accessibilityInsertionPointLineNumber;
-(void)setAccessibilityInsertionPointLineNumber:(long long)arg1 ;
-(NSRange)accessibilitySharedCharacterRange;
-(void)setAccessibilitySharedCharacterRange:(NSRange)arg1 ;
-(id)accessibilitySharedTextUIElements;
-(void)setAccessibilitySharedTextUIElements:(id)arg1 ;
-(NSRange)accessibilityVisibleCharacterRange;
-(void)setAccessibilityVisibleCharacterRange:(NSRange)arg1 ;
-(long long)accessibilityNumberOfCharacters;
-(void)setAccessibilityNumberOfCharacters:(long long)arg1 ;
-(id)accessibilitySelectedText;
-(void)setAccessibilitySelectedText:(id)arg1 ;
-(NSRange)accessibilitySelectedTextRange;
-(void)setAccessibilitySelectedTextRange:(NSRange)arg1 ;
-(id)accessibilitySelectedTextRanges;
-(void)setAccessibilitySelectedTextRanges:(id)arg1 ;
-(id)accessibilityToolbarButton;
-(void)setAccessibilityToolbarButton:(id)arg1 ;
-(char)isAccessibilityModal;
-(void)setAccessibilityModal:(char)arg1 ;
-(id)accessibilityProxy;
-(void)setAccessibilityProxy:(id)arg1 ;
-(char)isAccessibilityMain;
-(void)setAccessibilityMain:(char)arg1 ;
-(id)accessibilityFullScreenButton;
-(void)setAccessibilityFullScreenButton:(id)arg1 ;
-(id)accessibilityGrowArea;
-(void)setAccessibilityGrowArea:(id)arg1 ;
-(id)accessibilityDocument;
-(void)setAccessibilityDocument:(id)arg1 ;
-(id)accessibilityDefaultButton;
-(void)setAccessibilityDefaultButton:(id)arg1 ;
-(id)accessibilityCloseButton;
-(void)setAccessibilityCloseButton:(id)arg1 ;
-(id)accessibilityZoomButton;
-(void)setAccessibilityZoomButton:(id)arg1 ;
-(id)accessibilityMinimizeButton;
-(void)setAccessibilityMinimizeButton:(id)arg1 ;
-(char)isAccessibilityMinimized;
-(void)setAccessibilityMinimized:(char)arg1 ;
-(void)setAccessibilityCustomActions:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)quickLookPreviewItemsAtWindowLocation:(CGPoint)arg1 ;
-(void)setMenu:(NSMenu *)arg1 ;
-(char)presentError:(id)arg1 ;
-(id)willPresentError:(id)arg1 ;
-(void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)_dealloc;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)scrollWheel:(id)arg1 ;
-(void)setNextResponder:(NSResponder *)arg1 ;
-(char)performMnemonic:(id)arg1 ;
-(id)undoManager;
-(char)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2 ;
-(id)accessibilityResultsForSearchPredicate:(id)arg1 ;
-(id)accessibilityHeaderForColumnIndex:(long long)arg1 ;
-(id)accessibilityHeaderForRowIndex:(long long)arg1 ;
-(id)accessibilityAuditIssues;
-(void)setAccessibilityAuditIssues:(id)arg1 ;
-(char)isAccessibilityAutoInteractable;
-(void)setAccessibilityAutoInteractable:(char)arg1 ;
-(long long)accessibilityContainerType;
-(void)setAccessibilityContainerType:(long long)arg1 ;
-(id)accessibilityUserInputLabels;
-(void)setAccessibilityUserInputLabels:(id)arg1 ;
-(id)accessibilityAttributedUserInputLabels;
-(void)setAccessibilityAttributedUserInputLabels:(id)arg1 ;
-(id)accessibilityCustomChoosers;
-(void)setAccessibilityCustomChoosers:(id)arg1 ;
-(id)_accessibilityLabel;
-(char)isAccessibilityEnhancedUserInterface;
-(void)setAccessibilityEnhancedUserInterface:(char)arg1 ;
-(id)accessibilityFunctionRowTopLevelElements;
-(void)setAccessibilityFunctionRowTopLevelElements:(id)arg1 ;
-(char)isAccessibilityMimicNativeView;
-(void)setAccessibilityMimicNativeView:(char)arg1 ;
-(id)accessibilitySections;
-(void)setAccessibilitySections:(id)arg1 ;
-(id)accessibilityHeaderGroup;
-(void)setAccessibilityHeaderGroup:(id)arg1 ;
-(CGRect)accessibilityFrameInParentSpace;
-(void)setAccessibilityFrameInParentSpace:(CGRect)arg1 ;
-(id)accessibilityPreviousContentSibling;
-(void)setPreviousContentSibling:(id)arg1 ;
-(id)accessibilityNextContentSibling;
-(void)setNextContentSibling:(id)arg1 ;
-(id)accessibilityContentSiblingAbove;
-(void)setAccessibilityContentSiblingAbove:(id)arg1 ;
-(id)accessibilityContentSiblingBelow;
-(void)setAccessibilityContentSiblingBelow:(id)arg1 ;
-(char)accessibilityOverridesAlwaysTakePrecedence;
-(void)setAccessibilityOverridesAlwaysTakePrecedence:(char)arg1 ;
-(id)makeTouchBar;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)interpretKeyEvents:(id)arg1 ;
-(id)NS_touchBarProviders;
-(id)NS_touchBarProvidersKeyPaths;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)translateWithEvent:(id)arg1 ;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(char)shouldBeTreatedAsInkEvent:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(NSUserActivity *)userActivity;
-(void)_becomeCurrentUserActivityIfNecessary;
-(void)updateUserActivityState:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)_didRestoreUserActivity:(id)arg1 ;
-(void)_cleanUpUserActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 backgroundQueue:(id)arg2 ;
-(void)cursorUpdate:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(char)tryToPerform:(SEL)arg1 with:(id)arg2 ;
-(void)flushBufferedKeyEvents;
-(void)helpRequested:(id)arg1 ;
-(id<NSServicesRequestor>)servicesRequestor;
-(void)quickAction:(id)arg1 didFailWithRequestor:(id)arg2 error:(id)arg3 ;
-(id)quickAction:(id)arg1 sourceWindowForRequestor:(id)arg2 ;
-(id)quickAction:(id)arg1 anchoringViewForRequestor:(id)arg2 showRelativeToRect:(CGRect*)arg3 preferredEdge:(unsigned long long*)arg4 ;
-(id<_NSQuickActionItemSource>)additionalQuickActionItemSource;
-(char)_ignoreBadFirstResponders;
-(id)colorFactory;
-(unsigned long long)interfaceStyle;
-(void)setInterfaceStyle:(unsigned long long)arg1 ;
-(NSKeyValueDependencyInfo *)dependencyInfo;
-(void)didBecomeActiveFirstResponder;
-(void)didResignActiveFirstResponder;
-(char)_shouldPostEventNotifications;
-(void)_postEventNotification:(id)arg1 fromCell:(id)arg2 ;
-(void)rotateWithEvent:(id)arg1 ;
-(char)_wantsTouchesForEvent:(id)arg1 ;
-(void)noResponderFor:(SEL)arg1 ;
-(unsigned long long)gestureEventMask;
-(void)setGestureEventMask:(unsigned long long)arg1 ;
-(char)wantsForwardedScrollEventsForAxis:(long long)arg1 ;
-(char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1 ;
-(void)_changePersistentKeyPathObservationTo:(char)arg1 ;
-(void)_postEventNotification:(id)arg1 ;
-(void)setDependencyInfo:(NSKeyValueDependencyInfo *)arg1 ;
-(id)_nextResponderForEvent:(id)arg1 ;
-(void)invalidateRequestor;
-(void)tabletProximity:(id)arg1 ;
-(void)smartMagnifyWithEvent:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)quickLookWithEvent:(id)arg1 ;
-(void)navigateWithEvent:(id)arg1 ;
-(void)changeModeWithEvent:(id)arg1 ;
-(char)wantsForwardedScrollEvents;
-(char)_recursiveWantsForwardedScrollEventsForAxis:(long long)arg1 ;
-(id)_recursiveResponderThatWantsForwardedScrollEventsForAxis:(long long)arg1 intendedForSwipe:(char*)arg2 ;
-(void)showContextHelp:(id)arg1 ;
-(void)_noResponderFor:(SEL)arg1 duringForwardingOfEvent:(id)arg2 ;
-(void)_setShouldPostEventNotifications:(char)arg1 ;
-(char)_wantsKeyDownForEvent:(id)arg1 ;
-(void)_detach;
-(id)_eventResponderChainDescription;
-(NSResponder *)_hostedFirstResponder;
-(NSString *)_responderDebugDescription;
-(void)_addDependencyOnValueForKey:(id)arg1 ;
-(void)_invalidateDependenciesOnValueForKey:(id)arg1 ;
-(char)_hasDependent:(id)arg1 forKey:(id)arg2 currentlyValid:(char*)arg3 ;
-(void)_setHasInvalidRestorableState:(char)arg1 ;
-(char)_hasInvalidRestorableState;
-(char)_hasEverHadInvalidRestorableState;
-(void)_recursivelyReinvalidateRestorableStateIfNecessary;
-(id)presentationWindowForError:(id)arg1 originatedInWindow:(id)arg2 ;
-(id)_persistentUIWindow;
-(void)_markAsEverHavingInvalidRestorableState;
-(id)_persistentUIIdentifier;
-(id)_copyPersistentUIChildren;
-(void)_encodeObjectIntoRestorableState:(id)arg1 forKey:(id)arg2 ;
-(void)_restorePersistentState:(id)arg1 ;
-(id)_persistentUIEncodedReference;
-(id)ns_widgetType;
@end
