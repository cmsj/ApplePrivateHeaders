/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CWFXPCEventProtocolPrivate.h>
#import <libobjc.A.dylib/CWFXPCEventProtocolPublic.h>

@protocol OS_dispatch_queue, CWFXPCEventProxyDelegate;
@class NSObject, NSMutableDictionary;

@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocolPrivate, CWFXPCEventProtocolPublic> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventAckMap;
	id<CWFXPCEventProxyDelegate> _delegate;

}

@property (retain) id<CWFXPCEventProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)__acknowledgeEventWithUUID:(id)arg1 ;
-(void)receivedXPCEvent:(id)arg1 ;
-(void)receivedAcknowledgedXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(id<CWFXPCEventProxyDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCEventProxyDelegate>)arg1 ;
@end

