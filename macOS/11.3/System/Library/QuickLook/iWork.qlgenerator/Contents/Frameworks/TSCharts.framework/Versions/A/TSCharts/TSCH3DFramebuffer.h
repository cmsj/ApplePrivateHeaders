/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DPipelineLinkable.h>

@class NSString;

@interface TSCH3DFramebuffer : NSObject <TSCH3DPipelineLinkable> {

	FramebufferAttributes _framebufferAttributes;
	unsigned long long _uniqueIdentifier;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)framebufferWithFramebufferAttributes:(const FramebufferAttributes*)arg1 ;
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(id)output;
-(const FramebufferAttributes*)framebufferAttributes;
-(id)pixelBufferFromViewport:(const box<glm::detail::tvec2<int>>*)arg1 components:(unsigned long long)arg2 flipped:(char)arg3 forProcessor:(id)arg4 session:(id)arg5 ;
-(id)initWithFramebufferAttributes:(const FramebufferAttributes*)arg1 ;
-(id)resolvingFramebuffer;
@end

