/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICCameraItem.h>

@class NSMutableDictionary, NSString, NSNumber, NSDate, NSMutableArray, NSDictionary, NSData, NSProgress;

@interface ICCameraFile : ICCameraItem {

	CGImageRef _originalThumbnail;
	CGImageRef _thumbnail;
	NSMutableDictionary* _metadata;
	NSString* _debugType;
	NSString* _debugBadge;
	NSNumber* _fileIsJPEG;
	NSNumber* _fileIsHEIC;
	char _highFramerate;
	char _timeLapse;
	char _firstPicked;
	char _burstFavorite;
	char _burstPicked;
	char _privHasThumbnail;
	char _privHasMetadata;
	char _useExtensionIcon;
	char _wasDownloaded;
	char _orientationOverridden;
	unsigned _objectHandle;
	long long _width;
	long long _height;
	NSString* _originalFilename;
	NSString* _createdFilename;
	long long _fileSize;
	double _duration;
	NSString* _originatingAssetID;
	NSString* _groupUUID;
	NSString* _gpsString;
	NSString* _relatedUUID;
	NSString* _burstUUID;
	ICCameraFile* _pairedRawImage;
	NSDate* _fileCreationDate;
	NSDate* _fileModificationDate;
	NSDate* _exifCreationDate;
	NSDate* _exifModificationDate;
	unsigned long long _privOrientation;
	NSString* _privSpatialOverCaptureGroupID;
	NSString* _privMediaBase;
	NSMutableArray* _sidecarFiles;
	unsigned long long _mediaMetadata;
	NSDictionary* _mediaData;
	NSMutableDictionary* _subImages;
	NSData* _thumbnailData;
	NSProgress* _progress;
	unsigned long long _oUUID;
	unsigned long long _uTime;
	id _downloadDelegate;

}

@property (assign,nonatomic) char privHasThumbnail;                               //@synthesize privHasThumbnail=_privHasThumbnail - In the implementation block
@property (assign,nonatomic) char privHasMetadata;                                //@synthesize privHasMetadata=_privHasMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long privOrientation;                  //@synthesize privOrientation=_privOrientation - In the implementation block
@property (nonatomic,copy) NSString * privSpatialOverCaptureGroupID;              //@synthesize privSpatialOverCaptureGroupID=_privSpatialOverCaptureGroupID - In the implementation block
@property (nonatomic,copy) NSString * privMediaBase;                              //@synthesize privMediaBase=_privMediaBase - In the implementation block
@property (assign) CGImageRef originalThumbnail; 
@property (nonatomic,retain) NSMutableArray * sidecarFiles;                       //@synthesize sidecarFiles=_sidecarFiles - In the implementation block
@property (assign,nonatomic) unsigned long long mediaMetadata;                    //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaData;                            //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subImages;                     //@synthesize subImages=_subImages - In the implementation block
@property (assign,nonatomic) char useExtensionIcon;                               //@synthesize useExtensionIcon=_useExtensionIcon - In the implementation block
@property (nonatomic,readonly) NSString * spatialOverCaptureGroupID; 
@property (nonatomic,readonly) char retrievedMetadata; 
@property (nonatomic,readonly) char retrievedThumbnail; 
@property (nonatomic,readonly) unsigned objectHandle;                             //@synthesize objectHandle=_objectHandle - In the implementation block
@property (nonatomic,copy) NSData * thumbnailData;                                //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                               //@synthesize progress=_progress - In the implementation block
@property (readonly) NSString * mediaBase; 
@property (assign,nonatomic) long long fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) ICCameraFile * pairedRawImage;                       //@synthesize pairedRawImage=_pairedRawImage - In the implementation block
@property (nonatomic,copy) NSDate * fileCreationDate;                             //@synthesize fileCreationDate=_fileCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * fileModificationDate;                         //@synthesize fileModificationDate=_fileModificationDate - In the implementation block
@property (nonatomic,copy) NSDate * exifCreationDate;                             //@synthesize exifCreationDate=_exifCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * exifModificationDate;                         //@synthesize exifModificationDate=_exifModificationDate - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char burstFavorite;                                  //@synthesize burstFavorite=_burstFavorite - In the implementation block
@property (assign,nonatomic) char burstPicked;                                    //@synthesize burstPicked=_burstPicked - In the implementation block
@property (assign,nonatomic) char highFramerate;                                  //@synthesize highFramerate=_highFramerate - In the implementation block
@property (assign,nonatomic) char timeLapse;                                      //@synthesize timeLapse=_timeLapse - In the implementation block
@property (nonatomic,copy) NSString * originatingAssetID;                         //@synthesize originatingAssetID=_originatingAssetID - In the implementation block
@property (nonatomic,copy) NSString * originalFilename;                           //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSString * createdFilename;                            //@synthesize createdFilename=_createdFilename - In the implementation block
@property (nonatomic,copy) NSString * burstUUID;                                  //@synthesize burstUUID=_burstUUID - In the implementation block
@property (nonatomic,copy) NSString * relatedUUID;                                //@synthesize relatedUUID=_relatedUUID - In the implementation block
@property (nonatomic,copy) NSString * groupUUID;                                  //@synthesize groupUUID=_groupUUID - In the implementation block
@property (assign,nonatomic) char firstPicked;                                    //@synthesize firstPicked=_firstPicked - In the implementation block
@property (nonatomic,copy) NSString * gpsString;                                  //@synthesize gpsString=_gpsString - In the implementation block
@property (assign,nonatomic) long long width;                                     //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                                    //@synthesize height=_height - In the implementation block
@property (assign) unsigned long long oUUID;                                      //@synthesize oUUID=_oUUID - In the implementation block
@property (assign) unsigned long long uTime;                                      //@synthesize uTime=_uTime - In the implementation block
@property (retain) id downloadDelegate;                                           //@synthesize downloadDelegate=_downloadDelegate - In the implementation block
@property (assign) char wasDownloaded;                                            //@synthesize wasDownloaded=_wasDownloaded - In the implementation block
@property (assign,nonatomic) char orientationOverridden;                          //@synthesize orientationOverridden=_orientationOverridden - In the implementation block
@property (assign,nonatomic) unsigned long long orientation; 
-(id)uuid;
-(void)setDownloadedToPath:(id)arg1 ;
-(void)resetDownloadedPath;
-(id)downloadedToPath;
-(void)setDownloadedViaDragAndDrop:(char)arg1 ;
-(char)downloadedViaDragAndDrop;
-(void)setDownloadedViaDoubleClick:(char)arg1 ;
-(char)downloadedViaDoubleClick;
-(void)setForceNextDownload:(char)arg1 ;
-(char)forceNextDownload;
-(void)prepareForDelete;
-(char)wasPreparedForDelete;
-(char)alreadyDownloaded;
-(void)rotateOrientation:(char*)arg1 ;
-(char)hasAperture;
-(id)maker;
-(char)setupAssociatedObject;
-(char)destroyAssociatedObject;
-(id)name_ext;
-(void)setImage:(id)arg1 ;
-(id)kind;
-(id)extension;
-(id)image;
-(id)colorSpace;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(double)latitude;
-(double)longitude;
-(id)model;
-(double)aperture;
-(char)hasLocation;
-(char)hasWidth;
-(char)hasHeight;
-(id)locationString;
-(id)imageUID;
-(id)imageRepresentationType;
-(id)imageRepresentation;
-(id)imageTitle;
-(char)isLivePhoto;
-(id)shutterSpeed;
-(void)rotateRight;
-(void)callCompletionHandler:(id)arg1 ;
-(void)setThumbnailOrientation:(unsigned char)arg1 ;
-(unsigned char)thumbnailOrientation;
-(void)rotateLeft;
-(char)handleCommandCompletion:(id)arg1 ;
-(unsigned long long)uTime;
-(id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)addSidecarFile:(id)arg1 ;
-(void)flagAsSidecar;
-(char)isDataUniversal;
-(NSString *)mediaBase;
-(char)isHEIC;
-(char)isNonRawImage;
-(void)setPairedRawImage:(ICCameraFile *)arg1 ;
-(char)originalFamily;
-(char)convertedFamily;
-(char)universalFamily;
-(void)setExifCreationDate:(NSDate *)arg1 ;
-(void)setExifModificationDate:(NSDate *)arg1 ;
-(void)setSubImages:(NSMutableDictionary *)arg1 ;
-(void)setGpsString:(NSString *)arg1 ;
-(void)setSidecarFiles:(NSMutableArray *)arg1 ;
-(void)setPrivMediaBase:(NSString *)arg1 ;
-(void)setPrivSpatialOverCaptureGroupID:(NSString *)arg1 ;
-(unsigned long long)oUUID;
-(void)setPrivHasMetadata:(char)arg1 ;
-(void)setPrivHasThumbnail:(char)arg1 ;
-(char)privHasMetadata;
-(char)privHasThumbnail;
-(NSString *)privSpatialOverCaptureGroupID;
-(unsigned long long)privOrientation;
-(void)setOrientationOverridden:(char)arg1 ;
-(void)setPrivOrientation:(unsigned long long)arg1 ;
-(char)isEditedOriginal;
-(char)isEditedConverted;
-(NSString *)privMediaBase;
-(char)isUntouched:(unsigned long long)arg1 ;
-(char)isEdited:(unsigned long long)arg1 ;
-(char)partOfFamily:(unsigned long long)arg1 ;
-(char)orientationOverridden;
-(void)setHighFramerate:(char)arg1 ;
-(void)setFirstPicked:(char)arg1 ;
-(void)setSpatialOverCaptureGroupID:(NSString *)arg1 ;
-(NSString *)gpsString;
-(void)setKeywordPropertiesFromDict:(id)arg1 ;
-(void)setUTime:(unsigned long long)arg1 ;
-(void)setOUUID:(unsigned long long)arg1 ;
-(char)useExtensionIcon;
-(void)setUseExtensionIcon:(char)arg1 ;
-(CGImageRef)thumbnailIfAvailable;
-(id)thumbnailDataUsingOrientation:(id)arg1 andSourceThumbnailData:(id)arg2 ;
-(void)cacheThumbnailData:(id)arg1 ;
-(void)requestReadDataAtOffset:(long long)arg1 length:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(long long)compareDate:(id)arg1 ;
-(void)flushThumbnailCache;
-(char)isEditedUniversal;
-(void)setOriginalThumbnail:(CGImageRef)arg1 ;
-(id)metadataIfAvailable;
-(char)retrievedMetadata;
-(CGImageRef)largeThumbnailIfAvailable;
-(void)requestThumbnail;
-(char)retrievedThumbnail;
-(void)requestThumbnailWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestMetadata;
-(void)requestMetadataWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ICCameraFile *)pairedRawImage;
-(NSDate *)exifModificationDate;
-(NSMutableDictionary *)subImages;
-(void)dealloc;
-(id)description;
-(unsigned long long)unsignedLongLongValue;
-(void)setGroupUUID:(NSString *)arg1 ;
-(char)isLegacy;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setOrientation:(unsigned long long)arg1 ;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)width;
-(long long)height;
-(id)debugType;
-(long long)fileSize;
-(NSDate *)fileModificationDate;
-(NSDate *)fileCreationDate;
-(NSProgress *)progress;
-(double)duration;
-(char)hasThumbnail;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)orientation;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(CGImageRef)thumbnail;
-(id)metadata;
-(void)setFileSize:(long long)arg1 ;
-(void)setHasThumbnail:(char)arg1 ;
-(void)setThumbnailData:(NSData *)arg1 ;
-(NSData *)thumbnailData;
-(NSString *)groupUUID;
-(char)hasMetadata;
-(char)isOriginal;
-(char)isImage;
-(char)isMovie;
-(id)downloadDelegate;
-(void)setDownloadDelegate:(id)arg1 ;
-(char)timeLapse;
-(void)setTimeLapse:(char)arg1 ;
-(id)base;
-(NSDictionary *)mediaData;
-(void)setMediaData:(NSDictionary *)arg1 ;
-(char)isUniversal;
-(unsigned long long)mediaMetadata;
-(NSString *)originatingAssetID;
-(char)isAudio;
-(char)isJPEG;
-(char)isSidecar;
-(NSString *)burstUUID;
-(void)setFileCreationDate:(NSDate *)arg1 ;
-(NSString *)originalFilename;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(id)requestDownloadWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)exifCreationDate;
-(NSString *)spatialOverCaptureGroupID;
-(char)firstPicked;
-(char)burstPicked;
-(char)burstFavorite;
-(NSMutableArray *)sidecarFiles;
-(NSString *)relatedUUID;
-(char)highFramerate;
-(NSString *)createdFilename;
-(void)requestMetadataDictionaryWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)flushMetadataCache;
-(void)requestThumbnailDataWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)isData;
-(void)setMediaMetadata:(unsigned long long)arg1 ;
-(void)setCreatedFilename:(NSString *)arg1 ;
-(void)setOriginatingAssetID:(NSString *)arg1 ;
-(void)setBurstUUID:(NSString *)arg1 ;
-(void)setBurstPicked:(char)arg1 ;
-(void)setBurstFavorite:(char)arg1 ;
-(void)setRelatedUUID:(NSString *)arg1 ;
-(void)setHasMetadata:(char)arg1 ;
-(id)debugIdentity;
-(CGImageRef)originalThumbnail;
-(void)setWasDownloaded:(char)arg1 ;
-(char)wasDownloaded;
-(id)debugBadge;
-(char)isConverted;
-(unsigned)objectHandle;
-(long long)compareUUID:(id)arg1 ;
@end
