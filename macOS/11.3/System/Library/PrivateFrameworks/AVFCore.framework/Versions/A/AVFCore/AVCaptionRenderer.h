/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVCaptionRendererInternal, NSArray;

@interface AVCaptionRenderer : NSObject {

	AVCaptionRendererInternal* _internal;

}

@property (nonatomic,copy) NSArray * captions; 
@property (assign,nonatomic) CGRect bounds; 
-(void)dealloc;
-(id)description;
-(id)init;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(char)setupFigCDS;
-(void)teardownFigCDS;
-(NSArray *)captions;
-(int)buildFigCaptionArrayFromAVCaptionArrayAndSubmitToCDSSession;
-(void)setCaptions:(NSArray *)arg1 ;
-(char)synchronizeWithCurrentAccessibilityPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)defaultStyles;
-(void)setDefaultStyles:(id)arg1 ;
-(id)captionSceneChangesInRange:(SCD_Struct_CM5)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 atTime:(SCD_Struct_CM3)arg2 ;
@end
