/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge {

	GKScore* _score;

}

@property (nonatomic,readonly) GKLeaderboard * leaderboard; 
@property (nonatomic,retain) GKScore * score;                            //@synthesize score=_score - In the implementation block
+(char)instancesRespondToSelector:(SEL)arg1 ;
-(id)iconURLString;
-(id)listTitleText;
-(id)detailGoalText;
-(id)iconSource;
-(id)smallIconURLString;
-(id)alertGoalText;
-(id)listGoalText;
-(id)composeGoalText;
-(id)description;
-(GKScore *)score;
-(id)titleText;
-(void)setScore:(GKScore *)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(char)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2 ;
@end

