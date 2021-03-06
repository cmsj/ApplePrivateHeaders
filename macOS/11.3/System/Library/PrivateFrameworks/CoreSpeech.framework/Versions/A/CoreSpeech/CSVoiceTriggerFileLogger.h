/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>
#import <libobjc.A.dylib/CSSelfTriggerDetectorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2 ;
-(id)_audioLogDirectory;
-(id)_timeStampString;
-(id)_metaFilenameWithPrefix:(id)arg1 ;
-(void)_writeDictionary:(id)arg1 toPath:(id)arg2 ;
-(void)_clearOldLoggingFiles;
@end

