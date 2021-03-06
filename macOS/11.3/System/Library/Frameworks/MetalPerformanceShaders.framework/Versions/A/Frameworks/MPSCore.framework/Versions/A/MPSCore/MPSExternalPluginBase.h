/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSCore.framework/Versions/A/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSExternalPluginBase.h>

@protocol MPSExternalPluginBase <NSObject>
@required
-(id)device;
-(id)initWithDevice:(id)arg1;
-(unsigned long long)maxBatchSize;

@end


@protocol MTLDevice;
@class NSString;

@interface MPSExternalPluginBase : NSObject <MPSExternalPluginBase> {

	MPSExternalPluginBase* _self;
	id<MTLDevice> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id)init;
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
@end

