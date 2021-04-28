/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraStream, NSNumber;

@interface HMCameraStream : HMCameraSource {

	_HMCameraStream* _stream;

}

@property (nonatomic,retain) _HMCameraStream * stream;                             //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSNumber * audioVolume; 
@property (nonatomic,readonly) unsigned long long audioStreamSetting; 
-(id)initWithStream:(id)arg1 ;
-(_HMCameraStream *)stream;
-(void)setStream:(_HMCameraStream *)arg1 ;
-(NSNumber *)audioVolume;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(unsigned long long)audioStreamSetting;
-(void)updateAudioVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
