/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcherHost.h>

@class NSXPCConnection, NSMutableDictionary, TKClientToken, NSXPCListenerEndpoint, NSArray;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost> {

	int _notifyToken;
	NSXPCConnection* _connection;
	NSMutableDictionary* _tokenInfos;
	NSMutableDictionary* _removalHandlers;
	/*^block*/id _insertionHandler;
	TKClientToken* _client;

}

@property (nonatomic,readonly) TKClientToken * client;              //@synthesize client=_client - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) NSArray * tokenIDs; 
-(id)initWithInsertionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCListenerEndpoint *)endpoint;
-(TKClientToken *)client;
-(id)initWithEndpoint:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)startWatching;
-(NSArray *)tokenIDs;
-(id)getReaderAndDriverNameFor:(id)arg1 ;
-(void)insertedToken:(id)arg1 ;
-(void)removedToken:(id)arg1 ;
-(void)addRemovalHandler:(/*^block*/id)arg1 forTokenID:(id)arg2 ;
-(void)setInsertionHandler:(/*^block*/id)arg1 ;
@end

