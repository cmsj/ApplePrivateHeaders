/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLThumbPersistenceManager;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary, NSLock, NSArray, PLPhotoLibraryPathManager;

@interface PLThumbnailManagerCore : NSObject {

	NSMutableDictionary* _thumbnailConfigurationDict;
	os_unfair_lock_s _ivarLock;
	NSLock* _thumbManagersLock;
	id<PLThumbPersistenceManager> _lastUsedThumbManager;
	unsigned short _lastUsedThumbManagerFormatID;
	NSArray* _fastImageTables;
	NSMutableDictionary* _thumbManagersByFormat;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (readonly) NSMutableDictionary * thumbManagersByFormat;              //@synthesize thumbManagersByFormat=_thumbManagersByFormat - In the implementation block
@property (readonly) PLPhotoLibraryPathManager * pathManager;                  //@synthesize pathManager=_pathManager - In the implementation block
+(id)supportedThumbnailFormatIDs;
+(id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1 ;
-(void)dealloc;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)initWithPhotoLibraryPathManager:(id)arg1 ;
-(char)useImageTableForFormat:(unsigned short)arg1 ;
-(id)supportedTableFormats;
-(id)_thumbManagerForFormatID:(unsigned short)arg1 ;
-(id)thumbManagerForFormatID:(unsigned short)arg1 thumbFileManagerClass:(Class)arg2 ;
-(id)fastThumbPersistenceManagers;
-(id)imageTableSpecifications;
-(id)thumbnailConfigurationPath;
-(id)thumbnailConfigurationDict;
-(int)thumbnailVersionCurrent;
-(void)stampThumbnailConfigurationToFile:(char)arg1 ;
-(NSMutableDictionary *)thumbManagersByFormat;
@end

