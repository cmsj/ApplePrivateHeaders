/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKNImageView, NSMutableArray, CAShapeLayer, IKNKnobsLayer;

@interface IKNImageViewHandler : NSObject {

	IKNImageView* _imageView;
	char _autoResize;
	char _showAllSelectionsWithOrientation;
	char _autoResizeMax100;
	char _singleSelection;
	char _mouseDownInLayer;
	char _selectionsCanRotate;
	char _forceSelectionInsideView;
	char _selectionsAreHidden;
	double _zoomFactor;
	double _rotationAngle;
	char _delegateRespondsToSelectionChange;
	char _delegateRespondsToRotationAngleChange;
	CGPoint _mouseDownLoc;
	NSMutableArray* _selections;
	NSMutableArray* _annotations;
	NSMutableArray* _autoDetectedItems;
	CAShapeLayer* _trackingLayer;
	IKNKnobsLayer* _knobsLayer;
	long long _mode;
	long long _resolution;
	CGRect* _templateRects;
	long long _templateRectsCount;

}

@property (assign) IKNImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (assign) char autoResize;                                    //@synthesize autoResize=_autoResize - In the implementation block
@property (assign) char autoResizeMax100;                              //@synthesize autoResizeMax100=_autoResizeMax100 - In the implementation block
@property (assign,nonatomic) char singleSelection;                     //@synthesize singleSelection=_singleSelection - In the implementation block
@property (assign) char showAllSelectionsWithOrientation;              //@synthesize showAllSelectionsWithOrientation=_showAllSelectionsWithOrientation - In the implementation block
@property (assign) char selectionsCanRotate;                           //@synthesize selectionsCanRotate=_selectionsCanRotate - In the implementation block
@property (assign) char selectionsCanBeModified; 
@property (assign) char forceSelectionInsideView;                      //@synthesize forceSelectionInsideView=_forceSelectionInsideView - In the implementation block
@property (assign) char selectionsAreHidden;                           //@synthesize selectionsAreHidden=_selectionsAreHidden - In the implementation block
@property (assign,nonatomic) double zoomFactor;                        //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign) double rotationAngle;                               //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign) CGPoint mouseDownLoc;                               //@synthesize mouseDownLoc=_mouseDownLoc - In the implementation block
@property (assign,nonatomic) long long resolution;                     //@synthesize resolution=_resolution - In the implementation block
@property (retain) NSMutableArray * selections;                        //@synthesize selections=_selections - In the implementation block
@property (retain) NSMutableArray * annotations;                       //@synthesize annotations=_annotations - In the implementation block
@property (retain) NSMutableArray * autoDetectedItems;                 //@synthesize autoDetectedItems=_autoDetectedItems - In the implementation block
@property (readonly) IKNKnobsLayer * knobsLayer;                       //@synthesize knobsLayer=_knobsLayer - In the implementation block
-(void)adjustToViewFrame:(CGRect)arg1 ;
-(char)autoResizeMax100;
-(char)autoResize;
-(void)installKnobsLayer:(id)arg1 ;
-(IKNKnobsLayer *)knobsLayer;
-(void)hideAllSelections;
-(void)setSelectionsCanRotate:(char)arg1 ;
-(char)selectionsCanRotate;
-(void)showAllSelections;
-(CGRect*)getTemplateRects:(long long*)arg1 ;
-(char)selectionsCanBeModified;
-(void)showSelectionWithOrientation:(long long)arg1 ;
-(void)resetSelectionWithOrientation;
-(void)drawOrientationUI:(short)arg1 ;
-(void)hiliteSelection:(id)arg1 ;
-(void)unhiliteSelections;
-(void)addScanArea:(id)arg1 withOverlay:(char)arg2 ;
-(void)setTemplateRects:(CGRect*)arg1 count:(long long)arg2 ;
-(void)removeTemplateRects;
-(void)addAutoDetectedItem:(id)arg1 ;
-(void)removeAllAutoDetectedItems;
-(NSMutableArray *)autoDetectedItems;
-(char)forceSelectionInsideView;
-(void)setForceSelectionInsideView:(char)arg1 ;
-(void)setSelectionsCanBeModified:(char)arg1 ;
-(void)setAutoResize:(char)arg1 ;
-(void)setAutoResizeMax100:(char)arg1 ;
-(void)setShowAllSelectionsWithOrientation:(char)arg1 ;
-(void)adjustSelectionScaling;
-(void)adjustAnnotationScaling;
-(id)layerArray;
-(void)setSelectionsAreHidden:(char)arg1 ;
-(void)gotoNextSelection:(char)arg1 ;
-(void)rotateSelectionsLeft;
-(void)rotateSelectionsRight;
-(void)deleteIntersectingSelections:(CGRect)arg1 ;
-(void)deleteAllSelectionsInternal;
-(CGPoint)displayPointToImagePoint:(CGPoint)arg1 convertToInches:(char)arg2 ;
-(void)postSelectionRectIsChanging:(CGRect)arg1 ;
-(CGRect)displayRectToImageRect:(CGRect)arg1 convertToInches:(char)arg2 ;
-(void)addSelectionFromAutodetectedItem:(id)arg1 ;
-(id)selectionFromScanArea:(id)arg1 ;
-(char)selectionsAreHidden;
-(CGRect)imageRectToDisplayRect:(CGRect)arg1 convertFromInches:(char)arg2 ;
-(void)drawTemplate:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)dumpSelections;
-(void)postRotationAngleIsChanging:(double)arg1 ;
-(id)scanAreaFromSelection:(id)arg1 ;
-(id)autodetectedItemForSelection:(id)arg1 ;
-(id)selectionForAutodetectedItem:(id)arg1 ;
-(CGSize)displaySizeToImageSize:(CGSize)arg1 convertToInches:(char)arg2 ;
-(CGPoint)imagePointToDisplayPoint:(CGPoint)arg1 convertFromInches:(char)arg2 ;
-(CGSize)imageSizeToDisplaySize:(CGSize)arg1 convertFromInches:(char)arg2 ;
-(void)setAutoDetectedItems:(NSMutableArray *)arg1 ;
-(CGPoint)mouseDownLoc;
-(void)setMouseDownLoc:(CGPoint)arg1 ;
-(char)showAllSelectionsWithOrientation;
-(void)dealloc;
-(void)mouseDown:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(char)keyDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(IKNImageView *)imageView;
-(void)setImageView:(IKNImageView *)arg1 ;
-(NSMutableArray *)annotations;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(long long)resolution;
-(void)setResolution:(long long)arg1 ;
-(void)deselectAll;
-(CGRect)selectionRect;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(void)addSelection:(id)arg1 ;
-(NSMutableArray *)selections;
-(void)doubleClick:(id)arg1 ;
-(void)setSelections:(NSMutableArray *)arg1 ;
-(id)initWithImageView:(id)arg1 ;
-(void)deleteSelectedItems:(id)arg1 ;
-(void)deleteSelection:(id)arg1 ;
-(void)setSelectionRect:(CGRect)arg1 ;
-(char)singleSelection;
-(void)setSingleSelection:(char)arg1 ;
@end

