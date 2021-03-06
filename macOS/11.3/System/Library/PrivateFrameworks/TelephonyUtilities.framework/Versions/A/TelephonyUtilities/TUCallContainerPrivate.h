/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, TUCall;


@protocol TUCallContainerPrivate <TUCallContainer>
@property (nonatomic,copy,readonly) NSArray * _allCalls; 
@property (nonatomic,readonly) TUCall * displayedCall; 
@property (nonatomic,readonly) TUCall * conferenceCall; 
@property (nonatomic,readonly) TUCall * frontmostCall; 
@property (nonatomic,retain,readonly) TUCall * frontmostAudioOrVideoCall; 
@property (nonatomic,readonly) char existingCallsHaveMultipleProviders; 
@required
-(TUCall *)conferenceCall;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2;
-(NSArray *)_allCalls;
-(TUCall *)displayedCall;
-(TUCall *)frontmostCall;
-(TUCall *)frontmostAudioOrVideoCall;
-(char)existingCallsHaveMultipleProviders;

@end

