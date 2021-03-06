/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, _CLPlaceInference;

@interface CLVisit : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _arrivalDate;
	NSDate* _departureDate;
	double _horizontalAccuracy;
	NSDate* _detectionDate;
	_CLPlaceInference* __placeInference;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) char hasArrivalDate; 
@property (nonatomic,readonly) char hasDepartureDate; 
@property (nonatomic,copy,readonly) NSDate * detectionDate;                      //@synthesize detectionDate=_detectionDate - In the implementation block
@property (nonatomic,readonly) _CLPlaceInference * _placeInference;              //@synthesize _placeInference=__placeInference - In the implementation block
@property (nonatomic,copy,readonly) NSDate * arrivalDate;                        //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * departureDate;                      //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;                //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                        //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 placeInference:(id)arg6 ;
-(char)hasDepartureDate;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)horizontalAccuracy;
-(_CLPlaceInference *)_placeInference;
-(NSDate *)detectionDate;
-(NSDate *)arrivalDate;
-(char)hasArrivalDate;
-(NSDate *)departureDate;
@end

