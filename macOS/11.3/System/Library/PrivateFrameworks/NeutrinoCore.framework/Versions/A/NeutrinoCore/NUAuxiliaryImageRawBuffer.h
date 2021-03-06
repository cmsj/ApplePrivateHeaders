/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUAuxiliaryImage.h>

@class NSString;

@interface NUAuxiliaryImageRawBuffer : NSObject <NUAuxiliaryImage> {

	long long _auxiliaryImageType;
	CVBufferRef _pixelBuffer;
	CGImageMetadataRef _metadata;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,retain) CGImageMetadataRef metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (readonly) long long auxiliaryImageType;                     //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)dictionaryRepresentation;
-(CVBufferRef)pixelBuffer;
-(CGImageMetadataRef)metadata;
-(void)setMetadata:(CGImageMetadataRef)arg1 ;
-(unsigned)pixelFormatType;
-(long long)auxiliaryImageType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CGImageRef)cgImageRef;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(CVBufferRef)cvPixelBufferRef;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryImageType:(long long)arg2 ;
@end

