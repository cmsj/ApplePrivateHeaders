/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding> {

	int _clientPid;
	NSObject*<OS_xpc_object> _endpoint;
	unsigned long long _customURLHandlerObjectID;
	unsigned long long _authHandlerObjectID;
	unsigned long long _contentKeySessionHandlerObjectID;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;                                //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) int clientPid;                                                    //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,readonly) unsigned long long customURLHandlerObjectID;                      //@synthesize customURLHandlerObjectID=_customURLHandlerObjectID - In the implementation block
@property (nonatomic,readonly) unsigned long long authHandlerObjectID;                           //@synthesize authHandlerObjectID=_authHandlerObjectID - In the implementation block
@property (nonatomic,readonly) unsigned long long contentKeySessionHandlerObjectID;              //@synthesize contentKeySessionHandlerObjectID=_contentKeySessionHandlerObjectID - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(int)clientPid;
-(id)initWithEndpoint:(id)arg1 clientPid:(int)arg2 customURLHandlerObjectID:(unsigned long long)arg3 authHandlerObjectID:(unsigned long long)arg4 contentKeySessionHandlerObjectID:(unsigned long long)arg5 ;
-(unsigned long long)customURLHandlerObjectID;
-(unsigned long long)authHandlerObjectID;
-(unsigned long long)contentKeySessionHandlerObjectID;
@end

