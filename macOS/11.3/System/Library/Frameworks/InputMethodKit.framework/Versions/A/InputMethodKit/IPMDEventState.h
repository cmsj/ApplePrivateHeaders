/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IPMDEventState : NSObject {

	unsigned _theEventClass;
	unsigned short _theEventKind;
	char _eventState;

}
-(id)initWithClass:(unsigned)arg1 kind:(unsigned short)arg2 state:(char)arg3 ;
-(unsigned)theEventClass;
-(unsigned short)theEventKind;
-(char)isEqual:(unsigned)arg1 Kind:(unsigned short)arg2 ;
-(void)setEventState:(char)arg1 ;
-(char)eventState;
@end
