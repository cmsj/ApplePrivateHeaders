/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSGradient, NSColor;

@interface IKTheme : NSObject {

	NSDictionary* _contents;

}

@property (readonly) NSGradient * active1Gradient; 
@property (readonly) NSGradient * active2Gradient; 
@property (readonly) NSGradient * selectedActiveGradient; 
@property (readonly) NSGradient * glassGradient; 
@property (readonly) NSGradient * selectedGlassGradient; 
@property (readonly) NSGradient * scopeBar1Gradient; 
@property (readonly) NSGradient * scopeBar2Gradient; 
@property (readonly) NSGradient * inactiveGradient; 
@property (readonly) NSGradient * iconGradient; 
@property (readonly) NSGradient * selectedIconGradient; 
@property (readonly) NSGradient * tabBackgroundGradient; 
@property (readonly) NSGradient * selectedTabBackgroundGradient; 
@property (readonly) NSGradient * pressedTabBackgroundGradient; 
@property (readonly) NSGradient * selectedTabBorderOuterGradient; 
@property (readonly) NSGradient * selectedTabBorderInnerGradient; 
@property (readonly) NSGradient * pathSeparatorGradient; 
@property (readonly) NSGradient * pathSeparatorHighlightGradient; 
@property (readonly) NSGradient * buttonSeparatorGradient; 
@property (readonly) NSGradient * buttonSeparatorHighlightGradient; 
@property (readonly) NSColor * windowBackgroundColor; 
@property (readonly) NSColor * blackColor; 
@property (readonly) NSColor * whiteColor; 
@property (readonly) NSColor * active1Color; 
@property (readonly) NSColor * active2Color; 
@property (readonly) NSColor * inactiveColor; 
@property (readonly) NSColor * background1Color; 
@property (readonly) NSColor * background2Color; 
@property (readonly) NSColor * stroke1Color; 
@property (readonly) NSColor * stroke2Color; 
@property (readonly) NSColor * stroke3Color; 
@property (readonly) NSColor * stroke4Color; 
@property (readonly) NSColor * stroke5Color; 
@property (readonly) NSColor * stroke6Color; 
@property (readonly) NSColor * stroke7Color; 
@property (readonly) NSColor * parameterTextColor; 
@property (readonly) NSColor * whiteShadow1Color; 
@property (readonly) NSColor * whiteShadow2Color; 
@property (readonly) NSColor * blackShadow1Color; 
@property (readonly) NSColor * blackShadow2Color; 
@property (readonly) NSColor * glassSeparatorColor; 
@property (readonly) NSColor * horizontalGrooved1; 
@property (readonly) NSColor * horizontalGrooved2; 
@property (readonly) NSGradient * horizontalSeparatorTaperedGradient; 
+(id)_parseColorElement:(id)arg1 requireName:(char)arg2 name:(id*)arg3 allowLocation:(char)arg4 location:(double*)arg5 error:(id*)arg6 ;
+(id)_parseGradientElement:(id)arg1 name:(id*)arg2 error:(id*)arg3 ;
+(id)_parseFontElement:(id)arg1 name:(id*)arg2 error:(id*)arg3 ;
+(id)_parseInsetElement:(id)arg1 name:(id*)arg2 error:(id*)arg3 ;
+(id)_loadThemeFromURL:(id)arg1 error:(id*)arg2 ;
+(id)currentTheme;
-(NSGradient *)active1Gradient;
-(NSGradient *)inactiveGradient;
-(NSGradient *)selectedGlassGradient;
-(NSGradient *)glassGradient;
-(NSColor *)glassSeparatorColor;
-(NSGradient *)tabBackgroundGradient;
-(NSColor *)stroke1Color;
-(NSGradient *)selectedActiveGradient;
-(NSGradient *)pressedTabBackgroundGradient;
-(NSGradient *)selectedTabBackgroundGradient;
-(NSGradient *)selectedTabBorderOuterGradient;
-(NSGradient *)selectedTabBorderInnerGradient;
-(NSColor *)stroke7Color;
-(NSColor *)stroke5Color;
-(NSGradient *)buttonSeparatorGradient;
-(NSGradient *)buttonSeparatorHighlightGradient;
-(NSGradient *)horizontalSeparatorTaperedGradient;
-(NSGradient *)active2Gradient;
-(NSGradient *)scopeBar1Gradient;
-(NSGradient *)scopeBar2Gradient;
-(NSGradient *)iconGradient;
-(NSGradient *)selectedIconGradient;
-(NSGradient *)pathSeparatorGradient;
-(NSGradient *)pathSeparatorHighlightGradient;
-(NSColor *)active1Color;
-(NSColor *)active2Color;
-(NSColor *)background1Color;
-(NSColor *)background2Color;
-(NSColor *)stroke2Color;
-(NSColor *)stroke3Color;
-(NSColor *)stroke4Color;
-(NSColor *)stroke6Color;
-(NSColor *)parameterTextColor;
-(NSColor *)whiteShadow1Color;
-(NSColor *)whiteShadow2Color;
-(NSColor *)blackShadow1Color;
-(NSColor *)blackShadow2Color;
-(NSColor *)horizontalGrooved1;
-(NSColor *)horizontalGrooved2;
-(NSColor *)blackColor;
-(NSColor *)whiteColor;
-(NSColor *)windowBackgroundColor;
-(id)_initWithDictionary:(id)arg1 ;
-(NSColor *)inactiveColor;
@end

