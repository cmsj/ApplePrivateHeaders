/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPBTLEControlOutputStreamDelegate, OS_dispatch_queue;
@class HAPBTLETransactionIdentifier, NSData, NSObject, NSOperationQueue;

@interface HAPBTLEControlOutputStream : HMFObject {

	unsigned char _type;
	char _complete;
	char _open;
	id<HAPBTLEControlOutputStreamDelegate> _delegate;
	HAPBTLETransactionIdentifier* _transactionIdentifier;
	NSData* _payload;
	unsigned long long _mtuLength;
	double _timeoutInterval;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _controlPayloadWrittenLength;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,copy) id completionHandler; 
@property (assign,getter=isComplete,nonatomic) char complete;                                     //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isOpen,nonatomic) char open;                                             //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) unsigned long long controlPayloadWrittenLength;                      //@synthesize controlPayloadWrittenLength=_controlPayloadWrittenLength - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (__weak) id<HAPBTLEControlOutputStreamDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                                             //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned long long mtuLength;                                      //@synthesize mtuLength=_mtuLength - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                            //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)shortDescription;
-(id)description;
-(id)debugDescription;
-(id)init;
-(id<HAPBTLEControlOutputStreamDelegate>)delegate;
-(char)open;
-(void)close;
-(void)setDelegate:(id<HAPBTLEControlOutputStreamDelegate>)arg1 ;
-(unsigned char)type;
-(char)isComplete;
-(NSOperationQueue *)operationQueue;
-(char)isOpen;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)shortDescription;
-(void)setComplete:(char)arg1 ;
-(void)_complete;
-(NSData *)payload;
-(void)setOpen:(char)arg1 ;
-(HAPBTLETransactionIdentifier *)transactionIdentifier;
-(double)timeoutInterval;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_closeWithError:(id)arg1 ;
-(id)descriptionWithPointer:(char)arg1 ;
-(unsigned long long)mtuLength;
-(id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned long long)arg4 timeoutInterval:(double)arg5 ;
-(unsigned long long)remainingControlPayloadLength;
-(unsigned long long)controlPayloadWrittenLength;
-(void)sendNextPayloadFragment;
-(void)_sendNextPayloadFragmentWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_nextPacketWithMaximumLength:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setControlPayloadWrittenLength:(unsigned long long)arg1 ;
@end

