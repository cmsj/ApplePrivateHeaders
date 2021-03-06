/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVBOutputStream.h>

@protocol OS_dispatch_queue;
@class NSObject, AVBIIDCStreamConfiguration;

@interface AVBIIDCUserOutputStream : AVBOutputStream {

	char _isStreaming;
	NSObject*<OS_dispatch_queue> _internalQueue;
	AVBIIDCStreamConfiguration* _currentConfiguration;
	unsigned long long _bytesPerVideoFrame;
	unsigned long long _bytesPerPDU;
	unsigned _pdusPerVideoFrame;
	unsigned long long _timePerPDU;
	unsigned long long _streamID;
	unsigned _maxTransitTime;
	/*^block*/id _transmitFrameHandler;
	/*^block*/id _callbackHandler;

}

@property (nonatomic,copy) id callbackHandler;                                             //@synthesize callbackHandler=_callbackHandler - In the implementation block
@property (nonatomic,copy) id transmitFrameHandler;                                        //@synthesize transmitFrameHandler=_transmitFrameHandler - In the implementation block
@property (nonatomic,copy) AVBIIDCStreamConfiguration * currentConfiguration; 
@property (assign,nonatomic) unsigned maxTransitTime;                                      //@synthesize maxTransitTime=_maxTransitTime - In the implementation block
+(id)createIIDCUserOutputStreamWithStreamID:(unsigned long long)arg1 vlanID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 usingConfigurations:(id)arg5 onInterface:(id)arg6 usinggPTPClock:(id)arg7 error:(id*)arg8 ;
-(AVBIIDCStreamConfiguration *)currentConfiguration;
-(id)callbackHandler;
-(void)setCurrentConfiguration:(AVBIIDCStreamConfiguration *)arg1 ;
-(id)initWithStreamID:(unsigned long long)arg1 destinationMACAddess:(id)arg2 vlanID:(unsigned short)arg3 priorityCodePoint:(unsigned char)arg4 onInterface:(id)arg5 usinggPTPClock:(id)arg6 ;
-(char)startStreamingWithError:(id*)arg1 ;
-(char)stopStreamingWithError:(id*)arg1 ;
-(id)transmitFrameHandler;
-(void)setTransmitFrameHandler:(id)arg1 ;
-(unsigned)maxTransitTime;
-(void)setMaxTransitTime:(unsigned)arg1 ;
-(void)setCallbackHandler:(id)arg1 ;
@end

