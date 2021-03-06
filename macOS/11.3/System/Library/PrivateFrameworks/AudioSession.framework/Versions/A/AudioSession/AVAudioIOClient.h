/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioSession/AudioSession-Structs.h>
@class AVAudioIOController;

@interface AVAudioIOClient : NSObject {

	AVAudioIOController* _ioController;
	shared_ptr<as::client::IOClient>* _impl;

}

@property (assign,nonatomic) shared_ptr<as::client::IOClient>* impl;                   //@synthesize impl=_impl - In the implementation block
@property (nonatomic,__weak,readonly) AVAudioIOController * IOController; 
@property (nonatomic,readonly) char outputEnabled; 
@property (nonatomic,readonly) char inputEnabled; 
@property (nonatomic,copy) id IOEventBlock; 
-(void)stop;
-(char)inputEnabled;
-(char)outputEnabled;
-(shared_ptr<as::client::IOClient>*)impl;
-(void)setImpl:(shared_ptr<as::client::IOClient>*)arg1 ;
-(char)startAndReturnError:(id*)arg1 ;
-(id)initWithIOController:(id)arg1 impl:(shared_ptr<as::client::IOClient>*)arg2 ;
-(AVAudioIOController *)IOController;
-(char)startWithoutWaitingAndReturnError:(id*)arg1 ;
-(char)startAsyncAndReturnError:(id*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)IOEventBlock;
-(void)setIOEventBlock:(id)arg1 ;
@end

