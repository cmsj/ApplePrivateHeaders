/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCIndexPort, QCOpenGLPort_Blending, QCOpenGLPort_ZBuffer, QCOpenGLPort_Culling;

@interface QCGrid : QCPatch {

	QCNumberPort* inputX;
	QCNumberPort* inputY;
	QCNumberPort* inputZ;
	QCNumberPort* inputRX;
	QCNumberPort* inputRY;
	QCNumberPort* inputRZ;
	QCNumberPort* inputWidth;
	QCNumberPort* inputHeight;
	QCIndexPort* inputWidthResolution;
	QCIndexPort* inputHeightResolution;
	QCOpenGLPort_Blending* inputBlending;
	QCOpenGLPort_ZBuffer* inputZBuffer;
	QCOpenGLPort_Culling* inputCulling;
	float* _gridArray;

}
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)cleanup:(id)arg1 ;
-(void)_drawGrid:(id)arg1 ;
@end

