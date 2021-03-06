/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/StoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSLock, NSDictionary, NSString, NSData, NSArray, NSNumber, NSURL;

@interface SSDownloadMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	NSLock* _lock;

}

@property (retain) NSDictionary * dictionary; 
@property (retain) NSString * downloadKey; 
@property (retain) NSData * epubRightsData; 
@property (retain) NSString * appleID; 
@property (retain) NSString * fileExtension; 
@property (retain) NSArray * sinfs; 
@property (readonly) char extractionCanBeStreamed; 
@property (readonly) NSNumber * uncompressedSize; 
@property (readonly) NSString * bundleDisplayName; 
@property (readonly) NSString * bundleShortVersionString; 
@property (retain) NSString * ipaInstallPath; 
@property (retain) NSString * genre; 
@property (assign) unsigned long long itemIdentifier; 
@property (retain) NSString * kind; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * title; 
@property (retain) NSURL * thumbnailImageURL; 
@property (retain) NSString * transactionIdentifier; 
@property (assign) char animationExpected; 
@property (retain) NSString * productType; 
@property (readonly) NSString * sortArtist; 
@property (readonly) NSString * sortName; 
@property (readonly) NSNumber * ageRestriction; 
@property (retain) NSURL * preflightPackageURL; 
@property (retain) NSString * buyParameters; 
@property (readonly) NSString * purchaseDate; 
@property (readonly) char isExplicitContents; 
@property (retain) NSString * iapInstallPath; 
@property (readonly) NSNumber * iapContentSize; 
@property (readonly) NSString * iapContentVersion; 
@property (readonly) NSNumber * collectionID; 
@property (retain) NSString * collectionName; 
@property (retain) NSNumber * durationInMilliseconds; 
@property (getter=isRental) char rental; 
@property (getter=isSample,readonly) char sample; 
@property (readonly) NSString * applicationIdentifier; 
@property (assign) char artworkIsPrerendered; 
@property (retain) NSString * bundleIdentifier; 
@property (retain) NSString * bundleVersion; 
@property (retain) NSNumber * version; 
@property (readonly) char needsSoftwareInstallOperation; 
@property (assign) char isMDMProvided; 
@property (retain) NSString * managedAppUUIDString; 
@property (readonly) NSArray * assets; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemIdentifier;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSNumber *)version;
-(NSString *)applicationIdentifier;
-(NSString *)genre;
-(NSString *)bundleVersion;
-(NSString *)fileExtension;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)kind;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)initWithKind:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(NSString *)productType;
-(NSArray *)assets;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(NSString *)sortArtist;
-(NSNumber *)durationInMilliseconds;
-(void)setDurationInMilliseconds:(NSNumber *)arg1 ;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)buyParameters;
-(NSString *)purchaseDate;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSNumber *)uncompressedSize;
-(NSString *)collectionName;
-(char)isRental;
-(NSString *)sortName;
-(NSString *)downloadKey;
-(void)setDownloadKey:(NSString *)arg1 ;
-(void)setRental:(char)arg1 ;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setBuyParameters:(NSString *)arg1 ;
-(NSString *)bundleShortVersionString;
-(NSURL *)preflightPackageURL;
-(NSURL *)thumbnailImageURL;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(void)setAnimationExpected:(char)arg1 ;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(char)artworkIsPrerendered;
-(NSNumber *)collectionID;
-(NSNumber *)ageRestriction;
-(char)isExplicitContents;
-(char)isSample;
-(id)deltaPackages;
-(char)needsSoftwareInstallOperation;
-(char)isMDMProvided;
-(NSString *)managedAppUUIDString;
-(NSString *)ipaInstallPath;
-(char)extractionCanBeStreamed;
-(NSString *)bundleDisplayName;
-(void)setArtworkIsPrerendered:(char)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(void)setPreflightPackageURL:(NSURL *)arg1 ;
-(void)setExtractionCanBeStreamed:(char)arg1 ;
-(void)setUncompressedSize:(NSNumber *)arg1 ;
-(void)setIsMDMProvided:(char)arg1 ;
-(void)setManagedAppUUIDString:(NSString *)arg1 ;
-(void)setIpaInstallPath:(NSString *)arg1 ;
-(char)animationExpected;
-(NSData *)epubRightsData;
-(NSNumber *)iapContentSize;
-(NSString *)iapContentVersion;
-(NSString *)iapInstallPath;
-(id)localServerInfo;
-(void)setEpubRightsData:(NSData *)arg1 ;
-(void)setIapInstallPath:(NSString *)arg1 ;
@end

