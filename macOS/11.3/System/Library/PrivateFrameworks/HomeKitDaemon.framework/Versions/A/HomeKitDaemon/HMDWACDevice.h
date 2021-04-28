/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol HMDWACDevice
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * ssid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) char isConfigured; 
@property (nonatomic,readonly) char supportsAirPlay2; 
@property (nonatomic,readonly) id underlyingDevice; 
@required
-(NSString *)name;
-(NSUUID *)identifier;
-(NSString *)deviceID;
-(NSString *)ssid;
-(char)isConfigured;
-(id)underlyingDevice;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(char)supportsAirPlay2;

@end
