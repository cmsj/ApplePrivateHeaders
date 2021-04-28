/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>

@class NSMutableArray, PHAssetResourceBag, NSMutableDictionary, PHAssetCreationDerivativeContext, NSString, PHAssetCreationPhotoStreamPublishingRequest, NSManagedObjectID, PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions, NSDictionary;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest> {

	NSMutableArray* _assetResources;
	PHAssetResourceBag* _assetResourceBag;
	NSMutableDictionary* _movedFiles;
	char _duplicateAllowsPrivateMetadata;
	char _shouldCreateScreenshot;
	PHAssetCreationDerivativeContext* _derivativeContext;
	char _duplicateLivePhotoAsStill;
	char _duplicateAsOriginal;
	char _duplicateSinglePhotoFromBurst;
	char _duplicateSpatialOverCaptureResources;
	char _duplicateAsAlternateAsset;
	short _importedBy;
	unsigned short _duplicateAssetPhotoLibraryType;
	NSString* _importSessionID;
	PHAssetCreationPhotoStreamPublishingRequest* __photoStreamPublishingRequest;
	NSManagedObjectID* _limitedLibraryFetchFilterObjectID;
	NSString* _duplicateAssetIdentifier;
	PHAssetCreationAdjustmentBakeInOptions* _adjustmentBakeInOptions;
	PHAssetCreationMetadataCopyOptions* _metadataCopyOptions;
	/*^block*/id _destinationAssetAvailabilityHandler;
	NSString* _forcePairingIdentifier;
	NSString* _clientBundleIdentifier;
	NSString* _clientDisplayName;
	SCD_Struct_PH9 _duplicateStillSourceTime;

}

@property (setter=_setPhotoStreamPublishingRequest:,nonatomic,retain) PHAssetCreationPhotoStreamPublishingRequest * _photoStreamPublishingRequest;                                       //@synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest - In the implementation block
@property (nonatomic,readonly) NSDictionary * _movedFiles; 
@property (assign,setter=_setDuplicateAllowsPrivateMetadata:,nonatomic) char duplicateAllowsPrivateMetadata; 
@property (assign,setter=_setShouldCreateScreenshot:,getter=_shouldCreateScreenshot,nonatomic) char shouldCreateScreenshot; 
@property (setter=_setLimitedLibraryFetchFilterObjectID:,getter=_limitedLibraryFetchFilterObjectID,nonatomic,retain) NSManagedObjectID * limitedLibraryFetchFilterObjectID;              //@synthesize limitedLibraryFetchFilterObjectID=_limitedLibraryFetchFilterObjectID - In the implementation block
@property (setter=_setDuplicateAssetIdentifier:,nonatomic,retain) NSString * duplicateAssetIdentifier;                                                                                   //@synthesize duplicateAssetIdentifier=_duplicateAssetIdentifier - In the implementation block
@property (assign,setter=_setDuplicateAssetPhotoLibraryType:,nonatomic) unsigned short duplicateAssetPhotoLibraryType;                                                                   //@synthesize duplicateAssetPhotoLibraryType=_duplicateAssetPhotoLibraryType - In the implementation block
@property (assign,setter=_setDuplicateStillSourceTime:,nonatomic) SCD_Struct_PH9 duplicateStillSourceTime;                                                                               //@synthesize duplicateStillSourceTime=_duplicateStillSourceTime - In the implementation block
@property (assign,setter=_setDuplicateLivePhotoAsStill:,nonatomic) char duplicateLivePhotoAsStill;                                                                                       //@synthesize duplicateLivePhotoAsStill=_duplicateLivePhotoAsStill - In the implementation block
@property (assign,setter=_setDuplicateAsOriginal:,nonatomic) char duplicateAsOriginal;                                                                                                   //@synthesize duplicateAsOriginal=_duplicateAsOriginal - In the implementation block
@property (assign,setter=_setDuplicateSinglePhotoFromBurst:,nonatomic) char duplicateSinglePhotoFromBurst;                                                                               //@synthesize duplicateSinglePhotoFromBurst=_duplicateSinglePhotoFromBurst - In the implementation block
@property (assign,setter=_setDuplicateSpatialOverCaptureResources:,nonatomic) char duplicateSpatialOverCaptureResources;                                                                 //@synthesize duplicateSpatialOverCaptureResources=_duplicateSpatialOverCaptureResources - In the implementation block
@property (assign,setter=_setDuplicateAsAlternateAsset:,nonatomic) char duplicateAsAlternateAsset;                                                                                       //@synthesize duplicateAsAlternateAsset=_duplicateAsAlternateAsset - In the implementation block
@property (setter=_setAdjustmentBakeInOptions:,nonatomic,copy) PHAssetCreationAdjustmentBakeInOptions * adjustmentBakeInOptions;                                                         //@synthesize adjustmentBakeInOptions=_adjustmentBakeInOptions - In the implementation block
@property (setter=_setMetadataCopyOptions:,nonatomic,copy) PHAssetCreationMetadataCopyOptions * metadataCopyOptions;                                                                     //@synthesize metadataCopyOptions=_metadataCopyOptions - In the implementation block
@property (setter=_setDestinationAssetAvailabilityHandler:,nonatomic,copy) id destinationAssetAvailabilityHandler;                                                                       //@synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler - In the implementation block
@property (nonatomic,readonly) NSString * forcePairingIdentifier;                                                                                                                        //@synthesize forcePairingIdentifier=_forcePairingIdentifier - In the implementation block
@property (assign,nonatomic) short importedBy;                                                                                                                                           //@synthesize importedBy=_importedBy - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                                                                                                                            //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientDisplayName;                                                                                                                                 //@synthesize clientDisplayName=_clientDisplayName - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                                                                                                                                 //@synthesize importSessionID=_importSessionID - In the implementation block
@property (readonly) char isNewRequest; 
@property (assign,nonatomic) char shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) char mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) char clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_creationOptionsFromExternalResource:(id)arg1 andSourceUrl:(id)arg2 ;
+(id)_imageIOThumbnailCreationOptionsFromDerivativeContext:(id)arg1 ;
+(id)_jpegDataFromRAWData:(id)arg1 derivativeContext:(id)arg2 ;
+(id)_creationRequestForAssetUsingUUID:(id)arg1 ;
+(id)creationRequestForAsset;
+(id)creationRequestForAssetFromImageData:(id)arg1 ;
+(id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2 ;
+(id)creationRequestForAssetFromScreenshotImage:(id)arg1 ;
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
+(id)creationRequestForAssetFromAssetBundle:(id)arg1 ;
+(id)creationRequestForAssetCopyFromAsset:(id)arg1 options:(id)arg2 ;
+(id)creationRequestForAssetCopyFromAsset:(id)arg1 ;
+(char)supportsAssetResourceTypes:(id)arg1 ;
+(char)supportsImportAssetResourceTypes:(id)arg1 ;
-(id)initWithHelper:(id)arg1 ;
-(char)isNew;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(NSString *)clientBundleIdentifier;
-(long long)accessScopeOptionsRequirement;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)initForNewObject;
-(char)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(void)finalizeRequestWithBatchSuccess:(char)arg1 ;
-(void)performConcurrentWork;
-(NSString *)importSessionID;
-(id)initForNewObjectWithUUID:(id)arg1 ;
-(void)_setDestinationAssetAvailabilityHandler:(/*^block*/id)arg1 ;
-(NSString *)clientDisplayName;
-(NSString *)forcePairingIdentifier;
-(id)destinationAssetAvailabilityHandler;
-(PHAssetCreationAdjustmentBakeInOptions *)adjustmentBakeInOptions;
-(PHAssetCreationMetadataCopyOptions *)metadataCopyOptions;
-(NSDictionary *)_movedFiles;
-(char)_shouldCreateScreenshot;
-(id)_limitedLibraryFetchFilterObjectID;
-(void)_copyMetadataFromAsset:(id)arg1 ;
-(void)_copyUserSpecificMetadataFromAsset:(id)arg1 ;
-(void)_copyMediaAnalysisProperties:(id)arg1 ;
-(void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2 ;
-(char)_restoreMovedFilesOnFailure;
-(void)_resetMovedFiles;
-(id)_secureMove:(char)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 capabilities:(id)arg4 error:(id*)arg5 ;
-(id)_secureMove:(char)arg1 assetResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(id)makeSubstitueRenderImageFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id*)arg4 ;
-(id)makeSubstitueRenderVideoFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id*)arg4 ;
-(char)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 mainFileMetadata:(id)arg3 error:(id*)arg4 ;
-(char)_ingestOriginalInPlaceSrcURL:(id)arg1 dstURL:(id)arg2 asset:(id)arg3 error:(id*)arg4 ;
-(id)_ingestOriginalFromSrcURL:(id)arg1 toDstURL:(id)arg2 useSecureMove:(char)arg3 resource:(id)arg4 resourceType:(unsigned)arg5 asset:(id)arg6 error:(id*)arg7 ;
-(char)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 mainFileMetadata:(id)arg3 error:(id*)arg4 ;
-(char)_createRAWSidecarForAsset:(id)arg1 fromValidatedResources:(id)arg2 mainFileMetadata:(id)arg3 photoLibrary:(id)arg4 error:(id*)arg5 ;
-(char)_createSocResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(char)_createXmpResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(char)_createAudioResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(char)_createOriginalResourceForAsset:(id)arg1 fromValidatedResource:(id)arg2 resourceType:(unsigned)arg3 photoLibrary:(id)arg4 destinationURL:(id)arg5 error:(id*)arg6 ;
-(id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1 ;
-(short)_savedAssetTypeForAsset;
-(id)_managedAssetFromPrimaryResourceData:(id)arg1 withUUID:(id)arg2 photoLibrary:(id)arg3 mainFileMetadata:(id*)arg4 getImageSource:(CGImageSource*)arg5 imageData:(id*)arg6 ;
-(char)_accessWritableURLForUUID:(id)arg1 imageUTI:(id)arg2 originalFilename:(id)arg3 photoLibrary:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(char)_writeDataToDisk:(id)arg1 imageUTIType:(id)arg2 exifProperties:(id)arg3 mainFileURL:(id)arg4 thumbnailData:(id)arg5 ;
-(id)_externalLivePhotoResourceForAsset:(id)arg1 ;
-(void)_setupDerivativeCreationContextForAsset:(id)arg1 imageSource:(CGImageSourceRef)arg2 imageData:(id)arg3 ;
-(CGImageSourceRef)_imageSourceForDerivatives;
-(id)createAssetFromValidatedResources:(id)arg1 withUUID:(id)arg2 assetAlreadyExistsAsPlaceholder:(char)arg3 inPhotoLibrary:(id)arg4 error:(id*)arg5 ;
-(id)_createAssetFromValidatedResources:(id)arg1 withUUID:(id)arg2 assetAlreadyExistsAsPlaceholder:(char)arg3 inPhotoLibrary:(id)arg4 error:(id*)arg5 ;
-(void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3 ;
-(void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3 ;
-(void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4 ;
-(id)placeholderForCreatedAsset;
-(long long)_mediaTypeForCreatedAsset;
-(void)setImportedBy:(short)arg1 ;
-(void)setImportSessionID:(NSString *)arg1 ;
-(id)_duplicatedAssetResourcesFromAsset:(id)arg1 stillSourceTime:(SCD_Struct_PH9)arg2 flattenLivePhotoIntoStillPhoto:(char)arg3 original:(char)arg4 removeBurstIdentifier:(char)arg5 error:(id*)arg6 ;
-(void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1 ;
-(char)_populateDuplicatingAssetCreationRequest:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(char)_validateNewObjectUUID:(id)arg1 inPhotoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)_setDuplicateAllowsPrivateMetadata:(char)arg1 ;
-(char)duplicateAllowsPrivateMetadata;
-(void)_setShouldCreateScreenshot:(char)arg1 ;
-(char)isDuplicateAssetCreationRequest;
-(short)importedBy;
-(PHAssetCreationPhotoStreamPublishingRequest *)_photoStreamPublishingRequest;
-(void)_setPhotoStreamPublishingRequest:(id)arg1 ;
-(void)_setLimitedLibraryFetchFilterObjectID:(id)arg1 ;
-(NSString *)duplicateAssetIdentifier;
-(void)_setDuplicateAssetIdentifier:(id)arg1 ;
-(unsigned short)duplicateAssetPhotoLibraryType;
-(void)_setDuplicateAssetPhotoLibraryType:(unsigned short)arg1 ;
-(SCD_Struct_PH9)duplicateStillSourceTime;
-(void)_setDuplicateStillSourceTime:(SCD_Struct_PH9)arg1 ;
-(char)duplicateLivePhotoAsStill;
-(void)_setDuplicateLivePhotoAsStill:(char)arg1 ;
-(char)duplicateAsOriginal;
-(void)_setDuplicateAsOriginal:(char)arg1 ;
-(char)duplicateSinglePhotoFromBurst;
-(void)_setDuplicateSinglePhotoFromBurst:(char)arg1 ;
-(char)duplicateSpatialOverCaptureResources;
-(void)_setDuplicateSpatialOverCaptureResources:(char)arg1 ;
-(char)duplicateAsAlternateAsset;
-(void)_setDuplicateAsAlternateAsset:(char)arg1 ;
-(void)_setAdjustmentBakeInOptions:(id)arg1 ;
-(void)_setMetadataCopyOptions:(id)arg1 ;
-(void)setClientDisplayName:(NSString *)arg1 ;
@end
