/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPVoteStats : NSObject {

	long long _votes;
	long long _count;

}

@property (assign,nonatomic) long long votes;              //@synthesize votes=_votes - In the implementation block
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(float)rate;
-(id)initWithVotes:(long long)arg1 andCount:(long long)arg2 ;
-(long long)votes;
-(void)setVotes:(long long)arg1 ;
@end

