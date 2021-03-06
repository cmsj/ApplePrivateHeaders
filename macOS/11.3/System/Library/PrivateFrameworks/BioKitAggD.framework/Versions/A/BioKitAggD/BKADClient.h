/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BioKitAggD.framework/Versions/A/BioKitAggD
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BioKitAggD/BioKitAggD-Structs.h>
@class NSXPCConnection;

@interface BKADClient : NSObject {

	NSXPCConnection* _bkadConnection;

}

@property (retain) NSXPCConnection * bkadConnection;              //@synthesize bkadConnection=_bkadConnection - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)bkadClientWithScalarKey:(CFStringRef)arg1 ;
-(void)bkadClientSetValueForScalarKey:(CFStringRef)arg1 withValue:(long long)arg2 ;
-(void)bkadClientAddValueForScalarKey:(CFStringRef)arg1 withValue:(long long)arg2 ;
-(void)bkadClientClearDistributionKey:(CFStringRef)arg1 ;
-(void)bkadClientSetValueForDistributionKey:(CFStringRef)arg1 withValue:(double)arg2 ;
-(void)bkadClientPushValueForDistributionKey:(CFStringRef)arg1 withValue:(double)arg2 ;
-(void)connectToBKADDaemon;
-(id)bkadGetAggDReport;
-(NSXPCConnection *)bkadConnection;
-(void)setBkadConnection:(NSXPCConnection *)arg1 ;
@end

