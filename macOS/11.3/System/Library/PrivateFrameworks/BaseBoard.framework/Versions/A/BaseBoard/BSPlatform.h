/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSPlatform : NSObject

@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,copy,readonly) NSString * productHardwareModel; 
@property (nonatomic,copy,readonly) NSString * productHardwareModelName; 
@property (nonatomic,copy,readonly) NSString * productClass; 
@property (nonatomic,copy,readonly) NSString * localizedProductName; 
@property (nonatomic,copy,readonly) NSString * operatingSystemName; 
@property (nonatomic,copy,readonly) NSString * uniqueDeviceIdentifier; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) long long homeButtonType; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productBuildVersion; 
@property (getter=isInternalInstall,nonatomic,readonly) char internalInstall; 
@property (getter=isDeveloperInstall,nonatomic,readonly) char developerInstall; 
@property (getter=isCarrierInstall,nonatomic,readonly) char carrierInstall; 
@property (getter=isMultiCore,nonatomic,readonly) char multiCore; 
@property (nonatomic,readonly) char hasGasGauge; 
@property (nonatomic,readonly) char hasOrbCapability; 
+(id)sharedInstance;
-(NSString *)operatingSystemName;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(NSString *)productType;
-(NSString *)productHardwareModel;
-(NSString *)productHardwareModelName;
-(NSString *)productClass;
-(int)deviceClass;
-(long long)homeButtonType;
-(NSString *)localizedProductName;
-(NSString *)uniqueDeviceIdentifier;
-(char)isInternalInstall;
-(char)isDeveloperInstall;
-(char)isCarrierInstall;
-(char)isMultiCore;
-(char)hasGasGauge;
-(char)hasOrbCapability;
@end

