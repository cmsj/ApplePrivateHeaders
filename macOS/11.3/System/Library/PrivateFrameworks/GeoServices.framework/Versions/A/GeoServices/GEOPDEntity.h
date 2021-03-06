/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOLocalizedString, GEOStyleAttributes;

@interface GEOPDEntity : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE86* _placeLookupCategorys;
	NSMutableArray* _altFaxs;
	NSMutableArray* _altTelephones;
	NSMutableArray* _altUrls;
	NSMutableArray* _alternateSearchableNames;
	unsigned long long _brandMuid;
	unsigned long long _buildingId;
	NSString* _fax;
	unsigned long long _globalBrandMuid;
	NSMutableArray* _localizedCategorys;
	NSString* _mapsCategoryId;
	NSMutableArray* _names;
	GEOLocalizedString* _secondaryName;
	GEOLocalizedString* _secondarySpokenName;
	NSMutableArray* _spokenNames;
	GEOStyleAttributes* _styleAttributes;
	NSString* _telephone;
	NSString* _url;
	NSString* _walletCategoryId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _capacity;
	int _displayStyle;
	int _placeDisplayType;
	int _searchSection;
	int _type;
	char _altTelephoneAdsOptOut;
	char _enableRapLightweightFeedback;
	char _isDisputed;
	char _isPermanentlyClosed;
	char _isStandaloneBrand;
	char _telephoneAdsOptOut;
	struct {
		unsigned has_brandMuid : 1;
		unsigned has_buildingId : 1;
		unsigned has_globalBrandMuid : 1;
		unsigned has_capacity : 1;
		unsigned has_displayStyle : 1;
		unsigned has_placeDisplayType : 1;
		unsigned has_searchSection : 1;
		unsigned has_type : 1;
		unsigned has_altTelephoneAdsOptOut : 1;
		unsigned has_enableRapLightweightFeedback : 1;
		unsigned has_isDisputed : 1;
		unsigned has_isPermanentlyClosed : 1;
		unsigned has_isStandaloneBrand : 1;
		unsigned has_telephoneAdsOptOut : 1;
		unsigned read_unknownFields : 1;
		unsigned read_placeLookupCategorys : 1;
		unsigned read_altFaxs : 1;
		unsigned read_altTelephones : 1;
		unsigned read_altUrls : 1;
		unsigned read_alternateSearchableNames : 1;
		unsigned read_fax : 1;
		unsigned read_localizedCategorys : 1;
		unsigned read_mapsCategoryId : 1;
		unsigned read_names : 1;
		unsigned read_secondaryName : 1;
		unsigned read_secondarySpokenName : 1;
		unsigned read_spokenNames : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_telephone : 1;
		unsigned read_url : 1;
		unsigned read_walletCategoryId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) char hasTelephone; 
@property (nonatomic,retain) NSString * telephone; 
@property (nonatomic,retain) NSMutableArray * altTelephones; 
@property (nonatomic,readonly) char hasFax; 
@property (nonatomic,retain) NSString * fax; 
@property (nonatomic,retain) NSMutableArray * altFaxs; 
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSMutableArray * altUrls; 
@property (assign,nonatomic) char hasIsPermanentlyClosed; 
@property (assign,nonatomic) char isPermanentlyClosed; 
@property (assign,nonatomic) char hasIsDisputed; 
@property (assign,nonatomic) char isDisputed; 
@property (nonatomic,retain) NSMutableArray * names; 
@property (nonatomic,retain) NSMutableArray * spokenNames; 
@property (nonatomic,retain) NSMutableArray * localizedCategorys; 
@property (assign,nonatomic) char hasTelephoneAdsOptOut; 
@property (assign,nonatomic) char telephoneAdsOptOut; 
@property (assign,nonatomic) char hasAltTelephoneAdsOptOut; 
@property (assign,nonatomic) char altTelephoneAdsOptOut; 
@property (assign,nonatomic) char hasIsStandaloneBrand; 
@property (assign,nonatomic) char isStandaloneBrand; 
@property (assign,nonatomic) char hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle; 
@property (assign,nonatomic) char hasSearchSection; 
@property (assign,nonatomic) int searchSection; 
@property (assign,nonatomic) char hasPlaceDisplayType; 
@property (assign,nonatomic) int placeDisplayType; 
@property (assign,nonatomic) char hasBrandMuid; 
@property (assign,nonatomic) unsigned long long brandMuid; 
@property (assign,nonatomic) char hasCapacity; 
@property (assign,nonatomic) int capacity; 
@property (nonatomic,readonly) unsigned long long placeLookupCategorysCount; 
@property (nonatomic,readonly) int* placeLookupCategorys; 
@property (nonatomic,readonly) char hasSecondaryName; 
@property (nonatomic,retain) GEOLocalizedString * secondaryName; 
@property (nonatomic,readonly) char hasSecondarySpokenName; 
@property (nonatomic,retain) GEOLocalizedString * secondarySpokenName; 
@property (nonatomic,readonly) char hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) char hasWalletCategoryId; 
@property (nonatomic,retain) NSString * walletCategoryId; 
@property (nonatomic,readonly) char hasMapsCategoryId; 
@property (nonatomic,retain) NSString * mapsCategoryId; 
@property (assign,nonatomic) char hasEnableRapLightweightFeedback; 
@property (assign,nonatomic) char enableRapLightweightFeedback; 
@property (nonatomic,retain) NSMutableArray * alternateSearchableNames; 
@property (assign,nonatomic) char hasGlobalBrandMuid; 
@property (assign,nonatomic) unsigned long long globalBrandMuid; 
@property (assign,nonatomic) char hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(id)entityForPlaceData:(id)arg1 ;
+(Class)nameType;
+(Class)alternateSearchableNameType;
+(Class)altTelephoneType;
+(Class)altFaxType;
+(Class)altUrlType;
+(Class)spokenNameType;
+(Class)localizedCategoryType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)capacity;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)setCapacity:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(int)displayStyle;
-(void)setDisplayStyle:(int)arg1 ;
-(GEOLocalizedString *)secondaryName;
-(GEOLocalizedString *)secondarySpokenName;
-(char)isDisputed;
-(int)placeDisplayType;
-(char)hasTelephone;
-(NSString *)telephone;
-(GEOStyleAttributes *)styleAttributes;
-(NSString *)mapsCategoryId;
-(NSMutableArray *)alternateSearchableNames;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasUrl;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(unsigned long long)buildingId;
-(void)setHasBuildingId:(char)arg1 ;
-(char)hasBuildingId;
-(NSMutableArray *)localizedCategorys;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(char)hasStyleAttributes;
-(void)setBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)brandMuid;
-(void)setHasBrandMuid:(char)arg1 ;
-(char)hasBrandMuid;
-(NSMutableArray *)names;
-(NSString *)walletCategoryId;
-(void)setMapsCategoryId:(NSString *)arg1 ;
-(void)setWalletCategoryId:(NSString *)arg1 ;
-(char)hasMapsCategoryId;
-(char)hasWalletCategoryId;
-(id)bestLocalizedString;
-(void)addName:(id)arg1 ;
-(unsigned long long)namesCount;
-(void)clearNames;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(void)setTelephone:(NSString *)arg1 ;
-(char)hasIsPermanentlyClosed;
-(char)isPermanentlyClosed;
-(id)bestLocalizedName;
-(unsigned long long)spokenNamesCount;
-(id)spokenNameAtIndex:(unsigned long long)arg1 ;
-(void)setIsDisputed:(char)arg1 ;
-(NSMutableArray *)altTelephones;
-(char)telephoneAdsOptOut;
-(NSMutableArray *)spokenNames;
-(char)hasIsDisputed;
-(char)hasIsStandaloneBrand;
-(char)isStandaloneBrand;
-(void)addAlternateSearchableName:(id)arg1 ;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearAlternateSearchableNames;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
-(NSString *)fax;
-(NSMutableArray *)altFaxs;
-(NSMutableArray *)altUrls;
-(void)addAltTelephone:(id)arg1 ;
-(void)setFax:(NSString *)arg1 ;
-(void)addAltFax:(id)arg1 ;
-(void)addAltUrl:(id)arg1 ;
-(void)setIsPermanentlyClosed:(char)arg1 ;
-(void)addSpokenName:(id)arg1 ;
-(void)addLocalizedCategory:(id)arg1 ;
-(void)setTelephoneAdsOptOut:(char)arg1 ;
-(void)setAltTelephoneAdsOptOut:(char)arg1 ;
-(void)setIsStandaloneBrand:(char)arg1 ;
-(void)setSearchSection:(int)arg1 ;
-(void)setPlaceDisplayType:(int)arg1 ;
-(void)addPlaceLookupCategory:(int)arg1 ;
-(void)setSecondaryName:(GEOLocalizedString *)arg1 ;
-(void)setSecondarySpokenName:(GEOLocalizedString *)arg1 ;
-(void)setEnableRapLightweightFeedback:(char)arg1 ;
-(void)setGlobalBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)altTelephonesCount;
-(void)clearAltTelephones;
-(id)altTelephoneAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)altFaxsCount;
-(void)clearAltFaxs;
-(id)altFaxAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)altUrlsCount;
-(void)clearAltUrls;
-(id)altUrlAtIndex:(unsigned long long)arg1 ;
-(void)clearSpokenNames;
-(unsigned long long)localizedCategorysCount;
-(void)clearLocalizedCategorys;
-(id)localizedCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeLookupCategorysCount;
-(void)clearPlaceLookupCategorys;
-(int)placeLookupCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setAltTelephones:(NSMutableArray *)arg1 ;
-(char)hasFax;
-(void)setAltFaxs:(NSMutableArray *)arg1 ;
-(void)setAltUrls:(NSMutableArray *)arg1 ;
-(void)setHasIsPermanentlyClosed:(char)arg1 ;
-(void)setHasIsDisputed:(char)arg1 ;
-(void)setSpokenNames:(NSMutableArray *)arg1 ;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(void)setHasTelephoneAdsOptOut:(char)arg1 ;
-(char)hasTelephoneAdsOptOut;
-(char)altTelephoneAdsOptOut;
-(void)setHasAltTelephoneAdsOptOut:(char)arg1 ;
-(char)hasAltTelephoneAdsOptOut;
-(void)setHasIsStandaloneBrand:(char)arg1 ;
-(void)setHasDisplayStyle:(char)arg1 ;
-(char)hasDisplayStyle;
-(id)displayStyleAsString:(int)arg1 ;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(int)searchSection;
-(void)setHasSearchSection:(char)arg1 ;
-(char)hasSearchSection;
-(id)searchSectionAsString:(int)arg1 ;
-(int)StringAsSearchSection:(id)arg1 ;
-(void)setHasPlaceDisplayType:(char)arg1 ;
-(char)hasPlaceDisplayType;
-(id)placeDisplayTypeAsString:(int)arg1 ;
-(int)StringAsPlaceDisplayType:(id)arg1 ;
-(void)setHasCapacity:(char)arg1 ;
-(char)hasCapacity;
-(int*)placeLookupCategorys;
-(void)setPlaceLookupCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)placeLookupCategorysAsString:(int)arg1 ;
-(int)StringAsPlaceLookupCategorys:(id)arg1 ;
-(char)hasSecondaryName;
-(char)hasSecondarySpokenName;
-(char)enableRapLightweightFeedback;
-(void)setHasEnableRapLightweightFeedback:(char)arg1 ;
-(char)hasEnableRapLightweightFeedback;
-(unsigned long long)globalBrandMuid;
-(void)setHasGlobalBrandMuid:(char)arg1 ;
-(char)hasGlobalBrandMuid;
@end

