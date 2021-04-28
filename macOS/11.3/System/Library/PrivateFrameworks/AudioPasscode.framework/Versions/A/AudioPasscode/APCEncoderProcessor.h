/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/Versions/A/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AUPasscodeEncoder, AUAudioUnitOfflineProcessor, APCPlayerEmbedInfo;

@interface APCEncoderProcessor : NSObject {

	AUPasscodeEncoder* _encoderAU;
	AUAudioUnitOfflineProcessor* _processor;
	APCPlayerEmbedInfo* _passcodeEmbedInfo;

}
-(void)run;
-(float)evaluateAsset:(id)arg1 ;
-(id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 outputURL:(id)arg4 error:(id*)arg5 ;
-(char)getEmbeddingInfo:(id*)arg1 ;
@end
