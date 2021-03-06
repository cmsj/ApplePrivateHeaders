/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSResponder.h>

@class NSCollectionView, NSEvent, NSSet, NSMutableSet, NSIndexPath, NSTimer, NSView;

@interface NSCollectionViewMouseSession : NSResponder {

	long long sessionNumber;
	NSCollectionView* collectionView;
	long long state;
	NSEvent* mouseDownEvent;
	CGPoint mouseDownPointInCollectionView;
	NSEvent* lastNonPeriodicEvent;
	NSSet* selectedIndexPathsAtStart;
	NSMutableSet* indexPathsToSelect;
	NSMutableSet* indexPathsToDeselect;
	NSIndexPath* indexPathToDeselectOnMouseUpIfNoDrag;
	NSMutableSet* dragCandidateIndexPaths;
	NSSet* indexPathsBeingDragged;
	char unmodifiedMouseDownInAlreadySelectedItem;
	char dragSelectShouldModifyExistingSelection;
	char itemsBeingDraggedAreHidden;
	char trackingModally;
	NSTimer* autoscrollTimer;
	NSView* rubberbandView;

}

@property (readonly) NSSet * indexPathsBeingDragged; 
+(id)mouseSessionWithCollectionView:(id)arg1 ;
-(void)dealloc;
-(void)setState:(long long)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)handleEvent:(id)arg1 ;
-(char)_performDragFromMouseDown:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
-(void)clearAutoscrollTimer;
-(void)autoscrollTimerFired:(id)arg1 ;
-(char)addIndexPathsToSelect:(id)arg1 ;
-(id)setHighlightState:(long long)arg1 forItemsAtIndexPaths:(id)arg2 ;
-(id)nextIndexPathAfter:(id)arg1 ;
-(id)previousIndexPathBefore:(id)arg1 ;
-(char)addIndexPathsToDeselect:(id)arg1 ;
-(char)addIndexPathToDeselect:(id)arg1 ;
-(char)addIndexPathToSelect:(id)arg1 ;
-(void)commitSelectionAndClearHighlighting;
-(void)updateDragSelectionForEvent:(id)arg1 ;
-(void)autoscrollAndDragSelectWithLastNonPeriodicEvent;
-(char)extendRangeSelectionToEntireSection:(unsigned long long)arg1 ;
-(char)replaceSelectedIndexPathsWith:(id)arg1 ;
-(char)extendRangeSelectionToIndexPath:(id)arg1 ;
-(void)deselectAllNow;
-(void)detachFromCollectionView;
-(long long)highlightStateForIndexPath:(id)arg1 ;
-(void)clearHighlightingBeforeCompletingDrag;
-(void)trackWithEvent:(id)arg1 ;
-(NSSet *)indexPathsBeingDragged;
@end

