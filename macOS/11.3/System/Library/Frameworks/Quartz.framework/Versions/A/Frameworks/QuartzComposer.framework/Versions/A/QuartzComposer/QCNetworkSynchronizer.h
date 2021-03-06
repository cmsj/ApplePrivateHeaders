/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCNetworkPatch.h>

@class QCStringPort, QCBooleanPort, QCNumberPort, QCDatagramBroadcaster, QCDatagramReceiver;

@interface QCNetworkSynchronizer : QCNetworkPatch {

	QCStringPort* inputString;
	QCBooleanPort* outputBroadcasting;
	QCStringPort* outputString;
	QCNumberPort* outputTimestamp;
	QCBooleanPort* outputSignal;
	double _maxFrequency;
	char _transmitting;
	char _run;
	QCDatagramBroadcaster* _broadcaster;
	QCDatagramReceiver* _receiver;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)cleanup:(id)arg1 ;
-(void)_synchronizerThread:(id)arg1 ;
@end

