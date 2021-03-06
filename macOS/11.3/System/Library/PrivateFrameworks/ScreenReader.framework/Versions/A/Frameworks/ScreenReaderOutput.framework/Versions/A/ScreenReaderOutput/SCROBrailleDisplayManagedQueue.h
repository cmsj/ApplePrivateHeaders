/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject {

	SCRCIndexMap* _stateQueueMap;
	CFDictionaryRef _queueStateDict;
	CFDictionaryRef _displayQueueDict;
	SCRCIndexMap* _tokenDisplayMap;
	unsigned long long _maxActiveQueueSize;

}
-(void)dealloc;
-(id)init;
-(void)removeDisplay:(id)arg1 ;
-(id)_queueForState:(int)arg1 createQueue:(char)arg2 ;
-(void)_fillActiveBrailleDisplayQueue;
-(id)disconnectedDisplays;
-(void)addDisplay:(id)arg1 withState:(int)arg2 ;
-(void)setState:(int)arg1 forDisplay:(id)arg2 ;
-(int)stateForDisplay:(id)arg1 ;
-(id)displayForToken:(int)arg1 ;
-(unsigned long long)displayCountIncludingDisconnectedDisplays:(char)arg1 ;
-(id)primaryDisplay;
-(void)setPrimaryDisplay:(id)arg1 ;
-(unsigned long long)activeQueueMaximumSize;
-(void)setActiveQueueMaximumSize:(unsigned long long)arg1 ;
-(id)activeDisplays;
-(id)activePendingDisplays;
-(id)sleepingDisplays;
-(id)loadingDisplays;
@end

