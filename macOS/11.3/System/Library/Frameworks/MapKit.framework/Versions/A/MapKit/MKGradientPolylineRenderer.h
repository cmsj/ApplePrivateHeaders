/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPolylineRenderer.h>

@class NSArray;

@interface MKGradientPolylineRenderer : MKPolylineRenderer {

	NSArray* _colors;
	NSArray* _externallySetColors;
	NSArray* _locations;
	NSArray* _externallySetLocations;

}

@property (nonatomic,copy,readonly) NSArray * locations; 
@property (nonatomic,copy,readonly) NSArray * colors; 
+(Class)_mapkitLeafClass;
-(NSArray *)colors;
-(NSArray *)locations;
-(char)_canProvideVectorGeometry;
-(void)drawMapRect:(SCD_Struct_MK7)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)_updateVectorGeometry:(id)arg1 ;
-(void)_updateColorStops;
-(void)setColors:(id)arg1 atLocations:(id)arg2 ;
@end

