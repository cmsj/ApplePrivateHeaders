/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIKeyboardTouchEvent;

@interface TIKBSessionTouchInfo : NSObject {

	TIKeyboardTouchEvent* _touch;
	unsigned long long _layoutId;

}

@property (nonatomic,retain) TIKeyboardTouchEvent * touch;              //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) unsigned long long layoutId;               //@synthesize layoutId=_layoutId - In the implementation block
-(TIKeyboardTouchEvent *)touch;
-(void)setTouch:(TIKeyboardTouchEvent *)arg1 ;
-(unsigned long long)layoutId;
-(void)setLayoutId:(unsigned long long)arg1 ;
@end

