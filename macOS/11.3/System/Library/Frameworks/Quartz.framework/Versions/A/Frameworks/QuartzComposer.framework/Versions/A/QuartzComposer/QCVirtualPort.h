/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCPort.h>

@interface QCVirtualPort : QCPort {

	id _value;
	unsigned long long _lastFlagUpdateFrameID;
	void** _unused3[3];

}
+(Class)baseClass;
-(void)dealloc;
-(id)value;
-(char)setValue:(id)arg1 ;
-(Class)valueClass;
-(id)rawValue;
-(char)setStateValue:(id)arg1 ;
-(id)stateValue;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(id)tooltipString;
-(char)canConnectToPort:(id)arg1 ;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(void)setRawValue:(id)arg1 ;
@end

