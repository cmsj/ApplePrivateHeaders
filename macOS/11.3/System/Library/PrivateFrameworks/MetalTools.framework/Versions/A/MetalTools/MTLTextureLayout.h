/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTextureLayout <NSObject>
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long alignment; 
@property (readonly) SCD_Struct_MT0 copyGranularity; 
@property (readonly) SCD_Struct_MT61 watermark; 
@optional
-(void)initializeTextureMemory:(void*)arg1;

@required
-(unsigned long long)size;
-(unsigned long long)alignment;
-(SCD_Struct_MT0)copyGranularity;
-(SCD_Struct_MT61)watermark;
-(void)copyFromLinearBytes:(const void*)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void*)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(SCD_Struct_MT8)arg8;
-(void)copyFromTextureMemory:(const void*)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(SCD_Struct_MT8)arg4 toLinearBytes:(void*)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8;
-(void)finalizeTextureMemory:(void*)arg1;

@end

