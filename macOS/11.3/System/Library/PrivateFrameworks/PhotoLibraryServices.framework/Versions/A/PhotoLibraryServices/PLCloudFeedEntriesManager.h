/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary;

@interface PLCloudFeedEntriesManager : NSObject {

	PLPhotoLibrary* _library;

}

@property (nonatomic,readonly) PLPhotoLibrary * library;              //@synthesize library=_library - In the implementation block
-(PLPhotoLibrary *)library;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)rebuildAllEntries:(/*^block*/id)arg1 ;
-(void)processAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_firstEntryOnOrBeforeDate:(id)arg1 ;
-(id)_firstEntryAfterDate:(id)arg1 ;
-(id)_firstEntryOnOrAfterDate:(id)arg1 ;
-(id)_firstEntryRelativeToDate:(id)arg1 ascending:(char)arg2 includeSameDate:(char)arg3 ;
-(void)_getEarliestDate:(id*)arg1 latestDate:(id*)arg2 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg3 ;
-(id)_invitationReceivedEntryForSharedAlbum:(id)arg1 ;
-(id)_subscriptionEntryForSharedAlbum:(id)arg1 ;
-(id)_albumCreatedEntryForSharedAlbum:(id)arg1 ;
-(id)_singleEntryOfType:(long long)arg1 forSharedAlbum:(id)arg2 ;
-(id)_invitationAcceptedEntryForInvitationRecord:(id)arg1 ;
-(id)_invitationDeclinedEntryForInvitationRecord:(id)arg1 ;
-(id)_singleEntryOfType:(long long)arg1 forInvitationRecord:(id)arg2 ;
-(void)_noteDidUpdateSharedAlbum:(id)arg1 ;
-(void)_noteContentDeletionAffectingInvitationEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg1 ;
-(void)_noteDidReceiveSharedAsset:(id)arg1 ;
-(void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)arg1 ;
-(void)_noteDidReceiveSharedComments:(id)arg1 ;
-(void)_noteDidReceiveSharedComment:(id)arg1 ;
-(void)_noteDidUpdateInvitationRecord:(id)arg1 ;
-(void)_noteContentDeletionAffectingAssetsEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingCommentsEntry:(id)arg1 ;
-(id)_dateForAsset:(id)arg1 ;
-(id)_subscriptionDateForSharedAlbum:(id)arg1 ;
-(char)_wasAssetPublishedBeforeSubscription:(id)arg1 ;
-(char)_wasCommentPublishedBeforeSubscription:(id)arg1 ;
-(char)_commentIsBatchCaption:(id)arg1 ;
-(char)_shouldIgnoreAsset:(id)arg1 ;
-(char)_shouldIgnoreComment:(id)arg1 ;
-(char)_shouldIgnoreInvitationRecord:(id)arg1 ;
-(char)_shouldMergeAsset:(id)arg1 intoEntry:(id)arg2 ;
-(/*^block*/id)_assetSortingComparator;
-(/*^block*/id)_commentSortingComparator;
-(void)_addAsset:(id)arg1 toEntry:(id)arg2 ;
-(void)_mergeOlderEntry:(id)arg1 intoMoreRecentEntry:(id)arg2 ;
-(void)_splitEntriesAtDate:(id)arg1 ;
-(void)_mergeEntriesAroundDate:(id)arg1 ;
-(char)_tryMergingComment:(id)arg1 withEntry:(id)arg2 ;
@end

