/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/Versions/A/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class NSObject;

@interface AirPlayReceiverContext : NSObject {

	AirPlayReceiverSessionPrivate* _session;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _receiverUIStarted;
	unsigned _receiverUISessionID;
	float _outputVolume;
	unsigned _powerAssertion;

}
@end

