/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRMarimbaPlayback;
@class MPDocument, NSObject, NSOperationQueue, NSMutableSet, NSLock, NSTimer;

@interface MPFaceDetector : NSObject {

	MPDocument* mDocument;
	NSObject*<MRMarimbaPlayback> mRenderer;
	NSOperationQueue* mDetectionQueue;
	char mIsCancelled;
	NSMutableSet* mPathsInQueue;
	NSLock* mPathQueueLock;
	NSMutableSet* mPlayingSlides;
	NSLock* mPlayingSlidesLock;
	NSLock* mStartStopLock;
	NSTimer* mCheckTimer;

}

@property (nonatomic,retain) MPDocument * document; 
@property (nonatomic,retain) NSObject*<MRMarimbaPlayback> renderer; 
@property (assign,nonatomic) char isCancelled; 
-(void)dealloc;
-(id)init;
-(void)resume;
-(void)start;
-(void)suspend;
-(char)isCancelled;
-(void)stop;
-(char)suspended;
-(MPDocument *)document;
-(void)_start;
-(void)setDocument:(MPDocument *)arg1 ;
-(NSObject*<MRMarimbaPlayback>)renderer;
-(void)setRenderer:(NSObject*<MRMarimbaPlayback>)arg1 ;
-(void)_setupTimer;
-(void)setIsCancelled:(char)arg1 ;
-(void)detectFaces:(id)arg1 ;
-(char)_pathIsInQueue:(id)arg1 ;
-(void)_addPathToQueue:(id)arg1 ;
-(void)_removePathToQueue:(id)arg1 ;
-(void)_checkPlayingSlides;
-(void)checkPlayingSlides;
@end

