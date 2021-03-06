/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVVCConfigureAlertBehaviorSettings : NSObject {

	unsigned long long _streamID;
	long long _startAlert;
	long long _stopAlert;
	long long _stopOnErrorAlert;

}

@property (assign,nonatomic) unsigned long long streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) long long startAlert;                     //@synthesize startAlert=_startAlert - In the implementation block
@property (assign,nonatomic) long long stopAlert;                      //@synthesize stopAlert=_stopAlert - In the implementation block
@property (assign,nonatomic) long long stopOnErrorAlert;               //@synthesize stopOnErrorAlert=_stopOnErrorAlert - In the implementation block
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(void)setStartAlert:(long long)arg1 ;
-(void)setStopAlert:(long long)arg1 ;
-(void)setStopOnErrorAlert:(long long)arg1 ;
-(long long)startAlert;
-(long long)stopAlert;
-(long long)stopOnErrorAlert;
-(id)initWithStreamID:(unsigned long long)arg1 ;
@end

