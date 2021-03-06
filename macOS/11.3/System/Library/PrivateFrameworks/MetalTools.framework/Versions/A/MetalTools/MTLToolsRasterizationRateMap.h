/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapSPI.h>

@class NSString;

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) SCD_Struct_MT0 screenSize; 
@property (readonly) SCD_Struct_MT0 physicalGranularity; 
@property (readonly) unsigned long long layerCount; 
@property (readonly) SCD_Struct_MT54 parameterBufferSizeAndAlign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(NSString *)label;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(SCD_Struct_MT0)screenSize;
-(SCD_Struct_MT0)physicalGranularity;
-(unsigned long long)layerCount;
-(SCD_Struct_MT54)parameterBufferSizeAndAlign;
-(SCD_Struct_MT0)physicalSizeForLayer:(unsigned long long)arg1 ;
-(SCD_Struct_MT55)mapScreenToPhysicalCoordinates:(SCD_Struct_MT55)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT55)mapPhysicalToScreenCoordinates:(SCD_Struct_MT55)arg1 forLayer:(unsigned long long)arg2 ;
-(void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
@end

