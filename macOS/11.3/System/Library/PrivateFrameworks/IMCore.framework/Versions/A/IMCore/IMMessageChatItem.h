/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>
@class NSDate, IMHandle;


@protocol IMMessageChatItem <NSObject>
@property (nonatomic,readonly) char isFromMe; 
@property (nonatomic,readonly) char failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@required
-(NSDate *)time;
-(IMHandle *)sender;
-(char)failed;
-(char)isFromMe;

@end


@class NSDate, IMHandle, IMMessage, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) char isFromMe; 
@property (nonatomic,readonly) char failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMMessage *)message;
-(NSDate *)time;
-(IMHandle *)sender;
-(char)failed;
-(char)isFromMe;
-(char)canReply;
@end

