/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCGSWindowBackdrop.h>

@class NSCGSWindow, NSString;

@interface _NSCGSWindowBackdrop : NSCGSWindowBackdrop {

	NSCGSWindow* _window;
	CGSWindowBackdropRef _backdrop;
	NSString* _material;
	NSString* _blendMode;
	CGRect _frame;
	double _saturation;
	unsigned long long _level;
	CGColorRef _tintColor;
	unsigned _hasActiveAppearance : 1;
	unsigned _orderedIn : 1;

}
-(void)dealloc;
-(id)window;
-(unsigned long long)level;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(id)material;
-(void)setMaterial:(id)arg1 ;
-(id)blendMode;
-(void)setBlendMode:(id)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(char)hasActiveAppearance;
-(void)setHasActiveAppearance:(char)arg1 ;
-(double)saturation;
-(void)setSaturation:(double)arg1 ;
-(char)isOrderedIn;
-(void)setOrderedIn:(char)arg1 ;
-(CGColorRef)tintColor;
-(void)setTintColor:(CGColorRef)arg1 ;
@end

