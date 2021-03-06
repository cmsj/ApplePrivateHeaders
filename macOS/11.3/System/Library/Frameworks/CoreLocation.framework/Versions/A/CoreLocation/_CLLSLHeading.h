/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLLSLLocation, _CLLSLHeadingSupplInfo;

@interface _CLLSLHeading : NSObject <NSCopying, NSSecureCoding> {

	double _timestamp;
	double _confidence;
	unsigned long long _globalReferenceFrame;
	_CLLSLLocation* _location;
	_CLLSLHeadingSupplInfo* _supplemantaryInfo;
	 _rotationalAccuracyInRadians;
	SCD_Struct_CL24 _rotationFromGlobalToDeviceFrame;
	SCD_Struct_CL24 _rotationFromGlobalToCameraFrame;

}

@property (assign,nonatomic) double timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL24 rotationFromGlobalToDeviceFrame;              //@synthesize rotationFromGlobalToDeviceFrame=_rotationFromGlobalToDeviceFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL24 rotationFromGlobalToCameraFrame;              //@synthesize rotationFromGlobalToCameraFrame=_rotationFromGlobalToCameraFrame - In the implementation block
@property (assign,nonatomic)  rotationalAccuracyInRadians;                                 //@synthesize rotationalAccuracyInRadians=_rotationalAccuracyInRadians - In the implementation block
@property (assign,nonatomic) double confidence;                                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) unsigned long long globalReferenceFrame;                      //@synthesize globalReferenceFrame=_globalReferenceFrame - In the implementation block
@property (nonatomic,copy) _CLLSLLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) _CLLSLHeadingSupplInfo * supplemantaryInfo;                     //@synthesize supplemantaryInfo=_supplemantaryInfo - In the implementation block
+(char)supportsSecureCoding;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(SCD_Struct_CL24)rotationFromGlobalToDeviceFrame;
-(SCD_Struct_CL24)rotationFromGlobalToCameraFrame;
-()rotationalAccuracyInRadians;
-(unsigned long long)globalReferenceFrame;
-(_CLLSLHeadingSupplInfo *)supplemantaryInfo;
-(void)setRotationFromGlobalToDeviceFrame:(SCD_Struct_CL24)arg1 ;
-(void)setRotationFromGlobalToCameraFrame:(SCD_Struct_CL24)arg1 ;
-(void)setRotationalAccuracyInRadians:;
-(void)setGlobalReferenceFrame:(unsigned long long)arg1 ;
-(void)setSupplemantaryInfo:(_CLLSLHeadingSupplInfo *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_CLLSLLocation *)location;
-(double)confidence;
-(double)timestamp;
-(void)setLocation:(_CLLSLLocation *)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end

