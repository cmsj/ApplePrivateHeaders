/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDShapeLayout.h>

@protocol TSDInfo;
@class TSUBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout, NSObject, TSDConnectionLineInfo;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {

	TSUBezierPath* mClippedBezierPath;
	TSDConnectionLinePathSource* mOriginalPathSource;
	TSDConnectionLinePathSource* mConnectedPathSource;
	TSDInfoGeometry* mConnectedInfoGeometry;
	TSDLayout* mConnectedFrom;
	TSDLayout* mConnectedTo;
	NSObject*<TSDInfo> mConnectedFromInfo;
	NSObject*<TSDInfo> mConnectedToInfo;
	TSUBezierPath* mCachedFromWrapPath;
	TSUBezierPath* mCachedToWrapPath;
	double mCachedFromOutset;
	double mCachedToOutset;
	TSUBezierPath* mCachedFromOutsetWrapPath;
	TSUBezierPath* mCachedToOutsetWrapPath;
	TSDLayout* mOldConnectedFrom;
	TSDLayout* mOldConnectedTo;
	char mValidConnections;
	char mVisibleLine;
	char mValidLine;
	CGPoint mLooseEndPosition;
	CGPoint mAcumulatedDrag;
	char mUseResizePoints[3];
	CGPoint mResizeControlPoints[3];
	char mUseDynamicOutsets;
	double mDynamicOutsetFrom;
	double mDynamicOutsetTo;
	unsigned long long mDynamicOutsetType;

}

@property (assign,nonatomic,__weak) TSDLayout * connectedFrom; 
@property (assign,nonatomic,__weak) TSDLayout * connectedTo; 
@property (assign,nonatomic,__weak) NSObject*<TSDInfo> connectedFromInfo; 
@property (assign,nonatomic,__weak) NSObject*<TSDInfo> connectedToInfo; 
@property (nonatomic,readonly) char validLine; 
@property (nonatomic,readonly) TSDConnectionLinePathSource * connectedPathSource; 
@property (assign,nonatomic) unsigned long long dynamicOutsetType; 
@property (assign,nonatomic) char useDynamicOutsets; 
@property (assign,nonatomic) double dynamicOutsetFrom; 
@property (assign,nonatomic) double dynamicOutsetTo; 
@property (nonatomic,readonly) double outsetFrom; 
@property (nonatomic,readonly) double outsetTo; 
@property (nonatomic,readonly) TSDConnectionLineInfo * connectionLineInfo; 
@property (getter=isStraightLine,nonatomic,readonly) char straightLine; 
-(void)dealloc;
-(id)path;
-(CGSize)minimumSize;
-(char)isDraggable;
-(void)invalidatePath;
-(int)wrapType;
-(char)isInvisible;
-(void)invalidateConnections;
-(void)invalidateSize;
-(void)invalidatePosition;
-(char)shouldDisplayGuides;
-(void)processChangedProperty:(int)arg1 ;
-(void)parentDidChange;
-(CGRect)boundsForStandardKnobs;
-(char)supportsRotation;
-(void)connectedLayoutInvalidated:(id)arg1 ;
-(char)shouldValidate;
-(id)reliedOnLayouts;
-(id)additionalLayoutsForRepCreation;
-(char)supportsFlipping;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)pathSource;
-(char)pathIsOpen;
-(char)pathIsLineSegment;
-(id)layoutInfoGeometry;
-(char)canBeIntersected;
-(char)canResetTextAndObjectHandles;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(TSDLayout *)connectedFrom;
-(TSDLayout *)connectedTo;
-(void)setConnectedFrom:(TSDLayout *)arg1 ;
-(void)setConnectedTo:(TSDLayout *)arg1 ;
-(double)outsetFrom;
-(id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(char)arg4 isValid:(char*)arg5 ;
-(double)outsetTo;
-(TSDConnectionLinePathSource *)connectedPathSource;
-(char)isStraightLine;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
-(char)validLine;
-(char)p_isConnectedToLockedObjects;
-(void)checkConnections;
-(void)removeConnections;
-(TSDConnectionLineInfo *)connectionLineInfo;
-(id)p_infoForConnectingToInfo:(id)arg1 ;
-(char)canEndpointsCoincide;
-(void)updateConnectedPath;
-(char)useDynamicOutsets;
-(void)setUseDynamicOutsets:(char)arg1 ;
-(double)dynamicOutsetFrom;
-(void)setDynamicOutsetFrom:(double)arg1 ;
-(double)dynamicOutsetTo;
-(void)setDynamicOutsetTo:(double)arg1 ;
-(void)connectedLayoutDisconnected:(id)arg1 ;
-(void)i_willValidateLayout;
-(char)shouldAdjustForStrokeWidthForCollabCursor;
-(void)i_setVisibleLine:(char)arg1 ;
-(char)i_visibleLine;
-(void)invalidateAndCleanupConnectedLayouts;
-(char)p_isInfoAKeynoteMasterObject:(id)arg1 ;
-(char)p_connectedInfoInDocument:(id)arg1 ;
-(NSObject*<TSDInfo>)connectedFromInfo;
-(void)setConnectedFromInfo:(NSObject*<TSDInfo>)arg1 ;
-(NSObject*<TSDInfo>)connectedToInfo;
-(void)setConnectedToInfo:(NSObject*<TSDInfo>)arg1 ;
-(unsigned long long)dynamicOutsetType;
-(void)setDynamicOutsetType:(unsigned long long)arg1 ;
@end

