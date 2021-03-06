/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Virtualization.framework/Versions/A/Virtualization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _VZMouseEvent : NSObject {

	long long _pressedButtons;
	double _deltaX;
	double _deltaY;

}

@property (readonly) long long pressedButtons;              //@synthesize pressedButtons=_pressedButtons - In the implementation block
@property (readonly) double deltaX;                         //@synthesize deltaX=_deltaX - In the implementation block
@property (readonly) double deltaY;                         //@synthesize deltaY=_deltaY - In the implementation block
-(double)deltaX;
-(double)deltaY;
-(id)initWithEvent:(id)arg1 ;
-(long long)pressedButtons;
-(id)initWithPressedButtons:(long long)arg1 deltaX:(double)arg2 deltaY:(double)arg3 ;
@end

