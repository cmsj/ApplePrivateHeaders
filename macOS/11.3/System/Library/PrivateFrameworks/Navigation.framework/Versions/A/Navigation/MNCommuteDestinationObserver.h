/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCommuteDestinationObserver <NSObject>
@optional
-(void)commuteDestination:(id)arg1 didChangeInvalid:(char)arg2;
-(void)commuteDestination:(id)arg1 didChangeName:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didUpdateTrafficForRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastMatchedLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingDistance:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRerouting:(char)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeScore:(long long)arg2;
-(void)commuteDestination:(id)arg1 didChangeScores:(id)arg2;

@end

