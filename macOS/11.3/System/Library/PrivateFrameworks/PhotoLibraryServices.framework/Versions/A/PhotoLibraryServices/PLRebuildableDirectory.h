/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, PLPhotoLibrary, NSFileManager;

@interface PLRebuildableDirectory : NSObject {

	char _isCPLAssets;
	char _isPhotoStream;
	NSURL* _url;
	PLPhotoLibrary* _photoLibrary;
	NSFileManager* _fm;
	double _startTime;

}

@property (readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (readonly) char isCPLAssets;                           //@synthesize isCPLAssets=_isCPLAssets - In the implementation block
@property (readonly) char isPhotoStream;                         //@synthesize isPhotoStream=_isPhotoStream - In the implementation block
@property (readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) NSFileManager * fm;                         //@synthesize fm=_fm - In the implementation block
@property (readonly) double startTime;                           //@synthesize startTime=_startTime - In the implementation block
+(void)collectFileURLs:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 testCreationDates:(char)arg6 startTime:(double)arg7 pathManager:(id)arg8 ;
+(id)rebuildableDirectoryWithURL:(id)arg1 isCPLAssets:(char)arg2 isPhotoStream:(char)arg3 photoLibrary:(id)arg4 startTime:(double)arg5 ;
-(id)description;
-(id)debugDescription;
-(NSURL *)url;
-(double)startTime;
-(PLPhotoLibrary *)photoLibrary;
-(char)isCPLAssets;
-(char)isPhotoStream;
-(NSFileManager *)fm;
-(void)gatherAssetsToImport:(id)arg1 pendingAssetsCount:(unsigned long long*)arg2 onDiskURLsToSkip:(id)arg3 cameraRollOnly:(char)arg4 ;
-(void)_collectContentsOfDirectoryURL:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 startTime:(double)arg6 ;
@end

