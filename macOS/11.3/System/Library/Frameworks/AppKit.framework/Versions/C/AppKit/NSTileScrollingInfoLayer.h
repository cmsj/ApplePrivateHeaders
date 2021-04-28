/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class _NSTiledLayer, NSMutableDictionary, CALayer, NSString;

@interface NSTileScrollingInfoLayer : CALayer <CALayerDelegate> {

	_NSTiledLayer* _tileLayer;
	NSMutableDictionary* _tiles;
	CALayer* _coverageRectLayer;
	CALayer* _activeRectLayer;

}

@property (assign) _NSTiledLayer * tileLayer;                       //@synthesize tileLayer=_tileLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)layoutSublayers;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_updateTileRepresentation;
-(_NSTiledLayer *)tileLayer;
-(void)setTileLayer:(_NSTiledLayer *)arg1 ;
@end
