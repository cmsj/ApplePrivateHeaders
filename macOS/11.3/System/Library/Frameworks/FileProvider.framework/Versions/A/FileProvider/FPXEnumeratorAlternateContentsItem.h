/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderItem_Private.h>
#import <libobjc.A.dylib/NSFileProviderItemDecorating.h>

@class FPItem, NSDictionary, NSURL, NSNumber, NSString, NSSet, NSData, NSPersonNameComponents, UTType, NSDate, NSError, NSFileProviderItemVersion, NSArray;

@interface FPXEnumeratorAlternateContentsItem : NSObject <NSFileProviderItem_Private, NSFileProviderItemDecorating> {

	FPItem* _documentItem;
	NSDictionary* _resourceValues;

}

@property (copy,readonly) NSURL * fileURL; 
@property (copy,readonly) NSNumber * hasUnresolvedConflicts; 
@property (copy,readonly) NSString * containerDisplayName; 
@property (getter=isDownloadRequested,copy,readonly) NSNumber * downloadRequested; 
@property (getter=isHidden,readonly) char hidden; 
@property (copy,readonly) NSString * providerIdentifier; 
@property (copy,readonly) NSString * sharingPermissions; 
@property (copy,readonly) NSString * fp_spotlightDomainIdentifier; 
@property (copy,readonly) NSString * fp_domainIdentifier; 
@property (copy,readonly) NSString * fp_parentDomainIdentifier; 
@property (getter=fp_isUbiquitous,readonly) char fp_ubiquitous; 
@property (readonly) char fp_isContainer; 
@property (readonly) char fp_isContainerPristine; 
@property (copy,readonly) NSString * fp_cloudContainerIdentifier; 
@property (copy,readonly) NSSet * fp_cloudContainerClientBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (getter=isTopLevelSharedItem,nonatomic,readonly) char topLevelSharedItem; 
@property (nonatomic,copy,readonly) NSData * quarantineBlob; 
@property (getter=isSyncRoot) char syncRoot; 
@property (copy,readonly) NSString * fileSystemFilename; 
@property (getter=isExcludedFromSync,nonatomic,readonly) char excludedFromSync; 
@property (getter=fp_isLastModifiedByCurrentUser,nonatomic,readonly) char fp_lastModifiedByCurrentUser; 
@property (getter=fp_isAddedByCurrentUser,nonatomic,readonly) char fp_addedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * fp_addedByNameComponents; 
@property (nonatomic,readonly) NSString * preformattedOwnerName; 
@property (nonatomic,readonly) NSString * preformattedMostRecentEditorName; 
@property (nonatomic,copy,readonly) NSString * itemIdentifier; 
@property (nonatomic,copy,readonly) NSString * parentItemIdentifier; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) UTType * contentType; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) unsigned long long fileSystemFlags; 
@property (nonatomic,copy,readonly) NSNumber * documentSize; 
@property (nonatomic,copy,readonly) NSNumber * childItemCount; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * contentModificationDate; 
@property (nonatomic,readonly) NSDictionary * extendedAttributes; 
@property (nonatomic,copy,readonly) NSDate * lastUsedDate; 
@property (nonatomic,copy,readonly) NSData * tagData; 
@property (nonatomic,copy,readonly) NSNumber * favoriteRank; 
@property (getter=isTrashed,nonatomic,readonly) char trashed; 
@property (getter=isUploaded,nonatomic,readonly) char uploaded; 
@property (getter=isUploading,nonatomic,readonly) char uploading; 
@property (nonatomic,copy,readonly) NSError * uploadingError; 
@property (getter=isDownloaded,nonatomic,readonly) char downloaded; 
@property (getter=isDownloading,nonatomic,readonly) char downloading; 
@property (nonatomic,copy,readonly) NSError * downloadingError; 
@property (getter=isMostRecentVersionDownloaded,nonatomic,readonly) char mostRecentVersionDownloaded; 
@property (getter=isShared,nonatomic,readonly) char shared; 
@property (getter=isSharedByCurrentUser,nonatomic,readonly) char sharedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * ownerNameComponents; 
@property (nonatomic,readonly) NSPersonNameComponents * mostRecentEditorNameComponents; 
@property (nonatomic,readonly) NSData * versionIdentifier; 
@property (nonatomic,readonly) NSFileProviderItemVersion * itemVersion; 
@property (nonatomic,copy,readonly) NSString * symlinkTargetPath; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * decorations; 
-(NSDictionary *)userInfo;
-(NSString *)itemIdentifier;
-(NSString *)displayName;
-(NSString *)typeIdentifier;
-(NSArray *)decorations;
-(NSDate *)contentModificationDate;
-(NSData *)versionIdentifier;
-(UTType *)contentType;
-(NSString *)filename;
-(NSDate *)creationDate;
-(char)fp_isLastModifiedByCurrentUser;
-(char)isContainer;
-(char)isContainerPristine;
-(NSNumber *)documentSize;
-(char)isDownloaded;
-(char)isUploaded;
-(char)isUploading;
-(char)isDownloading;
-(char)isMostRecentVersionDownloaded;
-(NSError *)downloadingError;
-(NSError *)uploadingError;
-(id)isDownloadRequested;
-(char)isShared;
-(char)isSharedByCurrentUser;
-(NSPersonNameComponents *)ownerNameComponents;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(NSDate *)lastUsedDate;
-(NSNumber *)childItemCount;
-(char)isTopLevelSharedItem;
-(NSString *)sharingPermissions;
-(unsigned long long)capabilities;
-(NSString *)containerDisplayName;
-(NSString *)parentItemIdentifier;
-(NSData *)tagData;
-(NSNumber *)favoriteRank;
-(char)isTrashed;
-(NSFileProviderItemVersion *)itemVersion;
-(NSNumber *)hasUnresolvedConflicts;
-(NSString *)fp_spotlightDomainIdentifier;
-(NSString *)fp_domainIdentifier;
-(id)providerID;
-(id)initWithOriginalDocumentItem:(id)arg1 alternateContentsURL:(id)arg2 ;
-(id)cloudContainerIdentifier;
@end
