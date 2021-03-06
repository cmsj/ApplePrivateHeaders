/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber, NSDictionary, NSDate;

@interface SOTranscriptArchive : NSObject {

	NSString* _accountName;
	NSArray* _participants;
	NSNumber* _chatStyle;
	NSString* _roomName;
	NSDictionary* _metaData;
	NSArray* _placeholders;

}

@property (readonly) NSArray * placeholders;                   //@synthesize placeholders=_placeholders - In the implementation block
@property (copy,readonly) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (copy,readonly) NSArray * messages; 
@property (copy,readonly) NSArray * participants;              //@synthesize participants=_participants - In the implementation block
@property (copy,readonly) NSNumber * chatStyle;                //@synthesize chatStyle=_chatStyle - In the implementation block
@property (copy,readonly) NSString * roomName;                 //@synthesize roomName=_roomName - In the implementation block
@property (readonly) NSDictionary * metaData;                  //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSDate * dateCreated; 
@property (readonly) NSDate * dateModified; 
+(void)setupArchivedMessageEncoding;
-(id)initWithData:(id)arg1 ;
-(NSArray *)participants;
-(NSString *)accountName;
-(NSDictionary *)metaData;
-(NSDate *)dateCreated;
-(NSDate *)dateModified;
-(NSArray *)messages;
-(NSString *)roomName;
-(NSArray *)placeholders;
-(id)archive;
-(NSNumber *)chatStyle;
-(id)_createInfoArrayForArchiving;
-(id)initWithAccountName:(id)arg1 chatStyle:(id)arg2 roomName:(id)arg3 dateCreated:(id)arg4 dateModified:(id)arg5 messageList:(id)arg6 serviceName:(id)arg7 lastMessageID:(unsigned long long)arg8 loginHandle:(id)arg9 participants:(id)arg10 ;
@end

