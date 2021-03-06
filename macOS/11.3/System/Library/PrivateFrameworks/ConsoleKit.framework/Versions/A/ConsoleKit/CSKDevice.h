/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, OSActivityStream, OSLogDevice;

@interface CSKDevice : NSObject {

	char _supportsLogsPersistenceReading;
	char __isHostDevice;
	NSString* _UDID;
	NSString* _name;
	NSString* _build;
	NSString* _version;
	long long _state;
	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _trustConnectionSerialQueue;
	OSActivityStream* __defaultStream;
	OSLogDevice* __deviceRef;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> trustConnectionSerialQueue;              //@synthesize trustConnectionSerialQueue=_trustConnectionSerialQueue - In the implementation block
@property (nonatomic,retain) OSActivityStream * _defaultStream;                                      //@synthesize _defaultStream=__defaultStream - In the implementation block
@property (nonatomic,retain) OSLogDevice * _deviceRef;                                               //@synthesize _deviceRef=__deviceRef - In the implementation block
@property (assign,nonatomic) char _isHostDevice;                                                     //@synthesize _isHostDevice=__isHostDevice - In the implementation block
@property (nonatomic,readonly) NSString * UDID;                                                      //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * build;                                                       //@synthesize build=_build - In the implementation block
@property (nonatomic,retain) NSString * version;                                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long state;                                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char supportsLogsPersistenceReading;                                    //@synthesize supportsLogsPersistenceReading=_supportsLogsPersistenceReading - In the implementation block
+(id)hostDevice;
+(id)iconForDeviceType:(unsigned long long)arg1 ;
+(id)_hostMachineModel;
+(unsigned long long)_deviceTypeForProductModel:(id)arg1 ;
+(id)_activityStreamForDevice:(id)arg1 ;
+(id)_persistenceStreamForDevice:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)name;
-(void)setType:(unsigned long long)arg1 ;
-(long long)state;
-(unsigned long long)type;
-(NSString *)version;
-(void)setState:(long long)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(char)isEqualToDevice:(id)arg1 ;
-(NSString *)build;
-(void)setBuild:(NSString *)arg1 ;
-(OSLogDevice *)_deviceRef;
-(NSString *)UDID;
-(void)set_deviceRef:(OSLogDevice *)arg1 ;
-(void)set_isHostDevice:(char)arg1 ;
-(id)initWithUDID:(id)arg1 name:(id)arg2 ;
-(void)setSupportsLogsPersistenceReading:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)trustConnectionSerialQueue;
-(OSActivityStream *)_defaultStream;
-(char)_isHostDevice;
-(id)typeIcon;
-(char)establishTrustWithFailingHandler:(/*^block*/id)arg1 ;
-(char)supportsLogsPersistenceReading;
-(void)set_defaultStream:(OSActivityStream *)arg1 ;
@end

