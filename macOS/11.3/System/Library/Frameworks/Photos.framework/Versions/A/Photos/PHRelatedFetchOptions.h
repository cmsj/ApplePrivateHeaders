/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PHAsset, PHPhotoLibrary;

@interface PHRelatedFetchOptions : NSObject {

	char _enableDiversity;
	char _debugInfoEnabled;
	NSArray* _excludedAssetCollections;
	PHAsset* _referenceAsset;
	unsigned long long _fetchLimit;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,getter=isDebugInfoEnabled,nonatomic) char debugInfoEnabled;              //@synthesize debugInfoEnabled=_debugInfoEnabled - In the implementation block
@property (nonatomic,retain) NSArray * excludedAssetCollections;                           //@synthesize excludedAssetCollections=_excludedAssetCollections - In the implementation block
@property (nonatomic,retain) PHAsset * referenceAsset;                                     //@synthesize referenceAsset=_referenceAsset - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) char enableDiversity;                                         //@synthesize enableDiversity=_enableDiversity - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(PHAsset *)referenceAsset;
-(NSArray *)excludedAssetCollections;
-(char)enableDiversity;
-(void)setExcludedAssetCollections:(NSArray *)arg1 ;
-(void)setReferenceAsset:(PHAsset *)arg1 ;
-(void)setEnableDiversity:(char)arg1 ;
-(char)isDebugInfoEnabled;
-(void)setDebugInfoEnabled:(char)arg1 ;
@end

