/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSDictionary, NSIndexSet, NSArray;

@interface ICScannerFunctionalUnit : NSObject {

	id _fuProps;

}

@property (readonly) char supportsProgressNotificationsWithScanData; 
@property (readonly) NSDictionary * scanParams; 
@property (assign) char useOverviewImageAsFinalImage; 
@property (readonly) unsigned long long type; 
@property (assign) unsigned long long pixelDataType; 
@property (readonly) NSIndexSet * supportedBitDepths; 
@property (assign) unsigned long long bitDepth; 
@property (readonly) NSIndexSet * supportedMeasurementUnits; 
@property (assign) unsigned long long measurementUnit; 
@property (readonly) NSIndexSet * supportedResolutions; 
@property (readonly) NSIndexSet * preferredResolutions; 
@property (assign) unsigned long long resolution; 
@property (readonly) unsigned long long nativeXResolution; 
@property (readonly) unsigned long long nativeYResolution; 
@property (readonly) NSIndexSet * supportedScaleFactors; 
@property (readonly) NSIndexSet * preferredScaleFactors; 
@property (assign) unsigned long long scaleFactor; 
@property (readonly) NSArray * templates; 
@property (readonly) NSArray * vendorFeatures; 
@property (readonly) CGSize physicalSize; 
@property (assign) CGRect scanArea; 
@property (assign) unsigned long long scanAreaOrientation; 
@property (readonly) char acceptsThresholdForBlackAndWhiteScanning; 
@property (assign) char usesThresholdForBlackAndWhiteScanning; 
@property (readonly) unsigned char defaultThresholdForBlackAndWhiteScanning; 
@property (assign) unsigned char thresholdForBlackAndWhiteScanning; 
@property (readonly) unsigned long long state; 
@property (readonly) char scanInProgress; 
@property (readonly) double scanProgressPercentDone; 
@property (readonly) char canPerformOverviewScan; 
@property (readonly) char overviewScanInProgress; 
@property (readonly) CGImageRef overviewImage; 
@property (assign) unsigned long long overviewResolution; 
+(char)automaticallyNotifiesObserversOfScanProgressPercentDone;
-(CGImageRef)grayOverviewImage;
-(CGImageRef)overviewImage;
-(unsigned long long)overviewResolution;
-(id)overviewImageBufferRep;
-(char)overviewScanInProgress;
-(void)setOverviewScanInProgress:(char)arg1 ;
-(void)setScanArea:(CGRect)arg1 ;
-(CGRect)scanArea;
-(void)setMeasurementUnit:(unsigned long long)arg1 ;
-(double)scanProgressPercentDone;
-(char)canPerformOverviewScan;
-(NSIndexSet *)preferredResolutions;
-(void)setOverviewResolution:(unsigned long long)arg1 ;
-(void)setBackgroundGrayValue:(unsigned char)arg1 ;
-(void)setUseOverviewImageAsFinalImage:(char)arg1 ;
-(unsigned long long)measurementUnit;
-(void)setScanAreaOrientation:(unsigned long long)arg1 ;
-(void)updateOverviewSelectionRect:(CGRect)arg1 ;
-(NSIndexSet *)supportedMeasurementUnits;
-(NSIndexSet *)supportedBitDepths;
-(unsigned char)defaultThresholdForBlackAndWhiteScanning;
-(char)acceptsThresholdForBlackAndWhiteScanning;
-(char)usesThresholdForBlackAndWhiteScanning;
-(id)colorSyncProfilePath;
-(void)clearOverviewImageBuffer;
-(unsigned char)backgroundGrayValue;
-(unsigned long long)measurementUnitPrivate;
-(unsigned long long)nativeXResolution;
-(unsigned long long)nativeYResolution;
-(NSIndexSet *)supportedScaleFactors;
-(NSIndexSet *)preferredScaleFactors;
-(CGSize)physicalSizeInInches;
-(CGSize)minimumScanSizeInInches;
-(unsigned long long)templateMeasurementUnit;
-(char)supportsProgressNotificationsWithScanData;
-(char)useOverviewImageAsFinalImage;
-(void)setUsesThresholdForBlackAndWhiteScanning:(char)arg1 ;
-(void)setThresholdForBlackAndWhiteScanning:(unsigned char)arg1 ;
-(unsigned char)thresholdForBlackAndWhiteScanning;
-(id)colorSyncModeForGrayOverview;
-(void)setScanProgressPercentDone:(double)arg1 ;
-(unsigned long long)scanAreaOrientation;
-(NSDictionary *)scanParams;
-(id)initWithDictionary:(id)arg1 andScanner:(id)arg2 ;
-(id)colorSyncModeForRGBOverview;
-(char)scanningInProgress;
-(void)addScanAreaToDictionary:(id)arg1 ;
-(void)updateScanProgressWithImageInfo:(id)arg1 ;
-(void)updateOverviewOvelayBuffer:(id)arg1 ;
-(void)updateVendorFeature:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)state;
-(unsigned long long)type;
-(void)setState:(unsigned long long)arg1 ;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(unsigned long long)scaleFactor;
-(unsigned long long)resolution;
-(void)setResolution:(unsigned long long)arg1 ;
-(id)currentSettings;
-(void)setScanInProgress:(char)arg1 ;
-(char)scanInProgress;
-(void)setBitDepth:(unsigned long long)arg1 ;
-(unsigned long long)bitDepth;
-(NSIndexSet *)supportedResolutions;
-(id)scanner;
-(NSArray *)templates;
-(CGSize)physicalSize;
-(NSArray *)vendorFeatures;
-(void)setVendorFeatures:(NSArray *)arg1 ;
-(unsigned long long)pixelDataType;
-(void)setPixelDataType:(unsigned long long)arg1 ;
@end

