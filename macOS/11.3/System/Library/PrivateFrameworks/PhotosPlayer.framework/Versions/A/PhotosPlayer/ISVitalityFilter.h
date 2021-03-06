/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISVitalitySettings;
@class NSDate;

@interface ISVitalityFilter : NSObject {

	char _isVisible;
	char _hasTargetVisibilityOffset;
	char _isScrolling;
	char _isDecelerating;
	char _scrubbing;
	char __isPerformingInputChanges;
	char __isPerformingOutputChanges;
	char __outputDidChange;
	id<ISVitalitySettings> _settings;
	double _visibilityOffset;
	double _targetVisibilityOffset;
	NSDate* _estimatedScrollEndDate;
	double _scrubOffset;
	double _playRate;
	/*^block*/id _outputChangeHandler;

}

@property (assign,setter=_setPerformingInputChanges:,nonatomic) char _isPerformingInputChanges;                //@synthesize _isPerformingInputChanges=__isPerformingInputChanges - In the implementation block
@property (assign,setter=_setPerformingOutputChanges:,nonatomic) char _isPerformingOutputChanges;              //@synthesize _isPerformingOutputChanges=__isPerformingOutputChanges - In the implementation block
@property (assign,setter=_setOutputDidChange:,nonatomic) char _outputDidChange;                                //@synthesize _outputDidChange=__outputDidChange - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) char scrubbing;                                                //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,nonatomic) double scrubOffset;                                                               //@synthesize scrubOffset=_scrubOffset - In the implementation block
@property (assign,nonatomic) double playRate;                                                                  //@synthesize playRate=_playRate - In the implementation block
@property (nonatomic,readonly) id<ISVitalitySettings> settings;                                                //@synthesize settings=_settings - In the implementation block
@property (assign,setter=setVisible:,nonatomic) char isVisible;                                                //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) double visibilityOffset;                                                          //@synthesize visibilityOffset=_visibilityOffset - In the implementation block
@property (assign,nonatomic) char hasTargetVisibilityOffset;                                                   //@synthesize hasTargetVisibilityOffset=_hasTargetVisibilityOffset - In the implementation block
@property (assign,nonatomic) double targetVisibilityOffset;                                                    //@synthesize targetVisibilityOffset=_targetVisibilityOffset - In the implementation block
@property (nonatomic,retain) NSDate * estimatedScrollEndDate;                                                  //@synthesize estimatedScrollEndDate=_estimatedScrollEndDate - In the implementation block
@property (assign,setter=setScrolling:,nonatomic) char isScrolling;                                            //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,setter=setDecelerating:,nonatomic) char isDecelerating;                                      //@synthesize isDecelerating=_isDecelerating - In the implementation block
@property (nonatomic,copy) id outputChangeHandler;                                                             //@synthesize outputChangeHandler=_outputChangeHandler - In the implementation block
-(id)init;
-(char)isVisible;
-(void)setVisible:(char)arg1 ;
-(char)isScrolling;
-(id)initWithSettings:(id)arg1 ;
-(id<ISVitalitySettings>)settings;
-(void)setScrolling:(char)arg1 ;
-(char)isScrubbing;
-(void)setScrubbing:(char)arg1 ;
-(char)isDecelerating;
-(double)visibilityOffset;
-(char)hasTargetVisibilityOffset;
-(double)targetVisibilityOffset;
-(NSDate *)estimatedScrollEndDate;
-(void)setEstimatedScrollEndDate:(NSDate *)arg1 ;
-(void)setDecelerating:(char)arg1 ;
-(void)setTargetVisibilityOffset:(double)arg1 ;
-(void)setHasTargetVisibilityOffset:(char)arg1 ;
-(void)setVisibilityOffset:(double)arg1 ;
-(char)_isPerformingInputChanges;
-(void)_setPerformingInputChanges:(char)arg1 ;
-(void)setOutputChangeHandler:(id)arg1 ;
-(double)playRate;
-(id)outputChangeHandler;
-(void)performInputChanges:(/*^block*/id)arg1 ;
-(char)_isPerformingOutputChanges;
-(char)_outputDidChange;
-(double)scrubOffset;
-(void)performOutputChanges:(/*^block*/id)arg1 ;
-(void)_invalidateOutput;
-(void)inputDidChange;
-(void)setScrubOffset:(double)arg1 ;
-(void)setPlayRate:(double)arg1 ;
-(void)_setPerformingOutputChanges:(char)arg1 ;
-(void)_setOutputDidChange:(char)arg1 ;
@end

