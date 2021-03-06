/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/Versions/A/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _FMObserverProxy : NSObject {

	char _valid;
	id _weakObserver;

}

@property (nonatomic,__weak,readonly) id weakObserver;                 //@synthesize weakObserver=_weakObserver - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid;              //@synthesize valid=_valid - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(id)weakObserver;
-(id)initWithWeakObserver:(id)arg1 ;
@end

