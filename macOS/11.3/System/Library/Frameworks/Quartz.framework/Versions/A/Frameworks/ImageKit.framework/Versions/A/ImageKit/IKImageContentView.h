/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class IKImageRenderInfo, CIImage, CIContext, NSDictionary, NSMutableArray, IKImageViewLayerQueue, NSTimer, CALayer, NSView, NSURL, NSData, IKImageView2, IKCenteringClipView, CIFilter;

@interface IKImageContentView : NSView {

	char _initialized;
	char _loadsImageSynchronously;
	IKImageRenderInfo* _renderInfo;
	CIImage* _ciImage;
	CIImage* _scaledCIImage;
	CIImage* _flattenedCIImage;
	CIImage* _thumbnailCIImage;
	CIImage* _drawingCIImage;
	CIContext* _flatteningContext;
	char _thumbnailNeedsToUpdateFilters;
	char _drawingCIImageNeedsToUpdate;
	CGImageRef _originalCGImage;
	CGImageRef _cachedHigherResThumbnailImage;
	CGImageRef _thumbnailCGImage;
	NSDictionary* _displayProperties;
	char _needToReloadThumbnailForHigherResolution;
	char _finishedFirstLowResThumbnail;
	double _imageWidth;
	double _imageHeight;
	double _zoomedWidth;
	double _zoomedHeight;
	double _zoomFactor;
	double _startingScreenScaleFactor;
	char _stickyZoomToFit;
	char _isAnimatingZoom;
	char _isAnimating;
	double _minNearestNeighborScale;
	char _alwaysHidesScrollers;
	CGPoint _startingViewCenter;
	NSMutableArray* _blockCollection;
	NSMutableArray* _lastEnqueuedBlockCollection;
	IKImageViewLayerQueue* _layerRenderingQueue;
	NSTimer* _blockCleanupTimer;
	char _canInvalidateBlockCleanupTimer;
	CGRect _lastUpdatedBounds;
	CGRect _loadedRect;
	CALayer* _backgroundThumbnailLayer;
	CALayer* _backgroundThumbnailMask;
	NSView* _contentView;
	CALayer* _oldbgThumbnailLayer;
	CALayer* _contentViewContainerLayer;
	CALayer* _incomingContentViewContainerLayer;
	CALayer* _combinedCurrentTilesAndBGLayer;
	CALayer* _animationLayer;
	CALayer* _flipLayer;
	NSView* _annotationsView;
	CALayer* _annotationsLayer;
	char _inMagnifyGesture;
	NSTimer* _zoomTimer;
	char _completedInitialImageLoading;
	long long _exifOrientation;
	double _rotationAngle;
	char _canAnimateImage;
	NSURL* _imgURL;
	NSData* _imgData;
	IKImageView2* _imageView;
	IKCenteringClipView* _clipView;
	CIFilter* _softProofFilter;
	char _shouldUseTiles;
	char _scrollingLoadsTiles;
	unsigned long long _imageIndex;
	char _ignoreWindowUpdates;
	char _animatingImageContent;

}

@property (assign) char scrollingLoadsTiles;                                        //@synthesize scrollingLoadsTiles=_scrollingLoadsTiles - In the implementation block
@property (assign) unsigned long long imageIndex;                                   //@synthesize imageIndex=_imageIndex - In the implementation block
@property (assign) CGImageRef cachedHigherResThumbnailImage; 
@property (assign) CGImageRef originalCGImage; 
@property (assign) CGImageRef thumbnailCGImage; 
@property (retain) IKImageRenderInfo * renderInfo;                                  //@synthesize renderInfo=_renderInfo - In the implementation block
@property (assign) char ignoreWindowUpdates;                                        //@synthesize ignoreWindowUpdates=_ignoreWindowUpdates - In the implementation block
@property (getter=isAnimatingImageContent) char animatingImageContent;              //@synthesize animatingImageContent=_animatingImageContent - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                     //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign) char stickyZoomToFit; 
@property (assign) double rotationAngle; 
@property (assign,nonatomic) char alwaysHidesScrollers;                             //@synthesize alwaysHidesScrollers=_alwaysHidesScrollers - In the implementation block
@property (assign) char loadsSynchronously;                                         //@synthesize loadsImageSynchronously=_loadsImageSynchronously - In the implementation block
@property (assign) char shouldUseTiles; 
@property (readonly) NSView * annotationsView; 
@property (readonly) CALayer * annotationsLayer; 
+(double)rotationDegreeForExif:(long long)arg1 ;
+(int)_flipTypeForExif:(long long)arg1 ;
+(id)_clampImageAlphaTo01:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
+(char)isCompatibleWithResponsiveScrolling;
-(void)setScrollingLoadsTiles:(char)arg1 ;
-(void)setIgnoreWindowUpdates:(char)arg1 ;
-(void)zoomImageToScale:(double)arg1 aroundImagePoint:(CGPoint)arg2 ;
-(void)_redrawExistingBlocks;
-(char)ignoreWindowUpdates;
-(void)clearBlocksFromBlockCollection:(id)arg1 didCancelDisplay:(char*)arg2 ;
-(void)loadVisibleRect;
-(void)imageViewResized:(id)arg1 ;
-(void)scrollWillStartMagnify:(id)arg1 ;
-(void)scrollDidEndMagnify:(id)arg1 ;
-(char)alwaysHidesScrollers;
-(void)_setEnclosingScrollViewScrollersCanShow:(char)arg1 ;
-(double)zoomToFitScaleFactor;
-(void)_setEnclosingScrollViewScrollersCanShowIfAllowed:(char)arg1 ;
-(void)viewDidScroll:(id)arg1 ;
-(char)_imageTypeSupportsSubsampling:(CFStringRef)arg1 ;
-(CGImageRef)_newPossiblySubsampledImageFromSource:(CGImageSourceRef)arg1 index:(long long)arg2 imageScale:(double)arg3 displayProperties:(id)arg4 ;
-(CGImageRef)_newScaledImageFromSource:(CGImageSourceRef)arg1 index:(long long)arg2 imageScale:(double)arg3 canUseExistingThumbnail:(char)arg4 displayProperties:(id)arg5 ;
-(id)_commonOptionsForImageFromSource:(id)arg1 ;
-(char)_imageHasAppropriateAttachedThumbnail:(CGImageSourceRef)arg1 imageWidth:(double)arg2 imageHeight:(double)arg3 scale:(double)arg4 outBestMaxDimension:(double*)arg5 ;
-(double)_imageScaleWithImageProperties:(id)arg1 andDisplayProperties:(id)arg2 usingLowResScaleFactorIfAvailable:(char)arg3 ;
-(char)shouldUseTiles;
-(void)_beginOperation:(id)arg1 ;
-(CGImageRef)_newCGImageFromImgSrc:(CGImageSourceRef)arg1 index:(long long)arg2 displayProperties:(id)arg3 imageScale:(double)arg4 forceScale:(char)arg5 canUseExistingThumbnail:(char)arg6 createBitmapImmediately:(char)arg7 ;
-(void)setThumbnailCGImage:(CGImageRef)arg1 ;
-(void)setCachedHigherResThumbnailImage:(CGImageRef)arg1 ;
-(CGImageRef)cachedHigherResThumbnailImage;
-(CGImageSourceRef)_createImageSourceFromLoadedRepresentation;
-(char)_setImageFromImageSource:(CGImageSourceRef)arg1 imageAtIndex:(long long)arg2 withDisplayProperties:(id)arg3 ;
-(void)setOriginalCGImage:(CGImageRef)arg1 ;
-(char)_setCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(char)_setImageWithSize:(CGSize)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(void)_doFastPathUpdate;
-(void)_clearBackgroundLayer;
-(void)_loadBackgroundThumbnail;
-(void)updateContentForLayer:(id)arg1 ;
-(void)_setUnderlyingCIImage:(id)arg1 ;
-(void)_resetLayersAndReloadLayersWithImageProperties:(id)arg1 displayProperties:(id)arg2 ;
-(void)_scheduleDeferredCleanupOfUnseenBlocks;
-(void)_resetScaledCIImage;
-(void)_updateAnnotationsView;
-(CGRect)visibleScaledImageRect;
-(void)_clearImageBlocks:(id)arg1 fromCollection:(id)arg2 ;
-(void)applyExif:(id)arg1 ;
-(void)_rotateContent:(double)arg1 aroundPoint:(CGPoint)arg2 ;
-(void)_flipImageDirection:(int)arg1 ;
-(void)_cancelLoadBlocks;
-(char)isAnimatingImageContent;
-(void)setAnimatingImageContent:(char)arg1 ;
-(void)clearUnseenImageBlocks;
-(void)_clearUnseenImageBlocksTimerFired:(id)arg1 ;
-(void)clearFlattenedCIImage;
-(char)scrollingLoadsTiles;
-(void)loadBlocksInScaledSourceRect:(CGRect)arg1 ;
-(void)_cleanUpZoomTimer;
-(CGRect)visibleScaledImageRectForZoomFactor:(double)arg1 ;
-(void)_setZoomFactor:(double)arg1 loadInRect:(CGRect)arg2 ;
-(double)zoomFactorWithScreenScale;
-(double)_scaleFactorForResettingScaledCIImage;
-(id)newFlattenedImageForImage:(id)arg1 ;
-(void)setupFlattenedCIImage;
-(void)_updateUnderlyingCIImageToFullSizeIfNecessaryForZoomFactor:(double)arg1 ;
-(void)loadBlocksInScaledSourceRect:(CGRect)arg1 usingBlockCollection:(id)arg2 ;
-(CGRect)viewRectToScaledImageRect:(CGRect)arg1 withZoomFactor:(double)arg2 ;
-(char)_replacingOldThumbnail;
-(CGRect)_rectToLoadForZoomFactor:(double)arg1 withViewCenterPoint:(CGPoint)arg2 ;
-(double)_zoomToFitScaleFactorForImageWithSize:(CGSize)arg1 ;
-(CGPoint)_scrollPointAfterChangingSizeTo:(CGSize)arg1 ;
-(void)_installAnimationLayer;
-(void)setAnchorPointWithoutShift:(CGPoint)arg1 forLayer:(id)arg2 ;
-(void)_uninstallAnimationLayer;
-(CGPoint)_positionAfterZoomAnimationWithScale:(double)arg1 andCenter:(CGPoint)arg2 ;
-(void)pausedInZoomGesture:(id)arg1 ;
-(id)softProofFilter;
-(void)_flipImageDirectionWithAnimation:(int)arg1 ;
-(char)_flipShouldHappenOnOppositeOfRequestedAxis;
-(void)_shiftContentViewToViewCenter;
-(CGRect)rectVisibleInClipView;
-(CGRect)rectInThisViewForBlock:(id)arg1 ;
-(CGRect)_zoomedImageRectForViewRect:(CGRect)arg1 ;
-(id)_newThumbnailMaskWithBlockWidth:(double)arg1 blockHeight:(double)arg2 ;
-(CGRect)_extendRect:(CGRect)arg1 byRect:(CGRect)arg2 ;
-(void)loadingCompleteForRect:(CGRect)arg1 withBlockCollection:(id)arg2 andThumbnailMask:(id)arg3 ;
-(char)_isUsingTiles;
-(void)_backgroundDidFinishLoading;
-(CGImageRef)_newScaledCGImageFromCGImage:(CGImageRef)arg1 atScale:(double)arg2 rotation:(double)arg3 flipped:(int)arg4 ;
-(void)_endOperation:(id)arg1 ;
-(CGRect)convertRectToUpperLeftOrigin:(CGRect)arg1 inBoundingRect:(CGRect)arg2 ;
-(id)_cachedCIContext;
-(id)_imageToDrawForLayer:(id)arg1 ;
-(CGRect)_sourceRectToDrawForLayer:(id)arg1 andImage:(id)arg2 ;
-(void)finishedDrawingLayer:(id)arg1 ;
-(double)_underlyingCIImageScale;
-(double)_zoomToFitScaleFactorIgnoringWindowSizeForImageWithSize:(CGSize)arg1 ;
-(void)_updateUnderlyingCIImageWithScale:(double)arg1 ;
-(char)_hasLoadedRepresentation;
-(id)initWithFrame:(CGRect)arg1 andImageView:(id)arg2 ;
-(void)freezeMoveToWindowUpdates;
-(void)unfreezeMoveToWindowUpdates;
-(void)finishMovingViewToScrollView;
-(void)setFlattenedDrawingCIImage:(id)arg1 ;
-(void)insertOverlayView:(id)arg1 ;
-(CGSize)_imageSizeWithExif:(unsigned long long)arg1 ;
-(void)zoomToFullSize;
-(void)flipImageHorizontal;
-(void)flipImageVertical;
-(CGImageRef)newVisibleImageSnapshot;
-(CGSize)imageSizeWithoutRotations;
-(void)originalImageFileWillChangeOnDisk;
-(void)setRenderInfo:(IKImageRenderInfo *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeFromSuperview;
-(void)viewDidMoveToWindow;
-(void)windowDidChangeBackingProperties:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(CGSize)imageSize;
-(void)viewDidEndLiveResize;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(void)commonInit;
-(CGImageRef)originalCGImage;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)teardown;
-(void)setLoadsSynchronously:(char)arg1 ;
-(char)setImageURL:(id)arg1 imageAtIndex:(long long)arg2 withDisplayProperties:(id)arg3 ;
-(char)setImageData:(id)arg1 imageAtIndex:(long long)arg2 withDisplayProperties:(id)arg3 ;
-(char)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(NSView *)annotationsView;
-(CGPoint)convertPointToImage:(CGPoint)arg1 ;
-(CGPoint)convertPointFromImage:(CGPoint)arg1 ;
-(CGRect)convertRectToImage:(CGRect)arg1 ;
-(char)stickyZoomToFit;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(void)setShouldUseTiles:(char)arg1 ;
-(void)setAlwaysHidesScrollers:(char)arg1 ;
-(void)setZoomFactor:(double)arg1 centeredAtImagePoint:(CGPoint)arg2 animate:(char)arg3 stickyFit:(char)arg4 ;
-(void)_setZoomFactor:(double)arg1 ;
-(char)loadsSynchronously;
-(void)setImageIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageIndex;
-(void)_zoomToFit;
-(CGRect)convertRectFromImage:(CGRect)arg1 ;
-(char)_hasBeenTornDown;
-(IKImageRenderInfo *)renderInfo;
-(CGImageRef)thumbnailCGImage;
-(void)setStickyZoomToFit:(char)arg1 ;
-(void)setMinNearestNeighborScale:(double)arg1 ;
-(char)isAnimatingTransform;
-(double)defaultTransformAnimationDuration;
-(id)borrowContent;
-(void)returnBorrowedContent;
-(void)setSoftProofFilter:(id)arg1 ;
-(void)setRotationAngleWithAnimation:(double)arg1 aroundImagePoint:(CGPoint)arg2 duration:(double)arg3 ;
-(void)setRotationAngle:(double)arg1 centeredAroundImagePoint:(CGPoint)arg2 ;
-(id)flattenedUnfilteredCIImage;
-(char)setCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(CGPoint)_rotatedPoint:(CGPoint)arg1 byDegrees:(double)arg2 ;
-(CALayer *)annotationsLayer;
-(CGSize)_sizeOfRotatedRectOriginal:(CGSize)arg1 byDegrees:(double)arg2 ;
@end
