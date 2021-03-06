/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCColorPort, QCNumberPort, QCInterpolationPort;

@interface QCColorMixer : QCPatch {

	QCColorPort* inputColor1;
	QCColorPort* inputColor2;
	QCNumberPort* inputMix;
	QCInterpolationPort* inputInterpolation;
	QCColorPort* outputColor;

}
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end

