/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/AddressBookCore-Structs.h>
#import <AddressBookCore/ABRecord.h>

@class NSString;

@interface ABPerson : ABRecord

@property (copy) NSString * linkId; 
@property (copy) NSString * phonemeData; 
@property (copy) NSString * downtimeWhitelist; 
@property (assign) char isPreferredForName; 
@property (assign) char isPreferredForPhoto; 
+(id)builtInProperties;
+(id)searchElementForProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 comparison:(long long)arg5 ;
+(void)cancelLoadingImageDataForTag:(long long)arg1 ;
+(id)_pathForImageTaggedByEmails:(id)arg1 ;
+(id)_netInfoImageData;
+(Class)remoteObjectClass;
+(void)eachPrivateField:(/*^block*/id)arg1 ;
+(void)setVCardField:(id)arg1 isPrivate:(char)arg2 ;
+(id)makeBuiltInProperties;
+(long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(char)arg3 save:(char)arg4 ;
+(long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(char)arg3 ;
+(long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 ;
+(long long)addPropertiesAndTypes:(id)arg1 ;
+(long long)removeProperties:(id)arg1 ;
+(void)addCustomPropertiesAndTypesFromAddressBook:(id)arg1 toAddressBook:(id)arg2 ;
+(void)clearPrivateFields;
+(id)predicateForLinkId:(id)arg1 ;
+(id)makeLinkIdentifier;
+(id)instantMessageProperties;
+(id)vCardPrivateFields;
+(void)extractProperty:(id*)arg1 identifier:(id*)arg2 fromField:(id)arg3 ;
+(id)recordIdentifierFromVCard:(id)arg1 ;
+(char)privateVCardEnabled;
+(void)setPrivateVCardEnabled:(char)arg1 ;
+(char)vcardFieldisPrivate:(id)arg1 ;
+(void)setIncludeNotesInVCards:(char)arg1 ;
+(char)includeNotesInVCards;
+(void)setIncludePhotosInVCards:(char)arg1 ;
+(char)includePhotosInVCards;
+(id)personWithVCardData:(id)arg1 orFetchedFromAddressBook:(id)arg2 ;
+(id)personFromDictionary:(id)arg1 addressBook:(id)arg2 skipUnknownProperties:(char)arg3 generateMultiValueIDs:(char)arg4 ;
+(id)peopleFromVCardData:(id)arg1 ;
+(id)personFromDictionary:(id)arg1 ;
+(id)instantMessageServiceKeys;
+(id)instantMessageServiceKeyToPropertyMapping;
-(id)displayName;
-(id)_image;
-(char)isTransient;
-(id)compositeName;
-(id)_fullName;
-(void)setLinkId:(NSString *)arg1 ;
-(NSString *)linkId;
-(char)_isMe;
-(char)setImageData:(id)arg1 ;
-(id)imageData;
-(long long)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDowntimeWhitelist:(NSString *)arg1 ;
-(id)stringForIndexing;
-(NSString *)downtimeWhitelist;
-(id)imageDirectory;
-(void)setRingtone:(id)arg1 ;
-(id)ringtone;
-(void)setTexttone:(id)arg1 ;
-(id)texttone;
-(id)imageReference;
-(NSString *)phonemeData;
-(id)parentGroups;
-(char)canEditInCardView;
-(id)imageDataOfKind:(id)arg1 ;
-(char)hasCustomImage;
-(char)hasCustomImageOfKind:(id)arg1 ;
-(id)largeImageHashOfType:(id)arg1 ;
-(char)isPreferredForName;
-(char)setImageData:(id)arg1 kind:(id)arg2 ;
-(id)clippingRectParametersForType:(id)arg1 ;
-(char)setLargeImageClippingRect:(id)arg1 ;
-(void)mergePerson:(id)arg1 ;
-(char)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3 ;
-(id)imageMemento;
-(void)setImageFromMemento:(id)arg1 ;
-(char)setImageData:(id)arg1 forReference:(id)arg2 ;
-(id)_imageOfKind:(id)arg1 ;
-(CGRect)largeImageClippingRectOfType:(id)arg1 ;
-(id)largeImageData;
-(id)imageDataFromLargeImageByApplyingClippingRect:(CGRect)arg1 ;
-(char)nts_SetImageData:(id)arg1 kind:(id)arg2 ;
-(long long)_beginLoadingImageDataForClient:(id)arg1 ;
-(id)photoHelper;
-(char)isValidCropRect:(CGRect)arg1 forImage:(id)arg2 ;
-(char)clearAllClippingRects;
-(id)largeImageClippingRectTypes;
-(id)imageDataFromLargeImageByApplyingClippingRectOfType:(id)arg1 ;
-(char)setLargeImageData:(id)arg1 ;
-(char)isDataCachedForImageReference:(id)arg1 ;
-(id)nts_CustomImageData;
-(id)_customImageData;
-(long long)beginLoadingImageDataForClient:(id)arg1 ;
-(id)imageClippingRectsOfKind:(id)arg1 ;
-(CGRect)imageClippingRectOfType:(id)arg1 imageKind:(id)arg2 ;
-(id)largeImageClippingRectIDOfType:(id)arg1 ;
-(CGRect)primitiveLargeImageClippingRect;
-(void)setPrimitiveLargeImageClippingRect:(CGRect)arg1 ;
-(id)largeImageHash;
-(void)setLargeImageHash:(id)arg1 ;
-(id)largeImageClippingRectID;
-(void)setLargeImageClippingRectID:(id)arg1 ;
-(char)removeExtendedAttributesWithKeys:(id)arg1 fromFile:(id)arg2 ;
-(char)setClippingRect:(CGRect)arg1 forKey:(id)arg2 onFile:(id)arg3 ;
-(char)setIdentifier:(id)arg1 forKey:(id)arg2 onFile:(id)arg3 ;
-(char)setHashOfData:(id)arg1 forKey:(id)arg2 onFile:(id)arg3 ;
-(id)imageClippingRectTypesOfKind:(id)arg1 ;
-(id)clippingRectParametersForAllTypes;
-(void)removeImageReference:(id)arg1 ;
-(id)imageReferences;
-(char)_isCompany;
-(id)nts__RealCompositeName;
-(char)_shouldAssignNewDatabaseImplToAccount;
-(id)unifiedValueForProperty:(id)arg1 ;
-(id)nts__fullName;
-(id)_vCardRepresentationAsString;
-(id)_21vCardRepresentationAsData;
-(id)stringForXcode;
-(void)nts_CascadeRemove;
-(id)_realCompositeName;
-(char)nts_canRemove;
-(id)fetchUpdatedBackingObject;
-(id)linkedPeople;
-(char)_propertyHasChanged:(id)arg1 ;
-(void)setIsPreferredForName:(char)arg1 ;
-(void)setIsPreferredForPhoto:(char)arg1 ;
-(id)initWithVCardRepresentation:(id)arg1 addressBook:(id)arg2 ;
-(void)setPhonemeData:(NSString *)arg1 ;
-(char)isPreferredForPhoto;
-(char)_matchAndMerge_MergePerson:(id)arg1 ;
-(char)_takeGroupMembershipsFromPeople:(id)arg1 ;
-(char)_propertyIsIdentical:(id)arg1 forPerson:(id)arg2 ;
-(char)_isIgnoredPropertyForMerging:(id)arg1 ;
-(char)_mergeProperty:(id)arg1 forPerson:(id)arg2 ;
-(char)_takeGroupMembershipsFromPerson:(id)arg1 ;
-(char)isEmptyPerson;
-(id)nts_StringForIndexing;
-(id)valueSanitizer;
-(id)_vCardRepresentationAsStringUsingPreferencesForOptions;
-(void)nts_addPropertyValueToArchive:(id)arg1 forPropertyKey:(id)arg2 ;
-(void)nts_importSingleValue:(id)arg1 fromArchive:(id)arg2 forPropertyKey:(id)arg3 ;
-(char)nts_computeIsReadOnly;
-(id)vCardRepresentation;
-(id)_vCardRepresentationAsStringWithOptions:(id)arg1 ;
-(id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2 ;
-(id)_vCardRepresentationAsStringIncludeNotes:(char)arg1 includePhotos:(char)arg2 ;
-(void)populateWithDictionary:(id)arg1 skipUnknownProperties:(char)arg2 generateMultiValueIDs:(char)arg3 recordIsNew:(char)arg4 ;
-(id)_fullNameIncludingAuxiliaryElements:(char)arg1 ;
-(id)nts__fullNameIncludingAuxiliaryElements:(char)arg1 ;
-(id)nts__fullPhoneticName;
-(id)nts_AlternateName;
-(id)createFirstLastSorting:(char)arg1 part1:(char)arg2 ;
-(id)nts_coreDataFullNameIncludingAuxiliaryElements:(char)arg1 ;
-(char)nts__isLastNameFirst;
-(id)_realCompositeNameIncludingAuxiliaryElements:(char)arg1 ;
-(id)alternateName;
-(char)nts__isCompany;
-(id)_compositeNameIncludingAuxiliaryElements:(char)arg1 ;
-(id)archivableDataFromCropRects:(id)arg1 ;
-(id)cropRectsFromArchivableData:(id)arg1 ;
-(void)linkWithPerson:(id)arg1 ;
-(char)isEmptyPersonIgnoringProperties:(id)arg1 ;
-(id)firstPropertyWithNonEmptyValue:(id)arg1 ;
-(id)linkedPeopleWithSortDescriptors:(id)arg1 ;
-(id)unifiedPerson;
-(id)nts_phonemeData;
-(void)nts_setPhonemeData:(id)arg1 ;
-(id)nts_downtimeWhitelist;
-(void)nts_setDowntimeWhitelist:(id)arg1 ;
-(id)nts_ringtone;
-(void)nts_setRingtone:(id)arg1 ;
-(id)nts_texttone;
-(void)nts_setTexttone:(id)arg1 ;
-(id)availableLabelsForProperty:(id)arg1 ;
-(id)initWithVCardRepresentation:(id)arg1 ;
-(void)resetWithDictionary:(id)arg1 skipUnknownProperties:(char)arg2 generateMultiValueIDs:(char)arg3 ;
-(id)_fullPhoneticName;
-(id)createAlternateName;
-(void)createLastFirstSortingNamePart1:(const _CFString*)arg1 part2:(const _CFString*)arg2 ;
-(void)createFirstLastSortingNamePart1:(const _CFString*)arg1 part2:(const _CFString*)arg2 ;
-(id)similarNameForHashing;
-(char)_isLastNameFirst;
-(void)importPerson:(id)arg1 ;
-(char)_requiresSeparateBirthdayCalendar;
-(void)unlink;
-(id)linkedPeopleSortedForPhotos;
-(char)isPersisted;
-(id)_mapURLForAddressWithId:(id)arg1 ;
-(char)isGuardianWhitelisted;
@end
