/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUBufferImage.h>
#import <libobjc.A.dylib/NUSurfaceImage.h>
#import <libobjc.A.dylib/NUMutableSurfaceImage.h>
#import <libobjc.A.dylib/NUPurgeableSurfaceImage.h>
#import <libobjc.A.dylib/NUMutablePurgeableSurfaceImage.h>

@class NUImageLayout, NUPixelFormat, NUColorSpace, NURegion, NSString;

@interface _NUSurfaceImage : _NUBufferImage <NUSurfaceImage, NUMutableSurfaceImage, NUPurgeableSurfaceImage, NUMutablePurgeableSurfaceImage>

@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU8 size; 
@property (copy,readonly) NURegion * validRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU9)arg2 toPoint:(SCD_Struct_NU8)arg3 device:(id)arg4 ;
-(char)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU9)arg2 toPoint:(SCD_Struct_NU8)arg3 ;
-(void)readTextureRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)writeTextureRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)writeSurfaceRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)readSurfaceRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

