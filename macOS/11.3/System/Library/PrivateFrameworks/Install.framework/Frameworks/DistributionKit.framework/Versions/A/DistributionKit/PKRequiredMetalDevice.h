/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class NSString, NSArray, NSNumber;

@interface PKRequiredMetalDevice : NSObject {

	id<MTLDevice> _currentDevice;

}

@property (retain) id<MTLDevice> currentDevice;                          //@synthesize currentDevice=_currentDevice - In the implementation block
@property (retain,readonly) NSString * deviceName; 
@property (retain,readonly) NSArray * supportedFeatureSets; 
@property (readonly) char isLowPowerDevice; 
@property (readonly) char isHeadless; 
@property (readonly) char isRemovable; 
@property (readonly) NSNumber * argumentBuffersTier; 
@property (readonly) char rasterOrderGroupsSupported; 
-(NSArray *)supportedFeatureSets;
-(char)isLowPowerDevice;
-(NSNumber *)argumentBuffersTier;
-(void)dealloc;
-(id)description;
-(id)init;
-(char)isHeadless;
-(char)isRemovable;
-(char)rasterOrderGroupsSupported;
-(void)setCurrentDevice:(id<MTLDevice>)arg1 ;
-(NSString *)deviceName;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)currentDevice;
@end

