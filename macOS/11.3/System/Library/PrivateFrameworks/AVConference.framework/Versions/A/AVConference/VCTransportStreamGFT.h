/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCTransportStreamGFT : NSObject {

	unsigned _transportSessionID;
	int _vtpReceiveSocket;
	int _vtpCancelSocket;
	tagVCMediaQueueRef _mediaQueue;
	/*^block*/id _callback;
	void* _callbackContext;
	int _vtpCallbackId;
	fd_set _readFDsForCallback;

}

@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;              //@synthesize mediaQueue=_mediaQueue - In the implementation block
-(void)dealloc;
-(tagVCMediaQueueRef)mediaQueue;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 options:(id)arg2 ;
-(int)VCTransportStreamSendPacket:(SCD_Struct_VC195*)arg1 ;
-(int)registerPacketCallbackContext:(void*)arg1 callback:(/*^block*/id)arg2 ;
-(void)VCTransportStreamUnblock;
-(int)unregisterPacketCallback;
-(int)receivePacket:(SCD_Struct_VC195*)arg1 ;
-(void)processVTPPacket:(VTPPacket*)arg1 ;
@end

