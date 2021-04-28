/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICBaseAttachment.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSString, ICNote, ICAttachment, NSAttributedString;

@interface ICInlineAttachment : ICBaseAttachment <ICCloudObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * altText; 
@property (nonatomic,readonly) NSString * nonNilAltText; 
@property (nonatomic,retain) ICNote * note; 
@property (nonatomic,retain) ICAttachment * parentAttachment; 
@property (nonatomic,readonly) NSAttributedString * searchableTextContentInNote; 
@property (nonatomic,readonly) short attachmentType; 
+(id)noteFromAttachmentRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(void)purgeAttachment:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)allInlineAttachmentsInContext:(id)arg1 ;
+(id)newAttachmentWithIdentifier:(id)arg1 altText:(id)arg2 typeUTI:(id)arg3 note:(id)arg4 ;
+(id)predicateForUnsupportedAttachmentsInContext:(id)arg1 ;
-(id)recordType;
-(short)attachmentType;
-(id)recordZoneName;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(id)parentAttachmentFromRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)newlyCreatedRecord;
-(char)isInICloudAccount;
-(void)deleteFromLocalDatabase;
-(char)hasAllMandatoryFields;
-(char)needsToBePushedToCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 ;
-(char)supportsDeletionByTTL;
-(long long)intrinsicNotesVersion;
-(NSString *)nonNilAltText;
-(id)parentCloudObject;
-(NSAttributedString *)searchableTextContentInNote;
-(NSRange)displayTextRangeForSearchRange:(NSRange)arg1 inSearchableString:(id)arg2 ;
-(void)updateMarkedForDeletionStateInlineAttachmentIsInUse:(char)arg1 ;
-(void)loadFromArchive:(const Attachment*)arg1 dataPersister:(id)arg2 withIdentifierMap:(id)arg3 ;
-(void)saveToArchive:(Attachment*)arg1 dataPersister:(id)arg2 ;
@end
