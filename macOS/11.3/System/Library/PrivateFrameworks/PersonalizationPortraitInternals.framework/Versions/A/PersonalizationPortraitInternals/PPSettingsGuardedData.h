/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary, NSDate, NSData, NSString;

@interface PPSettingsGuardedData : NSObject {

	double _cachedWeightMultiplier;
	NSSet* _donationDisabledBundleIdentifiers;
	NSSet* _cloudKitDisabledBundleIdentifiers;
	NSMutableDictionary* _donationDisabledChangeHandlers;
	NSMutableDictionary* _queryPlanLoggingChangeHandlers;
	int _nextChangeHandlerToken;
	char _appConnectionsLocationsEnabled;
	NSDate* _entitiesBackfillTimestamp;
	NSData* _entitiesMappingTrieSha256;
	NSString* _abGroupOverride;

}
@end

