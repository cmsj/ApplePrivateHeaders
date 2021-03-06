/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCStringPort, NSString;

@interface QCDateFormatter : QCPatch {

	QCNumberPort* inputTime;
	QCStringPort* outputString;
	NSString* _zoneName;
	long long _dateStyle;
	long long _timeStyle;
	NSString* _format;
	double _lastTime;
	double _resolution;
	CFDateFormatterRef _formatter;

}
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(id)timeZoneNames;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(void)setTimeStyle:(long long)arg1 ;
-(void)setDateStyle:(long long)arg1 ;
-(long long)dateStyle;
-(long long)timeStyle;
-(id)timeZoneName;
-(void)setTimeZoneName:(id)arg1 ;
-(id)formatString;
-(void)setFormatString:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)cleanup:(id)arg1 ;
@end

