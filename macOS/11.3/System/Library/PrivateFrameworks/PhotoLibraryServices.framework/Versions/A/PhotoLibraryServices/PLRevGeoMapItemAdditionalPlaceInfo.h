/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSNumber* _placeType;
	unsigned long long _dominantOrderType;
	double _areaInSquareMeters;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * placeType;                         //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) unsigned long long dominantOrderType;              //@synthesize dominantOrderType=_dominantOrderType - In the implementation block
@property (nonatomic,readonly) double areaInSquareMeters;                         //@synthesize areaInSquareMeters=_areaInSquareMeters - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)placeType;
-(double)areaInSquareMeters;
-(id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4 ;
-(unsigned long long)dominantOrderType;
@end
