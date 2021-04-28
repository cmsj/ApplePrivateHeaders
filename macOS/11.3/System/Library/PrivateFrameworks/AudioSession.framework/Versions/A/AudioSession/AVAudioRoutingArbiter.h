/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BTAudioSession, NSObject;

@interface AVAudioRoutingArbiter : NSObject {

	BTAudioSession* _bluetoothAudioSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)sharedRoutingArbiter;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginArbitrationWithBTSessionCategory:(int)arg1 mode:(int)arg2 flags:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)beginArbitrationWithAudioSessionCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createBTSessionWithCategory:(int)arg1 mode:(int)arg2 flags:(unsigned)arg3 ;
-(void)beginArbitrationWithCategory:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)leaveArbitration;
-(char)beginArbitrationWithAudioSessionCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
@end
