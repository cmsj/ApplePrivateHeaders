/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/Versions/A/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject {

	IMChat* _chat;
	NSArray* _resolvedPersons;

}

@property (nonatomic,retain) IMChat * chat;                        //@synthesize chat=_chat - In the implementation block
@property (nonatomic,copy) NSArray * resolvedPersons;              //@synthesize resolvedPersons=_resolvedPersons - In the implementation block
-(id)description;
-(void)setChat:(IMChat *)arg1 ;
-(IMChat *)chat;
-(NSArray *)resolvedPersons;
-(id)initWithChat:(id)arg1 resolvedPersons:(id)arg2 ;
-(void)setResolvedPersons:(NSArray *)arg1 ;
@end
