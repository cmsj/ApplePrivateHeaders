/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <KeynoteQuicklook/KNRecordingEvent.h>

@interface KNRecordingPauseEvent : KNRecordingEvent {

	long long _pauseEventType;

}

@property (nonatomic,readonly) long long pauseEventType;              //@synthesize pauseEventType=_pauseEventType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)loadFromMessage:(const RecordingEventArchive*)arg1 unarchiver:(id)arg2 parentEventTrack:(id)arg3 ;
-(void)saveToMessage:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(long long)pauseEventType;
-(id)initWithStartTime:(double)arg1 pauseEventType:(long long)arg2 ;
@end
