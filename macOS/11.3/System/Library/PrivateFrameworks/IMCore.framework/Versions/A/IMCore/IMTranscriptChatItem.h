/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMChatItem.h>
#import <IMCore/IMChatTranscriptItem.h>

@class NSAttributedString, NSDate, IMServiceImpl, IMHandle, NSString;

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem> {

	NSString* _guid;
	unsigned char _contiguousType;
	unsigned char _attachmentContiguousType;
	unsigned _contiguousLoaded : 1;

}

@property (setter=_setGUID:,nonatomic,copy) NSString * guid;                          //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned char contiguousType; 
@property (nonatomic,readonly) unsigned char attachmentContiguousType; 
@property (getter=isContiguous,nonatomic,readonly) char contiguous; 
@property (getter=isFromMe,nonatomic,readonly) char fromMe; 
@property (nonatomic,readonly) char wantsTail; 
@property (nonatomic,copy,readonly) NSAttributedString * transcriptText; 
@property (nonatomic,readonly) NSDate * transcriptDate; 
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) IMHandle * handle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(IMHandle *)handle;
-(IMServiceImpl *)service;
-(char)isContiguous;
-(NSString *)guid;
-(char)isFromMe;
-(unsigned char)contiguousType;
-(char)wantsTail;
-(NSAttributedString *)transcriptText;
-(NSDate *)transcriptDate;
-(char)isContiguousWithChatItem:(id)arg1 ;
-(char)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(unsigned char)attachmentContiguousType;
-(char)_isContiguousLoaded;
-(void)_setContiguousLoaded:(char)arg1 ;
-(void)_setContiguousType:(unsigned char)arg1 ;
-(void)_setAttachmentContiguousType:(unsigned char)arg1 ;
-(void)_setGUID:(id)arg1 ;
@end

