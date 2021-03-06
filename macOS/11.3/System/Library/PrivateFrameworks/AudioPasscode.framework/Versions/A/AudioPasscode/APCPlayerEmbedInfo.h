/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/Versions/A/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APCPlayerEmbedInfo : NSObject {

	unsigned long long _estPasscodeDuration;
	unsigned long long _measPasscodeDuration;

}

@property (nonatomic,readonly) unsigned long long estPasscodeDuration;              //@synthesize estPasscodeDuration=_estPasscodeDuration - In the implementation block
@property (assign,nonatomic) unsigned long long measPasscodeDuration;               //@synthesize measPasscodeDuration=_measPasscodeDuration - In the implementation block
-(char)isValid;
-(id)initWithPasscodeDurationNSec:(unsigned long long)arg1 ;
-(unsigned long long)estPasscodeDuration;
-(unsigned long long)measPasscodeDuration;
-(void)setMeasPasscodeDuration:(unsigned long long)arg1 ;
@end

