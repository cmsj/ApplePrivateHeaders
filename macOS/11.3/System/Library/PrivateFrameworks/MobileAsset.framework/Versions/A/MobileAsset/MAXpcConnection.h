/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/Versions/A/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface MAXpcConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSString* _connectionId;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * connectionId;                          //@synthesize connectionId=_connectionId - In the implementation block
-(void)dealloc;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)connectionId;
-(BOOL)notValid;
@end
