/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICDocCamPDFGenerator : NSObject
+(id)fileManager;
+(id)fileQueue;
+(id)rootPDFFolderPath;
+(id)rootPDFFolderPathForPWAttachments;
+(id)folderPathForAttachmentIdentifier:(id)arg1 passwordProtected:(char)arg2 ;
+(id)folderPathForAttachment:(id)arg1 ;
+(id)versionFolderPathForAttachment:(id)arg1 ;
+(id)versionPDFPathForAttachment:(id)arg1 ;
+(void)deletePDFFolderIfExistsForAttachment:(id)arg1 ;
+(id)pdfURLForAttachment:(id)arg1 ;
+(id)blockingGeneratePDFURLForAttachment:(id)arg1 withProgress:(id)arg2 error:(id*)arg3 ;
+(id)syncGeneratorQueue;
+(void)deletePDFForAttachmentIfExists:(id)arg1 ;
+(void)performPDFGenerationWithGenerator:(id)arg1 galleryModel:(id)arg2 progress:(id)arg3 ;
+(void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)arg1 ;
+(void)deleteAllDocCamPDFs;
+(void)deleteAllDocCamPasswordProtectedPDFs;
+(void)generatePDFsIfNecessaryForGalleryAttachments:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)blockingGeneratePDFDataForAttachment:(id)arg1 withProgress:(id)arg2 queue:(id)arg3 error:(id*)arg4 ;
@end
