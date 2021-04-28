/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKPageController, AKAnnotation;

@interface AKAnnotationEventHandler : NSObject {

	char _touchModifiersEnabled;
	char _draggingHorizontalOnly;
	char _draggingVerticalOnly;
	AKPageController* _pageController;
	AKAnnotation* _annotation;
	unsigned long long _initiallyDraggedArea;
	CGPoint _initialDraggedPoint;
	CGPoint _initialOtherPoint;
	CGPoint _initialCenter;
	CGPoint _lastPositionInModel;
	CGPoint _lastPositionInWindow;

}

@property (__weak) AKPageController * pageController;                    //@synthesize pageController=_pageController - In the implementation block
@property (retain) AKAnnotation * annotation;                            //@synthesize annotation=_annotation - In the implementation block
@property (assign) unsigned long long initiallyDraggedArea;              //@synthesize initiallyDraggedArea=_initiallyDraggedArea - In the implementation block
@property (assign) char touchModifiersEnabled;                           //@synthesize touchModifiersEnabled=_touchModifiersEnabled - In the implementation block
@property (assign) CGPoint initialDraggedPoint;                          //@synthesize initialDraggedPoint=_initialDraggedPoint - In the implementation block
@property (assign) CGPoint initialOtherPoint;                            //@synthesize initialOtherPoint=_initialOtherPoint - In the implementation block
@property (assign) CGPoint initialCenter;                                //@synthesize initialCenter=_initialCenter - In the implementation block
@property (assign) char draggingHorizontalOnly;                          //@synthesize draggingHorizontalOnly=_draggingHorizontalOnly - In the implementation block
@property (assign) char draggingVerticalOnly;                            //@synthesize draggingVerticalOnly=_draggingVerticalOnly - In the implementation block
@property (assign) CGPoint lastPositionInModel;                          //@synthesize lastPositionInModel=_lastPositionInModel - In the implementation block
@property (assign) CGPoint lastPositionInWindow;                         //@synthesize lastPositionInWindow=_lastPositionInWindow - In the implementation block
+(Class)_handlerClassForPlatformForAnnotation:(id)arg1 ;
+(char)allowsDragging;
+(id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(char)allowsDraggingOfAnnotation:(id)arg1 ;
+(CGRect)annotationRectangleForDraggingBounds:(CGRect)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(CGPoint)arg4 ;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(char)alwaysLockAspectRatio;
-(CGSize)naturalSizeForAnnotation;
-(AKPageController *)pageController;
-(unsigned long long)initiallyDraggedArea;
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 options:(unsigned long long)arg2 ;
-(char)lockAspectRatioByDefault;
-(id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2 ;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)setInitialDraggedPoint:(CGPoint)arg1 ;
-(void)setInitialOtherPoint:(CGPoint)arg1 ;
-(void)setInitialCenter:(CGPoint)arg1 ;
-(void)setupDraggingConstraints;
-(CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setLastPositionInWindow:(CGPoint)arg1 ;
-(CGPoint)lastPositionInWindow;
-(CGPoint)modelPointFromPointInWindow:(CGPoint)arg1 ;
-(void)setLastPositionInModel:(CGPoint)arg1 ;
-(CGPoint)lastPositionInModel;
-(char)canLockAspectRatio;
-(double)naturalAspectRatioForAnnotation;
-(char)handleDownEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(char)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(char)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setInitiallyDraggedArea:(unsigned long long)arg1 ;
-(char)touchModifiersEnabled;
-(void)setTouchModifiersEnabled:(char)arg1 ;
-(CGPoint)initialDraggedPoint;
-(CGPoint)initialOtherPoint;
-(CGPoint)initialCenter;
-(char)draggingHorizontalOnly;
-(void)setDraggingHorizontalOnly:(char)arg1 ;
-(char)draggingVerticalOnly;
-(void)setDraggingVerticalOnly:(char)arg1 ;
@end
