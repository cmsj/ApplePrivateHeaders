/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSXPCServerObserver : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic) id observer;               //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;              //@synthesize selector=_selector - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end
