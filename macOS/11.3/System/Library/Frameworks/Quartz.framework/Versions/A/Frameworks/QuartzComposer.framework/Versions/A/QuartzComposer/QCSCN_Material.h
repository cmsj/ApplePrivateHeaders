/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/QCSCN_Animatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, QCSCN_MaterialProperty, QCSCN_Program;

@interface QCSCN_Material : NSObject <QCSCN_Animatable, NSCopying> {

	id _reserved;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * diffuse; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * ambient; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * specular; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * emission; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * transparent; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * reflective; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * multiply; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * normal; 
@property (assign,nonatomic) double shininess; 
@property (assign,nonatomic) double transparency; 
@property (nonatomic,copy) NSString * lightingModelName; 
@property (assign,getter=isLitPerPixel,nonatomic) char litPerPixel; 
@property (assign,getter=isDoubleSided,nonatomic) char doubleSided; 
@property (assign,nonatomic) int cullMode; 
@property (assign,nonatomic) int transparencyMode; 
@property (assign,nonatomic) char locksAmbientWithDiffuse; 
@property (assign,nonatomic) char writesToDepthBuffer; 
@property (nonatomic,retain) QCSCN_Program * program; 
+(id)material;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)propertyKeys;
+(id)argumentsForSelector:(SEL)arg1 ;
+(id)materialWithColor:(id)arg1 ;
+(id)materialWithContents:(id)arg1 ;
+(id)chromeMaterial;
+(id)glassMaterial;
+(id)metalMaterial;
+(id)phongMaterial;
+(id)glossyMaterial;
+(id)woodMaterial;
+(id)skinMaterial;
+(id)stoneMaterial;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(id)materialWithMaterialRef:(_C3DMaterial*)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)identifier;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)setCullMode:(int)arg1 ;
-(id)contents;
-(int)cullMode;
-(void)setContent:(id)arg1 ;
-(id)content;
-(void)setContents:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(QCSCN_MaterialProperty *)transparent;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)animationKeys;
-(void)removeAllAnimations;
-(id)properties;
-(void)_updateParameters;
-(void)setShininess:(double)arg1 ;
-(double)shininess;
-(double)transparency;
-(void)setTransparency:(double)arg1 ;
-(void)setProgram:(QCSCN_Program *)arg1 ;
-(QCSCN_Program *)program;
-(QCSCN_MaterialProperty *)normal;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 ;
-(char)isDoubleSided;
-(void)setDoubleSided:(char)arg1 ;
-(id)propertyKeys;
-(_C3DScene*)sceneRef;
-(void)_syncObjCModel;
-(void)removeAllAnimationsBeforeDying:(void*)arg1 ;
-(void)_syncObjCAnimations;
-(void)_sceneRefDidChange;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)_syncEntityObjCModel;
-(void)addAnimation:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)__removeAnimationForKey:(id)arg1 ;
-(id)initWithMaterialRef:(_C3DMaterial*)arg1 ;
-(void)_programWillChange:(id)arg1 ;
-(void)_programDidChange:(id)arg1 ;
-(void)_stopObservingProgram:(id)arg1 ;
-(_C3DEffect*)effectRef;
-(id)initPresentationMaterialWithMaterialRef:(_C3DMaterial*)arg1 ;
-(_C3DEffectCommonProfile*)commonProfile;
-(QCSCN_MaterialProperty *)ambient;
-(QCSCN_MaterialProperty *)diffuse;
-(QCSCN_MaterialProperty *)specular;
-(QCSCN_MaterialProperty *)emission;
-(QCSCN_MaterialProperty *)reflective;
-(QCSCN_MaterialProperty *)multiply;
-(void)_setupMaterialProperty:(id*)arg1 ;
-(id)_property:(id*)arg1 ;
-(int)transparencyMode;
-(void)setTransparencyMode:(int)arg1 ;
-(NSString *)lightingModelName;
-(void)setLightingModelName:(NSString *)arg1 ;
-(char)isLitPerPixel;
-(void)setLitPerPixel:(char)arg1 ;
-(id)shader;
-(void)setShader:(id)arg1 ;
-(char)locksAmbientWithDiffuse;
-(void)setLocksAmbientWithDiffuse:(char)arg1 ;
-(char)avoidsOverLighting;
-(void)setAvoidsOverLighting:(char)arg1 ;
-(C3DFXGLSLProfileRef)_GLSLProfile;
-(C3DFXGLSLProgramRef)_programFromPassAtIndex:(long long)arg1 ;
-(void)_updateProgram:(C3DFXGLSLProgramRef)arg1 withSymbol:(id)arg2 ;
-(void)_updateProgramDelegate;
-(void)_updateProgramWithSymbol:(id)arg1 ;
-(void)_updateProgram:(id)arg1 ;
-(void)_startObservingProgram:(id)arg1 ;
-(void)setWritesToDepthBuffer:(char)arg1 ;
-(char)writesToDepthBuffer;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 property:(id)arg2 ;
-(char)litPerPixel;
-(char)doubleSided;
-(void*)__CFObject;
-(void)setSceneRef:(_C3DScene*)arg1 ;
-(id)presentationMaterial;
-(_C3DMaterial*)materialRef;
@end

