/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsTextureLayout.h>

@class MTLDebugDevice, MTLTextureDescriptor;

@interface MTLDebugTextureLayout : MTLToolsTextureLayout {

	MTLDebugDevice* _debugDevice;
	MTLTextureDescriptor* _descriptor;

}

@property (nonatomic,readonly) MTLDebugDevice * debugDevice;                        //@synthesize debugDevice=_debugDevice - In the implementation block
@property (nonatomic,copy,readonly) MTLTextureDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(MTLTextureDescriptor *)descriptor;
-(id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(MTLDebugDevice *)debugDevice;
@end
