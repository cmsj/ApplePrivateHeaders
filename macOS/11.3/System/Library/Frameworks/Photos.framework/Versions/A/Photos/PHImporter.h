/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHImportServiceImporterDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, NSProgress, PHImportOptions, PHImportResults, PHPhotoLibrary, NSString, NSMutableSet, PHImportSource;

@interface PHImporter : NSObject {

	id<PHImportServiceImporterDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _importQueue;
	unsigned char _importState;
	NSMutableDictionary* _parentFolderMapping;
	NSMutableArray* _downloadedRecords;
	char _isCanceled;
	NSMutableDictionary* _folderByFolderPath;
	NSMutableDictionary* _containerPathByLocalIdentifier;
	NSMutableDictionary* _albumByAlbumPath;
	NSMutableDictionary* _albumRequestsByAlbumId;
	NSMutableDictionary* _folderRequestByFolderId;
	unsigned long long _importBatchSize;
	NSProgress* _progress;
	PHImportOptions* _options;
	PHImportResults* _results;
	PHPhotoLibrary* _library;
	NSString* _importSessionID;
	NSMutableSet* _importedBurstUUIDs;
	PHImportSource* _source;

}

@property (nonatomic,retain) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) PHImportOptions * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) PHImportResults * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                     //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,retain) NSMutableSet * importedBurstUUIDs;              //@synthesize importedBurstUUIDs=_importedBurstUUIDs - In the implementation block
@property (nonatomic,retain) PHImportSource * source;                        //@synthesize source=_source - In the implementation block
+(void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 progress:(id*)arg5 delegate:(id)arg6 atEnd:(/*^block*/id)arg7 ;
+(void)dumpImageData:(id)arg1 ;
+(void)dumpMetadataForData:(id)arg1 ;
-(PHImportSource *)source;
-(void)setOptions:(PHImportOptions *)arg1 ;
-(PHImportOptions *)options;
-(PHImportResults *)results;
-(void)setResults:(PHImportResults *)arg1 ;
-(void)cancellationHandler;
-(NSProgress *)progress;
-(void)setSource:(PHImportSource *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(PHPhotoLibrary *)library;
-(void)setLibrary:(PHPhotoLibrary *)arg1 ;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(id)initWithLibrary:(id)arg1 options:(id)arg2 source:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)beginImport:(id)arg1 ;
-(id)makeDownloadUrlForParentFolderPath:(id)arg1 ;
-(id)getDestinationUrlForImportAsset:(id)arg1 ;
-(void)importNextAsset:(id)arg1 ;
-(char)shouldImportRecordAsReference:(id)arg1 ;
-(void)downloadNextAssetInRecord:(id)arg1 toURL:(id)arg2 subRecordEnumerator:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importRecords:(id)arg1 ;
-(id)_recordsToImportWithCount:(unsigned long long)arg1 ;
-(void)importRecords:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_importRecord:(id)arg1 createdAlbumIdentifiers:(id)arg2 createdFolderIdentifiers:(id)arg3 ;
-(void)_applyFastVideoModernizationToRecord:(id)arg1 ;
-(void)addDescriptionPropertiesFromImportAsset:(id)arg1 toCreationRequest:(id)arg2 ;
-(void)addLibraryPropertiesFromImportAssetBundleAsset:(id)arg1 toCreationRequest:(id)arg2 ;
-(void)finishImport;
-(char)handleErrorsForRecord:(id)arg1 batch:(id)arg2 file:(char*)arg3 line:(int)arg4 ;
-(void)validateSourceForAsset:(id)arg1 ;
-(id)createFolderForPath:(id)arg1 inFolder:(id)arg2 error:(id*)arg3 ;
-(id)folderChangeRequestForFolder:(id)arg1 ;
-(void)updateAlbumCacheWithAlbumIdentifiers:(id)arg1 ;
-(void)updateFolderCacheWithFolders:(id)arg1 ;
-(void)addRecordToResults:(id)arg1 ;
-(id)relativePathComponentsForAlbumPath:(id)arg1 fromRootPath:(id)arg2 ;
-(void)ensureContainersExistForAlbumPath:(id)arg1 forAsset:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createAlbumForPath:(id)arg1 inFolder:(id)arg2 error:(id*)arg3 ;
-(void)importedBurstAsset:(id)arg1 ;
-(id)removeImportDirectoryForLibrary:(id)arg1 ;
-(NSMutableSet *)importedBurstUUIDs;
-(void)setImportedBurstUUIDs:(NSMutableSet *)arg1 ;
@end

