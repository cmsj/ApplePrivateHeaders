/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@protocol MTLTexture;
@class AVPlayer, AVPlayerItemVideoOutput;

@interface SCNAVPlayerSource : SCNTextureSource {

	AVPlayer* _player;
	AVPlayerItemVideoOutput* _videoOutput;
	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _pixelBuffer;
	id<MTLTexture> _mtlTexture;
	unsigned long long _texturePixelFormat;
	unsigned char _videoSourceFormat;
	unsigned long long _width;
	unsigned long long _height;

}

@property (nonatomic,retain) AVPlayer * player; 
-(void)dealloc;
-(id)init;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)setVideoSourceFormat:(unsigned char)arg1 ;
-(void)unregisterPlayer:(id)arg1 ;
-(void)discardVideoData;
-(void)registerPlayer:(id)arg1 ;
@end

