/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class NSString, ICNote;

@interface ICBaseAttachment : ICCloudSyncingObject

@property (nonatomic,copy) NSString * typeUTI; 
@property (nonatomic,retain) ICNote * note; 
+(id)attachmentWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newAttachmentWithIdentifier:(id)arg1 note:(id)arg2 ;
+(void)purgeAttachment:(id)arg1 ;
+(id)predicateForVisibleObjects;
+(void)deleteAttachment:(id)arg1 ;
+(void)undeleteAttachment:(id)arg1 ;
+(id)predicateForUnsupportedAttachmentsInContext:(id)arg1 ;
+(id)attachmentWithIdentifier:(id)arg1 includeDeleted:(char)arg2 context:(id)arg3 ;
+(id)predicateForVisibleAttachmentsInContext:(id)arg1 ;
+(id)predicateForVisibleAttachmentsIncludingTrash:(char)arg1 inContext:(id)arg2 ;
+(id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)arg1 ;
@end

