/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class NSMutableData, MDLTexture, NSData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {

	RTIESLight* _iesLight;
	NSMutableData* _sphericalHarmonicsCoefficients;
	MDLTexture* _lightCubeMap;
	unsigned long long _sphericalHarmonicsLevel;

}

@property (nonatomic,retain,readonly) MDLTexture * lightCubeMap;                          //@synthesize lightCubeMap=_lightCubeMap - In the implementation block
@property (nonatomic,readonly) unsigned long long sphericalHarmonicsLevel;                //@synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
-(id)initWithIESProfile:(id)arg1 ;
-(void)generateCubemapFromLight:(unsigned long long)arg1 ;
-(void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1 ;
-(void)computeLumens;
-(float)computeInnerAngle;
-(id)computeSceneKitRenderingTexture:(unsigned long long)arg1 ;
-(CGColorRef)evaluatedColorFromSHVector:;
-(MDLTexture *)lightCubeMap;
-(NSData *)sphericalHarmonicsCoefficients;
-(void)setSphericalHarmonicsCoefficients:(NSData *)arg1 ;
-(unsigned long long)sphericalHarmonicsLevel;
-(id)generateTexture:(unsigned long long)arg1 ;
@end
