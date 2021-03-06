/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCAttachmentDataSource;
#import <MailCore/MailCore-Structs.h>
@class NSData, MCFileWrapper, NSImage, NSURL, EFPathComponent, NSProgress, NSDate, NSError, NSString, NSNumber, ECAngleBracketIDHash;

@interface MCAttachment : NSObject {

	id _cachedFetchedDataLock;
	NSData* _cachedFetchedData;
	id _cachedFetchedFileWrapperLock;
	MCFileWrapper* _cachedFetchedFileWrapper;
	NSImage* _iconImage;
	id _archiveFileWrapperLock;
	char _isAutoArchiveAttachment;
	NSURL* _remoteURL;
	CGSize _resizedImageSize;
	EFPathComponent* _filename;
	EFPathComponent* _originalFilename;
	char _isMailDropImageArchive;
	char _isMailDropImageThumbnail;
	char _isMailDropIndividualImage;
	char _isMessageExternalBodyWithURL;
	char _isUnreferencedAttachment;
	char _shouldHideExtension;
	char _isCalendarInvitation;
	char _hasResourceForkData;
	unsigned short _finderFlags;
	unsigned _type;
	unsigned _creator;
	id<MCAttachmentDataSource> _dataSource;
	NSProgress* _downloadProgress;
	NSDate* _downloadURLExpiration;
	NSError* _downloadError;
	NSString* _cloudKitRecordName;
	NSURL* _downloadURL;
	NSNumber* _filePermissions;
	NSNumber* _fileSize;
	NSString* _mimePartNumber;
	NSString* _contentID;
	NSNumber* _mimeEncodedContentLength;
	NSString* _mimeType;
	NSString* _extension;
	NSData* _resizedData;
	NSString* _originalMimeType;

}

@property (assign,nonatomic) unsigned short finderFlags;                                    //@synthesize finderFlags=_finderFlags - In the implementation block
@property (assign,nonatomic) char hasResourceForkData;                                      //@synthesize hasResourceForkData=_hasResourceForkData - In the implementation block
@property (nonatomic,retain) NSImage * iconImage; 
@property (nonatomic,retain) NSData * cachedFetchedData; 
@property (nonatomic,retain) MCFileWrapper * cachedFetchedFileWrapper; 
@property (nonatomic,copy) NSString * originalMimeType;                                     //@synthesize originalMimeType=_originalMimeType - In the implementation block
@property (nonatomic,retain) id<MCAttachmentDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char isAutoArchiveAttachment;                                  //@synthesize isAutoArchiveAttachment=_isAutoArchiveAttachment - In the implementation block
@property (nonatomic,readonly) char isRemotelyAccessed; 
@property (nonatomic,readonly) char hasPendingBackgroundRead; 
@property (nonatomic,readonly) char isDataDownloaded; 
@property (nonatomic,readonly) char isDirectory; 
@property (nonatomic,retain) NSProgress * downloadProgress;                                 //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) NSDate * downloadURLExpiration;                                //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,retain) NSError * downloadError;                                       //@synthesize downloadError=_downloadError - In the implementation block
@property (nonatomic,copy) NSString * cloudKitRecordName;                                   //@synthesize cloudKitRecordName=_cloudKitRecordName - In the implementation block
@property (assign,nonatomic) char isMailDropImageArchive;                                   //@synthesize isMailDropImageArchive=_isMailDropImageArchive - In the implementation block
@property (assign,nonatomic) char isMailDropImageThumbnail;                                 //@synthesize isMailDropImageThumbnail=_isMailDropImageThumbnail - In the implementation block
@property (assign,nonatomic) char isMailDropIndividualImage;                                //@synthesize isMailDropIndividualImage=_isMailDropIndividualImage - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL; 
@property (nonatomic,retain) NSURL * downloadURL;                                           //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,copy) NSString * filename; 
@property (nonatomic,copy) EFPathComponent * filenamePathComponent; 
@property (nonatomic,copy,readonly) NSString * filenameWithoutHiddenExtension; 
@property (nonatomic,retain) NSNumber * filePermissions;                                    //@synthesize filePermissions=_filePermissions - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                                           //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) char isMessageExternalBodyWithURL;                           //@synthesize isMessageExternalBodyWithURL=_isMessageExternalBodyWithURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimePartNumber;                              //@synthesize mimePartNumber=_mimePartNumber - In the implementation block
@property (nonatomic,copy) NSString * contentID;                                            //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy,readonly) ECAngleBracketIDHash * contentIDHash; 
@property (assign,nonatomic) char isUnreferencedAttachment;                                 //@synthesize isUnreferencedAttachment=_isUnreferencedAttachment - In the implementation block
@property (nonatomic,readonly) NSNumber * mimeEncodedContentLength;                         //@synthesize mimeEncodedContentLength=_mimeEncodedContentLength - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                             //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) unsigned type;                                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned creator;                                              //@synthesize creator=_creator - In the implementation block
@property (nonatomic,copy) NSString * extension;                                            //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) char shouldHideExtension;                                      //@synthesize shouldHideExtension=_shouldHideExtension - In the implementation block
@property (nonatomic,readonly) char couldConfuseWindowsClients; 
@property (nonatomic,readonly) char isVideo; 
@property (nonatomic,readonly) char isAudio; 
@property (nonatomic,readonly) char isPDF; 
@property (assign,nonatomic) char isCalendarInvitation;                                     //@synthesize isCalendarInvitation=_isCalendarInvitation - In the implementation block
@property (nonatomic,readonly) char isImage; 
@property (nonatomic,copy,readonly) NSData * resizedData;                                   //@synthesize resizedData=_resizedData - In the implementation block
@property (nonatomic,readonly) char isFullSize; 
@property (nonatomic,readonly) CGSize resizedImageSize; 
@property (nonatomic,copy,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) MCAttachment * uneditableAttachment; 
+(id)log;
+(id)keyPathsForValuesAffectingIsDataDownloaded;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)setType:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)type;
-(char)isDirectory;
-(NSNumber *)fileSize;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)extension;
-(void)setExtension:(NSString *)arg1 ;
-(id<MCAttachmentDataSource>)dataSource;
-(void)setDataSource:(id<MCAttachmentDataSource>)arg1 ;
-(id)initWithFileWrapper:(id)arg1 ;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(NSProgress *)downloadProgress;
-(id)initWithFileURL:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSDate *)downloadURLExpiration;
-(NSURL *)downloadURL;
-(void)setDownloadURLExpiration:(NSDate *)arg1 ;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(void)setCreator:(unsigned)arg1 ;
-(unsigned)creator;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)downloadError;
-(NSImage *)iconImage;
-(char)isImage;
-(char)isVideo;
-(void)setIconImage:(NSImage *)arg1 ;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(id)_privateImageMetadataDescriptors;
-(char)isAudio;
-(char)isPDF;
-(NSString *)originalFilename;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(char)isFullSize;
-(void)setFilenamePathComponent:(EFPathComponent *)arg1 ;
-(EFPathComponent *)filenamePathComponent;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)cloudKitRecordName;
-(NSString *)mimePartNumber;
-(id)dataForAccessLevel:(long long)arg1 ;
-(char)isRemotelyAccessed;
-(char)isDataDownloaded;
-(id)initWithMimePart:(id)arg1 ;
-(id)fileWrapperForAccessLevel:(long long)arg1 error:(id*)arg2 ;
-(ECAngleBracketIDHash *)contentIDHash;
-(char)isMailDropImageArchive;
-(char)isMailDropImageThumbnail;
-(char)isAutoArchiveAttachment;
-(void)dataForAccessLevel:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)approximateSizeForAccessLevel:(long long)arg1 ;
-(void)getTypeIdentifier:(id*)arg1 andPedigree:(id*)arg2 ;
-(NSNumber *)mimeEncodedContentLength;
-(void)_mcAttachmentCommonInit;
-(void)configureWithFileWrapper:(id)arg1 ;
-(char)isMessageExternalBodyWithURL;
-(void)isImage:(char*)arg1 isPDF:(char*)arg2 bestMimeType:(id*)arg3 ;
-(NSData *)resizedData;
-(char)_hasPrivateImageMetadata:(id)arg1 ;
-(id)_cleanImageMetadataFromData:(id)arg1 ;
-(NSString *)originalMimeType;
-(void)setResizedData:(id)arg1 imageSize:(CGSize)arg2 ;
-(CGSize)resizedImageSize;
-(void)setOriginalMimeType:(NSString *)arg1 ;
-(NSData *)cachedFetchedData;
-(MCFileWrapper *)cachedFetchedFileWrapper;
-(char)shouldHideExtension;
-(char)hasResourceForkData;
-(unsigned short)finderFlags;
-(void)_setupFileWrapper:(id)arg1 ;
-(void)setCachedFetchedFileWrapper:(MCFileWrapper *)arg1 ;
-(void)setCachedFetchedData:(NSData *)arg1 ;
-(void)setShouldHideExtension:(char)arg1 ;
-(NSNumber *)filePermissions;
-(void)setFilePermissions:(NSNumber *)arg1 ;
-(id)_freshFileWrapper;
-(id)createTemporaryFile;
-(id)_preferredFilenameForFileWrapper:(id)arg1 ;
-(id)originalFilenamePathComponent;
-(void)setOriginalFilenamePathComponent:(id)arg1 ;
-(void)setHasResourceForkData:(char)arg1 ;
-(void)setFinderFlags:(unsigned short)arg1 ;
-(id)initWithMailInternalData:(id)arg1 ;
-(MCAttachment *)uneditableAttachment;
-(void)revertToOriginalData;
-(void)setFileNameForResizedImage:(id)arg1 ;
-(void)setMimeTypeForResizedImage:(id)arg1 ;
-(NSString *)filenameWithoutHiddenExtension;
-(void)discardIconImage;
-(char)isAnimatedImageForAccessLevel:(long long)arg1 ;
-(char)couldConfuseWindowsClients;
-(char)getCompressedData:(id*)arg1 compressedFileURL:(id*)arg2 archiveType:(long long*)arg3 error:(id*)arg4 ;
-(char)hasPendingBackgroundRead;
-(void)setIsAutoArchiveAttachment:(char)arg1 ;
-(void)setCloudKitRecordName:(NSString *)arg1 ;
-(void)setIsMailDropImageArchive:(char)arg1 ;
-(void)setIsMailDropImageThumbnail:(char)arg1 ;
-(char)isMailDropIndividualImage;
-(void)setIsMailDropIndividualImage:(char)arg1 ;
-(char)isUnreferencedAttachment;
-(void)setIsUnreferencedAttachment:(char)arg1 ;
-(char)isCalendarInvitation;
-(void)setIsCalendarInvitation:(char)arg1 ;
@end

