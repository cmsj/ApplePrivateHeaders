/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TITypingSessionAggregatedEventObserver.h>

@protocol TIDPReportingDelegate;
@class TIKeyboardInputManager, NSString;

@interface TIDPEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver> {

	id<TIDPReportingDelegate> _reportingDelegate;
	TIKeyboardInputManager* _inputManager;

}

@property (assign,nonatomic,__weak) TIKeyboardInputManager * inputManager;              //@synthesize inputManager=_inputManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TIKeyboardInputManager *)inputManager;
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2 ;
-(void)setInputManager:(TIKeyboardInputManager *)arg1 ;
-(id)initWithInputManager:(id)arg1 ;
-(id)initWithInputManager:(id)arg1 reportingDelegate:(id)arg2 ;
@end

