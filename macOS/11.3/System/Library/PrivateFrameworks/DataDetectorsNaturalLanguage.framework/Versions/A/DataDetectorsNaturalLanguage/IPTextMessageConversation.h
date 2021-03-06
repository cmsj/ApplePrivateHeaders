/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/Versions/A/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IPCircularBufferArray, NSArray, NSMutableDictionary;

@interface IPTextMessageConversation : NSObject {

	IPCircularBufferArray* _lastMessages;
	NSArray* _allMessages;
	NSMutableDictionary* _messageByMessageIdentifierDictionary;
	NSMutableDictionary* _eventsByMessageIdentifierDictionary;

}

@property (retain) NSMutableDictionary * messageByMessageIdentifierDictionary;              //@synthesize messageByMessageIdentifierDictionary=_messageByMessageIdentifierDictionary - In the implementation block
@property (retain) NSMutableDictionary * eventsByMessageIdentifierDictionary;               //@synthesize eventsByMessageIdentifierDictionary=_eventsByMessageIdentifierDictionary - In the implementation block
@property (nonatomic,copy) NSArray * allMessages;                                           //@synthesize allMessages=_allMessages - In the implementation block
+(id)collapsedMessagesFromMessages:(id)arg1 ;
+(id)collapseMessages:(id)arg1 ;
-(id)init;
-(void)reset;
-(void)addMessage:(id)arg1 ;
-(NSMutableDictionary *)messageByMessageIdentifierDictionary;
-(NSMutableDictionary *)eventsByMessageIdentifierDictionary;
-(void)_scanEventsInLastMessageOnly:(char)arg1 synchronously:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)allMessages;
-(id)messageForIdentifier:(id)arg1 ;
-(void)scanEventsInLastMessageOnly:(char)arg1 synchronously:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)eventsInPreviouslyScannedMessageWithIdentifier:(id)arg1 ;
-(void)setAllMessages:(NSArray *)arg1 ;
-(void)setMessageByMessageIdentifierDictionary:(NSMutableDictionary *)arg1 ;
-(void)setEventsByMessageIdentifierDictionary:(NSMutableDictionary *)arg1 ;
@end

