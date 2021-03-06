/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class _TVRCMRTelevisionWrapper, _TVRCMROriginWrapper, _TVRCMRVirtualTouchDeviceWrapper;

@interface _TVRCMediaRemoteEventTranslator : NSObject {

	_TVRCMRTelevisionWrapper* _television;
	_TVRCMROriginWrapper* _origin;

}

@property (assign,nonatomic,__weak) _TVRCMRTelevisionWrapper * television;                  //@synthesize television=_television - In the implementation block
@property (assign,nonatomic,__weak) _TVRCMROriginWrapper * origin;                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) _TVRCMRVirtualTouchDeviceWrapper * touchDevice; 
-(_TVRCMRVirtualTouchDeviceWrapper *)touchDevice;
-(_TVRCMROriginWrapper *)origin;
-(void)setOrigin:(_TVRCMROriginWrapper *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(char)_isMediaButtonEvent:(id)arg1 ;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)sendTouchEvent:(id)arg1 withDeviceID:(unsigned long long)arg2 ;
-(unsigned)_commandForMediaButtonEvent:(id)arg1 ;
-(id)_commandOptionsForMediaButtonEvent:(id)arg1 command:(unsigned)arg2 ;
-(MRHIDButtonEvent)_createMRHIDButtonEventTemplateWithButtonType:(long long)arg1 ;
-(MRHIDTouchEvent)_createMRHIDTouchEvent:(id)arg1 ;
@end

