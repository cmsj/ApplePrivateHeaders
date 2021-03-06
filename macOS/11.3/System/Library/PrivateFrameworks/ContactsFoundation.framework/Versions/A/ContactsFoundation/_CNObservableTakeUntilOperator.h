/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/_CNObservableTakeUntilInputObserverDelegate.h>
#import <libobjc.A.dylib/_CNObservableTakeUntilSignalObserverDelegate.h>

@protocol CNCancelable;
@class CNObservable, NSString;

@interface _CNObservableTakeUntilOperator : CNObservable <_CNObservableTakeUntilInputObserverDelegate, _CNObservableTakeUntilSignalObserverDelegate> {

	char _active;
	CNObservable* _input;
	CNObservable* _signal;
	id<CNCancelable> _inputToken;
	id<CNCancelable> _signalToken;

}

@property (readonly) CNObservable * input;                          //@synthesize input=_input - In the implementation block
@property (readonly) CNObservable * signal;                         //@synthesize signal=_signal - In the implementation block
@property (getter=isActive) char active;                            //@synthesize active=_active - In the implementation block
@property (retain) id<CNCancelable> inputToken;                     //@synthesize inputToken=_inputToken - In the implementation block
@property (retain) id<CNCancelable> signalToken;                    //@synthesize signalToken=_signalToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(char)isActive;
-(void)cancel;
-(CNObservable *)signal;
-(CNObservable *)input;
-(void)setActive:(char)arg1 ;
-(id)subscribe:(id)arg1 ;
-(char)shouldMirrorEvent:(id)arg1 ;
-(id)initWithInput:(id)arg1 signal:(id)arg2 ;
-(void)setSignalToken:(id<CNCancelable>)arg1 ;
-(void)setInputToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)inputToken;
-(id<CNCancelable>)signalToken;
-(void)signalDidGenerateEventWithObserver:(id)arg1 ;
@end

