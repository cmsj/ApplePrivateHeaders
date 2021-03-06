/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
@interface KNPlaybackSessionConfiguration : NSObject

@property (nonatomic,readonly) CGSize boundsSize; 
@property (nonatomic,readonly) CGColorSpaceRef colorSpace; 
@property (nonatomic,readonly) char isWideGamut; 
@property (nonatomic,readonly) double pixelAspectRatio; 
@property (nonatomic,readonly) char isRealtime; 
@property (nonatomic,readonly) char isMetalEnabled; 
@property (nonatomic,readonly) char isSceneRenderingEnabled; 
@property (nonatomic,readonly) id<KNPlaybackLayerHost> layerHost; 
+(id)configurationWithOffscreenCGContextBoundsSize:(CGSize)arg1 ;
+(char)canEnableMetal;
+(char)isColorSpaceWideGamut:(CGColorSpaceRef)arg1 ;
+(id)configurationWithLayerHost:(id)arg1 screenEnvironment:(id)arg2 renderingMode:(long long)arg3 ;
-(CGColorSpaceRef)colorSpace;
-(char)isWideGamut;
-(id<KNPlaybackLayerHost>)layerHost;
-(CGSize)boundsSize;
-(double)pixelAspectRatio;
-(char)isMetalEnabled;
-(char)isSceneRenderingEnabled;
-(char)isRealtime;
-(id)configurationWithUpdatedLayerScreenEnvironment:(id)arg1 ;
-(double)canvasViewScaleForUnscaledSize:(CGSize)arg1 ;
-(id)initSuperclass;
@end

