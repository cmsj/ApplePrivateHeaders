/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ConsoleKit/ConsoleKit-Structs.h>
@class NSArray, NSObject;

@interface CSKDirectoryObserver : NSObject {

	char _recursive;
	char _ignoreFiles;
	char _isEventStreamStarted;
	NSArray* _URLs;
	NSObject*<OS_dispatch_queue> _eventQueue;
	id _representedObject;
	double _eventInterval;
	/*^block*/id _eventHandler;
	FSEventStreamRef _eventStream;

}

@property (nonatomic,copy) id eventHandler;                                        //@synthesize eventHandler=_eventHandler - In the implementation block
@property (assign,nonatomic) FSEventStreamRef eventStream;                         //@synthesize eventStream=_eventStream - In the implementation block
@property (assign,nonatomic) char isEventStreamStarted;                            //@synthesize isEventStreamStarted=_isEventStreamStarted - In the implementation block
@property (nonatomic,readonly) NSArray * URLs;                                     //@synthesize URLs=_URLs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,retain) id representedObject;                                 //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) char recursive;                                       //@synthesize recursive=_recursive - In the implementation block
@property (assign,nonatomic) char ignoreFiles;                                     //@synthesize ignoreFiles=_ignoreFiles - In the implementation block
@property (assign,nonatomic) double eventInterval;                                 //@synthesize eventInterval=_eventInterval - In the implementation block
-(void)dealloc;
-(id)init;
-(void)start;
-(NSArray *)URLs;
-(void)setRepresentedObject:(id)arg1 ;
-(void)stop;
-(id)representedObject;
-(FSEventStreamRef)eventStream;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(void)setEventStream:(FSEventStreamRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(void)setRecursive:(char)arg1 ;
-(char)recursive;
-(void)setEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)eventInterval;
-(id)initWithURLs:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
-(void)setIsEventStreamStarted:(char)arg1 ;
-(char)isEventStreamStarted;
-(id)initWithURL:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
-(char)ignoreFiles;
-(void)setIgnoreFiles:(char)arg1 ;
-(void)setEventInterval:(double)arg1 ;
@end
