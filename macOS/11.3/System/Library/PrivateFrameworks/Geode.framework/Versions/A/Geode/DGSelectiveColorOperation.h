/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/DGOperation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSColor;

@interface DGSelectiveColorOperation : DGOperation <NSCopying> {

	NSNumber* _inputFilterVersion;
	NSColor* _input1Color;
	double _input1HueBase;
	double _input1HueShift;
	double _input1Saturation;
	double _input1Luminance;
	double _input1Spread;
	NSColor* _input2Color;
	double _input2HueBase;
	double _input2HueShift;
	double _input2Saturation;
	double _input2Luminance;
	double _input2Spread;
	NSColor* _input3Color;
	double _input3HueBase;
	double _input3HueShift;
	double _input3Saturation;
	double _input3Luminance;
	double _input3Spread;
	NSColor* _input4Color;
	double _input4HueBase;
	double _input4HueShift;
	double _input4Saturation;
	double _input4Luminance;
	double _input4Spread;
	NSColor* _input5Color;
	double _input5HueBase;
	double _input5HueShift;
	double _input5Saturation;
	double _input5Luminance;
	double _input5Spread;
	NSColor* _input6Color;
	double _input6HueBase;
	double _input6HueShift;
	double _input6Saturation;
	double _input6Luminance;
	double _input6Spread;

}

@property (nonatomic,copy) NSColor * input1Color;              //@synthesize input1Color=_input1Color - In the implementation block
@property (assign) double input1HueBase;                       //@synthesize input1HueBase=_input1HueBase - In the implementation block
@property (assign) double input1HueShift;                      //@synthesize input1HueShift=_input1HueShift - In the implementation block
@property (assign) double input1Saturation;                    //@synthesize input1Saturation=_input1Saturation - In the implementation block
@property (assign) double input1Luminance;                     //@synthesize input1Luminance=_input1Luminance - In the implementation block
@property (assign) double input1Spread;                        //@synthesize input1Spread=_input1Spread - In the implementation block
@property (nonatomic,copy) NSColor * input2Color;              //@synthesize input2Color=_input2Color - In the implementation block
@property (assign) double input2HueBase;                       //@synthesize input2HueBase=_input2HueBase - In the implementation block
@property (assign) double input2HueShift;                      //@synthesize input2HueShift=_input2HueShift - In the implementation block
@property (assign) double input2Saturation;                    //@synthesize input2Saturation=_input2Saturation - In the implementation block
@property (assign) double input2Luminance;                     //@synthesize input2Luminance=_input2Luminance - In the implementation block
@property (assign) double input2Spread;                        //@synthesize input2Spread=_input2Spread - In the implementation block
@property (nonatomic,copy) NSColor * input3Color;              //@synthesize input3Color=_input3Color - In the implementation block
@property (assign) double input3HueBase;                       //@synthesize input3HueBase=_input3HueBase - In the implementation block
@property (assign) double input3HueShift;                      //@synthesize input3HueShift=_input3HueShift - In the implementation block
@property (assign) double input3Saturation;                    //@synthesize input3Saturation=_input3Saturation - In the implementation block
@property (assign) double input3Luminance;                     //@synthesize input3Luminance=_input3Luminance - In the implementation block
@property (assign) double input3Spread;                        //@synthesize input3Spread=_input3Spread - In the implementation block
@property (nonatomic,copy) NSColor * input4Color;              //@synthesize input4Color=_input4Color - In the implementation block
@property (assign) double input4HueBase;                       //@synthesize input4HueBase=_input4HueBase - In the implementation block
@property (assign) double input4HueShift;                      //@synthesize input4HueShift=_input4HueShift - In the implementation block
@property (assign) double input4Saturation;                    //@synthesize input4Saturation=_input4Saturation - In the implementation block
@property (assign) double input4Luminance;                     //@synthesize input4Luminance=_input4Luminance - In the implementation block
@property (assign) double input4Spread;                        //@synthesize input4Spread=_input4Spread - In the implementation block
@property (nonatomic,copy) NSColor * input5Color;              //@synthesize input5Color=_input5Color - In the implementation block
@property (assign) double input5HueBase;                       //@synthesize input5HueBase=_input5HueBase - In the implementation block
@property (assign) double input5HueShift;                      //@synthesize input5HueShift=_input5HueShift - In the implementation block
@property (assign) double input5Saturation;                    //@synthesize input5Saturation=_input5Saturation - In the implementation block
@property (assign) double input5Luminance;                     //@synthesize input5Luminance=_input5Luminance - In the implementation block
@property (assign) double input5Spread;                        //@synthesize input5Spread=_input5Spread - In the implementation block
@property (nonatomic,copy) NSColor * input6Color;              //@synthesize input6Color=_input6Color - In the implementation block
@property (assign) double input6HueBase;                       //@synthesize input6HueBase=_input6HueBase - In the implementation block
@property (assign) double input6HueShift;                      //@synthesize input6HueShift=_input6HueShift - In the implementation block
@property (assign) double input6Saturation;                    //@synthesize input6Saturation=_input6Saturation - In the implementation block
@property (assign) double input6Luminance;                     //@synthesize input6Luminance=_input6Luminance - In the implementation block
@property (assign) double input6Spread;                        //@synthesize input6Spread=_input6Spread - In the implementation block
+(void)initialize;
+(id)attributes;
+(id)stringForType:(long long)arg1 ;
+(id)_stringsTableName;
+(id)inputKeys;
+(id)outputKeys;
+(id)stringForHue:(long long)arg1 ;
+(id)inputKeysWithHue:(long long)arg1 ;
+(id)inputKeysWithType:(long long)arg1 ;
+(id)inputKeyWithHue:(long long)arg1 type:(long long)arg2 ;
+(void)iterateHues:(/*^block*/id)arg1 ;
+(void)iterateTypes:(/*^block*/id)arg1 ;
+(void)_configureHueBaseControllerWithKey:(id)arg1 defaultHue:(double)arg2 ;
+(void)_configureHueBaseControllers;
+(void)_configureHueShiftControllers;
+(void)_configureSaturationControllers;
+(void)_configureLuminanceControllers;
+(void)_configureSpreadControllers;
+(id)colorKeyWithHue:(long long)arg1 ;
-(id)init;
-(id)initWithOperation:(id)arg1 ;
-(id)settingsDictionary;
-(char)isMigratable;
-(char)applySettingsDictionary:(id)arg1 ;
-(NSColor *)input1Color;
-(double)input1HueBase;
-(double)input1HueShift;
-(double)input1Saturation;
-(double)input1Luminance;
-(double)input1Spread;
-(NSColor *)input2Color;
-(double)input2HueBase;
-(double)input2HueShift;
-(double)input2Saturation;
-(double)input2Luminance;
-(double)input2Spread;
-(NSColor *)input3Color;
-(double)input3HueBase;
-(double)input3HueShift;
-(double)input3Saturation;
-(double)input3Luminance;
-(double)input3Spread;
-(NSColor *)input4Color;
-(double)input4HueBase;
-(double)input4HueShift;
-(double)input4Saturation;
-(double)input4Luminance;
-(double)input4Spread;
-(NSColor *)input5Color;
-(double)input5HueBase;
-(double)input5HueShift;
-(double)input5Saturation;
-(double)input5Luminance;
-(double)input5Spread;
-(NSColor *)input6Color;
-(double)input6HueBase;
-(double)input6HueShift;
-(double)input6Saturation;
-(double)input6Luminance;
-(double)input6Spread;
-(void)setInput1Color:(NSColor *)arg1 ;
-(void)setInput1HueBase:(double)arg1 ;
-(void)setInput1HueShift:(double)arg1 ;
-(void)setInput1Saturation:(double)arg1 ;
-(void)setInput1Luminance:(double)arg1 ;
-(void)setInput1Spread:(double)arg1 ;
-(void)setInput2Color:(NSColor *)arg1 ;
-(void)setInput2HueBase:(double)arg1 ;
-(void)setInput2HueShift:(double)arg1 ;
-(void)setInput2Saturation:(double)arg1 ;
-(void)setInput2Luminance:(double)arg1 ;
-(void)setInput2Spread:(double)arg1 ;
-(void)setInput3Color:(NSColor *)arg1 ;
-(void)setInput3HueBase:(double)arg1 ;
-(void)setInput3HueShift:(double)arg1 ;
-(void)setInput3Saturation:(double)arg1 ;
-(void)setInput3Luminance:(double)arg1 ;
-(void)setInput3Spread:(double)arg1 ;
-(void)setInput4Color:(NSColor *)arg1 ;
-(void)setInput4HueBase:(double)arg1 ;
-(void)setInput4HueShift:(double)arg1 ;
-(void)setInput4Saturation:(double)arg1 ;
-(void)setInput4Luminance:(double)arg1 ;
-(void)setInput4Spread:(double)arg1 ;
-(void)setInput5Color:(NSColor *)arg1 ;
-(void)setInput5HueBase:(double)arg1 ;
-(void)setInput5HueShift:(double)arg1 ;
-(void)setInput5Saturation:(double)arg1 ;
-(void)setInput5Luminance:(double)arg1 ;
-(void)setInput5Spread:(double)arg1 ;
-(void)setInput6Color:(NSColor *)arg1 ;
-(void)setInput6HueBase:(double)arg1 ;
-(void)setInput6HueShift:(double)arg1 ;
-(void)setInput6Saturation:(double)arg1 ;
-(void)setInput6Luminance:(double)arg1 ;
-(void)setInput6Spread:(double)arg1 ;
@end

