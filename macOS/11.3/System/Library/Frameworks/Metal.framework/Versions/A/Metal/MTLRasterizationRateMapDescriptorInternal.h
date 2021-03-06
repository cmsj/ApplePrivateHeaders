/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRasterizationRateMapDescriptor.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapDescriptorSPI.h>

@class NSString, MTLRasterizationRateLayerArrayInternal;

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {

	SCD_Struct_MT41 _screenSize;
	NSString* _label;
	vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *>>* _layers;
	MTLRasterizationRateLayerArrayInternal* _layerAccessor;

}
-(id)initWithScreenSize:(SCD_Struct_MT41)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(SCD_Struct_MT41)screenSize;
-(unsigned long long)layerCount;
-(const id*)layerPointer:(unsigned long long*)arg1 ;
-(id)layers;
-(void)setScreenSize:(SCD_Struct_MT41)arg1 ;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

