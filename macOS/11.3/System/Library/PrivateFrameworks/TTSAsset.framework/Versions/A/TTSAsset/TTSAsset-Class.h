/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TTSAsset.framework/Versions/A/TTSAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TTSAssetType, TTSAssetSource, TTSAssetTechnology, TTSAssetQuality, NSString, NSArray, NSNumber, NSDictionary, NSBundle;

@interface TTSAsset : NSObject {

	char _locallyAvailable;
	char _downloading;
	char _purgeable;
	TTSAssetType* _assetType;
	TTSAssetSource* _assetSource;
	TTSAssetTechnology* _technology;
	TTSAssetQuality* _quality;
	NSString* _name;
	NSString* _identifier;
	long long _versionNumber;
	NSString* _versionDescription;
	NSArray* _supportedLanguages;
	NSString* _primaryLanguage;
	long long _gender;
	NSNumber* _age;
	NSDictionary* _attributes;
	NSBundle* _bundle;

}

@property (readonly,nonatomic) char locallyAvailable; 
@property (readonly,nonatomic) char downloading; 
@property (readonly,nonatomic) char purgeable; 
@property (nonatomic,readonly) TTSAssetType * assetType;                     //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) TTSAssetSource * assetSource;                 //@synthesize assetSource=_assetSource - In the implementation block
@property (nonatomic,readonly) TTSAssetTechnology * technology;              //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) TTSAssetQuality * quality;                    //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long versionNumber;                      //@synthesize versionNumber=_versionNumber - In the implementation block
@property (nonatomic,readonly) NSString * versionDescription;                //@synthesize versionDescription=_versionDescription - In the implementation block
@property (nonatomic,readonly) NSArray * supportedLanguages;                 //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (nonatomic,readonly) NSString * primaryLanguage;                   //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (nonatomic,readonly) long long gender;                             //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) NSNumber * age;                               //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                    //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) char locallyAvailable;                        //@synthesize locallyAvailable=_locallyAvailable - In the implementation block
@property (nonatomic,readonly) char downloading;                             //@synthesize downloading=_downloading - In the implementation block
@property (nonatomic,readonly) char purgeable;                               //@synthesize purgeable=_purgeable - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                            //@synthesize bundle=_bundle - In the implementation block
+(id)listAssetsOfTypes:(id)arg1 matching:(id)arg2 ;
+(id)NewAssetNotification;
+(void)waitForCatalogUpdates;
+(id)bestAssetOfTypes:(id)arg1 matching:(id)arg2 ;
+(char)setWithServer:(id)arg1 forType:(id)arg2 ;
+(id)getServerForType:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(NSString *)identifier;
-(NSDictionary *)attributes;
-(long long)versionNumber;
-(long long)gender;
-(NSBundle *)bundle;
-(NSString *)primaryLanguage;
-(void)purge;
-(char)downloading;
-(char)downloading;
-(TTSAssetQuality *)quality;
-(NSNumber *)age;
-(TTSAssetType *)assetType;
-(NSArray *)supportedLanguages;
-(TTSAssetTechnology *)technology;
-(char)purgeable;
-(char)purgeable;
-(char)locallyAvailable;
-(char)locallyAvailable;
-(TTSAssetSource *)assetSource;
-(NSString *)versionDescription;
-(void)downloadWithReservation:(id)arg1 useBattery:(char)arg2 progress:(/*^block*/id)arg3 then:(/*^block*/id)arg4 ;
-(void)cancelDownloadingWithThen:(/*^block*/id)arg1 ;
-(id)relatedAssetsWithOnlyAvailable:(char)arg1 ;
-(char)isOlder:(id)arg1 ;
-(char)isNewer:(id)arg1 ;
-(id)legacyAssetWithBundle:(id)arg1 ;
@end
