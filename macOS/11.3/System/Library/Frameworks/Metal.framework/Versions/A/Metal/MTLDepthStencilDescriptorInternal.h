/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLDepthStencilDescriptor.h>

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {

	MTLDepthStencilDescriptorPrivate _private;

}

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setDepthWriteEnabled:(char)arg1 ;
-(void)setDepthCompareFunction:(unsigned long long)arg1 ;
-(id)frontFaceStencil;
-(id)backFaceStencil;
-(unsigned long long)depthCompareFunction;
-(char)isDepthWriteEnabled;
-(void)setFrontFaceStencil:(id)arg1 ;
-(void)setBackFaceStencil:(id)arg1 ;
-(const MTLDepthStencilDescriptorPrivate*)depthStencilPrivate;
@end
