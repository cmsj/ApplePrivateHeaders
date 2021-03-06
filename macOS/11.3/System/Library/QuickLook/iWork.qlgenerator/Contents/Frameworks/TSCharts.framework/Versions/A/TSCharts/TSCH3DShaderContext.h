/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DVersion, TSCH3DShaderResource, NSSet;

@interface TSCH3DShaderContext : NSObject {

	ObjectStateMatchObject* _state;
	TSCH3DVersion* _version;
	TSCH3DShaderResource* _shader;
	NSSet* _debugEffects;

}

@property (nonatomic,retain) TSCH3DVersion * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) TSCH3DShaderResource * shader;              //@synthesize shader=_shader - In the implementation block
@property (nonatomic,copy) NSSet * debugEffects;                         //@synthesize debugEffects=_debugEffects - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(const ObjectStateMatchObject*)state;
-(TSCH3DVersion *)version;
-(void)setVersion:(TSCH3DVersion *)arg1 ;
-(TSCH3DShaderResource *)shader;
-(void)setShader:(TSCH3DShaderResource *)arg1 ;
-(id)discardStatement;
-(id)textureFunctionNameForVariable:(id)arg1 projective:(char)arg2 ;
-(id)diffEffects:(id)arg1 ;
-(NSSet *)debugEffects;
-(id)initWithObjectState:(const ObjectState*)arg1 version:(id)arg2 ;
-(id)textureVariables;
-(TextureAttributes)textureAttributesForVariable:(id)arg1 ;
-(void)setDebugEffects:(NSSet *)arg1 ;
@end

