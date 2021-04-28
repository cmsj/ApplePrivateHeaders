/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Reveal.framework/Versions/A/Reveal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSImmediateActionAnimationController.h>

@protocol NSObject, NSImmediateActionAnimationController, RVGestureDelegate;
@class RVPresentingContext, RVItem, NSFindIndicator, NSString;

@interface RVGestureDelegate : NSObject <NSImmediateActionAnimationController> {

	id<NSObject> _observer;
	id<NSImmediateActionAnimationController> _actualGestureDelegate;
	RVPresentingContext* _presenter;
	RVItem* _item;
	NSFindIndicator*<NSImmediateActionAnimationController> _indicator;
	char _lookupFlavor;
	id<RVGestureDelegate> specializedController;

}

@property (retain) id<NSImmediateActionAnimationController> actualGestureDelegate;              //@synthesize actualGestureDelegate=_actualGestureDelegate - In the implementation block
@property (retain) RVPresentingContext * presenter;                                             //@synthesize presenter=_presenter - In the implementation block
@property (retain) RVItem * item;                                                               //@synthesize item=_item - In the implementation block
@property (assign) char lookupFlavor;                                                           //@synthesize lookupFlavor=_lookupFlavor - In the implementation block
@property (retain) id<RVGestureDelegate> specializedController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItem:(RVItem *)arg1 ;
-(RVItem *)item;
-(void)recognizerWillBeginAnimation:(id)arg1 ;
-(void)recognizerDidUpdateAnimation:(id)arg1 ;
-(void)recognizerDidCancelAnimation:(id)arg1 ;
-(void)recognizerDidCompleteAnimation:(id)arg1 ;
-(void)recognizerDidDismissAnimation:(id)arg1 ;
-(RVPresentingContext *)presenter;
-(void)setPresenter:(RVPresentingContext *)arg1 ;
-(id<RVGestureDelegate>)specializedController;
-(id<NSImmediateActionAnimationController>)actualGestureDelegate;
-(void)setActualGestureDelegate:(id<NSImmediateActionAnimationController>)arg1 ;
-(void)setSpecializedController:(id<RVGestureDelegate>)arg1 ;
-(char)lookupFlavor;
-(void)setLookupFlavor:(char)arg1 ;
@end
