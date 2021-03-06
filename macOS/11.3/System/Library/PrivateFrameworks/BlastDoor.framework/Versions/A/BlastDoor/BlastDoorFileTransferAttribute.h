/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BlastDoorFileTransferAttribute_ImageInfo, BlastDoorFileTransferAttributeAttachmentSubtypeWrapper, NSString, NSNumber;

@interface BlastDoorFileTransferAttribute : NSObject {

	 attachments;
	 imageInfo;
	 attachmentSubtype;
	 name;
	 datasize;
	 utiType;
	 mimeType;
	 legacyAnimoji;

}

@property (copy,nonatomic) NSArray * attachments; 
@property (retain,nonatomic) BlastDoorFileTransferAttribute_ImageInfo * imageInfo; 
@property (retain,nonatomic) BlastDoorFileTransferAttributeAttachmentSubtypeWrapper * attachmentSubtype; 
@property (copy,nonatomic) NSString * name; 
@property (assign,nonatomic) unsigned long long datasize; 
@property (copy,nonatomic) NSString * utiType; 
@property (copy,nonatomic) NSString * mimeType; 
@property (retain,nonatomic) NSNumber * legacyAnimoji; 
@property (readonly,nonatomic) NSString * description; 
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)utiType;
-(BlastDoorFileTransferAttribute_ImageInfo *)imageInfo;
-(void)setImageInfo:(BlastDoorFileTransferAttribute_ImageInfo *)arg1 ;
-(void)setUtiType:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(BlastDoorFileTransferAttributeAttachmentSubtypeWrapper *)attachmentSubtype;
-(unsigned long long)datasize;
-(void)setAttachmentSubtype:(BlastDoorFileTransferAttributeAttachmentSubtypeWrapper *)arg1 ;
-(void)setDatasize:(unsigned long long)arg1 ;
-(NSNumber *)legacyAnimoji;
-(void)setLegacyAnimoji:(NSNumber *)arg1 ;
@end

