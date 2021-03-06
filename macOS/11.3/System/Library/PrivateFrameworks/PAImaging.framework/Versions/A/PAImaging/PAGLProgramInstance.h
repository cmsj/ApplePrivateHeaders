/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PAGLProgramExecutable, NSMutableDictionary;

@interface PAGLProgramInstance : NSObject {

	PAGLProgramExecutable* _program;
	NSMutableDictionary* _uniforms;
	char _isRunning;

}

@property (nonatomic,readonly) PAGLProgramExecutable * program;              //@synthesize program=_program - In the implementation block
-(id)description;
-(PAGLProgramExecutable *)program;
-(id)initWithProgram:(id)arg1 ;
-(id)valueForUniform:(id)arg1 ;
-(void)setValue:(id)arg1 forUniform:(id)arg2 ;
-(char)_canRunInContext:(id)arg1 ;
-(char)runInContext:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)_runInContext:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)runWithBlock:(/*^block*/id)arg1 context:(id)arg2 ;
-(char)_checkWillBeAccelerated:(id)arg1 ;
-(char)_setAllUserDefinedUniformValues;
-(char)_checkAllUserDefinedUniformsAreSet;
-(int)_getUniformLocation:(id)arg1 ;
-(char)_setUniform:(id)arg1 withValue:(id)arg2 ;
@end

