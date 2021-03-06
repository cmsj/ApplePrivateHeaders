/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier {

	SCD_Struct_TS21 _GLPoint4DValue;
	SCD_Struct_TS21 _proposedGLPoint4DValue;

}

@property (getter=LPoint4DValue,nonatomic,readonly) SCD_Struct_TS21 GLPoint4DValue;              //@synthesize GLPoint4DValue=_GLPoint4DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS21 proposedGLPoint4DValue;                             //@synthesize proposedGLPoint4DValue=_proposedGLPoint4DValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS21)GLPoint4DValue;
-(void)setProposedGLPoint4DValue:(SCD_Struct_TS21)arg1 ;
-(SCD_Struct_TS21)proposedGLPoint4DValue;
@end

