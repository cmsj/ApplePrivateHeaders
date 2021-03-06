/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, MDLTextureSampler, MDLMaterialPropertyNode;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying> {

	NSString* _string;
	NSString* _name;
	NSURL* _url;
	MDLTextureSampler* _textureSampler;
	 _float;
	SCD_Struct_MD1 _matrix;
	CGColorRef _color;
	unsigned long long _semantic;
	MDLMaterialPropertyNode* _node;
	MDLMaterialProperty* _overrider;
	MDLMaterialProperty* _overridee;
	char _isDefaultValue;
	unsigned long long _type;
	SCD_Struct_MD1 _matrix4x4;

}

@property (assign,nonatomic) char isDefaultValue;                                  //@synthesize isDefaultValue=_isDefaultValue - In the implementation block
@property (assign,nonatomic) unsigned long long semantic; 
@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSURL * URLValue; 
@property (nonatomic,retain) MDLTextureSampler * textureSamplerValue; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  float2Value; 
@property (assign,nonatomic)  float3Value; 
@property (assign,nonatomic)  float4Value; 
@property (assign,nonatomic) SCD_Struct_MD1 matrix4x4;                             //@synthesize matrix4x4=_matrix4x4 - In the implementation block
@property (assign,nonatomic) float luminance; 
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(void)setMatrix4x4Value:(SCD_Struct_MD1)arg1 ;
-(void)setMatrix4x4:(SCD_Struct_MD1)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(float)floatValue;
-(NSString *)name;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)stringValue;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(void)clear;
-(void)setStringValue:(NSString *)arg1 ;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(unsigned long long)semantic;
-(void)setSemantic:(unsigned long long)arg1 ;
-(void)setProperties:(id)arg1 ;
-(NSURL *)URLValue;
-(float)luminance;
-(MDLTextureSampler *)textureSamplerValue;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(void)setFloat3Value:;
-(void)setTextureSamplerValue:(MDLTextureSampler *)arg1 ;
-(void)setURLValue:(NSURL *)arg1 ;
-()float4Value;
-()float3Value;
-(void)setFloat2Value:;
-(void)setFloat4Value:;
-(void)setLuminance:(float)arg1 ;
-(char)isDefaultValue;
-(void)setIsDefaultValue:(char)arg1 ;
-()float2Value;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(SCD_Struct_MD1)arg3 ;
-(id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(CGColorRef)arg3 ;
-(SCD_Struct_MD1)matrix4x4;
@end

