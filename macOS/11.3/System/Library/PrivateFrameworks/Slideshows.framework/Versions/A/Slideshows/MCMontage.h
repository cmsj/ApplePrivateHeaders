/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSRecursiveLock, MCPlug, NSString, NSArray;

@interface MCMontage : NSObject {

	NSDictionary* mImprintWhileLoading;
	NSMutableDictionary* mVideoAssetsForFilePaths;
	NSMutableDictionary* mVideoAssetsForObjectIDs;
	NSMutableDictionary* mAudioAssetsForFilePaths;
	NSMutableDictionary* mAudioAssetsForObjectIDs;
	NSMutableDictionary* mContainersForObjectIDs;
	NSRecursiveLock* mLock;
	unsigned char _styleHint;
	MCPlug* mRootPlug;
	double mFadeInDuration;
	double mFadeOutDuration;
	double mAudioFadeOutDuration;
	NSString* mBasePath;
	unsigned long long mUUIDSeed;
	NSArray* mLayouts;

}

@property (nonatomic,readonly) MCPlug * rootPlug; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (copy) NSString * basePath; 
@property (nonatomic,readonly) unsigned long long uuidSeed; 
@property (retain) NSArray * layouts; 
@property (assign,nonatomic) unsigned char styleHint;                    //@synthesize styleHint=_styleHint - In the implementation block
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(id)data;
-(NSArray *)layouts;
-(id)videoAssets;
-(id)assets;
-(NSString *)basePath;
-(void)setBasePath:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(id)imprint;
-(void)setLayouts:(NSArray *)arg1 ;
-(id)createParallelizerContainer;
-(id)audioAssetForFileAtPath:(id)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(id)initFromScratch;
-(MCPlug *)rootPlug;
-(void)demolish;
-(double)audioFadeOutDuration;
-(id)videoAssetForFileAtPath:(id)arg1 ;
-(id)createEffectContainer;
-(id)createNavigatorContainer;
-(id)containerForObjectID:(id)arg1 ;
-(id)createSerializerContainer;
-(void)forgetAboutContainer:(id)arg1 ;
-(id)videoAssetForObjectID:(id)arg1 ;
-(id)audioAssetForObjectID:(id)arg1 ;
-(id)XMLDocument;
-(unsigned long long)uuidSeed;
-(id)assetForObjectID:(id)arg1 ;
-(id)audioAssets;
-(void)registerContainer:(id)arg1 ;
-(unsigned char)styleHint;
-(void)setStyleHint:(unsigned char)arg1 ;
@end
