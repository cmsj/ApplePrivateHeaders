/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface SUCoreActivityOptions : NSObject {

	NSDate* _runDate;
	NSNumber* _batteryLevelGreaterThan;
	NSNumber* _batteryLevelLessThan;
	int _plugInState;
	int _screenOnState;
	int _networkState;
	int _wifiState;
	int _waking;
	int _phoneCallState;
	int _carplayState;
	int _mediaPlayingState;

}

@property (nonatomic,retain) NSDate * runDate;                                //@synthesize runDate=_runDate - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevelGreaterThan;              //@synthesize batteryLevelGreaterThan=_batteryLevelGreaterThan - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevelLessThan;                 //@synthesize batteryLevelLessThan=_batteryLevelLessThan - In the implementation block
@property (assign,nonatomic) int plugInState;                                 //@synthesize plugInState=_plugInState - In the implementation block
@property (assign,nonatomic) int screenOnState;                               //@synthesize screenOnState=_screenOnState - In the implementation block
@property (assign,nonatomic) int networkState;                                //@synthesize networkState=_networkState - In the implementation block
@property (assign,nonatomic) int wifiState;                                   //@synthesize wifiState=_wifiState - In the implementation block
@property (assign,nonatomic) int waking;                                      //@synthesize waking=_waking - In the implementation block
@property (assign,nonatomic) int phoneCallState;                              //@synthesize phoneCallState=_phoneCallState - In the implementation block
@property (assign,nonatomic) int carplayState;                                //@synthesize carplayState=_carplayState - In the implementation block
@property (assign,nonatomic) int mediaPlayingState;                           //@synthesize mediaPlayingState=_mediaPlayingState - In the implementation block
-(NSDate *)runDate;
-(void)setRunDate:(NSDate *)arg1 ;
-(NSNumber *)batteryLevelGreaterThan;
-(void)setBatteryLevelGreaterThan:(NSNumber *)arg1 ;
-(NSNumber *)batteryLevelLessThan;
-(void)setBatteryLevelLessThan:(NSNumber *)arg1 ;
-(int)plugInState;
-(void)setPlugInState:(int)arg1 ;
-(int)screenOnState;
-(void)setScreenOnState:(int)arg1 ;
-(int)waking;
-(void)setWaking:(int)arg1 ;
-(int)carplayState;
-(void)setCarplayState:(int)arg1 ;
-(id)init;
-(int)wifiState;
-(int)phoneCallState;
-(int)mediaPlayingState;
-(void)setPhoneCallState:(int)arg1 ;
-(void)setMediaPlayingState:(int)arg1 ;
-(int)networkState;
-(void)setNetworkState:(int)arg1 ;
-(void)setWifiState:(int)arg1 ;
@end

