/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolylineGroup, MKMultiPolyline;

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolylineGroup* _vectorGeometry;
	double _strokeStart;
	double _strokeEnd;

}

@property (assign,setter=_setStrokeStart:,getter=_strokeStart,nonatomic) double strokeStart; 
@property (assign,setter=_setStrokeEnd:,getter=_strokeEnd,nonatomic) double strokeEnd; 
@property (nonatomic,readonly) MKMultiPolyline * multiPolyline; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)_performInitialConfiguration;
-(double)_strokeStart;
-(double)_strokeEnd;
-(char)_canProvideVectorGeometry;
-(id)_vectorGeometry;
-(void)_updateRenderColors;
-(void)createPath;
-(void)_setStrokeStart:(double)arg1 ;
-(void)_setStrokeEnd:(double)arg1 ;
-(char)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(id)initWithMultiPolyline:(id)arg1 ;
-(MKMultiPolyline *)multiPolyline;
-(void)drawMapRect:(SCD_Struct_MK7)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
@end

