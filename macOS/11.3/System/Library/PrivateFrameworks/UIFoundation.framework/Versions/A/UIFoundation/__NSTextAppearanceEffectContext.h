/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, CUICatalog, CUIStyleEffectConfiguration, NSFont, NSColor;

@interface __NSTextAppearanceEffectContext : NSObject {

	NSString* _effectName;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _effectConfiguration;
	NSFont* _font;
	NSColor* _color;

}
-(void)dealloc;
-(id)initWithTextEffectName:(id)arg1 catalog:(id)arg2 styleEffectConfiguration:(id)arg3 font:(id)arg4 color:(id)arg5 applicationFrameworkContext:(long long)arg6 useSimplifiedEffect:(char)arg7 ;
-(void)drawGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(long long)arg3 context:(CGContextRef)arg4 ;
@end
