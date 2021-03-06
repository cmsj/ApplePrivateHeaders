/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKClientTokenProtocol.h>

@class TKTokenConnection, NSMutableDictionary, NSString;

@interface TKTokenSessionConnection : NSObject <TKClientTokenProtocol> {

	long long _sessionIDCounter;
	TKTokenConnection* _tokenConnection;
	NSMutableDictionary* _sessions;
	NSMutableDictionary* _initialKeepAlives;

}

@property (nonatomic,readonly) TKTokenConnection * tokenConnection;                  //@synthesize tokenConnection=_tokenConnection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sessions;                       //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * initialKeepAlives;              //@synthesize initialKeepAlives=_initialKeepAlives - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startSessionWithLAContext:(id)arg1 parameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 getAdvertisedItemsWithReply:(/*^block*/id)arg2 ;
-(void)session:(id)arg1 evaluateAccessControl:(id)arg2 forOperation:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)session:(id)arg1 getAttributesOfObjectID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 data:(id)arg4 algorithms:(id)arg5 parameters:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)session:(id)arg1 createObjectWithAttributes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 deleteObjectWithObjectID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)endSession:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)initialKeepAlives;
-(void)withSessionID:(id)arg1 invoke:(/*^block*/id)arg2 ;
-(id)initWithTokenConnection:(id)arg1 ;
-(NSMutableDictionary *)sessions;
-(TKTokenConnection *)tokenConnection;
@end

