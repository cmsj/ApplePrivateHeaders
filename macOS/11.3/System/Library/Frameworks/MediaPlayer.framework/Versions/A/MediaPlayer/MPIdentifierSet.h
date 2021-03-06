/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMutableLocalLibraryIdentifiers.h>
#import <libobjc.A.dylib/MPMutablePersonalStoreIdentifiers.h>
#import <libobjc.A.dylib/MPMutableUniversalStoreIdentifiers.h>
#import <libobjc.A.dylib/MPMutableRadioIdentifiers.h>
#import <libobjc.A.dylib/MPMutableIdentifierSet.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, MPModelKind;

@interface MPIdentifierSet : NSObject <MPMutableLocalLibraryIdentifiers, MPMutablePersonalStoreIdentifiers, MPMutableUniversalStoreIdentifiers, MPMutableRadioIdentifiers, MPMutableIdentifierSet, _MPStateDumpPropertyListTransformable, NSCopying, NSSecureCoding> {

	char _shouldExcludeFromShuffle;
	char _placeholder;
	NSString* _databaseID;
	long long _persistentID;
	long long _containedPersistentID;
	long long _syncID;
	NSString* _personID;
	unsigned long long _cloudID;
	NSString* _cloudAlbumID;
	NSString* _recommendationID;
	NSString* _globalPlaylistID;
	long long _adamID;
	NSArray* _formerAdamIDs;
	NSString* _universalCloudLibraryID;
	long long _purchasedAdamID;
	long long _subscriptionAdamID;
	NSString* _socialProfileID;
	NSString* _informalMediaClipID;
	NSString* _informalStaticAssetID;
	NSString* _stationStringID;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationEventID;
	NSString* _containerUniqueID;
	NSString* _handoffCorrelationID;
	NSString* _contentItemID;
	NSString* _lyricsID;
	NSString* _vendorID;
	MPModelKind* _modelKind;

}

@property (nonatomic,copy) NSString * containerUniqueID;                                      //@synthesize containerUniqueID=_containerUniqueID - In the implementation block
@property (nonatomic,copy) NSString * handoffCorrelationID;                                   //@synthesize handoffCorrelationID=_handoffCorrelationID - In the implementation block
@property (nonatomic,copy) NSString * lyricsID;                                               //@synthesize lyricsID=_lyricsID - In the implementation block
@property (assign,nonatomic) char shouldExcludeFromShuffle;                                   //@synthesize shouldExcludeFromShuffle=_shouldExcludeFromShuffle - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) char placeholder;                           //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * vendorID;                                               //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,readonly) char needsPersonalization; 
@property (nonatomic,copy) NSString * globalPlaylistID;                                       //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (assign,nonatomic) long long deviceLibraryPersistentID; 
@property (assign,nonatomic) long long storeAdamID; 
@property (assign,nonatomic) long long storeSubscriptionAdamID; 
@property (nonatomic,copy) NSString * radioStationStringID; 
@property (assign,nonatomic) long long radioStationID; 
@property (assign,nonatomic) long long storePurchasedAdamID; 
@property (nonatomic,copy) NSString * cloudUniversalLibraryID; 
@property (assign,nonatomic) long long syncID;                                                //@synthesize syncID=_syncID - In the implementation block
@property (nonatomic,copy) NSString * contentItemID;                                          //@synthesize contentItemID=_contentItemID - In the implementation block
@property (nonatomic,copy) NSArray * formerStoreAdamIDs; 
@property (nonatomic,copy) NSString * socialProfileID;                                        //@synthesize socialProfileID=_socialProfileID - In the implementation block
@property (nonatomic,copy) NSString * storeCloudAlbumID; 
@property (assign,nonatomic) unsigned long long storeCloudID; 
@property (nonatomic,copy) NSString * radioStationHash; 
@property (nonatomic,copy) NSString * storeRecommendationID; 
@property (nonatomic,copy) NSString * informalMediaClipID;                                    //@synthesize informalMediaClipID=_informalMediaClipID - In the implementation block
@property (nonatomic,copy) NSString * informalStaticAssetID;                                  //@synthesize informalStaticAssetID=_informalStaticAssetID - In the implementation block
@property (nonatomic,readonly) MPModelKind * modelKind;                                       //@synthesize modelKind=_modelKind - In the implementation block
@property (nonatomic,readonly) id<MPLocalLibraryIdentifiers> library; 
@property (nonatomic,readonly) id<MPPersonalStoreIdentifiers> personalizedStore; 
@property (nonatomic,readonly) id<MPUniversalStoreIdentifiers> universalStore; 
@property (nonatomic,readonly) id<MPRadioIdentifiers> radio; 
@property (assign,nonatomic) long long persistentID;                                          //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long containedPersistentID;                                 //@synthesize containedPersistentID=_containedPersistentID - In the implementation block
@property (nonatomic,readonly) NSString * databaseID;                                         //@synthesize databaseID=_databaseID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long cloudID;                                      //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy) NSString * cloudAlbumID;                                           //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (nonatomic,copy) NSString * recommendationID;                                       //@synthesize recommendationID=_recommendationID - In the implementation block
@property (nonatomic,readonly) NSString * personID;                                           //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) long long adamID;                                                //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy) NSArray * formerAdamIDs;                                           //@synthesize formerAdamIDs=_formerAdamIDs - In the implementation block
@property (nonatomic,copy) NSString * universalCloudLibraryID;                                //@synthesize universalCloudLibraryID=_universalCloudLibraryID - In the implementation block
@property (assign,nonatomic) long long purchasedAdamID;                                       //@synthesize purchasedAdamID=_purchasedAdamID - In the implementation block
@property (assign,nonatomic) long long subscriptionAdamID;                                    //@synthesize subscriptionAdamID=_subscriptionAdamID - In the implementation block
@property (nonatomic,copy) NSString * stationStringID;                                        //@synthesize stationStringID=_stationStringID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                            //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;                                             //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationEventID;                                         //@synthesize stationEventID=_stationEventID - In the implementation block
+(char)supportsSecureCoding;
+(id)emptyIdentifierSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)unionSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)intersectsSet:(id)arg1 ;
-(char)isPlaceholder;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)vendorID;
-(long long)persistentID;
-(unsigned long long)cloudID;
-(void)setCloudID:(unsigned long long)arg1 ;
-(void)setVendorID:(NSString *)arg1 ;
-(void)setPlaceholder:(char)arg1 ;
-(void)setAdamID:(long long)arg1 ;
-(long long)adamID;
-(long long)stationID;
-(NSString *)personID;
-(id<MPLocalLibraryIdentifiers>)library;
-(long long)syncID;
-(NSString *)databaseID;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(NSString *)radioStationHash;
-(void)setContentItemID:(NSString *)arg1 ;
-(void)setRadioStationID:(long long)arg1 ;
-(long long)radioStationID;
-(NSString *)contentItemID;
-(id)_stateDumpObject;
-(void)setSyncID:(long long)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(NSString *)humanDescription;
-(NSString *)cloudAlbumID;
-(NSString *)cloudUniversalLibraryID;
-(NSArray *)formerStoreAdamIDs;
-(NSString *)socialProfileID;
-(long long)purchasedAdamID;
-(long long)subscriptionAdamID;
-(NSString *)stationStringID;
-(void)setLibraryIdentifiersWithDatabaseID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setPersonalStoreIdentifiersWithPersonID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setUniversalStoreIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(void)setRadioIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(NSString *)containerUniqueID;
-(void)setContainerUniqueID:(NSString *)arg1 ;
-(NSString *)handoffCorrelationID;
-(void)setHandoffCorrelationID:(NSString *)arg1 ;
-(NSString *)lyricsID;
-(void)setLyricsID:(NSString *)arg1 ;
-(char)shouldExcludeFromShuffle;
-(void)setShouldExcludeFromShuffle:(char)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(NSString *)stationHash;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(NSString *)stationEventID;
-(void)setStationEventID:(NSString *)arg1 ;
-(NSString *)globalPlaylistID;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(NSArray *)formerAdamIDs;
-(void)setFormerAdamIDs:(NSArray *)arg1 ;
-(NSString *)universalCloudLibraryID;
-(void)setUniversalCloudLibraryID:(NSString *)arg1 ;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(void)setSocialProfileID:(NSString *)arg1 ;
-(NSString *)informalMediaClipID;
-(void)setInformalMediaClipID:(NSString *)arg1 ;
-(NSString *)informalStaticAssetID;
-(void)setInformalStaticAssetID:(NSString *)arg1 ;
-(void)setCloudAlbumID:(NSString *)arg1 ;
-(NSString *)recommendationID;
-(void)setRecommendationID:(NSString *)arg1 ;
-(long long)containedPersistentID;
-(void)setContainedPersistentID:(long long)arg1 ;
-(id)_initWithModelKind:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithModelKind:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(id<MPPersonalStoreIdentifiers>)personalizedStore;
-(id<MPUniversalStoreIdentifiers>)universalStore;
-(id<MPRadioIdentifiers>)radio;
-(char)hasCommonIdentifierWithIdentifierSet:(id)arg1 ;
-(long long)deviceLibraryPersistentID;
-(void)setDeviceLibraryPersistentID:(long long)arg1 ;
-(NSString *)radioStationStringID;
-(void)setRadioStationStringID:(NSString *)arg1 ;
-(long long)storeAdamID;
-(void)setStoreAdamID:(long long)arg1 ;
-(void)setFormerStoreAdamIDs:(NSArray *)arg1 ;
-(unsigned long long)storeCloudID;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(NSString *)storeCloudAlbumID;
-(void)setStoreCloudAlbumID:(NSString *)arg1 ;
-(NSString *)storeRecommendationID;
-(void)setStoreRecommendationID:(NSString *)arg1 ;
-(long long)storePurchasedAdamID;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(long long)storeSubscriptionAdamID;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(id)identifierDescriptions:(char)arg1 ;
-(id)preferredStoreStringIdentifierForPersonID:(id)arg1 ;
-(id)prioritizedStoreStringIdentifiersForPersonID:(id)arg1 ;
-(char)needsPersonalization;
-(void)_setDefaultDatabaseIDIfNeeded;
-(void)_setDefaultPersonIDIfNeeded;
-(MPModelKind *)modelKind;
@end

