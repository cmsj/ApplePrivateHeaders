/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Versions/A/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {

	NSString* _messageID;
	NSString* _attachmentName;

}

@property (nonatomic,copy) NSString * messageID;                   //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * attachmentName;              //@synthesize attachmentName=_attachmentName - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)messageID;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(void)setMessageID:(NSString *)arg1 ;
-(id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2 ;
@end
