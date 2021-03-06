/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATRemoteTransport, CATMessage;

@interface _CATRemoteTransportSendMessageOperation : CATOperation {

	CATRemoteTransport* _transport;
	CATMessage* _message;

}

@property (assign,nonatomic,__weak) CATRemoteTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) CATMessage * message;                               //@synthesize message=_message - In the implementation block
-(CATMessage *)message;
-(void)setMessage:(CATMessage *)arg1 ;
-(void)main;
-(char)isAsynchronous;
-(CATRemoteTransport *)transport;
-(void)setTransport:(CATRemoteTransport *)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didSendData;
-(void)didEncodeData:(id)arg1 ;
@end

