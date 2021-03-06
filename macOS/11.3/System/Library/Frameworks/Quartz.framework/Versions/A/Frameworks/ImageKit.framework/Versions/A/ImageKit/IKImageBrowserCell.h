/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKImageBrowserCell : NSObject {

	id _parent;
	void* _ibCellReserved;

}
+(char)aCellIsPlayingInView:(id)arg1 ;
+(CGPoint)anchorPointTranslationWithView:(id)arg1 ;
+(void)stopCurrentPlayerIfAny;
+(char)supportsHeightOfInfoSpaceFactorization;
+(CGPoint)anchorPointForCellFrame:(CGRect)arg1 withView:(id)arg2 ;
+(char)shouldWrapLabelsForIconSize:(double)arg1 gridSpacing:(double)arg2 titlesOnRight:(char)arg3 ;
+(void)temporaryPauseCurrentPlayingMovieIfAny:(id)arg1 ;
-(void)setPrivateAnimationMask:(unsigned)arg1 ;
-(void)drawDragHighlight;
-(void)drawWithComponentMask:(int)arg1 ;
-(int)_heightOfFixedSizeSpace;
-(float)_computeAspectRatio;
-(CGSize)imageSizeForCellSize:(CGSize)arg1 withAspectRatio:(float)arg2 ;
-(CGRect)imageContainerFrame;
-(CGRect)playerFrame;
-(void)positionDidChange;
-(int)heightOfInfoSpace;
-(void)_computeImageFrame;
-(void)setLayoutValid:(char)arg1 ;
-(CGRect)imageBorderFrame;
-(void)stopPlay;
-(char)_transform:(CATransform3D*)arg1 forLayer:(id)arg2 inFrame:(CGRect)arg3 ;
-(id)__caRenderer;
-(void)renderLayer:(id)arg1 inFrame:(CGRect)arg2 ;
-(char)_playerViewHasPlayControls;
-(CGRect)imageSourceRectForImage:(id)arg1 ;
-(void)drawPlayerControl;
-(CGSize)_getTitleSize;
-(id)currentTitleAttributes;
-(double)roundedWidthForCenterAlignment:(double)arg1 ;
-(void)drawTitleBackground;
-(CGRect)titleStringFrame;
-(void)drawSelectionOnTitle;
-(CGRect)subtitleFrame;
-(CGSize)_virtualImageFrameSizeForSizeToFill:(CGSize)arg1 ;
-(int)_sizeToDraw;
-(void)drawSubtitle;
-(void)temporaryPauseMovie;
-(void)startPlay;
-(char)titleIsTruncated;
-(char)_isFirstPageOfBookletStyle;
-(char)_redisplayOnRollover;
-(void)invalidateTitleSize;
-(char)cachedTitleSizeIsValid;
-(CGRect)imageFrameForImageContainerFrame:(CGRect)arg1 useAspectRatio:(char)arg2 ;
-(void)centerToPosition:(CGPoint)arg1 ;
-(CGRect)inlinePreviewFrame;
-(void)invalidateTitle;
-(SCD_Struct_IK11)usedRectInCellFrame:(SCD_Struct_IK11)arg1 ;
-(char)acceptsDrop;
-(char)hitTestWithPoint:(CGPoint)arg1 ;
-(char)hitTestWithRect:(CGRect)arg1 ;
-(id)typeSelectString;
-(CGRect)_iconFrameForCellFrameSize:(CGSize)arg1 ;
-(char)canBeDoubleClicked;
-(void)setBlinking:(char)arg1 ;
-(void)willBeRemovedFromView;
-(void)datasourceItemDidChange;
-(void)didRecoverImageFromCache;
-(void)unpauseMovie;
-(int)cellState;
-(unsigned)privateAnimationMask;
-(char)mouseDown:(CGPoint)arg1 inView:(id)arg2 ;
-(char)isMouseOver;
-(void)finalize;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)invalidate;
-(void)setHidden:(char)arg1 ;
-(char)hidden;
-(void)setGroup:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(float)rotation;
-(unsigned long long)fileSize;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)draw;
-(void)setBrowser:(id)arg1 ;
-(id)browser;
-(void)invalidateLayout;
-(void)setAspectRatio:(float)arg1 ;
-(float)aspectRatio;
-(char)isSelectable;
-(id)representedItem;
-(unsigned long long)imageAlignment;
-(void)setSelected:(char)arg1 ;
-(char)isSelected;
-(void)setRotation:(float)arg1 ;
-(char)isPlaying;
-(double)opacity;
-(void)drawImage:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(int)contentMode;
-(CGRect)imageFrame;
-(char)isBlinking;
-(double)baseline;
-(id)playerView;
-(CGRect)selectionFrame;
-(id)layerForType:(id)arg1 ;
-(void)parentWillDie:(id)arg1 ;
-(char)isLayoutValid;
-(void)setReordering:(char)arg1 ;
-(void)sizeDidChange;
-(char)reordering;
-(CGRect)titleFrame;
-(void)drawBackground;
-(CGRect)imageFrameForCellFrame:(CGRect)arg1 ;
-(void)drawTitle;
-(char)contentCanBePlayed;
-(unsigned long long)indexOfRepresentedItem;
-(CGRect)imageFrameForImageContainerFrame:(CGRect)arg1 ;
-(void)drawShadow;
-(void)drawImageOutline;
-(char)showPlayerControls;
-(void)didImport;
-(void)installToolTips;
-(void)drawOverlays;
-(void)drawSelection;
-(id)imageBrowserView;
-(void)setImageBrowserView:(id)arg1 ;
-(CGRect)reflectionFrame;
-(void)imageDidChange;
-(CGRect)playButtonFrame;
-(CGRect)roundedFrame;
-(char)wantsRollover;
-(void)drawPlaceHolder;
@end

