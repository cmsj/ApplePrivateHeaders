/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>

@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSForYouPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {

	WBSPerSitePreferencesSQLiteStore* _preferencesStore;
	WBSPerSitePreference* _preference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)init;
-(id)preferences;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)allowedForYouRecommendationsFromRecommendations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPreferenceValue:(long long)arg1 forURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
