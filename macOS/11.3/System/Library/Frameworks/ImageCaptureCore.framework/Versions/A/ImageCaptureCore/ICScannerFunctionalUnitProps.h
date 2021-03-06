/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSMutableIndexSet, NSArray, ICScannerImageRep, ICScannerDevice, NSMutableDictionary;

@interface ICScannerFunctionalUnitProps : NSObject {

	unsigned long long _pixelDataType;
	NSMutableIndexSet* _supportedBitDepths;
	unsigned long long _bitDepth;
	NSMutableIndexSet* _supportedMeasurementUnits;
	unsigned long long _measurementUnit;
	unsigned long long _measurementUnitPrivate;
	unsigned long long _nativeXResolution;
	unsigned long long _nativeYResolution;
	NSMutableIndexSet* _supportedResolutions;
	NSMutableIndexSet* _preferredResolutions;
	unsigned long long _resolution;
	NSMutableIndexSet* _supportedScaleFactors;
	NSMutableIndexSet* _preferredScaleFactors;
	unsigned long long _scaleFactor;
	NSArray* _templates;
	NSArray* _vendorFeatures;
	char _acceptsThresholdForBlackAndWhiteScanning;
	char _usesThresholdForBlackAndWhiteScanning;
	unsigned char _defaultThresholdForBlackAndWhiteScanning;
	unsigned char _thresholdForBlackAndWhiteScanning;
	unsigned long long _state;
	ICScannerImageRep* _overviewImageBufferRep;
	CGDataProviderRef _overviewImageDataProvider;
	CGImageRef _overviewImage;
	CGImageRef _grayOverviewImage;
	unsigned long long _overviewResolution;
	CGColorSpaceRef _grayColorSpace;
	CGSize _physicalSizeInInches;
	CGSize _minimumScanSizeInInches;
	CGRect _scanArea;
	unsigned long long _scanAreaOrientation;
	double _scanProgressPercentDone;
	ICScannerDevice* _scanner;
	unsigned char _backgroundGrayValue;
	NSMutableDictionary* _scanParams;
	unsigned long long _templateMeasurementUnit;
	char _supportsProgressNotificationsWithScanData;
	char _useOverviewImageAsFinalImage;

}

@property (assign) unsigned long long pixelDataType;                                    //@synthesize pixelDataType=_pixelDataType - In the implementation block
@property (retain) NSMutableIndexSet * supportedBitDepths;                              //@synthesize supportedBitDepths=_supportedBitDepths - In the implementation block
@property (assign) unsigned long long bitDepth;                                         //@synthesize bitDepth=_bitDepth - In the implementation block
@property (retain) NSMutableIndexSet * supportedMeasurementUnits;                       //@synthesize supportedMeasurementUnits=_supportedMeasurementUnits - In the implementation block
@property (assign) unsigned long long measurementUnit;                                  //@synthesize measurementUnit=_measurementUnit - In the implementation block
@property (assign) unsigned long long measurementUnitPrivate;                           //@synthesize measurementUnitPrivate=_measurementUnitPrivate - In the implementation block
@property (assign) unsigned long long nativeXResolution;                                //@synthesize nativeXResolution=_nativeXResolution - In the implementation block
@property (assign) unsigned long long nativeYResolution;                                //@synthesize nativeYResolution=_nativeYResolution - In the implementation block
@property (retain) NSMutableIndexSet * supportedResolutions;                            //@synthesize supportedResolutions=_supportedResolutions - In the implementation block
@property (retain) NSMutableIndexSet * preferredResolutions;                            //@synthesize preferredResolutions=_preferredResolutions - In the implementation block
@property (assign) unsigned long long resolution;                                       //@synthesize resolution=_resolution - In the implementation block
@property (retain) NSMutableIndexSet * supportedScaleFactors;                           //@synthesize supportedScaleFactors=_supportedScaleFactors - In the implementation block
@property (retain) NSMutableIndexSet * preferredScaleFactors;                           //@synthesize preferredScaleFactors=_preferredScaleFactors - In the implementation block
@property (assign) unsigned long long scaleFactor;                                      //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (retain) NSArray * templates;                                                 //@synthesize templates=_templates - In the implementation block
@property (retain) NSArray * vendorFeatures;                                            //@synthesize vendorFeatures=_vendorFeatures - In the implementation block
@property (readonly) NSMutableDictionary * currentSettings; 
@property (assign) char acceptsThresholdForBlackAndWhiteScanning;                       //@synthesize acceptsThresholdForBlackAndWhiteScanning=_acceptsThresholdForBlackAndWhiteScanning - In the implementation block
@property (assign) char usesThresholdForBlackAndWhiteScanning;                          //@synthesize usesThresholdForBlackAndWhiteScanning=_usesThresholdForBlackAndWhiteScanning - In the implementation block
@property (assign) unsigned char defaultThresholdForBlackAndWhiteScanning;              //@synthesize defaultThresholdForBlackAndWhiteScanning=_defaultThresholdForBlackAndWhiteScanning - In the implementation block
@property (assign) unsigned char thresholdForBlackAndWhiteScanning;                     //@synthesize thresholdForBlackAndWhiteScanning=_thresholdForBlackAndWhiteScanning - In the implementation block
@property (assign) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (retain) ICScannerImageRep * overviewImageBufferRep;                          //@synthesize overviewImageBufferRep=_overviewImageBufferRep - In the implementation block
@property (assign) CGImageRef overviewImage;                                            //@synthesize overviewImage=_overviewImage - In the implementation block
@property (assign) CGImageRef grayOverviewImage;                                        //@synthesize grayOverviewImage=_grayOverviewImage - In the implementation block
@property (assign) unsigned long long overviewResolution;                               //@synthesize overviewResolution=_overviewResolution - In the implementation block
@property (assign) CGColorSpaceRef grayColorSpace;                                      //@synthesize grayColorSpace=_grayColorSpace - In the implementation block
@property (assign) CGSize physicalSizeInInches;                                         //@synthesize physicalSizeInInches=_physicalSizeInInches - In the implementation block
@property (assign) CGSize minimumScanSizeInInches;                                      //@synthesize minimumScanSizeInInches=_minimumScanSizeInInches - In the implementation block
@property (assign) CGRect scanArea;                                                     //@synthesize scanArea=_scanArea - In the implementation block
@property (assign) unsigned long long scanAreaOrientation;                              //@synthesize scanAreaOrientation=_scanAreaOrientation - In the implementation block
@property (assign) double scanProgressPercentDone;                                      //@synthesize scanProgressPercentDone=_scanProgressPercentDone - In the implementation block
@property (assign) ICScannerDevice * scanner;                                           //@synthesize scanner=_scanner - In the implementation block
@property (assign) unsigned char backgroundGrayValue;                                   //@synthesize backgroundGrayValue=_backgroundGrayValue - In the implementation block
@property (retain) NSMutableDictionary * scanParams;                                    //@synthesize scanParams=_scanParams - In the implementation block
@property (assign) unsigned long long templateMeasurementUnit;                          //@synthesize templateMeasurementUnit=_templateMeasurementUnit - In the implementation block
@property (assign) char supportsProgressNotificationsWithScanData;                      //@synthesize supportsProgressNotificationsWithScanData=_supportsProgressNotificationsWithScanData - In the implementation block
@property (assign) char useOverviewImageAsFinalImage;                                   //@synthesize useOverviewImageAsFinalImage=_useOverviewImageAsFinalImage - In the implementation block
-(CGImageRef)grayOverviewImage;
-(CGImageRef)overviewImage;
-(unsigned long long)overviewResolution;
-(ICScannerImageRep *)overviewImageBufferRep;
-(void)setScanArea:(CGRect)arg1 ;
-(CGRect)scanArea;
-(void)setMeasurementUnit:(unsigned long long)arg1 ;
-(double)scanProgressPercentDone;
-(NSMutableIndexSet *)preferredResolutions;
-(void)setOverviewResolution:(unsigned long long)arg1 ;
-(void)setBackgroundGrayValue:(unsigned char)arg1 ;
-(void)setUseOverviewImageAsFinalImage:(char)arg1 ;
-(unsigned long long)measurementUnit;
-(void)setScanAreaOrientation:(unsigned long long)arg1 ;
-(void)setSupportedBitDepths:(NSMutableIndexSet *)arg1 ;
-(void)setSupportedMeasurementUnits:(NSMutableIndexSet *)arg1 ;
-(void)setPreferredResolutions:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)supportedMeasurementUnits;
-(NSMutableIndexSet *)supportedBitDepths;
-(unsigned char)defaultThresholdForBlackAndWhiteScanning;
-(void)setDefaultThresholdForBlackAndWhiteScanning:(unsigned char)arg1 ;
-(char)acceptsThresholdForBlackAndWhiteScanning;
-(char)usesThresholdForBlackAndWhiteScanning;
-(unsigned char)backgroundGrayValue;
-(unsigned long long)measurementUnitPrivate;
-(unsigned long long)nativeXResolution;
-(unsigned long long)nativeYResolution;
-(NSMutableIndexSet *)supportedScaleFactors;
-(NSMutableIndexSet *)preferredScaleFactors;
-(CGSize)physicalSizeInInches;
-(CGSize)minimumScanSizeInInches;
-(unsigned long long)templateMeasurementUnit;
-(char)supportsProgressNotificationsWithScanData;
-(char)useOverviewImageAsFinalImage;
-(void)setUsesThresholdForBlackAndWhiteScanning:(char)arg1 ;
-(void)setThresholdForBlackAndWhiteScanning:(unsigned char)arg1 ;
-(unsigned char)thresholdForBlackAndWhiteScanning;
-(void)setOverviewImage:(CGImageRef)arg1 ;
-(CGColorSpaceRef)grayColorSpace;
-(void)setGrayColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setGrayOverviewImage:(CGImageRef)arg1 ;
-(void)setScanProgressPercentDone:(double)arg1 ;
-(unsigned long long)scanAreaOrientation;
-(NSMutableDictionary *)scanParams;
-(id)initWithDictionary:(id)arg1 andScanner:(id)arg2 ;
-(void)setTemplateMeasurementUnit:(unsigned long long)arg1 ;
-(void)setSupportsProgressNotificationsWithScanData:(char)arg1 ;
-(void)setScanParams:(NSMutableDictionary *)arg1 ;
-(void)setOverviewImageBufferRep:(ICScannerImageRep *)arg1 ;
-(void)setSupportedScaleFactors:(NSMutableIndexSet *)arg1 ;
-(void)setPreferredScaleFactors:(NSMutableIndexSet *)arg1 ;
-(void)setMeasurementUnitPrivate:(unsigned long long)arg1 ;
-(void)setNativeXResolution:(unsigned long long)arg1 ;
-(void)setNativeYResolution:(unsigned long long)arg1 ;
-(void)setAcceptsThresholdForBlackAndWhiteScanning:(char)arg1 ;
-(void)setPhysicalSizeInInches:(CGSize)arg1 ;
-(void)setMinimumScanSizeInInches:(CGSize)arg1 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(unsigned long long)scaleFactor;
-(unsigned long long)resolution;
-(void)setResolution:(unsigned long long)arg1 ;
-(NSMutableDictionary *)currentSettings;
-(void)setBitDepth:(unsigned long long)arg1 ;
-(unsigned long long)bitDepth;
-(NSMutableIndexSet *)supportedResolutions;
-(void)setSupportedResolutions:(NSMutableIndexSet *)arg1 ;
-(void)setScanner:(ICScannerDevice *)arg1 ;
-(ICScannerDevice *)scanner;
-(NSArray *)templates;
-(void)setTemplates:(NSArray *)arg1 ;
-(NSArray *)vendorFeatures;
-(void)setVendorFeatures:(NSArray *)arg1 ;
-(unsigned long long)pixelDataType;
-(void)setPixelDataType:(unsigned long long)arg1 ;
@end

