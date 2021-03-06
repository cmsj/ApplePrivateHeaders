/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface FMNSXPCConnectionCache : NSObject {

	NSObject*<OS_dispatch_queue> _modsSerialQueue;
	NSMutableDictionary* _connectionsByServiceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modsSerialQueue;                //@synthesize modsSerialQueue=_modsSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionsByServiceName;              //@synthesize connectionsByServiceName=_connectionsByServiceName - In the implementation block
+(id)sharedCache;
-(NSObject*<OS_dispatch_queue>)modsSerialQueue;
-(NSMutableDictionary *)connectionsByServiceName;
-(void)setModsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionsByServiceName:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)resumeConnectionWithConfiguration:(id)arg1 ;
@end

