/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TMCopyOperation : NSObject {

	unsigned long long _action;
	NSURL* _propagationItemURL;
	NSURL* _deltaItemURL;

}

@property (readonly) unsigned long long action;               //@synthesize action=_action - In the implementation block
@property (readonly) NSURL * propagationItemURL;              //@synthesize propagationItemURL=_propagationItemURL - In the implementation block
@property (readonly) NSURL * deltaItemURL;                    //@synthesize deltaItemURL=_deltaItemURL - In the implementation block
+(id)skipOperation;
+(id)copyOperation;
+(id)linkOperationWithURL:(id)arg1 ;
+(id)moveOperationWithURL:(id)arg1 ;
+(id)cloneOperationWithURL:(id)arg1 ;
+(id)cloneAndDeltaOperationWithURL:(id)arg1 deltaURL:(id)arg2 ;
-(unsigned long long)action;
-(id)initWithAction:(unsigned long long)arg1 propagationURL:(id)arg2 deltaURL:(id)arg3 ;
-(NSURL *)propagationItemURL;
-(NSURL *)deltaItemURL;
@end

