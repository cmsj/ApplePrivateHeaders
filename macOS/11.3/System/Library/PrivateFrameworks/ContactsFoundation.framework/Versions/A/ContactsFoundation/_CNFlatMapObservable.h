/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNSchedulerProvider;
@class CNObservable;

@interface _CNFlatMapObservable : CNObservable {

	CNObservable* _observable;
	/*^block*/id _decoratorGenerator;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (readonly) CNObservable * observable;                              //@synthesize observable=_observable - In the implementation block
@property (copy,readonly) id decoratorGenerator;                             //@synthesize decoratorGenerator=_decoratorGenerator - In the implementation block
@property (readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
+(id)concatMapWithObservable:(id)arg1 transform:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)flatMapWithObservable:(id)arg1 transform:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)observableWithObservable:(id)arg1 transform:(/*^block*/id)arg2 decoratorGenerator:(/*^block*/id)arg3 schedulerProvider:(id)arg4 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)subscribe:(id)arg1 ;
-(CNObservable *)observable;
-(id)initWithObservable:(id)arg1 transform:(/*^block*/id)arg2 decoratorGenerator:(/*^block*/id)arg3 schedulerProvider:(id)arg4 ;
-(id)subscribeInnerObservable:(id)arg1 observer:(id)arg2 context:(id)arg3 ;
-(id)decoratorGenerator;
@end

