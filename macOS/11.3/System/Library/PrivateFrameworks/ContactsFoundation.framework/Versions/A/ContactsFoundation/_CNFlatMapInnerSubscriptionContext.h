/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCancelable;
@class CNSuspendableSchedulerDecorator;

@interface _CNFlatMapInnerSubscriptionContext : NSObject {

	CNSuspendableSchedulerDecorator* _decorator;
	id<CNCancelable> _token;

}

@property (readonly) CNSuspendableSchedulerDecorator * decorator;              //@synthesize decorator=_decorator - In the implementation block
@property (readonly) id<CNCancelable> token;                                   //@synthesize token=_token - In the implementation block
-(id<CNCancelable>)token;
-(id)initWithDecorator:(id)arg1 token:(id)arg2 ;
-(CNSuspendableSchedulerDecorator *)decorator;
@end

