/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDNWAccumulator;

@interface AWDNWDeviceReport : PBCodable <NSCopying> {

	unsigned _batteryAbsoluteCapacity;
	AWDNWAccumulator* _batteryAccumulator;
	unsigned _batteryCurrentCapacity;
	unsigned _batteryDesignCapacity;
	unsigned _batteryMaximumCapacity;
	unsigned _batteryPercentage;
	unsigned _batteryTimeRemaining;
	unsigned _batteryVoltage;
	int _cellularMode;
	int _motionState;
	int _thermalPressure;
	char _batteryAtCriticalLevel;
	char _batteryAtWarnLevel;
	char _batteryExternalPowerIsConnected;
	char _batteryFullyCharged;
	char _batteryIsCharging;
	char _devicePluggedIn;
	char _deviceScreenOn;
	SCD_Struct_AW30 _has;

}

@property (assign,nonatomic) char hasBatteryPercentage; 
@property (assign,nonatomic) unsigned batteryPercentage;                           //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (assign,nonatomic) char hasBatteryCurrentCapacity; 
@property (assign,nonatomic) unsigned batteryCurrentCapacity;                      //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign,nonatomic) char hasBatteryMaximumCapacity; 
@property (assign,nonatomic) unsigned batteryMaximumCapacity;                      //@synthesize batteryMaximumCapacity=_batteryMaximumCapacity - In the implementation block
@property (assign,nonatomic) char hasBatteryDesignCapacity; 
@property (assign,nonatomic) unsigned batteryDesignCapacity;                       //@synthesize batteryDesignCapacity=_batteryDesignCapacity - In the implementation block
@property (assign,nonatomic) char hasBatteryAbsoluteCapacity; 
@property (assign,nonatomic) unsigned batteryAbsoluteCapacity;                     //@synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity - In the implementation block
@property (assign,nonatomic) char hasBatteryVoltage; 
@property (assign,nonatomic) unsigned batteryVoltage;                              //@synthesize batteryVoltage=_batteryVoltage - In the implementation block
@property (assign,nonatomic) char hasBatteryTimeRemaining; 
@property (assign,nonatomic) unsigned batteryTimeRemaining;                        //@synthesize batteryTimeRemaining=_batteryTimeRemaining - In the implementation block
@property (assign,nonatomic) char hasBatteryExternalPowerIsConnected; 
@property (assign,nonatomic) char batteryExternalPowerIsConnected;                 //@synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected - In the implementation block
@property (assign,nonatomic) char hasBatteryIsCharging; 
@property (assign,nonatomic) char batteryIsCharging;                               //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
@property (assign,nonatomic) char hasBatteryFullyCharged; 
@property (assign,nonatomic) char batteryFullyCharged;                             //@synthesize batteryFullyCharged=_batteryFullyCharged - In the implementation block
@property (assign,nonatomic) char hasBatteryAtWarnLevel; 
@property (assign,nonatomic) char batteryAtWarnLevel;                              //@synthesize batteryAtWarnLevel=_batteryAtWarnLevel - In the implementation block
@property (assign,nonatomic) char hasBatteryAtCriticalLevel; 
@property (assign,nonatomic) char batteryAtCriticalLevel;                          //@synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel - In the implementation block
@property (assign,nonatomic) char hasDevicePluggedIn; 
@property (assign,nonatomic) char devicePluggedIn;                                 //@synthesize devicePluggedIn=_devicePluggedIn - In the implementation block
@property (assign,nonatomic) char hasDeviceScreenOn; 
@property (assign,nonatomic) char deviceScreenOn;                                  //@synthesize deviceScreenOn=_deviceScreenOn - In the implementation block
@property (assign,nonatomic) char hasMotionState; 
@property (assign,nonatomic) int motionState;                                      //@synthesize motionState=_motionState - In the implementation block
@property (assign,nonatomic) char hasThermalPressure; 
@property (assign,nonatomic) int thermalPressure;                                  //@synthesize thermalPressure=_thermalPressure - In the implementation block
@property (assign,nonatomic) char hasCellularMode; 
@property (assign,nonatomic) int cellularMode;                                     //@synthesize cellularMode=_cellularMode - In the implementation block
@property (nonatomic,readonly) char hasBatteryAccumulator; 
@property (nonatomic,retain) AWDNWAccumulator * batteryAccumulator;                //@synthesize batteryAccumulator=_batteryAccumulator - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMotionState:(int)arg1 ;
-(int)motionState;
-(void)setBatteryAccumulator:(AWDNWAccumulator *)arg1 ;
-(void)setBatteryPercentage:(unsigned)arg1 ;
-(void)setHasBatteryPercentage:(char)arg1 ;
-(char)hasBatteryPercentage;
-(void)setBatteryCurrentCapacity:(unsigned)arg1 ;
-(void)setHasBatteryCurrentCapacity:(char)arg1 ;
-(char)hasBatteryCurrentCapacity;
-(void)setBatteryMaximumCapacity:(unsigned)arg1 ;
-(void)setHasBatteryMaximumCapacity:(char)arg1 ;
-(char)hasBatteryMaximumCapacity;
-(void)setBatteryDesignCapacity:(unsigned)arg1 ;
-(void)setHasBatteryDesignCapacity:(char)arg1 ;
-(char)hasBatteryDesignCapacity;
-(void)setBatteryAbsoluteCapacity:(unsigned)arg1 ;
-(void)setHasBatteryAbsoluteCapacity:(char)arg1 ;
-(char)hasBatteryAbsoluteCapacity;
-(void)setBatteryVoltage:(unsigned)arg1 ;
-(void)setHasBatteryVoltage:(char)arg1 ;
-(char)hasBatteryVoltage;
-(void)setBatteryTimeRemaining:(unsigned)arg1 ;
-(void)setHasBatteryTimeRemaining:(char)arg1 ;
-(char)hasBatteryTimeRemaining;
-(void)setBatteryExternalPowerIsConnected:(char)arg1 ;
-(void)setHasBatteryExternalPowerIsConnected:(char)arg1 ;
-(char)hasBatteryExternalPowerIsConnected;
-(void)setBatteryIsCharging:(char)arg1 ;
-(void)setHasBatteryIsCharging:(char)arg1 ;
-(char)hasBatteryIsCharging;
-(void)setBatteryFullyCharged:(char)arg1 ;
-(void)setHasBatteryFullyCharged:(char)arg1 ;
-(char)hasBatteryFullyCharged;
-(void)setBatteryAtWarnLevel:(char)arg1 ;
-(void)setHasBatteryAtWarnLevel:(char)arg1 ;
-(char)hasBatteryAtWarnLevel;
-(void)setBatteryAtCriticalLevel:(char)arg1 ;
-(void)setHasBatteryAtCriticalLevel:(char)arg1 ;
-(char)hasBatteryAtCriticalLevel;
-(void)setDevicePluggedIn:(char)arg1 ;
-(void)setHasDevicePluggedIn:(char)arg1 ;
-(char)hasDevicePluggedIn;
-(void)setDeviceScreenOn:(char)arg1 ;
-(void)setHasDeviceScreenOn:(char)arg1 ;
-(char)hasDeviceScreenOn;
-(void)setHasMotionState:(char)arg1 ;
-(char)hasMotionState;
-(id)motionStateAsString:(int)arg1 ;
-(int)StringAsMotionState:(id)arg1 ;
-(int)thermalPressure;
-(void)setThermalPressure:(int)arg1 ;
-(void)setHasThermalPressure:(char)arg1 ;
-(char)hasThermalPressure;
-(id)thermalPressureAsString:(int)arg1 ;
-(int)StringAsThermalPressure:(id)arg1 ;
-(int)cellularMode;
-(void)setCellularMode:(int)arg1 ;
-(void)setHasCellularMode:(char)arg1 ;
-(char)hasCellularMode;
-(id)cellularModeAsString:(int)arg1 ;
-(int)StringAsCellularMode:(id)arg1 ;
-(char)hasBatteryAccumulator;
-(unsigned)batteryPercentage;
-(unsigned)batteryCurrentCapacity;
-(unsigned)batteryMaximumCapacity;
-(unsigned)batteryDesignCapacity;
-(unsigned)batteryAbsoluteCapacity;
-(unsigned)batteryVoltage;
-(unsigned)batteryTimeRemaining;
-(char)batteryExternalPowerIsConnected;
-(char)batteryIsCharging;
-(char)batteryFullyCharged;
-(char)batteryAtWarnLevel;
-(char)batteryAtCriticalLevel;
-(char)devicePluggedIn;
-(char)deviceScreenOn;
-(AWDNWAccumulator *)batteryAccumulator;
@end
