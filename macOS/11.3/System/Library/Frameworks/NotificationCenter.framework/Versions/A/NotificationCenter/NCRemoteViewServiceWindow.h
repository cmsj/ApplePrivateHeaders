/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <AppKit/NSPanel.h>
#import <libobjc.A.dylib/NCMaterialDelegate.h>

@class NSVisualEffectView;

@interface NCRemoteViewServiceWindow : NSPanel <NCMaterialDelegate> {

	unsigned _effectiveDisplay;
	unsigned long long _pluginAppearance;

}

@property (nonatomic,readonly) NSVisualEffectView * contentView; 
@property (assign,nonatomic) unsigned effectiveDisplay;                        //@synthesize effectiveDisplay=_effectiveDisplay - In the implementation block
@property (assign,nonatomic) unsigned long long pluginAppearance;              //@synthesize pluginAppearance=_pluginAppearance - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(id)screen;
-(NSVisualEffectView *)contentView;
-(char)canBecomeKeyWindow;
-(id)animationForKey:(id)arg1 ;
-(void)_setEventMask:(long long)arg1 ;
-(char)_shouldAutoFlattenLayerTree;
-(void)appearanceChanged:(BOOL)arg1 ;
-(void)setPluginAppearance:(unsigned long long)arg1 ;
-(void)materialChanged:(unsigned char)arg1 ;
-(id)initWithDarkAppearance:(BOOL)arg1 ;
-(void)setEffectiveDisplay:(unsigned)arg1 ;
-(void)_setupPluginAppearance;
-(void)printViews;
-(unsigned)effectiveDisplay;
-(unsigned long long)pluginAppearance;
@end
