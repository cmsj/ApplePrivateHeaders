/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImagingCore.framework/Versions/A/PAImagingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImagingCore/PAImagingCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PMRMeasurementList : NSObject <NSCopying> {

	vector<Measurement, std::__1::allocator<Measurement>>* _measurements;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(id)drain;
-(unsigned long long)capacity;
-(id)measurements;
-(id)initWithMeasurements:(id)arg1 ;
-(id)initWithBackingVector:(vector<Measurement, std::__1::allocator<Measurement>>*)arg1 ;
-(void)eachWithBlock:(/*^block*/id)arg1 ;
-(void)appendMeasurement:(id)arg1 ;
-(void)appendMeasurements:(id)arg1 ;
-(void)appendMeasurementList:(id)arg1 ;
-(void)reserve:(unsigned long long)arg1 ;
-(id)dataSetForKey:(id)arg1 ;
-(char)isEqualToMeasurementList:(id)arg1 ;
@end
