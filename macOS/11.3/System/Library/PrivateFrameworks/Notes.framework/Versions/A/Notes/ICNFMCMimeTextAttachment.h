/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class ICNFMCMimePart, NSFileWrapper;

@interface ICNFMCMimeTextAttachment : NSTextAttachment {

	ICNFMCMimePart* _mimePart;

}

@property (nonatomic,retain) ICNFMCMimePart * mimePart;                                 //@synthesize mimePart=_mimePart - In the implementation block
@property (nonatomic,readonly) NSFileWrapper * fileWrapperForcingDownload; 
+(id)attachmentWithInternalAppleAttachmentData:(id)arg1 mimeBody:(id)arg2 ;
-(id)initWithFileWrapper:(id)arg1 ;
-(id)initWithMimePart:(id)arg1 ;
-(ICNFMCMimePart *)mimePart;
-(void)setMimePart:(ICNFMCMimePart *)arg1 ;
-(id)initWithMimePart:(id)arg1 andFileWrapper:(id)arg2 ;
-(id)fileWrapperForcingDownloadEvenIfExternalBody:(char)arg1 ;
-(char)ic_isPlaceholder;
-(unsigned long long)ic_approximateSize;
-(NSFileWrapper *)fileWrapperForcingDownload;
@end
