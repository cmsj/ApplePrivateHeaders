/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Versions/A/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface XPCRequest : NSObject {

	/*^block*/id _handler;
	unsigned long long _sequence;
	NSObject*<OS_xpc_object> _message;
	NSObject*<OS_xpc_object> _reply;

}

@property (nonatomic,readonly) unsigned long long sequence;                   //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> reply;                //@synthesize reply=_reply - In the implementation block
-(NSObject*<OS_xpc_object>)message;
-(unsigned long long)sequence;
-(NSObject*<OS_xpc_object>)reply;
-(void)sendReply;
-(id)initWithMessage:(id)arg1 sequence:(unsigned long long)arg2 connection:(id)arg3 ;
@end

