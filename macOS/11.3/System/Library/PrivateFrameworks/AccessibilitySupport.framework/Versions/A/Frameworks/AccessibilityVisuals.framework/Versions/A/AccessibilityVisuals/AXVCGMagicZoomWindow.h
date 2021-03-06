/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
@class NSWindow, NSLock, _AXVCGMagicZoomWindowInfo, NSOperationQueue;

@interface AXVCGMagicZoomWindow : NSObject {

	char _fullscreen;
	char _smoothImages;
	char _invertColor;
	char _keepFullyContainedWithinScreens;
	char _keepZoomedRegionAndZoomWindowCentersAligned;
	char _visible;
	char __referenceWindowCreated;
	char __invertColorFilterAdded;
	char __drawingDisabled;
	char __frameChangedWhileDrawingDisabled;
	unsigned __invertColorFilterID;
	unsigned __mainCGSConnectionID;
	unsigned __zoomWindowID;
	unsigned __zoomWindowNumber;
	double _zoomFactor;
	unsigned long long _pinnedZoomFrameDuringZoomFactorChanges;
	long long _level;
	NSWindow* __referenceWindow;
	NSLock* __drawingLock;
	double __previousScreenBackingScaleFactor;
	_AXVCGMagicZoomWindowInfo* __lastestZoomWindowInfo;
	NSOperationQueue* __zoomDrawingQueue;
	NSLock* __zoomInfoLock;
	CGSize _minimumSize;
	CGRect _frame;
	CGRect _zoomedRegionFrame;
	CGRect __frameBeforeGoingFullscreen;

}

@property (assign,getter=isVisible,nonatomic) char visible;                                          //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) unsigned _mainCGSConnectionID;                                        //@synthesize _mainCGSConnectionID=__mainCGSConnectionID - In the implementation block
@property (assign,nonatomic) unsigned _zoomWindowID;                                                 //@synthesize _zoomWindowID=__zoomWindowID - In the implementation block
@property (nonatomic,retain) NSWindow * _referenceWindow;                                            //@synthesize _referenceWindow=__referenceWindow - In the implementation block
@property (assign,nonatomic) char _referenceWindowCreated;                                           //@synthesize _referenceWindowCreated=__referenceWindowCreated - In the implementation block
@property (nonatomic,readonly) unsigned _zoomWindowNumber;                                           //@synthesize _zoomWindowNumber=__zoomWindowNumber - In the implementation block
@property (nonatomic,readonly) unsigned _invertColorFilterID;                                        //@synthesize _invertColorFilterID=__invertColorFilterID - In the implementation block
@property (assign,nonatomic) char _invertColorFilterAdded;                                           //@synthesize _invertColorFilterAdded=__invertColorFilterAdded - In the implementation block
@property (assign,nonatomic) CGRect _frameBeforeGoingFullscreen;                                     //@synthesize _frameBeforeGoingFullscreen=__frameBeforeGoingFullscreen - In the implementation block
@property (nonatomic,retain) NSLock * _drawingLock;                                                  //@synthesize _drawingLock=__drawingLock - In the implementation block
@property (assign,nonatomic) char _drawingDisabled;                                                  //@synthesize _drawingDisabled=__drawingDisabled - In the implementation block
@property (assign,nonatomic) char _frameChangedWhileDrawingDisabled;                                 //@synthesize _frameChangedWhileDrawingDisabled=__frameChangedWhileDrawingDisabled - In the implementation block
@property (assign,nonatomic) double _previousScreenBackingScaleFactor;                               //@synthesize _previousScreenBackingScaleFactor=__previousScreenBackingScaleFactor - In the implementation block
@property (nonatomic,retain) _AXVCGMagicZoomWindowInfo * _lastestZoomWindowInfo;                     //@synthesize _lastestZoomWindowInfo=__lastestZoomWindowInfo - In the implementation block
@property (nonatomic,retain) NSOperationQueue * _zoomDrawingQueue;                                   //@synthesize _zoomDrawingQueue=__zoomDrawingQueue - In the implementation block
@property (nonatomic,retain) NSLock * _zoomInfoLock;                                                 //@synthesize _zoomInfoLock=__zoomInfoLock - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                           //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) char fullscreen;                                                        //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) CGRect zoomedRegionFrame;                                               //@synthesize zoomedRegionFrame=_zoomedRegionFrame - In the implementation block
@property (assign,nonatomic) CGPoint zoomedRegionCenter; 
@property (assign,nonatomic) CGSize zoomedRegionSize; 
@property (assign,nonatomic) double zoomFactor;                                                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (nonatomic,readonly) char isZoomed; 
@property (assign,nonatomic) char smoothImages;                                                      //@synthesize smoothImages=_smoothImages - In the implementation block
@property (assign,nonatomic) char invertColor;                                                       //@synthesize invertColor=_invertColor - In the implementation block
@property (assign,nonatomic) char keepFullyContainedWithinScreens;                                   //@synthesize keepFullyContainedWithinScreens=_keepFullyContainedWithinScreens - In the implementation block
@property (assign,nonatomic) char keepZoomedRegionAndZoomWindowCentersAligned;                       //@synthesize keepZoomedRegionAndZoomWindowCentersAligned=_keepZoomedRegionAndZoomWindowCentersAligned - In the implementation block
@property (assign,nonatomic) unsigned long long pinnedZoomFrameDuringZoomFactorChanges;              //@synthesize pinnedZoomFrameDuringZoomFactorChanges=_pinnedZoomFrameDuringZoomFactorChanges - In the implementation block
@property (assign,nonatomic) long long level;                                                        //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long maxZoomedWindowLevel; 
@property (assign,nonatomic) CGSize minimumSize;                                                     //@synthesize minimumSize=_minimumSize - In the implementation block
+(long long)_getNextAvailableZoomWindowNumber;
+(id)keyPathsForValuesAffectingframe;
+(id)keyPathsForValuesAffectingCenter;
+(id)keyPathsForValuesAffectingSize;
+(id)keyPathsForValuesAffectingZoomedRegionFrame;
+(id)keyPathsForValuesAffectingZoomedRegionCenter;
+(id)keyPathsForValuesAffectingZoomedRegionSize;
+(id)keyPathsForValuesAffectingIsZoomed;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)setSize:(CGSize)arg1 ;
-(long long)level;
-(CGSize)minimumSize;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(char)isVisible;
-(void)setLevel:(long long)arg1 ;
-(CGPoint)center;
-(void)setVisible:(char)arg1 ;
-(void)hide;
-(void)show;
-(char)isZoomed;
-(void)setMinimumSize:(CGSize)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(char)fullscreen;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(void)setFullscreen:(char)arg1 ;
-(id)initWithMaxZoomedWindowLevel:(long long)arg1 ;
-(void)setKeepZoomedRegionAndZoomWindowCentersAligned:(char)arg1 ;
-(void)setZoomedRegionFrame:(CGRect)arg1 ;
-(char)smoothImages;
-(void)setSmoothImages:(char)arg1 ;
-(double)_previousScreenBackingScaleFactor;
-(id)initWithZoomWindowNumber:(long long)arg1 referenceWindow:(id)arg2 ;
-(void)setMaxZoomedWindowLevel:(long long)arg1 ;
-(void)_setTrustedForObscuring;
-(unsigned)_zoomWindowID;
-(unsigned)_zoomWindowNumber;
-(char)_setJustZoomWindowFrame:(CGRect)arg1 ;
-(unsigned long long)pinnedZoomFrameDuringZoomFactorChanges;
-(CGSize)zoomedRegionSize;
-(char)_setJustZoomFactor:(double)arg1 ;
-(char)keepZoomedRegionAndZoomWindowCentersAligned;
-(char)_setJustZoomedRegionFrame:(CGRect)arg1 ;
-(char)_setJustFullscreen:(char)arg1 ;
-(CGPoint)zoomedRegionCenter;
-(void)set_frameBeforeGoingFullscreen:(CGRect)arg1 ;
-(CGRect)_frameBeforeGoingFullscreen;
-(CGRect)zoomedRegionFrame;
-(unsigned)_mainCGSConnectionID;
-(void)_updateMagicZoomWindow;
-(long long)maxZoomedWindowLevel;
-(void)levelDidChange;
-(NSWindow *)_referenceWindow;
-(char)_referenceWindowCreated;
-(void)set_referenceWindow:(NSWindow *)arg1 ;
-(void)set_referenceWindowCreated:(char)arg1 ;
-(void)set_zoomWindowID:(unsigned)arg1 ;
-(void)set_invertColorFilterAdded:(char)arg1 ;
-(NSLock *)_drawingLock;
-(void)set_drawingDisabled:(char)arg1 ;
-(char)_frameChangedWhileDrawingDisabled;
-(void)set_frameChangedWhileDrawingDisabled:(char)arg1 ;
-(void)frameDidChange;
-(char)keepFullyContainedWithinScreens;
-(char)_drawingDisabled;
-(void)_updateLastestZoomWindowParameter;
-(NSOperationQueue *)_zoomDrawingQueue;
-(NSLock *)_zoomInfoLock;
-(_AXVCGMagicZoomWindowInfo *)_lastestZoomWindowInfo;
-(void)set_previousScreenBackingScaleFactor:(double)arg1 ;
-(char)invertColor;
-(char)_invertColorFilterAdded;
-(unsigned)_invertColorFilterID;
-(void)set_lastestZoomWindowInfo:(_AXVCGMagicZoomWindowInfo *)arg1 ;
-(id)initWithReferenceWindow:(id)arg1 ;
-(void)setZoomedRegionCenter:(CGPoint)arg1 ;
-(void)setZoomedRegionSize:(CGSize)arg1 ;
-(void)setInvertColor:(char)arg1 ;
-(void)beginNonDrawingTransaction;
-(void)endNonDrawingTransaction;
-(void)redraw;
-(void)setKeepFullyContainedWithinScreens:(char)arg1 ;
-(void)setPinnedZoomFrameDuringZoomFactorChanges:(unsigned long long)arg1 ;
-(void)set_drawingLock:(NSLock *)arg1 ;
-(void)set_zoomDrawingQueue:(NSOperationQueue *)arg1 ;
-(void)set_zoomInfoLock:(NSLock *)arg1 ;
@end

