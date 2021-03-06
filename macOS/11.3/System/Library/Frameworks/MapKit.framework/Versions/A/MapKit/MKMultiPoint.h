/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>

@class NSString;

@interface MKMultiPoint : MKShape <MKGeoJSONObject> {

	CGSize* _points;
	unsigned long long _pointCount;
	SCD_Struct_MK7 _boundingRect;
	GEOOnce_s _calculatedMapPointsLength;
	double _mapPointsLength;
	GEOOnce_s _calculatedSelfIntersecting;
	char _selfIntersecting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(CGSize*)points;
-(unsigned long long)pointCount;
-(char)intersectsMapRect:(SCD_Struct_MK7)arg1 ;
-(SCD_Struct_MK7)boundingMapRect;
-(void)_assignPoints:(CGSize*)arg1 count:(unsigned long long)arg2 ;
-(double)_mapPointsLength;
-(char)_isSelfIntersecting;
-(void)_setPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
-(void)_setCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(void)_setBounds:(SCD_Struct_MK7)arg1 ;
-(void)_calculateBounds;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(void)_wrapAroundTheDateline:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(void)_pointsDidChange;
-(char)_determineSelfIntersecting;
-(void)getCoordinates:(CLLocationCoordinate2D*)arg1 range:(NSRange)arg2 ;
-(double)locationAtPointIndex:(unsigned long long)arg1 ;
-(id)locationsAtPointIndexes:(id)arg1 ;
@end

