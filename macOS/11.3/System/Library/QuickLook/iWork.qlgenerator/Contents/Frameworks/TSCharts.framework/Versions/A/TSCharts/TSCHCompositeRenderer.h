/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHRenderer.h>
#import <TSCharts/TSCHCompositeRendering.h>

@class NSArray, TSCHRenderer, NSString;

@interface TSCHCompositeRenderer : TSCHRenderer <TSCHCompositeRendering> {

	NSArray* _subRenderers;
	TSCHRenderer* _eventHandler;

}

@property (nonatomic,readonly) NSArray * renderers;                 //@synthesize subRenderers=_subRenderers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)renderTSCHCompositeRendering:(id)arg1 intoContext:(CGContextRef)arg2 visible:(CGRect)arg3 ;
+(void)p_delegateSelector:(SEL)arg1 toRenderer:(id)arg2 transparencyLayer:(int)arg3 inContext:(CGContextRef)arg4 ;
-(NSArray *)renderers;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3 ;
-(char)needsAnySeparateLayers;
-(void)willBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)didBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)willEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)didEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithChartRep:(id)arg1 withSubRenderers:(id)arg2 ;
-(void)p_delegateSelectorToRenderers:(SEL)arg1 transparencyLayer:(int)arg2 inContext:(CGContextRef)arg3 ;
@end

