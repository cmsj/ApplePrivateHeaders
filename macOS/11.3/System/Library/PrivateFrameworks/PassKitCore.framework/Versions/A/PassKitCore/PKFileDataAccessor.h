/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDataAccessor.h>

@class PKDirectoryCoordinator, PKRemoteAssetManager, NSArray, NSString, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	PKDirectoryCoordinator* _coordinator;
	BOOL _remoteAssetManagerAccessed;
	PKRemoteAssetManager* _remoteAssetManager;
	NSArray* _seids;
	BOOL _ownsFileURL;
	NSString* _explicitDataTypeIdentifier;
	NSURL* _fileURL;

}

@property (assign,nonatomic) BOOL ownsFileURL;                                 //@synthesize ownsFileURL=_ownsFileURL - In the implementation block
@property (nonatomic,copy) NSString * explicitDataTypeIdentifier;              //@synthesize explicitDataTypeIdentifier=_explicitDataTypeIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                //@synthesize fileURL=_fileURL - In the implementation block
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(NSURL *)fileURL;
-(id)bundle;
-(id)content;
-(id)archiveData;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 coordinator:(id)arg3 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(char)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(char)remoteAssetsDownloadedForScreenScale:(double)arg1 seids:(id)arg2 suffix:(id)arg3 ;
-(id)remoteAssetManagerForSEIDs:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(char)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)manifestHash;
-(id)serializedFileWrapper;
-(char)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(id)remoteAssetManager;
-(id)displayProfileOfType:(long long)arg1 ;
-(BOOL)ownsFileURL;
-(void)setOwnsFileURL:(BOOL)arg1 ;
-(NSString *)explicitDataTypeIdentifier;
-(void)setExplicitDataTypeIdentifier:(NSString *)arg1 ;
@end
