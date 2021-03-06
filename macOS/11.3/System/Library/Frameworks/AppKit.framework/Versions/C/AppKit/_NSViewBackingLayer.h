/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSBackingLayer.h>

@class NSValue;

@interface _NSViewBackingLayer : _NSBackingLayer {

	NSValue* _view;
	unsigned _isPresentationLayer : 1;

}
+(id)defaultValueForKey:(id)arg1 ;
-(void)dealloc;
-(void)display;
-(void)setSublayerTransform:(CATransform3D)arg1 ;
-(id)NS_view;
-(void)setTransform:(CATransform3D)arg1 ;
-(void)layoutSublayers;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)setLayoutManager:(id)arg1 ;
-(void)setNeedsLayout;
-(void)NS_suggestedContentsScaleDidChange;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)NS_setView:(id)arg1 ;
-(void)_appkitViewBackingLayerUniqueMethod;
-(void)NS_invalidatePreparedContentRect;
-(void)NS_prepareContentRect:(CGRect)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

