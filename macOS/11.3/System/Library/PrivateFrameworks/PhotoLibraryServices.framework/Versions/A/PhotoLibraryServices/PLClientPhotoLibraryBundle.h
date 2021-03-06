/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLPhotoLibraryBundle.h>

@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {

	PLLazyObject* _lazyClientSandboxExtensionCache;

}
-(void)close;
-(void)setPhotoStreamEnabled:(char)arg1 ;
-(void)resetClientSandboxExtensionCache;
-(id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 ;
-(id)clientSandboxExtensionCache;
-(void)_invalidateClientSandboxExtensionCache;
-(id)newAssetsdClient;
-(id)newChangePublisher;
-(id)newLibraryServicesManager;
-(id)newBoundAssetsdServicesTable;
-(void)setCloudPhotoLibraryEnabled:(char)arg1 ;
-(void)setSharedAlbumEnabled:(char)arg1 ;
-(void)_initClientSandboxExtensionCache;
@end

