/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class AVVoiceTriggerClient, NSObject;

@interface CSVoiceTriggerAlwaysOnProcessor : NSObject {

	AVVoiceTriggerClient* _alwaysOnProcessorController;
	NSObject*<OS_dispatch_group> _aopSwitchGroup;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)enableVoiceTriggerOnAlwaysOnProcessorWithAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableVoiceTriggerOnAlwaysOnProcessorWithCompletion:(/*^block*/id)arg1 ;
-(void)_setBuiltInRTModelDictionary:(id)arg1 ;
@end

