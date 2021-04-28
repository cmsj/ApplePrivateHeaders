/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/Versions/A/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSColor, NSBundle;

@interface PRMonogramColor : NSObject {

	NSString* _colorName;
	NSColor* _color;
	NSColor* _gradientStartColor;
	NSColor* _gradientEndColor;
	NSColor* _selectedActiveColor;
	NSColor* _selectedInactiveColor;
	NSColor* _selectedActiveTextColor;
	NSBundle* _bundle;

}

@property (nonatomic,retain) NSColor * color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSColor * gradientStartColor;                   //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) NSColor * gradientEndColor;                     //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (nonatomic,retain) NSColor * selectedActiveColor;                  //@synthesize selectedActiveColor=_selectedActiveColor - In the implementation block
@property (nonatomic,retain) NSColor * selectedInactiveColor;                //@synthesize selectedInactiveColor=_selectedInactiveColor - In the implementation block
@property (nonatomic,retain) NSColor * selectedActiveTextColor;              //@synthesize selectedActiveTextColor=_selectedActiveTextColor - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * colorName;                         //@synthesize colorName=_colorName - In the implementation block
+(id)defaultGradientStartColor;
+(id)defaultGradientEndColor;
+(id)defaultSelectedActiveColor;
+(id)defaultSelectedInactiveColor;
+(id)defaultSelectedActiveTextColor;
+(id)gradientStartName:(id)arg1 ;
+(id)gradientEndName:(id)arg1 ;
+(id)gradientStartColor:(id)arg1 ;
+(id)generateMonogramGradientColorsByNameDictionary;
+(id)defaultBundle;
+(id)colorWithName:(id)arg1 inBundle:(id)arg2 ;
+(id)availableColorNames;
+(id)monogramGradientColorNamed:(id)arg1 ;
+(id)availableColors;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)selectedInactiveColor;
-(NSString *)colorName;
-(void)setColorName:(NSString *)arg1 ;
-(NSColor *)gradientStartColor;
-(NSColor *)gradientEndColor;
-(NSColor *)selectedActiveColor;
-(NSColor *)selectedActiveTextColor;
-(id)initWithColorName:(id)arg1 ;
-(id)initWithColorName:(id)arg1 inBundle:(id)arg2 ;
-(id)initWithRandomColor;
-(void)setGradientStartColor:(NSColor *)arg1 ;
-(void)setGradientEndColor:(NSColor *)arg1 ;
-(void)setSelectedActiveColor:(NSColor *)arg1 ;
-(void)setSelectedInactiveColor:(NSColor *)arg1 ;
-(void)setSelectedActiveTextColor:(NSColor *)arg1 ;
@end
