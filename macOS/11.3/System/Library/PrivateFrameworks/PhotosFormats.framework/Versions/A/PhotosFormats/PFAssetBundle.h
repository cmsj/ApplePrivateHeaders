/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSURL, NSDictionary, NSMutableDictionary, NSString, NSSet, NSDate, NSTimeZone;

@interface PFAssetBundle : NSObject {

	char _didReadOriginalPairedVideoMetadata;
	NSURL* _photoURL;
	NSURL* _videoURL;
	NSURL* _audioURL;
	NSURL* _alternatePhotoURL;
	NSURL* _fullSizePhotoURL;
	NSURL* _fullSizeVideoURL;
	NSURL* _adjustmentDataURL;
	NSURL* _adjustmentBasePhotoURL;
	NSURL* _pairedVideoURL;
	NSURL* _fullSizePairedVideoURL;
	NSURL* _adjustmentBasePairedVideoURL;
	NSURL* _spatialOvercapturePhotoURL;
	NSURL* _spatialOvercapturePairedVideoURL;
	NSURL* _spatialOvercaptureVideoURL;
	NSURL* _adjustmentBaseVideoURL;
	NSURL* _originalAdjustmentDataURL;
	NSDictionary* _propertyList;
	NSMutableDictionary* _metadata;
	NSString* _livePhotoOriginalPairingIdentifier;
	SCD_Struct_PF3 _livePhotoOriginalImageDisplayTime;
	SCD_Struct_PF3 _livePhotoOriginalVideoDuration;

}

@property (nonatomic,copy) NSDictionary * propertyList;                                     //@synthesize propertyList=_propertyList - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) char didReadOriginalPairedVideoMetadata;                     //@synthesize didReadOriginalPairedVideoMetadata=_didReadOriginalPairedVideoMetadata - In the implementation block
@property (nonatomic,copy) NSString * livePhotoOriginalPairingIdentifier;                   //@synthesize livePhotoOriginalPairingIdentifier=_livePhotoOriginalPairingIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF3 livePhotoOriginalImageDisplayTime;              //@synthesize livePhotoOriginalImageDisplayTime=_livePhotoOriginalImageDisplayTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF3 livePhotoOriginalVideoDuration;                 //@synthesize livePhotoOriginalVideoDuration=_livePhotoOriginalVideoDuration - In the implementation block
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) unsigned long long playbackVariation; 
@property (nonatomic,readonly) unsigned short videoComplementVisibilityState; 
@property (nonatomic,readonly) unsigned long long reframeVariation; 
@property (nonatomic,readonly) NSURL * photoURL;                                            //@synthesize photoURL=_photoURL - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) NSURL * audioURL;                                            //@synthesize audioURL=_audioURL - In the implementation block
@property (nonatomic,readonly) NSURL * alternatePhotoURL;                                   //@synthesize alternatePhotoURL=_alternatePhotoURL - In the implementation block
@property (nonatomic,readonly) NSURL * fullSizePhotoURL;                                    //@synthesize fullSizePhotoURL=_fullSizePhotoURL - In the implementation block
@property (nonatomic,readonly) NSURL * fullSizeVideoURL;                                    //@synthesize fullSizeVideoURL=_fullSizeVideoURL - In the implementation block
@property (nonatomic,readonly) NSURL * adjustmentDataURL;                                   //@synthesize adjustmentDataURL=_adjustmentDataURL - In the implementation block
@property (nonatomic,readonly) NSURL * adjustmentBasePhotoURL;                              //@synthesize adjustmentBasePhotoURL=_adjustmentBasePhotoURL - In the implementation block
@property (nonatomic,readonly) NSURL * pairedVideoURL;                                      //@synthesize pairedVideoURL=_pairedVideoURL - In the implementation block
@property (nonatomic,readonly) NSURL * fullSizePairedVideoURL;                              //@synthesize fullSizePairedVideoURL=_fullSizePairedVideoURL - In the implementation block
@property (nonatomic,readonly) NSURL * adjustmentBasePairedVideoURL;                        //@synthesize adjustmentBasePairedVideoURL=_adjustmentBasePairedVideoURL - In the implementation block
@property (nonatomic,readonly) NSURL * spatialOvercapturePhotoURL;                          //@synthesize spatialOvercapturePhotoURL=_spatialOvercapturePhotoURL - In the implementation block
@property (nonatomic,readonly) NSURL * spatialOvercapturePairedVideoURL;                    //@synthesize spatialOvercapturePairedVideoURL=_spatialOvercapturePairedVideoURL - In the implementation block
@property (nonatomic,readonly) NSURL * spatialOvercaptureVideoURL;                          //@synthesize spatialOvercaptureVideoURL=_spatialOvercaptureVideoURL - In the implementation block
@property (nonatomic,readonly) NSURL * adjustmentBaseVideoURL;                              //@synthesize adjustmentBaseVideoURL=_adjustmentBaseVideoURL - In the implementation block
@property (nonatomic,readonly) NSURL * originalAdjustmentDataURL;                           //@synthesize originalAdjustmentDataURL=_originalAdjustmentDataURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier; 
@property (nonatomic,readonly) SCD_Struct_PF3 livePhotoImageDisplayTime; 
@property (nonatomic,copy) NSSet * keywordTitles; 
@property (nonatomic,copy) NSString * assetDescription; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) NSString * assetTitle; 
@property (nonatomic,readonly) NSDate * libraryCreationDate; 
@property (nonatomic,readonly) NSTimeZone * libraryCreationDateTimeZone; 
@property (nonatomic,retain) id libraryLocation; 
@property (assign,nonatomic) char spatialOvercaptureResourcesPurgeable; 
+(id)currentFormatVersion;
+(id)insertAuxiliaryResourceTypeMarker:(id)arg1 intoFileName:(id)arg2 ;
-(id)init;
-(id)initWithPropertyList:(id)arg1 ;
-(NSDictionary *)propertyList;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(long long)mediaType;
-(NSMutableDictionary *)metadata;
-(NSURL *)photoURL;
-(NSURL *)audioURL;
-(void)setPropertyList:(NSDictionary *)arg1 ;
-(NSURL *)videoURL;
-(NSSet *)keywordTitles;
-(NSString *)assetDescription;
-(char)spatialOvercaptureResourcesPurgeable;
-(id)libraryLocation;
-(NSTimeZone *)libraryCreationDateTimeZone;
-(NSDate *)libraryCreationDate;
-(NSString *)assetTitle;
-(unsigned short)videoComplementVisibilityState;
-(NSURL *)spatialOvercaptureVideoURL;
-(NSURL *)spatialOvercapturePairedVideoURL;
-(NSURL *)spatialOvercapturePhotoURL;
-(NSURL *)adjustmentBasePairedVideoURL;
-(NSURL *)fullSizePairedVideoURL;
-(NSURL *)pairedVideoURL;
-(NSURL *)adjustmentBaseVideoURL;
-(NSURL *)adjustmentBasePhotoURL;
-(NSURL *)originalAdjustmentDataURL;
-(NSURL *)adjustmentDataURL;
-(NSURL *)fullSizeVideoURL;
-(NSURL *)fullSizePhotoURL;
-(NSURL *)alternatePhotoURL;
-(void)setAssetDescription:(NSString *)arg1 ;
-(void)setKeywordTitles:(NSSet *)arg1 ;
-(unsigned long long)reframeVariation;
-(char)isMediaSubtype:(unsigned long long)arg1 ;
-(long long)playbackStyle;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)playbackVariation;
-(id)initWithAssetBundleAtURL:(id)arg1 ;
-(char)writeToBundleAtURL:(id)arg1 error:(id*)arg2 ;
-(void)setSpatialOvercaptureResourcesPurgeable:(char)arg1 ;
-(void)setLibraryLocation:(id)arg1 ;
-(void)setLibraryCreationDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)setAssetTitle:(NSString *)arg1 ;
-(id)initWithOriginalVideoURL:(id)arg1 fullSizeRenderedVideoURL:(id)arg2 adjustmentBaseVideoURL:(id)arg3 spatialOvercaptureVideoURL:(id)arg4 adjustmentsURL:(id)arg5 originalAdjustmentsURL:(id)arg6 mediaSubtypes:(unsigned long long)arg7 playbackStyle:(long long)arg8 playbackVariation:(unsigned long long)arg9 reframeVariation:(unsigned long long)arg10 ;
-(id)initWithOriginalPhotoURL:(id)arg1 alternatePhotoURL:(id)arg2 fullSizePhotoURL:(id)arg3 adjustmentBaseFullSizePhotoURL:(id)arg4 spatialOvercapturePhotoURL:(id)arg5 originalPairedVideoURL:(id)arg6 fullSizePairedVideoURL:(id)arg7 adjustmentBaseFullSizePairedVideoURL:(id)arg8 spatialOvercapturePairedVideoURL:(id)arg9 fullSizeVideoURL:(id)arg10 adjustmentsURL:(id)arg11 originalAdjustmentsURL:(id)arg12 mediaSubtypes:(unsigned long long)arg13 playbackStyle:(long long)arg14 playbackVariation:(unsigned long long)arg15 videoComplementVisibilityState:(unsigned short)arg16 reframeVariation:(unsigned long long)arg17 ;
-(NSString *)livePhotoPairingIdentifier;
-(char)didReadOriginalPairedVideoMetadata;
-(NSString *)livePhotoOriginalPairingIdentifier;
-(SCD_Struct_PF3)livePhotoOriginalImageDisplayTime;
-(SCD_Struct_PF3)livePhotoOriginalVideoDuration;
-(SCD_Struct_PF3)livePhotoImageDisplayTime;
-(void)_readLivePhotoVideoMetadataIfNeeded;
-(char)linkOrCopyURL:(id)arg1 toURL:(id)arg2 forceCopy:(char)arg3 error:(id*)arg4 ;
-(id)generateCustomFilenamesByPathKey;
-(id)urlsByPathKey;
-(char)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 updateManifest:(id)arg4 bundlePathKey:(id)arg5 verifyUTIType:(CFStringRef)arg6 error:(id*)arg7 ;
-(char)_pathExtension:(id)arg1 matchesUTIType:(CFStringRef)arg2 error:(id*)arg3 ;
-(char)_verifyFileSourceExistsAtURL:(id)arg1 error:(id*)arg2 ;
-(id)createAssetBundleWritingErrorWithDescription:(id)arg1 ;
-(char)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 writtenFileURL:(id*)arg3 error:(id*)arg4 ;
-(char)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 writtenFileURL:(id*)arg4 error:(id*)arg5 ;
-(id)writeDowngradedRepresentationToDirectory:(id)arg1 error:(id*)arg2 ;
-(void)setLivePhotoOriginalPairingIdentifier:(NSString *)arg1 ;
-(void)setLivePhotoOriginalImageDisplayTime:(SCD_Struct_PF3)arg1 ;
-(void)setLivePhotoOriginalVideoDuration:(SCD_Struct_PF3)arg1 ;
@end
