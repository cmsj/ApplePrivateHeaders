/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSoundDelegate.h>

@class TURepeatingActor, NSSound, NSString;

@interface TUNSSoundPlayer : NSObject <NSSoundDelegate> {

	TURepeatingActor* _repeatingActor;
	NSSound* _sound;
	/*^block*/id _iterationComplete;

}

@property (nonatomic,retain) TURepeatingActor * repeatingActor;              //@synthesize repeatingActor=_repeatingActor - In the implementation block
@property (nonatomic,retain) NSSound * sound;                                //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) id iterationComplete;                             //@synthesize iterationComplete=_iterationComplete - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSSound *)sound;
-(void)setSound:(NSSound *)arg1 ;
-(void)sound:(id)arg1 didFinishPlaying:(char)arg2 ;
-(char)isPlaying;
-(void)setRepeatingActor:(TURepeatingActor *)arg1 ;
-(void)playSound:(id)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopPlaying;
-(void)setIterationComplete:(id)arg1 ;
-(TURepeatingActor *)repeatingActor;
-(id)iterationComplete;
-(void)playSound:(id)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 ;
@end
