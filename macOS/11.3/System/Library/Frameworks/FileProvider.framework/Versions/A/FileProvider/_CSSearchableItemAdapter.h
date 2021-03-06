/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderItem_Private.h>

@class CSSearchableItem, CSSearchableItemAttributeSet, NSURL, NSNumber, NSString, NSSet, NSData, NSPersonNameComponents, UTType, NSDate, NSDictionary, NSError, NSFileProviderItemVersion;

@interface _CSSearchableItemAdapter : NSObject <NSFileProviderItem_Private> {

	CSSearchableItem* _item;

}

@property (nonatomic,readonly) CSSearchableItemAttributeSet * attributeSet; 
@property (nonatomic,readonly) CSSearchableItem * item;                                                              //@synthesize item=_item - In the implementation block
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
+(id)fp_queryFetchAttributes;
-(NSDictionary *)userInfo;
-(NSString *)itemIdentifier;
-(NSString *)displayName;
-(NSString *)typeIdentifier;
-(NSDate *)contentModificationDate;
-(NSData *)versionIdentifier;
-(NSString *)providerIdentifier;
-(CSSearchableItem *)item;
-(id)tags;
-(UTType *)contentType;
-(NSString *)filename;
-(NSDate *)creationDate;
-(char)isPinned;
-(id)initWithSearchableItem:(id)arg1 ;
-(char)fp_isLastModifiedByCurrentUser;
-(NSNumber *)documentSize;
-(char)isRecursivelyDownloaded;
-(char)isDownloaded;
-(char)isUploaded;
-(char)isUploading;
-(char)isDownloading;
-(char)isMostRecentVersionDownloaded;
-(NSError *)downloadingError;
-(NSError *)uploadingError;
-(char)isShared;
-(char)isSharedByCurrentUser;
-(NSPersonNameComponents *)ownerNameComponents;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(CSSearchableItemAttributeSet *)attributeSet;
-(NSDate *)lastUsedDate;
-(NSNumber *)childItemCount;
-(char)isTopLevelSharedItem;
-(unsigned long long)capabilities;
-(NSString *)parentItemIdentifier;
-(NSData *)tagData;
-(NSNumber *)favoriteRank;
-(char)isTrashed;
-(NSFileProviderItemVersion *)itemVersion;
-(NSString *)fp_spotlightDomainIdentifier;
-(NSString *)fp_domainIdentifier;
-(NSString *)fp_parentDomainIdentifier;
-(char)fp_isUbiquitous;
-(char)fp_isContainer;
-(char)fp_isContainerPristine;
-(NSString *)fp_cloudContainerIdentifier;
-(char)fp_isAddedByCurrentUser;
-(NSPersonNameComponents *)fp_addedByNameComponents;
-(NSString *)preformattedOwnerName;
-(NSString *)preformattedMostRecentEditorName;
-(id)formerIdentifier;
-(id)fp_appContainerBundleIdentifier;
-(char)isInPinnedFolder;
-(id)sharingCurrentUserRole;
-(id)containerSubitemCount;
-(id)sharingCurrentUserPermissions;
@end

