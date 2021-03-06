/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSData;

@interface VSHash : NSObject {

	char _finalized;
	NSData* _finalData;
	CC_SHA256state_st _ctx;

}

@property (assign,getter=isFinalized,nonatomic) char finalized;              //@synthesize finalized=_finalized - In the implementation block
@property (assign,nonatomic) CC_SHA256state_st ctx;                          //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,copy) NSData * finalData;                               //@synthesize finalData=_finalData - In the implementation block
-(void)dealloc;
-(id)init;
-(CC_SHA256state_st)ctx;
-(void)setCtx:(CC_SHA256state_st)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(void)updateWithDate:(id)arg1 ;
-(char)isFinalized;
-(void)updateWithString:(id)arg1 ;
-(NSData *)finalData;
-(void)setFinalData:(NSData *)arg1 ;
-(void)setFinalized:(char)arg1 ;
-(void)updateWithInteger:(long long)arg1 ;
-(void)updateWithUUID:(id)arg1 ;
@end

