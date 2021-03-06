/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DTXConnectionServices.framework/Versions/A/DTXConnectionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, DTXResourceTracker, NSArray;

@interface DTXTransport : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSObject*<OS_dispatch_queue> _handlerGuard;
	DTXResourceTracker* _tracker;
	/*^block*/id _dataReceivedHandler;
	unsigned _status;
	BOOL _resumed;

}

@property (nonatomic,readonly) DTXResourceTracker * resourceTracker;              //@synthesize tracker=_tracker - In the implementation block
@property (assign) unsigned status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) id dataReceivedHandler; 
@property (readonly) NSArray * localAddresses; 
+(id)schemes;
+(char)recognizesURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)status;
-(void)disconnect;
-(void)setStatus:(unsigned)arg1 ;
-(id)initWithRemoteAddress:(id)arg1 ;
-(void)received:(const char*)arg1 ofLength:(unsigned long long)arg2 destructor:(/*^block*/id)arg3 ;
-(unsigned)supportedDirections;
-(unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
-(id)initWithXPCRepresentation:(id)arg1 ;
-(id)serializedXPCRepresentation;
-(NSArray *)localAddresses;
-(id)dataReceivedHandler;
-(void)setDataReceivedHandler:(id)arg1 ;
-(unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2 withRateLimiter:(id)arg3 ;
-(void)serializedDisconnect:(/*^block*/id)arg1 ;
-(id)permittedBlockCompressionTypes;
-(DTXResourceTracker *)resourceTracker;
@end

