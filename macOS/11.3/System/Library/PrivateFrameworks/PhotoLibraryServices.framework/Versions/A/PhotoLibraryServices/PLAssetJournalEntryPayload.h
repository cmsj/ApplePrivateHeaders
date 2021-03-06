/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSDictionary, NSArray, NSString;

@interface PLAssetJournalEntryPayload : PLJournalEntryPayload {

	NSDictionary* _keywordUUIDRemapping;

}

@property (nonatomic,readonly) NSArray * resources; 
@property (nonatomic,readonly) short savedAssetType; 
@property (nonatomic,readonly) NSString * mediaGroupUUID; 
+(unsigned)payloadVersion;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)minimumSnapshotPayloadVersion;
+(id)snapshotSortDescriptors;
+(char)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
+(id)additionalEntityNames;
+(char)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2 ;
-(id)directory;
-(NSArray *)resources;
-(short)kind;
-(id)filename;
-(void)setLocation:(id)arg1 ;
-(id)latitude;
-(id)longitude;
-(id)dateCreated;
-(char)isImage;
-(char)isVideo;
-(id)uniformTypeIdentifier;
-(NSString *)mediaGroupUUID;
-(char)hasAdjustments;
-(id)adjustmentFormatVersion;
-(id)adjustmentFormatIdentifier;
-(short)savedAssetType;
-(short)kindSubtype;
-(id)locationData;
-(id)hdrGain;
-(char)isDefaultAdjustedSlomo;
-(id)originalOrientation;
-(char)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(char)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)highFrameRateState;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg1 ;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4 ;
-(id)initWithAdditionalAssetAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithAssetDescription:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithUnmanagedAdjustment:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithInternalResource:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithFileSystemBookmark:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithCloudMaster:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 ;
-(id)initWithCloudMasterMediaMetadata:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 modelProperties:(id)arg4 ;
-(id)initWithExtendedAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithEditedIPTCAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)insertAssetFromDataInManagedObjectContext:(id)arg1 keywordUUIDRemapping:(id)arg2 payloadAttributesToUpdate:(id)arg3 ;
-(id)cloudMasterGUID;
-(id)originalResourceRelativePaths;
-(id)extendedAttributesLatitude;
-(id)extendedAttributesLongitude;
-(unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
-(id)_loadOriginalVideoMetadataWithPathManager:(id)arg1 timezoneLookup:(id)arg2 ;
-(void)_convertDepthStatesToDepthType;
-(void)_fixHDRGainZeroValueToNULL;
-(void)_fixOriginalAlternateImageOrientation;
-(void)_fixResourceTypeUnknownValues;
-(void)_fixXMPSidecarUTI;
-(void)_fixLocationData;
-(void)_fixAdjustedAssetUTI;
@end

