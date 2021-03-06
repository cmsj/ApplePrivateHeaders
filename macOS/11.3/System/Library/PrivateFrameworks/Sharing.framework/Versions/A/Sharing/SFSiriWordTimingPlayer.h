/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, SFSiriWordTimingInfo, NSString, NSArray;

@interface SFSiriWordTimingPlayer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _wordIndex;
	SFSiriWordTimingInfo* _wordInfo;
	unsigned _flags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _startTime;
	NSString* _text;
	/*^block*/id _wordHandler;
	NSArray* _wordTimings;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) id wordHandler;                                            //@synthesize wordHandler=_wordHandler - In the implementation block
@property (nonatomic,copy) NSArray * wordTimings;                                     //@synthesize wordTimings=_wordTimings - In the implementation block
-(void)_processNextWord;
-(void)_processWord;
-(id)wordHandler;
-(void)setWordHandler:(id)arg1 ;
-(unsigned)flags;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)activate;
-(void)setFlags:(unsigned)arg1 ;
-(NSString *)text;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)wordTimings;
-(void)setWordTimings:(NSArray *)arg1 ;
@end

