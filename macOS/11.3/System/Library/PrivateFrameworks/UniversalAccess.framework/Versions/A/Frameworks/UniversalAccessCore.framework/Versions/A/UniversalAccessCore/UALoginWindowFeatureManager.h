/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/Frameworks/UniversalAccessCore.framework/Versions/A/UniversalAccessCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface UALoginWindowFeatureManager : NSObject

@property (nonatomic,readonly) NSArray * allAvailableFeatures; 
+(id)sharedManager;
+(id)_orderedAvailableFeatureTypes;
-(id)_featureWithType:(long long)arg1 ;
-(void)_migrateVoiceOverEnabledKeyIfNeeded;
-(id)_allFeatures;
-(NSArray *)allAvailableFeatures;
-(void)updateLoginWindowFeatures:(id)arg1 ;
-(id)_preferencesDictionaryForFeatureType:(long long)arg1 enabled:(char)arg2 ;
-(void)_updateVoiceOverAtEFI:(char)arg1 ;
-(id)_currentLoginWindowPreferences;
-(void)_setupUserWithLoginWindowPrefs:(id)arg1 forFeature:(long long)arg2 ;
-(void)_setLoginWindowFeatureType:(long long)arg1 isEnabled:(char)arg2 ;
-(char)_validateLoginWindowPreferences:(id)arg1 forFeature:(long long)arg2 ;
-(id)_preferenceKeysForFeature:(long long)arg1 ;
-(id)_enabledKeysForFeature:(long long)arg1 ;
-(id)_featureHumanReadableName:(long long)arg1 ;
-(char)_featureWillCopyUserPreferences:(long long)arg1 ;
-(char)_featureEnabledAtLoginWindow:(long long)arg1 ;
-(void)transferLoginWindowFeaturesToCurrentUser;
@end
