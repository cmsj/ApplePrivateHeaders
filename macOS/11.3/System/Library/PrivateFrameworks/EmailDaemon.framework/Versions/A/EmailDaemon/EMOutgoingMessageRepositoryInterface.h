/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EMOutgoingMessageRepositoryInterface <NSObject>
@required
-(void)cancelObservation:(id)arg1;
-(void)saveDraftMessage:(id)arg1 mailboxID:(id)arg2 previousDraftObjectID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deleteDraftsInMailboxID:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
-(void)deliverMessage:(id)arg1 usingMailDrop:(char)arg2 completion:(/*^block*/id)arg3;
-(void)outboxContainsMessageFromAccountObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)suspendDeliveryQueue;
-(void)resumeDeliveryQueue;
-(void)processAllQueuedMessages;
-(void)isProcessingWithCompletion:(/*^block*/id)arg1;
-(void)numberOfPendingMessagesWithCompletion:(/*^block*/id)arg1;
-(void)startObservingPendingMessageChangesWithChangeObserver:(id)arg1 observationIdentifier:(id)arg2;

@end

