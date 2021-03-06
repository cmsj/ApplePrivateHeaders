/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, VCEmulatedOutputQueue;

@interface VCEmulatedNetwork : NSObject {

	NSDictionary* _policies;
	/*^block*/id _pushCompletionHandler;
	/*^block*/id _popCompletionHandler;
	VCEmulatedOutputQueue* _outputQueue;
	unsigned _numberOfPacketsWaitingInOutputQueue;

}

@property (nonatomic,readonly) unsigned numberOfPacketsWaitingInOutputQueue;              //@synthesize numberOfPacketsWaitingInOutputQueue=_numberOfPacketsWaitingInOutputQueue - In the implementation block
@property (nonatomic,copy) id pushCompletionHandler;                                      //@synthesize pushCompletionHandler=_pushCompletionHandler - In the implementation block
@property (nonatomic,copy) id popCompletionHandler;                                       //@synthesize popCompletionHandler=_popCompletionHandler - In the implementation block
-(void)dealloc;
-(void)push:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(unsigned)numberOfPacketsWaitingInOutputQueue;
-(id)copyPacketFromPop;
-(void)runUntilTime:(double)arg1 ;
-(id)pushCompletionHandler;
-(void)setPushCompletionHandler:(id)arg1 ;
-(id)popCompletionHandler;
-(void)setPopCompletionHandler:(id)arg1 ;
@end

