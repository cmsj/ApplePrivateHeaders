/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioPowerSpectrumBin : NSObject {

	VCRange _frequencyRange;
	float _powerLevel;

}

@property (assign,nonatomic) VCRange frequencyRange;              //@synthesize frequencyRange=_frequencyRange - In the implementation block
@property (assign,nonatomic) float powerLevel;                    //@synthesize powerLevel=_powerLevel - In the implementation block
-(id)description;
-(float)powerLevel;
-(VCRange)frequencyRange;
-(id)initWithFrequencyRange:(VCRange)arg1 ;
-(void)setFrequencyRange:(VCRange)arg1 ;
-(void)setPowerLevel:(float)arg1 ;
@end

