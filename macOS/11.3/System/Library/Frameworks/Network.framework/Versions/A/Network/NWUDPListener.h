/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_listener, NWUDPListenerDelegate;
@class NWEndpoint, NSError, NSObject, NWParameters;

@interface NWUDPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_nw_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	id<NWUDPListenerDelegate> _delegate;

}

@property (retain) NSObject*<OS_nw_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (__weak) id<NWUDPListenerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NWEndpoint * localEndpoint;                    //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(NSObject*<OS_nw_listener>)internalListener;
-(void)setInternalListener:(NSObject*<OS_nw_listener>)arg1 ;
-(id<NWUDPListenerDelegate>)delegate;
-(void)setDelegate:(id<NWUDPListenerDelegate>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(void)handleError:(id)arg1 ;
-(NWEndpoint *)localEndpoint;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(void)handleConnection:(id)arg1 ;
@end

