/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSArray, NSString;

@interface WFDevice : NSObject {

	NSArray* _capabilities;
	long long _chipID;

}

@property (nonatomic,readonly) CGRect screenBounds; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,readonly) double screenCornerRadius; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long platform; 
@property (nonatomic,readonly) NSArray * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSString * localizedWiFiDisplayName; 
@property (nonatomic,readonly) NSString * marketingName; 
@property (nonatomic,readonly) long long chipID;                                 //@synthesize chipID=_chipID - In the implementation block
+(id)currentDevice;
-(id)description;
-(NSString *)name;
-(long long)platform;
-(NSString *)systemVersion;
-(NSArray *)capabilities;
-(NSString *)model;
-(NSString *)systemName;
-(double)screenScale;
-(char)hasCapability:(id)arg1 ;
-(long long)idiom;
-(long long)chipID;
-(NSString *)marketingName;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(CGRect)screenBounds;
-(NSString *)localizedModel;
-(double)screenCornerRadius;
-(NSString *)localizedWiFiDisplayName;
@end

