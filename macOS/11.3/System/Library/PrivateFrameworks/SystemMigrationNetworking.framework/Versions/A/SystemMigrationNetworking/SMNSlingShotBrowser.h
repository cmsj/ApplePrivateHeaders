/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSNetServiceBrowser, NSObject, NSMutableArray, NSString;

@interface SMNSlingShotBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	/*^block*/id _knownSystemBlock;
	/*^block*/id _newSystemAppearedBlock;
	/*^block*/id _systemDisappearedBlock;
	NSNetServiceBrowser* _browser;
	NSObject*<OS_dispatch_queue> _serviceMapQueue;
	NSMutableArray* _resolvingServices;

}

@property (copy) id knownSystemBlock;                                         //@synthesize knownSystemBlock=_knownSystemBlock - In the implementation block
@property (copy) id newSystemAppearedBlock;                                   //@synthesize newSystemAppearedBlock=_newSystemAppearedBlock - In the implementation block
@property (copy) id systemDisappearedBlock;                                   //@synthesize systemDisappearedBlock=_systemDisappearedBlock - In the implementation block
@property (retain) NSNetServiceBrowser * browser;                             //@synthesize browser=_browser - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serviceMapQueue;              //@synthesize serviceMapQueue=_serviceMapQueue - In the implementation block
@property (retain) NSMutableArray * resolvingServices;                        //@synthesize resolvingServices=_resolvingServices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeSystemDescriptionFromSlingShotRock:(id)arg1 ;
+(void)addStringFromTXTDictionary:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)setBrowser:(NSNetServiceBrowser *)arg1 ;
-(NSNetServiceBrowser *)browser;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(id)initWithKnownSystemBlock:(/*^block*/id)arg1 newSystemAppearedBlock:(/*^block*/id)arg2 andSystemDisappearedBlock:(/*^block*/id)arg3 ;
-(void)setResolvingServices:(NSMutableArray *)arg1 ;
-(void)setServiceMapQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serviceMapQueue;
-(NSMutableArray *)resolvingServices;
-(void)setKnownSystemBlock:(id)arg1 ;
-(void)setNewSystemAppearedBlock:(id)arg1 ;
-(void)setSystemDisappearedBlock:(id)arg1 ;
-(id)knownSystemBlock;
-(id)iconForUTI:(id)arg1 ;
-(id)newSystemAppearedBlock;
-(id)systemDisappearedBlock;
@end

