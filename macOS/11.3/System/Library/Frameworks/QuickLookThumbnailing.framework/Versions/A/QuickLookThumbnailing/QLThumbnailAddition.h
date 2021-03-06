/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
@class NSURL, NSDictionary, GSAddition, QLThumbnailVersion;

@interface QLThumbnailAddition : NSObject {

	NSURL* _additionURL;
	long long _additionURLSandboxToken;
	NSDictionary* _metadata;
	GSAddition* _addition;
	NSDictionary* _thumbnailDataDictionary;
	QLThumbnailVersion* _thumbnailVersion;

}

@property (readonly) GSAddition * genStoreAddition; 
@property (retain) NSURL * additionURL;                                  //@synthesize additionURL=_additionURL - In the implementation block
@property (retain) NSDictionary * thumbnailDataDictionary;               //@synthesize thumbnailDataDictionary=_thumbnailDataDictionary - In the implementation block
@property (retain) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (assign) long long additionURLSandboxToken;                    //@synthesize additionURLSandboxToken=_additionURLSandboxToken - In the implementation block
@property (readonly) QLThumbnailVersion * thumbnailVersion; 
@property (readonly) unsigned long long additionSize; 
+(char)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id*)arg3 ;
+(id)metadataForGeneratedThumbnailForURL:(id)arg1 maximumDimension:(double)arg2 ;
+(char)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4 ;
+(id)plistInExtendedAttributeNamed:(const char*)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4 ;
+(char)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char*)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id*)arg5 ;
+(char)removeExtendedAttributeNamed:(const char*)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4 ;
+(char)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(char)arg3 atURL:(id)arg4 error:(id*)arg5 ;
+(id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1 ;
+(id)imageNameForThumbnailInImageSource:(CGImageSourceRef)arg1 ;
+(id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2 ;
+(void)_hitAdditionsOnURL:(id)arg1 size:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)adjustFileProtectionForThumbnail:(id)arg1 fromOriginalDocument:(id)arg2 ;
+(char)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4 ;
+(char)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4 ;
+(id)additionCreationInfo;
+(char)imageContainsAlphaForOtherImages:(CGImageRef)arg1 ;
+(char)imageContainsAlpha:(CGImageRef)arg1 ;
+(char)_removedAdditionsOnURLUsingDaemon:(id)arg1 ;
+(char)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2 ;
+(char)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
+(char)_removedAdditionsOnURL:(id)arg1 ;
+(char)shouldUseXattrsToStoreThumbnailsOnURL:(id)arg1 ;
+(void)downloadOrGenerateThumbnailAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)downloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fpfsDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)preFPFSDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)preFPFSDownloadThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(char)removeAdditionsOnURL:(id)arg1 error:(id*)arg2 ;
+(char)associateImage:(CGImageRef)arg1 metadata:(id)arg2 automaticallyGenerated:(char)arg3 withURL:(id)arg4 error:(id*)arg5 ;
+(char)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(char)arg2 atURL:(id)arg3 error:(id*)arg4 ;
+(id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2 ;
+(char)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)sizeOfAdditionsPresentOnURL:(id)arg1 ;
+(char)hasThumbnailOnImmutableDocumentAtURL:(id)arg1 ;
+(id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2 ;
+(void)downloadOrGenerateThumbnailAtURL:(id)arg1 ;
+(char)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(QLThumbnailVersion *)thumbnailVersion;
-(id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(NSURL *)additionURL;
-(id)thumbnailURLForKey:(id)arg1 ;
-(GSAddition *)genStoreAddition;
-(unsigned long long)additionSize;
-(void)setAdditionURL:(NSURL *)arg1 ;
-(void)setAdditionURLSandboxToken:(long long)arg1 ;
-(id)initWithAdditionsPresentOnURL:(id)arg1 includingExtendedAttributes:(char)arg2 error:(id*)arg3 ;
-(char)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(char)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2 ;
-(char)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
-(id)thumbnailDataForKey:(id)arg1 ;
-(CGImageRef)thumbnailWithMaximumDimension:(double)arg1 contentRect:(CGRect*)arg2 flavor:(int*)arg3 lowQuality:(char*)arg4 properties:(id*)arg5 ;
-(id)thumbnailsDictionaryWithError:(id*)arg1 ;
-(char)shouldBeInvalidatedByThumbnailVersion:(id)arg1 ;
-(NSDictionary *)thumbnailDataDictionary;
-(id)allImageURLs;
-(void)setThumbnailDataDictionary:(NSDictionary *)arg1 ;
-(long long)additionURLSandboxToken;
@end

