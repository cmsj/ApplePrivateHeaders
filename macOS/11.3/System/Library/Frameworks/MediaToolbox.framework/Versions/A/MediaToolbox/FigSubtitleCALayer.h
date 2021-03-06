/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigSubtitleBackdropCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {

	OpaqueFigSubtitleCALayerInternal* layerInternal;

}

@property (nonatomic,copy) NSString * captionRenderingStrategy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultActionForKey:(id)arg1 ;
-(void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)handleNeedsLayoutNotification;
-(void)dealloc;
-(id)init;
-(void)setViewport:(CGRect)arg1 ;
-(void)clear;
-(id)actionForKey:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg1 ;
-(void)setVideosize:(CGSize)arg1 ;
-(void)setVideoRelativeToViewport:(CGRect)arg1 ;
-(void)addAnimations:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationsForKey:(id)arg1 ;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1 ;
-(void)setCaptionsAvoidanceMargins:(FigGeometryMargins)arg1 ;
-(NSString *)captionRenderingStrategy;
-(void)setCaptionRenderingStrategy:(NSString *)arg1 ;
@end

