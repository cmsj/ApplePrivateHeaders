/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSDictionary, NUGLShader;

@interface NUGLProgram : NUGLObject {

	long long _buildStatus;
	NSError* _buildError;
	NSDictionary* _uniforms;
	NSDictionary* _attributes;
	NUGLShader* _shader;

}

@property (readonly) NUGLShader * shader;                    //@synthesize shader=_shader - In the implementation block
@property (readonly) NSDictionary * uniforms;                //@synthesize uniforms=_uniforms - In the implementation block
@property (readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)init;
-(NSDictionary *)attributes;
-(void)delete;
-(void)generate:(id)arg1 ;
-(NUGLShader *)shader;
-(id)initWithShader:(id)arg1 ;
-(char)build:(id)arg1 error:(out id*)arg2 ;
-(void)_build:(id)arg1 ;
-(NSDictionary *)uniforms;
@end

