/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DShaderEffectStateInfo.h>

@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>
+(id)effect;
+(Class)stateClass;
+(id)stateSharingID;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(Class)stateClass;
-(void)addVariables:(id)arg1 ;
-(id)stateSharingID;
-(void)injectCommonShaderInto:(id)arg1 context:(id)arg2 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(char)alwaysUploadData;
-(void)updateState:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3 ;
-(void)injectGLSLInto:(id)arg1 context:(id)arg2 ;
-(void)injectMetalShaderInto:(id)arg1 context:(id)arg2 ;
@end
