/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSDictionary, NSArray, NSDate, NSString, NSData;

@interface CPLMasterChange : CPLItemChange {

	NSDictionary* _resourcePerResourceType;
	short _importedBy;
	short _videoFrameRate;
	NSArray* _resources;
	NSArray* _expungeableResourceStates;
	NSDate* _creationDate;
	NSString* _itemType;
	NSDate* _importDate;
	NSString* _filename;
	NSString* _importGroupIdentifier;
	NSString* _mediaMetaDataType;
	NSData* _mediaMetaData;
	long long _originalOrientation;
	unsigned long long _fullSizeJPEGSource;
	NSString* _originatingFingerprint;
	NSString* _importedByBundleIdentifier;
	NSString* _importedByDisplayName;
	NSString* _codec;

}

@property (nonatomic,copy) NSArray * resources;                                  //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSArray * expungeableResourceStates;                  //@synthesize expungeableResourceStates=_expungeableResourceStates - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                  //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) char isImage; 
@property (nonatomic,readonly) char isVideo; 
@property (nonatomic,copy) NSDate * importDate;                                  //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,copy) NSString * filename;                                  //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * importGroupIdentifier;                     //@synthesize importGroupIdentifier=_importGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaMetaDataType;                         //@synthesize mediaMetaDataType=_mediaMetaDataType - In the implementation block
@property (nonatomic,retain) NSData * mediaMetaData;                             //@synthesize mediaMetaData=_mediaMetaData - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                      //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fullSizeJPEGSource;              //@synthesize fullSizeJPEGSource=_fullSizeJPEGSource - In the implementation block
@property (nonatomic,copy) NSString * originatingFingerprint;                    //@synthesize originatingFingerprint=_originatingFingerprint - In the implementation block
@property (assign,nonatomic) short importedBy;                                   //@synthesize importedBy=_importedBy - In the implementation block
@property (nonatomic,copy) NSString * importedByBundleIdentifier;                //@synthesize importedByBundleIdentifier=_importedByBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * importedByDisplayName;                     //@synthesize importedByDisplayName=_importedByDisplayName - In the implementation block
@property (assign,nonatomic) short videoFrameRate;                               //@synthesize videoFrameRate=_videoFrameRate - In the implementation block
@property (nonatomic,copy) NSString * codec;                                     //@synthesize codec=_codec - In the implementation block
-(id)init;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)resourceForType:(unsigned long long)arg1 ;
-(NSArray *)resources;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)itemType;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setResources:(NSArray *)arg1 ;
-(NSString *)codec;
-(void)setCodec:(NSString *)arg1 ;
-(short)videoFrameRate;
-(void)setItemType:(NSString *)arg1 ;
-(char)isImage;
-(char)isVideo;
-(char)supportsDeletion;
-(void)setVideoFrameRate:(short)arg1 ;
-(void)setImportedBy:(short)arg1 ;
-(short)importedBy;
-(void)setImportedByDisplayName:(NSString *)arg1 ;
-(NSString *)importedByDisplayName;
-(char)supportsResources;
-(void)setExpungeableResourceStates:(NSArray *)arg1 ;
-(NSArray *)expungeableResourceStates;
-(long long)originalOrientation;
-(void)setImportedByBundleIdentifier:(NSString *)arg1 ;
-(void)setOriginalOrientation:(long long)arg1 ;
-(NSString *)mediaMetaDataType;
-(NSData *)mediaMetaData;
-(void)setImportDate:(NSDate *)arg1 ;
-(void)setFullSizeJPEGSource:(unsigned long long)arg1 ;
-(void)setMediaMetaDataType:(NSString *)arg1 ;
-(void)setMediaMetaData:(NSData *)arg1 ;
-(NSString *)importedByBundleIdentifier;
-(unsigned long long)fullSizeJPEGSource;
-(NSDate *)importDate;
-(void)setImportGroupIdentifier:(NSString *)arg1 ;
-(void)setOriginatingFingerprint:(NSString *)arg1 ;
-(NSString *)originatingFingerprint;
-(NSString *)importGroupIdentifier;
-(id)propertiesDescription;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(long long)dequeueOrder;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(void)_copyDerivatives:(unsigned long long*)arg1 count:(int)arg2 ifMatchingResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5 ;
-(void)copyDerivativesFromRecordIfPossible:(id)arg1 ;
-(char)supportsResourceType:(unsigned long long)arg1 ;
-(unsigned long long)dataClassType;
-(char)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1 ;
-(char)allowsToOnlyUploadNewResources;
-(char)isMasterChange;
-(char)validateRecordForTracker:(id)arg1 ;
@end

