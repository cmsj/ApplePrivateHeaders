/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/Versions/A/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFStateDumpable.h>
#import <libobjc.A.dylib/MFResettable.h>
#import <libobjc.A.dylib/MFAudioSessionControlling.h>

@class NSDictionary;

@interface MediaFoundation.PlaybackStackController : _UKNOWN_SUPERCLASS_ <MFStateDumpable, MFResettable, MFAudioSessionControlling> {

	 queueController;
	 queueAssetLoader;
	 playerController;
	 reporter;
	 internalController;
	 errorController;
	 backgroundTaskController;
	 currentSetQueueIdentifier;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(void)reset;
-(NSDictionary *)stateDictionary;
-(void)updateAudioSessionWithConfiguration:(id)arg1 ;
-(char)setAudioSessionActive:(char)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
@end

