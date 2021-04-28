/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputSettings.h>

@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) NSDictionary * cleanApertureDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelAspectRatioDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelTransferProperties; 
@property (nonatomic,readonly) NSDictionary * videoScalingProperties; 
@property (nonatomic,readonly) char dimensionsAreBoundingBox; 
@property (nonatomic,readonly) SCD_Struct_CM3 minimumFrameDuration; 
@property (nonatomic,readonly) NSString * frameRateConversionAlgorithm; 
@property (nonatomic,readonly) char allowWideColor; 
@property (nonatomic,readonly) NSDictionary * videoSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultVideoOutputSettings;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 ;
+(id)_validValuesForScalingMode;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1 ;
-(int)width;
-(int)height;
-(NSDictionary *)videoScalingProperties;
-(void)colorPropertiesConsideringFormatDescriptions:(id)arg1 colorPrimaries:(id*)arg2 transferFunction:(id*)arg3 ycbcrMatrix:(id*)arg4 ;
-(id)compatibleMediaTypes;
-(NSString *)frameRateConversionAlgorithm;
-(NSDictionary *)pixelTransferProperties;
-(SCD_Struct_CM3)minimumFrameDuration;
-(NSDictionary *)videoSettingsDictionary;
-(char)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(char)allowWideColor;
-(id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSDictionary *)pixelAspectRatioDictionary;
-(NSDictionary *)cleanApertureDictionary;
-(char)dimensionsAreBoundingBox;
@end
