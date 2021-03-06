/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions {

	char _optimizeForSharing;
	char _applyImageOrientationAsMetadata;
	NUImageExportFormat* _imageExportFormat;
	double _JPEGCompressionQuality;
	/*^block*/id _metadataProcessor;

}

@property (copy) NUImageExportFormat * imageExportFormat;              //@synthesize imageExportFormat=_imageExportFormat - In the implementation block
@property (assign) double JPEGCompressionQuality;                      //@synthesize JPEGCompressionQuality=_JPEGCompressionQuality - In the implementation block
@property (copy) id metadataProcessor;                                 //@synthesize metadataProcessor=_metadataProcessor - In the implementation block
@property (assign) char optimizeForSharing;                            //@synthesize optimizeForSharing=_optimizeForSharing - In the implementation block
@property (assign) char applyImageOrientationAsMetadata;               //@synthesize applyImageOrientationAsMetadata=_applyImageOrientationAsMetadata - In the implementation block
-(id)init;
-(void)setJPEGCompressionQuality:(double)arg1 ;
-(id)metadataProcessor;
-(void)setMetadataProcessor:(id)arg1 ;
-(id)imageExportFormatForURL:(id)arg1 ;
-(NUImageExportFormat *)imageExportFormat;
-(void)setImageExportFormat:(NUImageExportFormat *)arg1 ;
-(double)JPEGCompressionQuality;
-(char)optimizeForSharing;
-(void)setOptimizeForSharing:(char)arg1 ;
-(char)applyImageOrientationAsMetadata;
-(void)setApplyImageOrientationAsMetadata:(char)arg1 ;
@end

