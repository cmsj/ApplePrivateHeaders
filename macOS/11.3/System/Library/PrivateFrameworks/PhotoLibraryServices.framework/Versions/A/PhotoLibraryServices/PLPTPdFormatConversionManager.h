/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPTPConversionSupport.h>

@class PFMediaCapabilities, PHMediaFormatConversionManager, NSURL, NSMutableDictionary, NSString;

@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport> {

	PFMediaCapabilities* _legacyCapabilities;
	char _initialized;
	PFMediaCapabilities* _peerMediaCapabilities;
	PHMediaFormatConversionManager* _mediaFormatConversionManager;
	NSURL* _temporaryDirectoryURL;
	NSMutableDictionary* _convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;

}

@property (retain) PHMediaFormatConversionManager * mediaFormatConversionManager;                                //@synthesize mediaFormatConversionManager=_mediaFormatConversionManager - In the implementation block
@property (retain) NSURL * temporaryDirectoryURL;                                                                //@synthesize temporaryDirectoryURL=_temporaryDirectoryURL - In the implementation block
@property (retain) NSMutableDictionary * convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;              //@synthesize convertedLivePhotoPairingIdentifiersByOriginalIdentifiers=_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers - In the implementation block
@property (assign) char initialized;                                                                             //@synthesize initialized=_initialized - In the implementation block
@property (retain) PFMediaCapabilities * peerMediaCapabilities;                                                  //@synthesize peerMediaCapabilities=_peerMediaCapabilities - In the implementation block
@property (nonatomic,readonly) char penultimateIsPublic; 
@property (nonatomic,readonly) char peerSupportsTranscodeChoice; 
@property (nonatomic,readonly) char peerSupportsAdjustmentBaseResources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)initialized;
-(NSURL *)temporaryDirectoryURL;
-(void)setTemporaryDirectoryURL:(NSURL *)arg1 ;
-(PFMediaCapabilities *)peerMediaCapabilities;
-(void)setPeerMediaCapabilities:(PFMediaCapabilities *)arg1 ;
-(id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3 ;
-(char)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id*)arg2 maximumSize:(CGSize)arg3 error:(id*)arg4 ;
-(char)penultimateIsPublic;
-(char)peerSupportsTranscodeChoice;
-(char)peerSupportsAdjustmentBaseResources;
-(id)conversionResultForAsset:(id)arg1 isVideo:(char)arg2 isRender:(char)arg3 forceLegacyConversion:(char)arg4 ;
-(PHMediaFormatConversionManager *)mediaFormatConversionManager;
-(NSMutableDictionary *)convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
-(char)setupTemporaryDirectory;
-(id)requestForOriginalAtPath:(id)arg1 isVideo:(char)arg2 imageDimensions:(CGSize)arg3 originalPairingIdentifier:(id)arg4 ;
-(id)requestForRenderImagePath:(id)arg1 imageDimensions:(CGSize)arg2 outputFilename:(id)arg3 ;
-(id)requestForPath:(id)arg1 isVideo:(char)arg2 imageDimensions:(CGSize)arg3 ;
-(id)sourceForPath:(id)arg1 isVideo:(char)arg2 imageDimensions:(CGSize)arg3 ;
-(id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg1 ;
-(id)effectivePeerMediaCapabilites;
-(void)setMediaFormatConversionManager:(PHMediaFormatConversionManager *)arg1 ;
-(void)setConvertedLivePhotoPairingIdentifiersByOriginalIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setInitialized:(char)arg1 ;
@end
