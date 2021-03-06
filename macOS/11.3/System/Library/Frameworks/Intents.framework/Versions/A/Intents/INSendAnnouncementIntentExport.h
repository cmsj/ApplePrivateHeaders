/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INAnnouncement, NSArray, NSNumber;


@protocol INSendAnnouncementIntentExport <NSObject,JSExport>
@property (copy) INAnnouncement * announcement; 
@property (copy) NSArray * recipients; 
@property (copy) NSNumber * isReply; 
@required
-(id)init;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(NSNumber *)isReply;
-(INAnnouncement *)announcement;
-(void)setAnnouncement:(id)arg1;
-(void)setIsReply:(id)arg1;

@end

