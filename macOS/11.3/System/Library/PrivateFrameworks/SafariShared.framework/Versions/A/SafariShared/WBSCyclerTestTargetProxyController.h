/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface WBSCyclerTestTargetProxyController : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,copy) id disconnectionHandler; 
@property (nonatomic,readonly) id<WBSCyclerTestTarget> testTargetProxy; 
-(void)dealloc;
-(id)init;
-(id)initWithEndpoint:(id)arg1 ;
-(void)setDisconnectionHandler:(id)arg1 ;
-(id)disconnectionHandler;
-(id<WBSCyclerTestTarget>)testTargetProxy;
@end

