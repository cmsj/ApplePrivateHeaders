/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSUtil : NSObject
+(void)postNotification:(char*)arg1 ;
+(id)stringFromTimeInterval:(double)arg1 ;
+(char)isAppleInternalInstall;
+(id)hashData:(id)arg1 lastHash:(id)arg2 ;
+(id)mediumStringFromDate:(id)arg1 ;
+(id)percentNumberFormatter;
+(id)mediumDateFormatter;
+(id)hashData:(id)arg1 lastHashData:(id)arg2 ;
+(char)isSystemIntegrityEnabled;
+(id)percentageStringFromNumber:(id)arg1 ;
+(id)dataFromPath:(id)arg1 makeBackwardCompatible:(char)arg2 error:(id*)arg3 ;
+(id)pathFromData:(id)arg1 ;
+(id)dataFromError:(id)arg1 ;
+(id)errorFromData:(id)arg1 ;
+(id)hashArrayOfStrings:(id)arg1 lastHash:(id)arg2 ;
+(void)postNotificationAsync:(char*)arg1 ;
+(id)userDefaultsConfigurationDictionaryAndReturnError:(id*)arg1 ;
+(void)fetchInfoForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
