/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardInput;

@interface TISKInputEvent : TISKEvent {

	double _downErrorDistance;
	double _upErrorDistance;
	char _canComputeErrorDistance;
	char _ignoreTapData;
	TIKeyboardInput* _input;

}

@property (nonatomic,retain) TIKeyboardInput * input;              //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) char ignoreTapData;                   //@synthesize ignoreTapData=_ignoreTapData - In the implementation block
+(id)makeInputEvent:(id)arg1 emojiSearchMode:(char)arg2 order:(long long)arg3 wordSeparator:(id)arg4 accentedLanguage:(char)arg5 ;
-(TIKeyboardInput *)input;
-(void)setInput:(TIKeyboardInput *)arg1 ;
-(id)upTouchEvent;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(char)isMissingATouch;
-(id)init:(id)arg1 type:(int)arg2 emojiSearchMode:(char)arg3 order:(long long)arg4 ;
-(double)downUpTimeDelta;
-(void)_computeErrorDistance;
-(double)touchDownErrorDistance;
-(double)touchUpErrorDistance;
-(char)ignoreTapData;
-(void)setIgnoreTapData:(char)arg1 ;
@end

