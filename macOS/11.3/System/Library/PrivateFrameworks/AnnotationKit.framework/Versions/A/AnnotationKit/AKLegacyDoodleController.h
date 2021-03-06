/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/AKSmoothPathViewDelegate.h>
#import <libobjc.A.dylib/AKShapeDetectionControllerDelegate.h>

@class AKShapeDetectionController, AKController, AKSmoothPathView, AKAnnotation, NSMutableArray, NSString;

@interface AKLegacyDoodleController : NSObject <AKSmoothPathViewDelegate, AKShapeDetectionControllerDelegate> {

	char _preferDoodle;
	char _coalescesDoodles;
	char _shapeDetectionEnabled;
	char _selectNewlyCreatedAnnotations;
	char _pressureSensitiveDoodleMode;
	char _ignoreAnnotationAndSelectionKVO;
	char _isShowingOverlay;
	char _isWaitingToCoalesceStrokes;
	AKShapeDetectionController* _shapeDetectionController;
	AKController* _controller;
	AKSmoothPathView* _intelligentSketchOverlayView;
	/*^block*/id _performRecognitionBlock;
	AKAnnotation* _coalescedAnnotation;
	NSMutableArray* _recentDoodlesAnnotations;
	NSMutableArray* _recentDoodlePaths;
	CGRect _recentDrawingBoundsInInputView;

}

@property (__weak) AKController * controller;                                                      //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) AKSmoothPathView * intelligentSketchOverlayView;                      //@synthesize intelligentSketchOverlayView=_intelligentSketchOverlayView - In the implementation block
@property (nonatomic,copy) id performRecognitionBlock;                                             //@synthesize performRecognitionBlock=_performRecognitionBlock - In the implementation block
@property (nonatomic,retain) AKShapeDetectionController * shapeDetectionController;                //@synthesize shapeDetectionController=_shapeDetectionController - In the implementation block
@property (retain) AKAnnotation * coalescedAnnotation;                                             //@synthesize coalescedAnnotation=_coalescedAnnotation - In the implementation block
@property (retain) NSMutableArray * recentDoodlesAnnotations;                                      //@synthesize recentDoodlesAnnotations=_recentDoodlesAnnotations - In the implementation block
@property (retain) NSMutableArray * recentDoodlePaths;                                             //@synthesize recentDoodlePaths=_recentDoodlePaths - In the implementation block
@property (assign) CGRect recentDrawingBoundsInInputView;                                          //@synthesize recentDrawingBoundsInInputView=_recentDrawingBoundsInInputView - In the implementation block
@property (assign) char ignoreAnnotationAndSelectionKVO;                                           //@synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO - In the implementation block
@property (assign) char isShowingOverlay;                                                          //@synthesize isShowingOverlay=_isShowingOverlay - In the implementation block
@property (assign) char isWaitingToCoalesceStrokes;                                                //@synthesize isWaitingToCoalesceStrokes=_isWaitingToCoalesceStrokes - In the implementation block
@property (assign,nonatomic) char preferDoodle;                                                    //@synthesize preferDoodle=_preferDoodle - In the implementation block
@property (assign,nonatomic) char coalescesDoodles;                                                //@synthesize coalescesDoodles=_coalescesDoodles - In the implementation block
@property (assign,getter=shapeDetectionEnabled,nonatomic) char shapeDetectionEnabled;              //@synthesize shapeDetectionEnabled=_shapeDetectionEnabled - In the implementation block
@property (assign,nonatomic) char selectNewlyCreatedAnnotations;                                   //@synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations - In the implementation block
@property (assign) char pressureSensitiveDoodleMode;                                               //@synthesize pressureSensitiveDoodleMode=_pressureSensitiveDoodleMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(void)inputViewWillStartDrawing:(id)arg1 ;
-(void)handleForwardedEvent:(id)arg1 ;
-(void)inputView:(id)arg1 didCollectPrestrokedPath:(CGPathRef)arg2 ;
-(void)inputView:(id)arg1 didCollectPath:(CGPathRef)arg2 ;
-(void)handleTapAction:(id)arg1 ;
-(void)handleDragAction:(id)arg1 ;
-(void)removeOverlay;
-(void)setPressureSensitiveDoodleMode:(char)arg1 ;
-(void)showOverlay;
-(AKShapeDetectionController *)shapeDetectionController;
-(void)dismissCandidatePicker;
-(char)shapeDetectionEnabled;
-(void)setIgnoreAnnotationAndSelectionKVO:(char)arg1 ;
-(char)ignoreAnnotationAndSelectionKVO;
-(char)selectNewlyCreatedAnnotations;
-(id)overlayView:(id)arg1 ;
-(void)beginIgnoringAnnotationSelectionObservation:(id)arg1 ;
-(void)endIgnoringAnnotationSelectionObservation:(id)arg1 ;
-(char)isIgnoringAnnotationAndSelectionKVO:(id)arg1 ;
-(char)isWaitingToCoalesceStrokes;
-(char)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2 ;
-(void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(char)arg2 ;
-(CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1 ;
-(void)setShapeDetectionController:(AKShapeDetectionController *)arg1 ;
-(AKSmoothPathView *)intelligentSketchOverlayView;
-(char)isShowingCandidatePicker;
-(void)setSelectNewlyCreatedAnnotations:(char)arg1 ;
-(void)setShapeDetectionEnabled:(char)arg1 ;
-(void)updateStrokeAttributes;
-(void)setRecentDoodlesAnnotations:(NSMutableArray *)arg1 ;
-(void)setRecentDoodlePaths:(NSMutableArray *)arg1 ;
-(void)setRecentDrawingBoundsInInputView:(CGRect)arg1 ;
-(void)setIsWaitingToCoalesceStrokes:(char)arg1 ;
-(char)isShowingOverlay;
-(void)setIsShowingOverlay:(char)arg1 ;
-(void)setIntelligentSketchOverlayView:(AKSmoothPathView *)arg1 ;
-(char)pressureSensitiveDoodleMode;
-(void)_executeDeferredRecognition;
-(id)performRecognitionBlock;
-(void)setPerformRecognitionBlock:(id)arg1 ;
-(char)coalescesDoodles;
-(void)_coalesceRecentDrawings;
-(void)_inputView:(id)arg1 didCollectPath:(CGPathRef)arg2 isPrestroked:(char)arg3 ;
-(void)_beginOrExtendCoalescingTimer;
-(void)_addAnnotationImmediatelyFor:(CGPathRef)arg1 withDrawingCenter:(CGPoint)arg2 drawingBoundsInView:(CGRect)arg3 pathIsPrestroked:(char)arg4 isSingelDot:(char)arg5 fromInputView:(id)arg6 ;
-(id)createDoodleAnnotationWithPath:(CGPathRef)arg1 drawingBoundsInView:(CGRect)arg2 drawingCenter:(CGPoint)arg3 pathIsPrestroked:(char)arg4 shouldGoToPageController:(id*)arg5 ;
-(NSMutableArray *)recentDoodlePaths;
-(NSMutableArray *)recentDoodlesAnnotations;
-(CGRect)recentDrawingBoundsInInputView;
-(AKAnnotation *)coalescedAnnotation;
-(void)setCoalescedAnnotation:(AKAnnotation *)arg1 ;
-(void)_coalesceDrawingsCancelled;
-(void)_removeAnnotations:(id)arg1 mostLikelyFromPageController:(id)arg2 ;
-(void)_clearCoalescingState;
-(void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(CGPathRef)arg2 boundsInView:(CGRect)arg3 center:(CGPoint)arg4 isPrestroked:(char)arg5 ;
-(char)preferDoodle;
-(void)setPreferDoodle:(char)arg1 ;
-(void)setCoalescesDoodles:(char)arg1 ;
@end

