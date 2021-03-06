/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/SpotlightCacheController.h>

@protocol SpotlightCacheController <NSObject>
@required
-(void)clearAllMetadataFromDiskIfExistsWithCompletionHandler:(/*^block*/id)arg1;
-(char)fileIsSpotlightCacheFile:(id)arg1;
-(id)URLToVisitFromSpotlightCacheFile:(id)arg1;
-(void)fullUpdateNeededForType:(id)arg1 immediately:(char)arg2;
-(void)partialUpdateNeededForType:(id)arg1 immediately:(char)arg2;
-(void)fullUpdateNeededForType:(id)arg1;
-(void)partialUpdateNeededForType:(id)arg1;
-(void)registerSpotlightDataSource:(id)arg1 andWriter:(id)arg2 forType:(id)arg3;

@end

#import <libobjc.A.dylib/NSFileManagerDelegate.h>

@class NSMutableDictionary, NSString;

@interface SpotlightCacheController : NSObject <SpotlightCacheController, NSFileManagerDelegate> {

	char _updateInProgress;
	char _needsUpdate;
	char _kickingOffUpdaterThread;
	char _updateImmediately;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _fileExtensions;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>>* _suddenTerminationDisabler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3 ;
-(void)updateCache;
-(void)clearAllMetadataFromDiskIfExistsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)fileIsSpotlightCacheFile:(id)arg1 ;
-(id)URLToVisitFromSpotlightCacheFile:(id)arg1 ;
-(void)fullUpdateNeededForType:(id)arg1 immediately:(char)arg2 ;
-(void)updateCacheSoon;
-(void)partialUpdateNeededForType:(id)arg1 immediately:(char)arg2 ;
-(id)cacheParentDirectory;
-(id)cacheSubdirectoryForDataType:(id)arg1 ;
-(void)updaterThreadBody:(id)arg1 ;
-(char)forciblyCreateDirectory:(id)arg1 ;
-(id)createCacheSubdirectoryForDataType:(id)arg1 ;
-(void)deleteAllCachedFilesForType:(id)arg1 ;
-(char)updateCacheFilesForType:(id)arg1 ;
-(void)updaterThreadFinished;
-(void)fullUpdateNeededForType:(id)arg1 ;
-(void)partialUpdateNeededForType:(id)arg1 ;
-(void)registerSpotlightDataSource:(id)arg1 andWriter:(id)arg2 forType:(id)arg3 ;
-(id)createCacheParentDirectory;
@end

