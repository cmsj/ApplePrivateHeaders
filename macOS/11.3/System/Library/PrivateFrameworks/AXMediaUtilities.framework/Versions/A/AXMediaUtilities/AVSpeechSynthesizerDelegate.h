/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3;

@end

