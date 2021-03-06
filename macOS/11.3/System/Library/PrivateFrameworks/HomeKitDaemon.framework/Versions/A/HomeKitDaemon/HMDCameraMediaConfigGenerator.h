/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMDCameraMediaConfigGenerator : HMFObject
-(char)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id*)arg2 audioStreamConfig:(id*)arg3 ;
-(char)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id*)arg2 ;
-(char)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(char)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(char)_loadConfig:(id)arg1 cipherCuite:(id)arg2 ;
-(void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3 ;
-(void)_loadMiscConfig:(id)arg1 ;
@end

