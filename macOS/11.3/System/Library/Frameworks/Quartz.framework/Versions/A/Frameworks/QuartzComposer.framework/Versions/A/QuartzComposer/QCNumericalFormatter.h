/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@interface QCNumericalFormatter : NSFormatter {

	char _allowsFloats;
	double _min;
	double _max;

}
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(void)setAllowsFloats:(char)arg1 ;
-(double)minimum;
-(double)maximum;
-(char)allowsFloats;
-(void)setMinimum:(double)arg1 ;
-(void)setMaximum:(double)arg1 ;
@end

