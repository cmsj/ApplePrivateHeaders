/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SOAudioMessageWaveForm : NSObject {

	unsigned long long _maxPowerLevelsCount;
	unsigned long long _powerLevelsCount;
	double* _powerLevels;
	double _duration;

}

@property (assign,nonatomic) unsigned long long maxPowerLevelsCount;              //@synthesize maxPowerLevelsCount=_maxPowerLevelsCount - In the implementation block
@property (assign,nonatomic) unsigned long long powerLevelsCount;                 //@synthesize powerLevelsCount=_powerLevelsCount - In the implementation block
@property (assign,nonatomic) double* powerLevels;                                 //@synthesize powerLevels=_powerLevels - In the implementation block
@property (assign) double duration;                                               //@synthesize duration=_duration - In the implementation block
+(double)widestScreenWidth;
-(void)dealloc;
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double*)powerLevels;
-(void)setPowerLevels:(double*)arg1 ;
-(void)clearPowerLevels;
-(void)appendPowerLevel:(double)arg1 ;
-(void)setMaxPowerLevelsCount:(unsigned long long)arg1 ;
-(unsigned long long)maxPowerLevelsCount;
-(id)renderedWaveForm:(char)arg1 ;
-(char)setPowerLevelsWithURL:(id)arg1 ;
-(void)initializePowerLevels;
-(void)setPowerLevelsCount:(unsigned long long)arg1 ;
-(unsigned long long)powerLevelsCount;
-(unsigned long long)_waveformPowerLevelsCountForDuration:(double)arg1 ;
-(void)setPowerLevels:(double*)arg1 withCount:(unsigned long long)arg2 ;
-(void)adjustPowerLevelsCountToScreenSize;
@end
