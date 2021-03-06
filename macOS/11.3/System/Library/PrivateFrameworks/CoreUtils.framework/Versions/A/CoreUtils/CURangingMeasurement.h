/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSString;

@interface CURangingMeasurement : NSObject <NSSecureCoding> {

	unsigned _flags;
	double _distanceMeters;
	double _distanceError;
	NSError* _error;
	double _horizontalAngle;
	double _horizontalError;
	NSString* _identifier;
	double _verticalAngle;
	double _verticalError;
	double _ptsScore;
	unsigned long long _timestampTicks;

}

@property (assign,nonatomic) double horizontalAngle;                         //@synthesize horizontalAngle=_horizontalAngle - In the implementation block
@property (assign,nonatomic) double horizontalError;                         //@synthesize horizontalError=_horizontalError - In the implementation block
@property (assign,nonatomic) double verticalAngle;                           //@synthesize verticalAngle=_verticalAngle - In the implementation block
@property (assign,nonatomic) double verticalError;                           //@synthesize verticalError=_verticalError - In the implementation block
@property (assign,nonatomic) double distanceMeters;                          //@synthesize distanceMeters=_distanceMeters - In the implementation block
@property (assign,nonatomic) double distanceError;                           //@synthesize distanceError=_distanceError - In the implementation block
@property (nonatomic,copy) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double ptsScore;                                //@synthesize ptsScore=_ptsScore - In the implementation block
@property (assign,nonatomic) unsigned long long timestampTicks;              //@synthesize timestampTicks=_timestampTicks - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)flags;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSString *)identifier;
-(void)setError:(NSError *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(double)horizontalAngle;
-(double)horizontalError;
-(double)verticalAngle;
-(double)verticalError;
-(double)distanceMeters;
-(double)distanceError;
-(double)ptsScore;
-(unsigned long long)timestampTicks;
-(void)setDistanceMeters:(double)arg1 ;
-(void)setDistanceError:(double)arg1 ;
-(void)setHorizontalAngle:(double)arg1 ;
-(void)setHorizontalError:(double)arg1 ;
-(void)setVerticalAngle:(double)arg1 ;
-(void)setVerticalError:(double)arg1 ;
-(void)setPtsScore:(double)arg1 ;
-(void)setTimestampTicks:(unsigned long long)arg1 ;
@end

