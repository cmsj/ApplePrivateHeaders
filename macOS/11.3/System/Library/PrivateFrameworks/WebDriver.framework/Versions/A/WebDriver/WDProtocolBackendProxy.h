/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WDSessionHost;
@class WDProtocolModel, NSMutableDictionary;

@interface WDProtocolBackendProxy : NSObject {

	id<WDSessionHost> _sessionHost;
	WDProtocolModel* _model;
	long long _nextSequenceId;
	NSMutableDictionary* _pendingResponses;
	/*^block*/id _protocolEventHandler;

}

@property (nonatomic,copy) id protocolEventHandler;              //@synthesize protocolEventHandler=_protocolEventHandler - In the implementation block
-(id)initWithProtocolAtURL:(id)arg1 ;
-(id)initWithSessionHost:(id)arg1 protocolWithURL:(id)arg2 ;
-(void)dispatchMessageToFrontend:(id)arg1 ;
-(void)sendCommand:(id)arg1 parameters:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)cancelPendingResponsesWithErrorMessage:(id)arg1 ;
-(id)protocolEventHandler;
-(void)setProtocolEventHandler:(id)arg1 ;
@end

