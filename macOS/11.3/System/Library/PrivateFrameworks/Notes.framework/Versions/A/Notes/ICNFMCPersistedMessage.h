/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, NSSet;


@protocol ICNFMCPersistedMessage <NSObject>
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSDate * dateSent; 
@property (nonatomic,retain) NSDate * dateReceived; 
@property (nonatomic,copy) NSString * from; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * messageID; 
@property (nonatomic,copy) NSSet * references; 
@property (assign,nonatomic) char unread; 
@property (nonatomic,copy) NSString * bodyHTML; 
@property (nonatomic,copy) NSSet * attachments; 
@optional
-(id)newReference;

@required
-(NSSet *)attachments;
-(void)setAttachments:(id)arg1;
-(void)setSubject:(id)arg1;
-(NSString *)subject;
-(NSDate *)dateCreated;
-(void)setFrom:(id)arg1;
-(NSString *)from;
-(NSString *)messageID;
-(char)unread;
-(void)setUnread:(char)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(void)setDateCreated:(id)arg1;
-(void)setMessageID:(id)arg1;
-(NSSet *)references;
-(void)setReferences:(id)arg1;
-(NSDate *)dateReceived;
-(void)setDateReceived:(id)arg1;
-(NSString *)bodyHTML;
-(id)createAttachmentWithName:(id)arg1;
-(id)attachmentWithContentID:(id)arg1;
-(void)addPersistedAttachement:(id)arg1;
-(void)setBodyHTML:(id)arg1;

@end
