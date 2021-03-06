/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/Versions/A/AdPlatformsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableDictionary, NSNumber, NSString;

@interface ADAttributionService : ADSingleton <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSMutableDictionary* _clients;
	NSNumber* _transactionID;

}

@property (retain) NSXPCListener * listener;                             //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clients;              //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSNumber * transactionID;                   //@synthesize transactionID=_transactionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSNumber *)transactionID;
-(NSMutableDictionary *)clients;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(void)setClients:(NSMutableDictionary *)arg1 ;
-(void)removeClientForToken:(id)arg1 ;
@end

