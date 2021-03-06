/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASCUIControlTargetAction : NSObject {

	id _target;
	SEL _action;
	unsigned long long _eventMask;

}

@property (assign,nonatomic,__weak) id target;                          //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
@end

