/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject, NSCache, NSOperationQueue, NSString;

@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource> {

	NSCountedSet* _loadingTiledArtworkRequests;
	NSObject*<OS_dispatch_queue> _loadingTiledArtworkRequestsAccessQueue;
	NSObject*<OS_dispatch_queue> _renderingTiledArtworkRequestsQueue;
	NSCache* _tiledArtworkRepresentationFallbackCache;
	NSOperationQueue* _tilingArtworkCatalogOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_loadingRequestForArtworkCatalog:(id)arg1 ;
+(CGSize)_tileSizeForFittingSize:(CGSize)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 spacing:(double)arg4 ;
+(id)_representationCacheKeyForArtworkCatalog:(id)arg1 forAnyRevision:(char)arg2 ;
+(id)_errorWithDescription:(id)arg1 ;
+(id)sharedDataSource;
-(id)init;
-(void)_performSyncBlock:(/*^block*/id)arg1 ;
-(char)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(char)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)_addLoadingRequestForArtworkCatalog:(id)arg1 ;
-(char)_hasLoadingRequestForArtworkCatalog:(id)arg1 ;
-(void)_performAsyncBlock:(/*^block*/id)arg1 ;
-(void)_removeLoadingRequestForArtworkCatalog:(id)arg1 ;
@end

