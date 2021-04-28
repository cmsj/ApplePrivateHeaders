/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/Versions/A/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <CoreMaterial/MTTintingMaterialSettings.h>
#import <libobjc.A.dylib/MTMaterialFilteringInternal.h>

@class NSArray, NSString;

@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings <MTMaterialFilteringInternal> {

	CGImageRef _variableBlurInputMask;
	char _averageColorEnabled;
	char _blurAtEnd;
	double _luminanceAmount;
	NSArray* _luminanceValues;
	double _blurRadius;
	double _saturation;
	double _brightness;
	double _zoom;
	double _backdropScale;
	NSString* _blurInputQuality;
	NSString* _variableBlurInputMaskName;
	CAColorMatrix _colorMatrix;

}

@property (nonatomic,readonly) double luminanceAmount;                                             //@synthesize luminanceAmount=_luminanceAmount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * luminanceValues;                                     //@synthesize luminanceValues=_luminanceValues - In the implementation block
@property (nonatomic,readonly) double blurRadius;                                                  //@synthesize blurRadius=_blurRadius - In the implementation block
@property (getter=isAverageColorEnabled,nonatomic,readonly) char averageColorEnabled;              //@synthesize averageColorEnabled=_averageColorEnabled - In the implementation block
@property (nonatomic,readonly) double saturation;                                                  //@synthesize saturation=_saturation - In the implementation block
@property (nonatomic,readonly) double brightness;                                                  //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) CAColorMatrix colorMatrix;                                          //@synthesize colorMatrix=_colorMatrix - In the implementation block
@property (nonatomic,readonly) double zoom;                                                        //@synthesize zoom=_zoom - In the implementation block
@property (nonatomic,readonly) double backdropScale;                                               //@synthesize backdropScale=_backdropScale - In the implementation block
@property (nonatomic,copy,readonly) NSString * blurInputQuality;                                   //@synthesize blurInputQuality=_blurInputQuality - In the implementation block
@property (getter=isBlurAtEnd,nonatomic,readonly) char blurAtEnd;                                  //@synthesize blurAtEnd=_blurAtEnd - In the implementation block
@property (nonatomic,copy,readonly) NSString * variableBlurInputMaskName;                          //@synthesize variableBlurInputMaskName=_variableBlurInputMaskName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)saturation;
-(double)blurRadius;
-(double)brightness;
-(double)zoom;
-(CAColorMatrix)colorMatrix;
-(CGImageRef)variableBlurInputMask;
-(NSString *)blurInputQuality;
-(double)luminanceAmount;
-(NSArray *)luminanceValues;
-(char)isBlurAtEnd;
-(double)backdropScale;
-(void)_processMaterialFilteringDescription:(id)arg1 defaultingToIdentity:(char)arg2 bundle:(id)arg3 ;
-(char)isAverageColorEnabled;
-(NSString *)variableBlurInputMaskName;
-(id)initWithMaterialDescription:(id)arg1 andDescendantDescriptions:(id)arg2 bundle:(id)arg3 ;
@end
