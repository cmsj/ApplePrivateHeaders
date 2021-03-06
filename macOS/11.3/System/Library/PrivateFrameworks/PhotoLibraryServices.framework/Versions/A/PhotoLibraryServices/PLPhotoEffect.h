/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEffect : NSObject {

	char _isPortrait;
	char _isLegacy;
	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;
	long long _lightingVersion;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) long long latestVersion; 
@property (nonatomic,readonly) long long lightingVersion;                     //@synthesize lightingVersion=_lightingVersion - In the implementation block
@property (nonatomic,readonly) char isPortrait;                               //@synthesize isPortrait=_isPortrait - In the implementation block
@property (nonatomic,readonly) char isLegacy;                                 //@synthesize isLegacy=_isLegacy - In the implementation block
+(id)effectWithCIFilterName:(id)arg1 ;
+(id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
+(id)_lightingEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 lightingVersion:(long long)arg3 ;
+(id)allEffects;
+(id)standardSupportedEffects;
+(id)allSupportedEffects;
+(char)isEffectNoneForIdentifier:(id)arg1 ;
+(char)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2 ;
+(unsigned long long)_indexOfEffectWithIdentifier:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(char)isLegacy;
-(char)isPortrait;
-(long long)latestVersion;
-(NSString *)filterIdentifier;
-(NSString *)CIFilterName;
-(long long)lightingVersion;
-(id)newEffectFilter;
@end

