/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {

	_SCRCStackNode* _firstNode;
	_SCRCStackNode* _lastNode;
	unsigned long long _count;

}
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(char)isEmpty;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)popObjectRetained;
-(id)dequeueObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)topObject;
@end
