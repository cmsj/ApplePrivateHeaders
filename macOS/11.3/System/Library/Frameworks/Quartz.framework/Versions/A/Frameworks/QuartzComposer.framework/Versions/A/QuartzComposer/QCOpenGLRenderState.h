/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCGraphicsRenderState.h>

@interface QCOpenGLRenderState : QCGraphicsRenderState {

	long long currentVirtualScreen;
	float currentFieldOfView;
	float saveFieldOfView;
	char saveFlipped;
	char saveResetMatrices;
	int saveFace;
	int saveMode;
	double saveModelView[16];
	double saveProjection[16];
	int saveScissorFrame[4];
	char saveScissorEnabled;

}
-(id)initWithContext:(id)arg1 patch:(id)arg2 ;
@end

