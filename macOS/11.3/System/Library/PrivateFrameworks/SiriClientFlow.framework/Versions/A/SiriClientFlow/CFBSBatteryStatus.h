/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/Versions/A/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface CFBSBatteryStatus : SADomainObject

@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSNumber * batteryPercent; 
@property (nonatomic,copy) NSNumber * batteryCharging; 
@property (nonatomic,copy) NSNumber * lowBattery; 
+(id)object;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSNumber *)batteryPercent;
-(NSNumber *)lowBattery;
-(void)setLowBattery:(NSNumber *)arg1 ;
-(void)setBatteryPercent:(NSNumber *)arg1 ;
-(NSNumber *)batteryCharging;
-(void)setBatteryCharging:(NSNumber *)arg1 ;
@end
