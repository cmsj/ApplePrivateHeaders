/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKMainEventHandler.h>

@class AKPageController;

@interface AKMainEventHandler_Mac : AKMainEventHandler {

	char _shouldEatNextKeyUp;
	char _lastCursorWasInVisibleBounds;
	char _candidatePickerWasDismissed;
	id _eventMonitor;
	AKPageController* _lastPageControllerWithCropRollover;

}

@property (retain) id eventMonitor;                                                    //@synthesize eventMonitor=_eventMonitor - In the implementation block
@property (assign) char shouldEatNextKeyUp;                                            //@synthesize shouldEatNextKeyUp=_shouldEatNextKeyUp - In the implementation block
@property (__weak) AKPageController * lastPageControllerWithCropRollover;              //@synthesize lastPageControllerWithCropRollover=_lastPageControllerWithCropRollover - In the implementation block
@property (assign) char lastCursorWasInVisibleBounds;                                  //@synthesize lastCursorWasInVisibleBounds=_lastCursorWasInVisibleBounds - In the implementation block
@property (assign) char candidatePickerWasDismissed;                                   //@synthesize candidatePickerWasDismissed=_candidatePickerWasDismissed - In the implementation block
-(char)validateMenuItem:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)eventMonitor;
-(void)setEventMonitor:(id)arg1 ;
-(void)teardown;
-(char)mainHandleEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(char)_eventIsForOurWindow:(id)arg1 ;
-(char)_eventHasValidLocation:(id)arg1 ;
-(char)_mouseEventInVisibleBounds:(id)arg1 ;
-(char)lastCursorWasInVisibleBounds;
-(void)setLastCursorWasInVisibleBounds:(char)arg1 ;
-(void)_showContextMenuForEvent:(id)arg1 withAnnotation:(id)arg2 onPageController:(id)arg3 ;
-(void)_highlightMenuAction:(id)arg1 ;
-(void)_removeHighlightAnnotationAction:(id)arg1 ;
-(void)_removeNoteAnnotationAction:(id)arg1 ;
-(void)_addNoteAnnotationAction:(id)arg1 ;
-(void)_bringSelectedAnnotationsForwardAction:(id)arg1 ;
-(void)_bringSelectedAnnotationsToFrontAction:(id)arg1 ;
-(void)_sendSelectedAnnotationsBackwardAction:(id)arg1 ;
-(void)_sendSelectedAnnotationsToBackAction:(id)arg1 ;
-(char)_validateChangingSelectionZOrderForDirection:(char)arg1 onPageModelController:(id)arg2 ;
-(void)setCandidatePickerWasDismissed:(char)arg1 ;
-(void)_candidatePickerDidDismissNotification:(id)arg1 ;
-(char)candidatePickerWasDismissed;
-(void)setShouldEatNextKeyUp:(char)arg1 ;
-(char)shouldEatNextKeyUp;
-(char)handleRightDownEvent:(id)arg1 ;
-(char)handleKeyboardEvent:(id)arg1 ;
-(void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)updateCursorForEvent:(id)arg1 ;
-(AKPageController *)lastPageControllerWithCropRollover;
-(void)setLastPageControllerWithCropRollover:(AKPageController *)arg1 ;
@end

