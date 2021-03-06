/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/Versions/A/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFCategoryJudgement : NSObject {

	float _score;
	long long _category;

}

@property (assign) float score;                     //@synthesize score=_score - In the implementation block
@property (assign) long long category;              //@synthesize category=_category - In the implementation block
+(id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2 ;
-(long long)compareByCategory:(id)arg1 ;
-(long long)compareByScore:(id)arg1 ;
-(id)description;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(float)score;
-(void)setScore:(float)arg1 ;
@end

