/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/Versions/A/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSSimpleAssertion.h>

@class ITIdleTimerConfiguration, NSString;

@interface ITIdleTimerAssertion : BSSimpleAssertion {

	ITIdleTimerConfiguration* _configuration;

}

@property (getter=_uniqueReason,nonatomic,copy,readonly) NSString * uniqueReason; 
@property (nonatomic,copy,readonly) ITIdleTimerConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
-(ITIdleTimerConfiguration *)configuration;
-(id)succinctDescriptionBuilder;
-(id)_uniqueReason;
-(id)_initWithConfiguration:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
@end
