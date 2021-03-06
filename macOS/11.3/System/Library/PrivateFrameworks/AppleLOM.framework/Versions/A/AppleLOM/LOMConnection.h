/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_connection, OS_dispatch_queue, LOMDeviceControllerRequestDelegate;
@class NSObject, NSData;

@interface LOMConnection : NSObject {

	NSObject*<OS_nw_connection> _connection;
	char _isActive;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _cancellationHandler;
	id<LOMDeviceControllerRequestDelegate> _delegate;
	NSData* _request;
	NSData* _response;
	/*^block*/id _responseAckTimeout;

}
-(void)cancel;
-(void)activate;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)handleRequest;
-(void)requestCompletion;
-(void)sendResponse;
-(void)receiveRequest;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
@end

