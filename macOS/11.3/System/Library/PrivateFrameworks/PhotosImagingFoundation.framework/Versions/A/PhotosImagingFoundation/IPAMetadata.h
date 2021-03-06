/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/Versions/A/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IPAMetadataStateHandler, NSData, NSString, NSMutableDictionary, NSDictionary, NSArray, PFTimeZoneLookup, NSDate, NSTimeZone, CLLocation, NSNumber;

@interface IPAMetadata : NSObject <NSCopying> {

	IPAMetadataStateHandler* _stateHandler;
	char _xmpLoaded;
	char _hasLoadedContent;
	CGImageSourceRef _imageSource;
	CGImageMetadataRef _cgImageMetadata;
	NSData* _imageData;
	NSString* _filePath;
	NSMutableDictionary* _exifProperties;
	NSMutableDictionary* _iptcProperties;
	NSMutableDictionary* _basicProperties;
	NSMutableDictionary* _fileSystemProperties;
	NSMutableDictionary* _customInfo;
	NSMutableDictionary* _cgImageProperties;
	NSDictionary* _audioVideoProperties;
	NSArray* _focusPoints;
	long long _originalOrientation;
	long long _orientation;
	NSArray* _cgImageMetadataProperties;
	PFTimeZoneLookup* _timeZoneLookup;
	NSDate* _timeZoneAdjustedImageDate;
	NSTimeZone* _imageTimeZone;
	NSString* _fileTypeIdentifier;
	CLLocation* _exifLocation;
	CGSize _originalUnrotatedSize;

}

@property (assign,nonatomic) char hasLoadedContent;                                       //@synthesize hasLoadedContent=_hasLoadedContent - In the implementation block
@property (assign,nonatomic) CGImageSourceRef imageSource;                                //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                          //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSDate * timeZoneAdjustedImageDate;                          //@synthesize timeZoneAdjustedImageDate=_timeZoneAdjustedImageDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * imageTimeZone;                                  //@synthesize imageTimeZone=_imageTimeZone - In the implementation block
@property (nonatomic,retain) NSString * filePath;                                         //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * exifProperties;                        //@synthesize exifProperties=_exifProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iptcProperties;                        //@synthesize iptcProperties=_iptcProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * basicProperties;                       //@synthesize basicProperties=_basicProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileSystemProperties;                  //@synthesize fileSystemProperties=_fileSystemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customInfo;                            //@synthesize customInfo=_customInfo - In the implementation block
@property (assign,nonatomic) char xmpLoaded;                                              //@synthesize xmpLoaded=_xmpLoaded - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cgImageProperties;                     //@synthesize cgImageProperties=_cgImageProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * audioVideoProperties;                         //@synthesize audioVideoProperties=_audioVideoProperties - In the implementation block
@property (nonatomic,retain) NSArray * focusPoints;                                       //@synthesize focusPoints=_focusPoints - In the implementation block
@property (assign,nonatomic) CGSize originalUnrotatedSize;                                //@synthesize originalUnrotatedSize=_originalUnrotatedSize - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                               //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSArray * cgImageMetadataProperties;                         //@synthesize cgImageMetadataProperties=_cgImageMetadataProperties - In the implementation block
@property (nonatomic,retain) NSString * fileTypeIdentifier;                               //@synthesize fileTypeIdentifier=_fileTypeIdentifier - In the implementation block
@property (nonatomic,retain) CLLocation * exifLocation;                                   //@synthesize exifLocation=_exifLocation - In the implementation block
@property (nonatomic,retain) PFTimeZoneLookup * timeZoneLookup;                           //@synthesize timeZoneLookup=_timeZoneLookup - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,readonly) NSDate * imageDate; 
@property (nonatomic,readonly) NSString * timeZoneName; 
@property (nonatomic,readonly) NSNumber * timeZoneOffset; 
@property (nonatomic,readonly) NSString * exifImageDateTimeString; 
@property (nonatomic,readonly) NSString * burstUuid; 
@property (nonatomic,readonly) NSString * groupingUuid; 
@property (nonatomic,readonly) NSString * mediaGroupUUID; 
@property (nonatomic,readonly) NSString * deferredPhotoProcessingIdentifier; 
@property (nonatomic,readonly) CGImageMetadataRef cgImageMetadata;                        //@synthesize cgImageMetadata=_cgImageMetadata - In the implementation block
@property (nonatomic,readonly) NSString * originatingAssetIdentifer; 
@property (nonatomic,readonly) NSString * spatialOverCaptureIdentifier; 
@property (nonatomic,readonly) char isSpatialOverCapture; 
@property (nonatomic,readonly) char isDeferredPhotoProxy; 
@property (nonatomic,readonly) char hasCustomRendered; 
@property (nonatomic,readonly) long long customRendered; 
@property (nonatomic,readonly) unsigned long long playbackVariation; 
@property (nonatomic,readonly) char isAutoloop; 
@property (nonatomic,readonly) char isMirror; 
@property (nonatomic,readonly) char isLongExposure; 
@property (nonatomic,readonly) char isPortrait; 
@property (nonatomic,readonly) char isHDR; 
@property (nonatomic,readonly) char isSDOF; 
@property (nonatomic,readonly) char isTimelapse; 
@property (nonatomic,readonly) char isSloMo; 
@property (nonatomic,readonly) NSString * montageString; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double nominalFrameRate; 
@property (nonatomic,readonly) NSString * codecFourCharCode; 
@property (nonatomic,readonly) NSString * cameraMake; 
@property (nonatomic,readonly) NSString * cameraModel; 
@property (nonatomic,readonly) NSString * captionAbstract; 
@property (nonatomic,readonly) NSString * artworkContentDescription; 
+(id)utiFromFastModernizeVideoMediaWithMetadata:(id)arg1 ;
+(id)loadMetadataForURL:(id)arg1 cacheImageSource:(char)arg2 cacheImageData:(char)arg3 timeZoneLookup:(id)arg4 ;
+(id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(char)arg2 ;
+(id)metadataIdentifierTypeMapVideo;
+(id)metadataIdentifierTypeMapImage;
+(id)_getPropertiesFromImageSource:(CGImageSourceRef)arg1 options:(id)arg2 ;
+(CGImageSourceRef)newImageSourceForURL:(id)arg1 options:(id)arg2 ;
+(CGImageSourceRef)newImageSourceForData:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
+(id)defaultOptionsForCGImageSource;
+(id)metadataIdentifierTypeMapCommon;
+(void)test_digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setOrientation:(long long)arg1 ;
-(NSString *)filePath;
-(void)setFilePath:(NSString *)arg1 ;
-(id)encodedData;
-(double)duration;
-(long long)orientation;
-(CGSize)imageSize;
-(void)setCustomProperties:(id)arg1 ;
-(NSString *)timeZoneName;
-(void)setImageSource:(CGImageSourceRef)arg1 ;
-(CGImageSourceRef)imageSource;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(char)isPortrait;
-(double)nominalFrameRate;
-(NSString *)cameraModel;
-(NSDate *)imageDate;
-(char)isSloMo;
-(char)isTimelapse;
-(CLLocation *)exifLocation;
-(id)initWithPath:(id)arg1 options:(id)arg2 timeZoneLookup:(id)arg3 ;
-(PFTimeZoneLookup *)timeZoneLookup;
-(NSString *)mediaGroupUUID;
-(char)isHDR;
-(char)isSDOF;
-(char)isSpatialOverCapture;
-(NSString *)spatialOverCaptureIdentifier;
-(NSString *)cameraMake;
-(NSString *)artworkContentDescription;
-(NSMutableDictionary *)iptcProperties;
-(NSTimeZone *)imageTimeZone;
-(NSMutableDictionary *)exifProperties;
-(NSMutableDictionary *)customInfo;
-(char)xmpLoaded;
-(NSMutableDictionary *)fileSystemProperties;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(char)arg2 ;
-(id)initWithTimeZoneLookup:(id)arg1 ;
-(id)initWithPath:(id)arg1 loadMinMetadata:(char)arg2 timeZoneLookup:(id)arg3 ;
-(NSString *)groupingUuid;
-(NSString *)burstUuid;
-(NSNumber *)timeZoneOffset;
-(id)initWithPath:(id)arg1 imageSource:(CGImageSourceRef)arg2 options:(id)arg3 loadXmpData:(char)arg4 xmpSidecarPath:(id)arg5 timeZoneLookup:(id)arg6 cacheImageSource:(char)arg7 cacheImageData:(char)arg8 ;
-(id)initWithPath:(id)arg1 fileData:(id)arg2 uti:(id)arg3 options:(id)arg4 loadXmpData:(char)arg5 xmpSidecarPath:(id)arg6 timeZoneLookup:(id)arg7 cacheImageSource:(char)arg8 cacheImageData:(char)arg9 ;
-(unsigned long long)playbackVariation;
-(id)initWithPath:(id)arg1 cgImageProperties:(id)arg2 timeZoneLookup:(id)arg3 ;
-(void)loadAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(char)arg3 ;
-(NSString *)captionAbstract;
-(void)setCustomInfo:(NSMutableDictionary *)arg1 ;
-(long long)originalOrientation;
-(NSMutableDictionary *)cgImageProperties;
-(NSString *)deferredPhotoProcessingIdentifier;
-(char)isDeferredPhotoProxy;
-(char)isAutoloop;
-(char)isLongExposure;
-(char)isMirror;
-(NSString *)originatingAssetIdentifer;
-(NSString *)montageString;
-(NSString *)codecFourCharCode;
-(NSString *)fileTypeIdentifier;
-(CGImageMetadataRef)cgImageMetadata;
-(void)setOriginalOrientation:(long long)arg1 ;
-(NSString *)exifImageDateTimeString;
-(NSDate *)timeZoneAdjustedImageDate;
-(void)setEncodedAudioVideoData:(id)arg1 ;
-(void)setEncodedImageData:(id)arg1 ;
-(id)descriptionDictionary;
-(void)setCgImageProperties:(NSMutableDictionary *)arg1 ;
-(char)conformsToUTType:(CFStringRef)arg1 forExtention:(id)arg2 ;
-(id)initWithPath:(id)arg1 fileData:(id)arg2 uti:(id)arg3 imageSource:(CGImageSourceRef)arg4 cgImageProperties:(id)arg5 options:(id)arg6 loadMinMetadata:(char)arg7 loadXmpData:(char)arg8 xmpSidecarPath:(id)arg9 timeZoneLookup:(id)arg10 cacheImageSource:(char)arg11 cacheImageData:(char)arg12 ;
-(id)utiForExtension:(id)arg1 ;
-(char)hasCustomRendered;
-(long long)customRendered;
-(void)clearImageAttributes;
-(void)mergeMetadata:(id)arg1 ;
-(void)setRawFileSystemAttributes:(id)arg1 ;
-(void)setCustomProperty:(id)arg1 forKey:(id)arg2 ;
-(id)customPropertyForKey:(id)arg1 ;
-(void)setExifProperty:(id)arg1 forKey:(id)arg2 ;
-(id)exifPropertyForKey:(id)arg1 ;
-(void)setIPTCProperty:(id)arg1 forKey:(id)arg2 ;
-(id)iptcPropertyForKey:(id)arg1 ;
-(void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2 ;
-(id)jsonFormattedDescriptionWithError:(id*)arg1 ;
-(void)setCGImageProperties:(id)arg1 ;
-(id)_digestedIptcAttributesFromRawAttributes:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2 ;
-(id)_digestedExifAttributesFromRawAttributes:(id)arg1 ;
-(void)_enforceProperFormatting:(id)arg1 ;
-(void)_digestedOrientationExifAttributesFromExif:(id)arg1 ;
-(void)digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(void)_digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1 ;
-(void)_digestedAVExifAttributesFromExif:(id)arg1 ;
-(void)_digestedGPSExifAttributesFromExif:(id)arg1 ;
-(void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1 ;
-(void)setAudioVideoAttributesFromDictionary:(id)arg1 ;
-(void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(char)arg2 readyHandler:(/*^block*/id)arg3 ;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 ;
-(id)exifTimezoneOffsetFromDateString:(id)arg1 offsetInSeconds:(long long*)arg2 ;
-(void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(char)arg3 readyHandler:(/*^block*/id)arg4 ;
-(void)_setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 updateCreationDate:(char)arg3 fullMetadata:(char)arg4 readyHandler:(/*^block*/id)arg5 ;
-(void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(/*^block*/id)arg2 ;
-(void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1 ;
-(void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(char)arg2 atEnd:(/*^block*/id)arg3 ;
-(id)encodedDataReduceIfLargerThan:(unsigned long long)arg1 ;
-(void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3 ;
-(void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ;
-(void)dumpXmpProperties;
-(char)convertGPSString:(id)arg1 toLatitude:(id*)arg2 longitude:(id*)arg3 ;
-(void)setExifProperties:(NSMutableDictionary *)arg1 ;
-(void)setIptcProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)basicProperties;
-(void)setBasicProperties:(NSMutableDictionary *)arg1 ;
-(void)setFileSystemProperties:(NSMutableDictionary *)arg1 ;
-(void)setXmpLoaded:(char)arg1 ;
-(char)hasLoadedContent;
-(void)setHasLoadedContent:(char)arg1 ;
-(NSDictionary *)audioVideoProperties;
-(void)setAudioVideoProperties:(NSDictionary *)arg1 ;
-(NSArray *)focusPoints;
-(void)setFocusPoints:(NSArray *)arg1 ;
-(CGSize)originalUnrotatedSize;
-(void)setOriginalUnrotatedSize:(CGSize)arg1 ;
-(NSArray *)cgImageMetadataProperties;
-(void)setCgImageMetadataProperties:(NSArray *)arg1 ;
-(void)setTimeZoneLookup:(PFTimeZoneLookup *)arg1 ;
-(void)setTimeZoneAdjustedImageDate:(NSDate *)arg1 ;
-(void)setImageTimeZone:(NSTimeZone *)arg1 ;
-(void)setFileTypeIdentifier:(NSString *)arg1 ;
-(void)setExifLocation:(CLLocation *)arg1 ;
@end

