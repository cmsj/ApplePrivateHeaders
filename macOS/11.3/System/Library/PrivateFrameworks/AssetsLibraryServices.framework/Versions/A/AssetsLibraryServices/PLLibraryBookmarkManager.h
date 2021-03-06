/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {

	NSMutableDictionary* _securityScopedBookmarksByPathKey;
	NSMutableDictionary* _activeURLsByPathKey;

}
+(id)resolveSecurityScopedBookmark:(id)arg1 isStale:(char*)arg2 error:(id*)arg3 ;
+(id)_securityScopedURLWithURL:(id)arg1 sandboxExtension:(id)arg2 ;
+(id)sharedBookmarkManager;
-(void)dealloc;
-(id)init;
-(void)_saveToDefaults;
-(id)URLFromClientLibraryURL:(id)arg1 sandboxExtension:(id)arg2 error:(id*)arg3 ;
-(id)sandboxExtensionsByPathForClient:(id)arg1 pathManager:(id)arg2 ;
-(void)removeSSBForLibraryURL:(id)arg1 ;
-(void)removeInvalidSSBsExcept:(id)arg1 ;
-(id)allKnownLibraryURLs;
-(void)_importLithiumAccessRights;
-(void)_storeBookmarkForURL:(id)arg1 ;
-(void)_loadFromDefaults;
-(void)_refreshSecurityScopedBookmarks;
-(id)_activeURLForClientLibraryURL:(id)arg1 ;
-(id)_newSecurityScopedBookmarkDataForURL:(id)arg1 ;
-(id)newSandboxExtensionDataForClient:(SCD_Struct_PL11)arg1 path:(id)arg2 writable:(char)arg3 ;
-(id)_resolveSecurityScopedBookmarkData:(id)arg1 error:(id*)arg2 ;
-(void)_storeSecurityScopedURL:(id)arg1 pathKey:(id)arg2 ;
-(void)_removeActiveURLForPathKey:(id)arg1 ;
-(void)_removeSSBForPathKey:(id)arg1 ;
@end

