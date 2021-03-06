/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <libobjc.A.dylib/EKUILayoutItem.h>

@protocol EKUILayoutItem;
@class NSView, EKUIGadgetScrollView, EKViewController, NSString, NSLayoutConstraint;

@interface EKUIGadget : NSObject <EKUILayoutItem> {

	char _isVisible;
	char _shouldScrollToTop;
	char _constrainedForRequiredContentHeight;
	char _isScrolling;
	char _scrollsOutsideMainScrollArea;
	NSView* _gadgetView;
	id<EKUILayoutItem> _parentItem;
	NSView* _firstKeyView;
	NSView* _lastKeyView;
	EKUIGadgetScrollView* _scrollView;
	EKViewController* _viewController;
	NSString* _uuid;
	NSLayoutConstraint* _scrollContentHeightConstraint;
	NSLayoutConstraint* _scrollViewMaxHeightConstraint;

}

@property (__weak) id<EKUILayoutItem> parentItem;                                   //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic,__weak) NSView * firstKeyView;                          //@synthesize firstKeyView=_firstKeyView - In the implementation block
@property (assign,nonatomic,__weak) NSView * lastKeyView;                           //@synthesize lastKeyView=_lastKeyView - In the implementation block
@property (retain) EKUIGadgetScrollView * scrollView;                               //@synthesize scrollView=_scrollView - In the implementation block
@property (setter=setExpanded:) char isExpanded; 
@property (__weak) EKViewController * viewController;                               //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSString * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign) char isVisible;                                                  //@synthesize isVisible=_isVisible - In the implementation block
@property (assign) char shouldScrollToTop;                                          //@synthesize shouldScrollToTop=_shouldScrollToTop - In the implementation block
@property (assign) char constrainedForRequiredContentHeight;                        //@synthesize constrainedForRequiredContentHeight=_constrainedForRequiredContentHeight - In the implementation block
@property (retain) NSLayoutConstraint * scrollContentHeightConstraint;              //@synthesize scrollContentHeightConstraint=_scrollContentHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * scrollViewMaxHeightConstraint;              //@synthesize scrollViewMaxHeightConstraint=_scrollViewMaxHeightConstraint - In the implementation block
@property (assign) char isScrolling;                                                //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign) char scrollsOutsideMainScrollArea;                               //@synthesize scrollsOutsideMainScrollArea=_scrollsOutsideMainScrollArea - In the implementation block
@property (retain) NSView * gadgetView;                                             //@synthesize gadgetView=_gadgetView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(void)dealloc;
-(void)setObject:(id)arg1 ;
-(id)object;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(id)calendar;
-(id)view;
-(id)event;
-(id)item;
-(void)updateConstraints;
-(double)preferredWidth;
-(char)isVisible;
-(EKUIGadgetScrollView *)scrollView;
-(char)isEditable;
-(char)performDragOperation:(id)arg1 ;
-(void)setViewController:(EKViewController *)arg1 ;
-(void)setNeedsUpdateConstraints:(char)arg1 ;
-(void)setFirstKeyView:(NSView *)arg1 ;
-(void)setLastKeyView:(NSView *)arg1 ;
-(NSView *)firstKeyView;
-(NSView *)lastKeyView;
-(EKViewController *)viewController;
-(id<EKUILayoutItem>)parentItem;
-(void)setExpanded:(char)arg1 ;
-(char)hasContent;
-(void)setScrollView:(EKUIGadgetScrollView *)arg1 ;
-(char)isExpanded;
-(void)setParentItem:(id<EKUILayoutItem>)arg1 ;
-(void)setIsVisible:(char)arg1 ;
-(char)needsExpansion;
-(char)isScrolling;
-(char)isContainer;
-(id)initWithViewController:(id)arg1 ;
-(double)maxHeight;
-(void)scrollToTop;
-(id)reminder;
-(char)shouldDisplay;
-(char)updateWithDiff:(id)arg1 ;
-(char)wantsAnimationSuppression;
-(id)enclosingGadgetContainer;
-(void)updateScrollState;
-(id)subItems;
-(void)animationDidFinish:(id)arg1 ;
-(id)claimedPboardTypes;
-(void)savePendingChanges;
-(void)updateWithChanges:(id)arg1 ;
-(void)saveCompleteChange;
-(void)savePartialChange;
-(void)mouseEnteredGadgetView;
-(void)mouseExitedGadgetView;
-(char)isInProposedEventController;
-(void)setGadgetScrollsOutsideMainScrollArea:(char)arg1 ;
-(char)isInterestedInChanges:(id)arg1 ;
-(char)adjustConstraintsInResponseToLayout;
-(id)timeZoneToDisplayIn;
-(char)scrollsOutsideMainScrollArea;
-(NSView *)gadgetView;
-(void)_scrollViewFrameDidChange:(id)arg1 ;
-(void)setScrollsOutsideMainScrollArea:(char)arg1 ;
-(NSLayoutConstraint *)scrollContentHeightConstraint;
-(NSLayoutConstraint *)scrollViewMaxHeightConstraint;
-(char)constrainedForRequiredContentHeight;
-(void)setScrollContentHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setScrollViewMaxHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setConstrainedForRequiredContentHeight:(char)arg1 ;
-(char)shouldScrollToTop;
-(void)setShouldScrollToTop:(char)arg1 ;
-(void)setIsScrolling:(char)arg1 ;
-(void)saveCompleteChangeWithoutPromptingUserAboutDecline;
-(void)scrollToBottom;
-(void)mouseDownInGadgetView;
-(void)mouseUpInGadgetView;
-(void)inspectorWindowWillClose;
-(void)setGadgetView:(NSView *)arg1 ;
@end

