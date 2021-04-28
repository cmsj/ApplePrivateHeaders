/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/IPAAutoSettings.h>

@class NSColor;

@interface PAWhiteBalanceAutoSettings : IPAAutoSettings {

	char _useFace;
	float _faceI;
	float _faceQ;
	float _faceStrength;
	long long _colorType;
	double _faceWarmth;
	double _temperature;
	double _tint;
	NSColor* _grayColor;
	double _grayWarmth;

}

@property (assign,nonatomic) long long colorType;              //@synthesize colorType=_colorType - In the implementation block
@property (assign,nonatomic) char useFace;                     //@synthesize useFace=_useFace - In the implementation block
@property (assign,nonatomic) float faceI;                      //@synthesize faceI=_faceI - In the implementation block
@property (assign,nonatomic) float faceQ;                      //@synthesize faceQ=_faceQ - In the implementation block
@property (assign,nonatomic) float faceStrength;               //@synthesize faceStrength=_faceStrength - In the implementation block
@property (assign,nonatomic) double faceWarmth;                //@synthesize faceWarmth=_faceWarmth - In the implementation block
@property (assign,nonatomic) double temperature;               //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) double tint;                      //@synthesize tint=_tint - In the implementation block
@property (nonatomic,retain) NSColor * grayColor;              //@synthesize grayColor=_grayColor - In the implementation block
@property (assign,nonatomic) double grayWarmth;                //@synthesize grayWarmth=_grayWarmth - In the implementation block
-(NSColor *)grayColor;
-(double)temperature;
-(void)setTemperature:(double)arg1 ;
-(char)_applyArchiveDictionary:(id)arg1 ;
-(double)tint;
-(void)setTint:(double)arg1 ;
-(long long)colorType;
-(void)setColorType:(long long)arg1 ;
-(float)faceStrength;
-(void)setFaceStrength:(float)arg1 ;
-(double)faceWarmth;
-(void)setFaceWarmth:(double)arg1 ;
-(float)faceI;
-(void)setFaceI:(float)arg1 ;
-(float)faceQ;
-(void)setFaceQ:(float)arg1 ;
-(double)grayWarmth;
-(void)setGrayWarmth:(double)arg1 ;
-(void)setGrayColor:(NSColor *)arg1 ;
-(void)_archiveIntoDictionary:(id)arg1 ;
-(char)useFace;
-(void)setUseFace:(char)arg1 ;
@end
