/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@protocol VCControlChannelTransactionDelegate;
@class NSData, NSNumber;

@interface VCControlChannelTransaction : VCObject {

	NSData* _data;
	unsigned _sessionID;
	NSNumber* _participantID;
	opaque_pthread_mutex_t _transactionLock;
	opaque_pthread_cond_t _transactionDone;
	char _isConfirmed;
	char _isFlushed;
	id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;

}
+(char)sendUnreliableMessage:(id)arg1 sessionID:(unsigned)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4 ;
-(void)dealloc;
-(id)initWithTransportSessionID:(unsigned)arg1 transactionData:(id)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4 ;
-(void)flushTransactions;
-(void)confirmedTransactionByParticipantID:(id)arg1 sessionID:(unsigned)arg2 ;
-(char)sendReliableMessage:(id)arg1 sessionID:(unsigned)arg2 participantID:(id)arg3 timeout:(id)arg4 ;
@end

