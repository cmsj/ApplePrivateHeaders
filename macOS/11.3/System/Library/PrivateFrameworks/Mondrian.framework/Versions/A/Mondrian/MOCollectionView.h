/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <UXKit/UXCollectionView.h>

@interface MOCollectionView : UXCollectionView {

	char _isAutomating;
	char _needsLiveScrollingAutomationCleanup;
	char _needsScrollingScoreKeeperCleanup;

}

@property (assign,nonatomic) char isAutomating;              //@synthesize isAutomating=_isAutomating - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_automatedLiveScrollingWillBegin;
-(void)_automatedLiveScrollingDidEnd;
-(id)mediaView;
-(void)_willTerminateNotification;
-(char)isScrollingScoreKeeperEnabled;
-(void)enableScrollingScoreKeeper;
-(void)disableScrollingScoreKeeper;
-(void)automateLiveScrolling;
-(void)automateLiveScrollingWithLaps:(unsigned long long)arg1 andStepSize:(double)arg2 ;
-(void)_automateLiveScrollingWithRecordingData:(id)arg1 ;
-(void)automateLiveScrollingWithRecordingFilePath:(id)arg1 ;
-(void)automateLiveScrollingWithRecordingPasteboardData;
-(void)cleanupLiveScrollingAutomation;
-(void)automationWillBegin;
-(void)automationDidEnd;
-(void)cleanupAutomation;
-(char)isAutomating;
-(void)setIsAutomating:(char)arg1 ;
@end
