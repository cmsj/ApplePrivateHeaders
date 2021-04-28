/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSMutableDictionary, NSString;

@interface QCSCN_LightReserved : NSObject {

	_C3DLight* _light;
	_C3DScene* _sceneRef;
	unsigned _presentationInstance : 1;
	NSMutableDictionary* _animations;
	NSString* _name;
	NSString* _identifier;
	NSString* _type;
	id _color;
	id _shadowColor;
	float _softenFactor;
	double _zNear;
	double _zFar;
	float _fresnelExponent;
	SCNVector3 _fresnelBias;
	SCNVector3 _fresnelDirection;
	char _castsShadow;
	float _attenuations[6];

}
-(void)finalize;
-(void)dealloc;
@end
