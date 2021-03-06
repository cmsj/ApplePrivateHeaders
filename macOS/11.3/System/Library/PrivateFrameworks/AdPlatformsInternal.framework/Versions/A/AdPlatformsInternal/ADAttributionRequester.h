/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/Versions/A/AdPlatformsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADAttribution_XPC.h>

@class NSXPCConnection, NSNumber, NSString;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC> {

	NSXPCConnection* _connection;
	NSNumber* _transactionToken;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSNumber * transactionToken;               //@synthesize transactionToken=_transactionToken - In the implementation block
-(NSXPCConnection *)connection;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)transactionToken;
-(void)setTransactionToken:(NSNumber *)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setStocksAdEnabled:(char)arg1 ;
-(void)setServerToTest:(long long)arg1 ;
-(id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3 ;
-(int)appRunState;
-(void)overrideAttributionData:(id)arg1 ;
-(void)requestAttributionDetails:(/*^block*/id)arg1 ;
-(void)beginAttributionRequest:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)productionClient;
-(void)makeAttributionRequestWithObject:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(char)_isAppTrackingAuthorized;
-(void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)_clearDownloadDataFromRequest:(id)arg1 ;
-(void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2 ;
@end

