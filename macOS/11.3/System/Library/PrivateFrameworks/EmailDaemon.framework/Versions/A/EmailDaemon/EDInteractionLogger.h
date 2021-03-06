/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>
#import <libobjc.A.dylib/EDMessageDeliveryHookResponder.h>
#import <libobjc.A.dylib/EMInteractionLoggerInterface.h>

@protocol OS_dispatch_queue, EDInteractionEventLog;
@class NSMutableDictionary, NSObject, EDMessagePersistence, EDMailboxPersistence, NSString;

@interface EDInteractionLogger : NSObject <EDMessageChangeHookResponder, EDMessageDeliveryHookResponder, EMInteractionLoggerInterface> {

	NSMutableDictionary* _viewedMessages;
	NSMutableDictionary* _messageListMessages;
	NSObject*<OS_dispatch_queue> _stateTrackingQueue;
	id<EDInteractionEventLog> _eventLog;
	EDMessagePersistence* _messagePersistence;
	EDMailboxPersistence* _mailboxPersistence;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSRange _messageListVisibleRows;

}

@property (nonatomic,retain) NSMutableDictionary * _viewedMessages;                         //@synthesize viewedMessages=_viewedMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _messageListMessages;                    //@synthesize messageListMessages=_messageListMessages - In the implementation block
@property (assign,nonatomic) NSRange _messageListVisibleRows;                               //@synthesize messageListVisibleRows=_messageListVisibleRows - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _stateTrackingQueue;              //@synthesize stateTrackingQueue=_stateTrackingQueue - In the implementation block
@property (nonatomic,retain) EDMessagePersistence * messagePersistence;                     //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,retain) EDMailboxPersistence * mailboxPersistence;                     //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (nonatomic,retain) id<EDInteractionEventLog> _eventLog;                           //@synthesize eventLog=_eventLog - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                  //@synthesize processingQueue=_processingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)applicationWillSuspend;
-(EDMessagePersistence *)messagePersistence;
-(EDMailboxPersistence *)mailboxPersistence;
-(id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 eventLog:(id)arg3 ;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2 ;
-(void)persistenceWillTransferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(char)arg4 ;
-(void)_conversationFlagsChanged:(id)arg1 ;
-(id<EDInteractionEventLog>)_eventLog;
-(void)_composeStartedForMessage:(id)arg1 eventName:(id)arg2 ;
-(void)deliveredMessage:(id)arg1 account:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_stateTrackingQueue;
-(NSMutableDictionary *)_viewedMessages;
-(id)_stateForMessage:(id)arg1 extra:(id)arg2 container:(id)arg3 ;
-(NSRange)_messageListVisibleRows;
-(id)_range:(NSRange)arg1 minusRange:(NSRange)arg2 ;
-(void)set_messageListVisibleRows:(NSRange)arg1 ;
-(NSMutableDictionary *)_messageListMessages;
-(void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2 ;
-(void)_logMessageListDisplayStartedMessage:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5 ;
-(void)movedMessages:(id)arg1 toMailboxType:(long long)arg2 ;
-(void)messageListDisplayEndedForAllMessages;
-(void)_viewingEndedForAllMessages;
-(void)logEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4 ;
-(void)logEvent:(id)arg1 date:(id)arg2 data:(id)arg3 ;
-(void)composeReplyStartedForMessage:(id)arg1 ;
-(void)composeFowardStartedForMessage:(id)arg1 ;
-(void)composedMessageSent:(id)arg1 account:(id)arg2 ;
-(void)scrolledToEndOfMessage:(id)arg1 ;
-(void)viewingStartedForMessage:(id)arg1 ;
-(void)viewingEndedForMessage:(id)arg1 ;
-(void)messageListDisplayVisibleRowsChanged:(NSRange)arg1 ;
-(void)messageListDisplayStartedForMessage:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4 ;
-(void)messageListDisplayEndedForMessage:(id)arg1 cellStyle:(id)arg2 ;
-(void)movedMessages:(id)arg1 toMailbox:(id)arg2 ;
-(void)archivedMessages:(id)arg1 ;
-(void)deletedMessages:(id)arg1 ;
-(void)copiedMessages:(id)arg1 toMailbox:(id)arg2 ;
-(void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2 ;
-(void)applicationLaunched;
-(void)applicationWillResume;
-(void)waitForPendingStateChanges;
-(void)set_viewedMessages:(NSMutableDictionary *)arg1 ;
-(void)set_messageListMessages:(NSMutableDictionary *)arg1 ;
-(void)set_stateTrackingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_eventLog:(id<EDInteractionEventLog>)arg1 ;
-(void)setMessagePersistence:(EDMessagePersistence *)arg1 ;
-(void)setMailboxPersistence:(EDMailboxPersistence *)arg1 ;
@end

