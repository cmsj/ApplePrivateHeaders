/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MKDirectionalArrowRecognizer : NSObject {

	id _target;
	SEL _action;
	long long _state;
	long long _arrows;
	long long _lastArrows;

}

@property (assign,nonatomic) long long state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long arrows;                  //@synthesize arrows=_arrows - In the implementation block
@property (nonatomic,readonly) long long lastArrows;              //@synthesize lastArrows=_lastArrows - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)keyDown:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(long long)arrows;
-(long long)lastArrows;
-(void)handleArrowMask:(long long)arg1 ;
@end

