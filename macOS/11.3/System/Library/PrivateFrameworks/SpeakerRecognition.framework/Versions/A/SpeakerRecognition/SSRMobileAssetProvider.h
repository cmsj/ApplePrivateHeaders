/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSRAssetProviding.h>

@class NSString;

@interface SSRMobileAssetProvider : NSObject <SSRAssetProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(unsigned long long)getAssetProviderType;
-(id)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(id)arg2 ;
-(id)_installedMobileAssetOfType:(unsigned long long)arg1 forLanguage:(id)arg2 ;
-(id)_buildAssetQueryForAssetType:(unsigned long long)arg1 ;
-(id)_filteredAssets:(id)arg1 forLanguage:(id)arg2 ;
-(id)_getSSRAssetTypeString;
-(unsigned long long)_getSSRAssetCurrentCompatibilityVersion;
-(id)_getVoiceTriggerAssetTypeString;
-(unsigned long long)_getVoiceTriggerAssetCurrentCompatibilityVersion;
-(id)_getEndpointAssetTypeString;
-(unsigned long long)_getEndpointAssetCurrentCompatibilityVersion;
@end

