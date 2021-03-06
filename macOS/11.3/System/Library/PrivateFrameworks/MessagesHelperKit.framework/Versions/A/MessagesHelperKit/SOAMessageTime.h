/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesHelperKit.framework/Versions/A/MessagesHelperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SOAMessageTime : NSObject {

	NSDate* _time;
	long long _messageID;

}

@property (nonatomic,retain) NSDate * time;                    //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long messageID;              //@synthesize messageID=_messageID - In the implementation block
+(id)messageTimeForMessage:(id)arg1 ;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(long long)messageID;
-(void)setMessageID:(long long)arg1 ;
@end

