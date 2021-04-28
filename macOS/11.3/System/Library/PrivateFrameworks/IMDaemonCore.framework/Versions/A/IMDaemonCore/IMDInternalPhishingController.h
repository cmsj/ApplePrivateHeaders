/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IMRemoteURLConnection, NSArray, NSObject;

@interface IMDInternalPhishingController : NSObject {

	IMRemoteURLConnection* _remoteURLConnection;
	NSArray* _blacklist;
	double _lastBlacklistSync;
	NSObject*<OS_dispatch_queue> _blacklistDiskQueue;

}

@property (retain) IMRemoteURLConnection * remoteURLConnection;                  //@synthesize remoteURLConnection=_remoteURLConnection - In the implementation block
@property (retain) NSArray * blacklist;                                          //@synthesize blacklist=_blacklist - In the implementation block
@property (assign) double lastBlacklistSync;                                     //@synthesize lastBlacklistSync=_lastBlacklistSync - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> blacklistDiskQueue;              //@synthesize blacklistDiskQueue=_blacklistDiskQueue - In the implementation block
+(id)sharedInstance;
+(char)_isAppleInternal;
+(char)_hasAppleConnect;
+(char)allowPhishingCheck;
-(void)dealloc;
-(id)init;
-(id)_endpoint;
-(NSArray *)blacklist;
-(IMRemoteURLConnection *)remoteURLConnection;
-(void)setBlacklist:(NSArray *)arg1 ;
-(void)setBlacklistDiskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadBlacklistFromDiskAsync:(char)arg1 ;
-(void)fetchBlacklistFromNetworkWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)blacklistDiskQueue;
-(double)lastBlacklistSync;
-(void)setLastBlacklistSync:(double)arg1 ;
-(void)setRemoteURLConnection:(IMRemoteURLConnection *)arg1 ;
-(id)_apiKey;
-(void)_persistBlacklist:(char)arg1 ;
-(char)blacklistMessage:(id)arg1 ;
@end
