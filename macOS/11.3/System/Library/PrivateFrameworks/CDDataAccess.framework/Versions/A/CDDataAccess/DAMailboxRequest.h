/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Versions/A/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMailboxRequest : NSObject {

	int _requestType;
	int _bodyFormat;
	NSString* _messageID;

}

@property (assign,nonatomic) int requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) int bodyFormat;                  //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (nonatomic,copy) NSString * messageID;              //@synthesize messageID=_messageID - In the implementation block
-(id)init;
-(int)requestType;
-(void)setRequestType:(int)arg1 ;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(int)bodyFormat;
-(void)setBodyFormat:(int)arg1 ;
@end
