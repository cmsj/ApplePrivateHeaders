/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoKit/GeoKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, CALayer;

@interface GEOWorldImageLayer : CALayer {

	CGSize imageSize;
	double rotation;
	NSArray* slices;
	CALayer* reentrantSlice;

}

@property (readonly) CGSize imageSize; 
@property (assign) double rotation; 
@property (assign) CGRect zoomFrame; 
+(id)worldImageLayerWithImage:(CGImageRef)arg1 ;
+(CGContextRef)_copyContextToHostOverlappingImage:(CGImageRef)arg1 ;
+(CGImageRef)_copyOverlappingWorldImageWithImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(double)rotation;
-(CGSize)imageSize;
-(id)initWithImage:(CGImageRef)arg1 ;
-(void)setMinificationFilter:(id)arg1 ;
-(void)setRotation:(double)arg1 ;
-(CGRect)zoomFrame;
-(void)setZoomFrame:(CGRect)arg1 ;
-(void)_initSlicesWithImage:(CGImageRef)arg1 ;
-(void)_applyRotation;
-(CGPoint)imagePointFromCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

