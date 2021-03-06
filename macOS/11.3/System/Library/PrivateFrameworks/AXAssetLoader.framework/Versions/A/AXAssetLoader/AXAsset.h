/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/Versions/A/AXAssetLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, MAAsset, AXImageCaptionModel, NSNumber;

@interface AXAsset : NSObject <NSSecureCoding> {

	char _isInstalled;
	char _isDownloading;
	NSString* _assetId;
	NSString* _assetType;
	unsigned long long _contentVersion;
	unsigned long long _compatibilityVersion;
	unsigned long long _formatVersion;
	NSDictionary* _properties;
	NSURL* _originalURL;
	NSURL* _localCopyURL;
	MAAsset* _maAsset;

}

@property (nonatomic,readonly) NSString * characterVoiceLanguage; 
@property (nonatomic,readonly) NSString * characterVoiceName; 
@property (nonatomic,readonly) AXImageCaptionModel * imageCaptionModel; 
@property (nonatomic,retain) NSURL * originalURL;                                    //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,retain) NSURL * localCopyURL;                                   //@synthesize localCopyURL=_localCopyURL - In the implementation block
@property (nonatomic,readonly) MAAsset * maAsset;                                    //@synthesize maAsset=_maAsset - In the implementation block
@property (nonatomic,readonly) char isInstalled;                                     //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) char isDownloading;                                   //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) NSString * assetId;                                   //@synthesize assetId=_assetId - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) unsigned long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long formatVersion;                     //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) NSURL * localURL; 
@property (nonatomic,readonly) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSNumber * downloadSize; 
@property (nonatomic,readonly) NSNumber * unarchivedFileSize; 
+(char)supportsSecureCoding;
+(id)assetsFromMAAssets:(id)arg1 ;
+(id)archivedAssets:(id)arg1 error:(id*)arg2 ;
+(id)unarchivedAssets:(id)arg1 error:(id*)arg2 ;
+(id)installedAssets:(id)arg1 ;
+(id)downloadableAssets:(id)arg1 ;
+(id)newsestCompatibleImageCaptionModelAssetFromAssets:(id)arg1 withStage:(id)arg2 language:(id)arg3 isInstalled:(char)arg4 isDownloadable:(char)arg5 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)originalURL;
-(char)isInstalled;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(char)isDownloading;
-(unsigned long long)compatibilityVersion;
-(NSDictionary *)properties;
-(NSString *)assetType;
-(unsigned long long)formatVersion;
-(unsigned long long)contentVersion;
-(NSNumber *)downloadSize;
-(NSURL *)localURL;
-(NSString *)assetId;
-(MAAsset *)maAsset;
-(NSString *)characterVoiceLanguage;
-(NSString *)characterVoiceName;
-(id)initWithMAAsset:(id)arg1 ;
-(void)resetPropertiesFromMAAsset:(id)arg1 ;
-(char)assetStateIsInstalled:(long long)arg1 ;
-(void)refreshMAAsset;
-(char)isEquivalentToMAAsset:(id)arg1 ;
-(NSNumber *)unarchivedFileSize;
-(void)copyLocally;
-(NSURL *)localCopyURL;
-(void)setLocalCopyURL:(NSURL *)arg1 ;
-(AXImageCaptionModel *)imageCaptionModel;
-(id)assertionForVersionLockedImageCaptionModelAsset:(id)arg1 ;
@end

