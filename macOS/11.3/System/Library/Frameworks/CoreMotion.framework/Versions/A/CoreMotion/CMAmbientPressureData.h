/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>
#import <libobjc.A.dylib/SRSampleDirectExporting.h>

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting> {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM11 ambientPressure; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPressure:(SCD_Struct_CM10)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM11)ambientPressure;
-(long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1 ;
-(char)sr_prefersUTF8StringRepresentation;
@end

