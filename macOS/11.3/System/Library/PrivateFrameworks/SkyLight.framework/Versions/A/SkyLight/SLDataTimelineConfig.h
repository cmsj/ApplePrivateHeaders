/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableSet, NSMutableDictionary;

@interface SLDataTimelineConfig : NSObject {

	NSString* _name;
	/*^block*/id _updateBlock;
	NSObject*<OS_dispatch_queue> _updateBlockQueue;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableSet* _infoOptions;
	NSMutableDictionary* _reportIntervals;
	NSMutableDictionary* _sampleIntervals;

}

@property (nonatomic,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                            //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) NSObject*<OS_dispatch_queue> updateBlockQueue;                 //@synthesize updateBlockQueue=_updateBlockQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * infoOptions;                                //@synthesize infoOptions=_infoOptions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * reportIntervals;                     //@synthesize reportIntervals=_reportIntervals - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sampleIntervals;                     //@synthesize sampleIntervals=_sampleIntervals - In the implementation block
+(id)configWithName:(id)arg1 andUpdateBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(id)updateBlock;
-(NSObject*<OS_dispatch_queue>)updateBlockQueue;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(NSMutableSet *)infoOptions;
-(NSMutableDictionary *)reportIntervals;
-(NSMutableDictionary *)sampleIntervals;
-(id)initWithName:(id)arg1 andUpdateBlock:(/*^block*/id)arg2 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)addInfoOption:(id)arg1 ;
-(void)requestReportIntervalValue:(unsigned short)arg1 forKey:(id)arg2 ;
-(void)requestSampleIntervalValue:(unsigned short)arg1 forKey:(id)arg2 ;
-(id)createCancellableMachRecvSourceWithQueue:(id)arg1 cancelAction:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)createNoSenderRecvPairWithQueue:(id)arg1 errorHandler:(/*^block*/id)arg2 eventHandler:(/*^block*/id)arg3 ;
-(id)createXPCObject;
-(void)establishConnectionWithResultBlock:(/*^block*/id)arg1 ;
-(void)setUpdateBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

