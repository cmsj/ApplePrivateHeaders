/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/Versions/A/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol MDIndexer;
@class NSMutableDictionary;

@interface CSIndexAgent : CSXPCConnection {

	id<MDIndexer> _indexer;
	NSMutableDictionary* _indexConnections;

}

@property (nonatomic,retain) NSMutableDictionary * indexConnections;              //@synthesize indexConnections=_indexConnections - In the implementation block
@property (nonatomic,retain) id<MDIndexer> indexer;                               //@synthesize indexer=_indexer - In the implementation block
+(id)indexAgent:(char)arg1 serviceName:(id)arg2 ;
+(id)indexDelegateAgent:(id)arg1 ;
+(id)indexAgent;
-(char)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(char)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(char)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(char)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(id<MDIndexer>)indexer;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
-(void)setIndexConnections:(NSMutableDictionary *)arg1 ;
-(id)indexConnection:(id)arg1 ;
-(NSMutableDictionary *)indexConnections;
@end

