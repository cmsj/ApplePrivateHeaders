/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HDAInterface.framework/Versions/A/HDAInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDAUserClient : NSObject {

	unsigned _connection;
	unsigned long long _deviceType;

}

@property (assign,nonatomic) unsigned long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (readonly) unsigned connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName; 
+(unsigned)serviceWithEngineClass:(id)arg1 controlSubtype:(unsigned)arg2 andControlValue:(unsigned)arg3 ;
-(void)dealloc;
-(id)description;
-(unsigned)connection;
-(unsigned long long)deviceType;
-(NSString *)deviceName;
-(id)initWithService:(unsigned)arg1 ;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(id)initWithService:(unsigned)arg1 andClientType:(unsigned)arg2 ;
@end

