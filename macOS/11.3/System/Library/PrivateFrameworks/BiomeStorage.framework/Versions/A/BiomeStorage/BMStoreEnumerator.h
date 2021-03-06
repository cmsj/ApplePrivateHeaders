/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/Versions/A/BiomeStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BMStreamDatastore, BMFrameStore, BMStoreBookmark;

@interface BMStoreEnumerator : NSObject {

	BMStreamDatastore* _ds;
	BMFrameStore* _currentFrameStore;
	unsigned long long _frameStoreOffset;
	double _iterationStartTime;

}

@property (nonatomic,readonly) BMFrameStore * currentFrameStore;              //@synthesize currentFrameStore=_currentFrameStore - In the implementation block
@property (nonatomic,readonly) BMStoreBookmark * bookmark; 
-(void)dealloc;
-(BMStoreBookmark *)bookmark;
-(id)copyNextEvent;
-(id)initWithStreamDatastore:(id)arg1 currentFrameStore:(id)arg2 frameStoreOffset:(unsigned long long)arg3 iterationStartTime:(double)arg4 ;
-(id)copyPeekUntypedEvent;
-(id)copyNextUntypedEvent;
-(id)copyNextEventAndMoveBookmark:(char)arg1 ;
-(id)initWithStreamDatastore:(id)arg1 bookmark:(id)arg2 ;
-(id)initWithStreamDatastore:(id)arg1 startTime:(double)arg2 ;
-(void)nextEventWithContext:(/*^block*/id)arg1 ;
-(id)copyPeekEvent;
-(BMFrameStore *)currentFrameStore;
@end

