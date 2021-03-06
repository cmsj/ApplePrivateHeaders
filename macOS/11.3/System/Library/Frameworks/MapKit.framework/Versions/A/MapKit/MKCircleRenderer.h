/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayCircle, MKCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {

	VKVectorOverlayCircle* _vectorData;
	double _strokeStart;
	double _strokeEnd;

}

@property (nonatomic,readonly) MKCircle * circle; 
@property (assign,nonatomic) double strokeStart; 
@property (assign,nonatomic) double strokeEnd; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)_performInitialConfiguration;
-(char)_canProvideVectorGeometry;
-(void)_updateRenderColors;
-(void)createPath;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(char)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(id)_vectorData;
-(double)strokeStart;
-(double)strokeEnd;
-(id)initWithCircle:(id)arg1 ;
-(MKCircle *)circle;
-(void)setStrokeStart:(double)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
@end

