/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary;

@interface AFCoreAnalyticsCrossDeviceEvent : NSObject <NSCopying> {

	NSString* _nearbyDevicesLoggingID;
	NSMutableDictionary* _nearbyDevicesPayloads;

}

@property (nonatomic,copy,readonly) NSString * nearbyDevicesLoggingID;                 //@synthesize nearbyDevicesLoggingID=_nearbyDevicesLoggingID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nearbyDevicesPayloads;              //@synthesize nearbyDevicesPayloads=_nearbyDevicesPayloads - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithNearbyDevicesLoggingID:(id)arg1 ;
-(void)addNearbyDeviceContexts:(id)arg1 proximityInfo:(id)arg2 ;
-(NSString *)nearbyDevicesLoggingID;
-(void)setNearbyDevicesPayloads:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)nearbyDevicesPayloads;
-(void)_setTargetedDeviceContextIdentifier:(id)arg1 withAction:(id)arg2 payload:(id)arg3 ;
-(void)addCoreAnalyticsDeviceTargetedWithContextIdentifier:(id)arg1 commandResultDescription:(id)arg2 ;
@end

