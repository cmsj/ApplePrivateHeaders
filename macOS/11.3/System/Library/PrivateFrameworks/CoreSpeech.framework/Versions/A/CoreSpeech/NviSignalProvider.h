/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NviSignalProvider <NSObject>
@property (nonatomic,readonly) unsigned long long sigType; 
@required
-(void)reset;
-(void)removeDelegate:(id)arg1;
-(void)addDelegate:(id)arg1;
-(id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1;
-(unsigned long long)sigType;

@end

