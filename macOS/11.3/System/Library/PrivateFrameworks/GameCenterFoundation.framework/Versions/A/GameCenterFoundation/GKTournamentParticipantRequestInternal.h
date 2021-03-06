/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray;

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation {

	char _friendsOnly;
	NSArray* _participantStates;
	long long _startIndex;
	long long _count;

}

@property (nonatomic,retain) NSArray * participantStates;              //@synthesize participantStates=_participantStates - In the implementation block
@property (assign,nonatomic) char friendsOnly;                         //@synthesize friendsOnly=_friendsOnly - In the implementation block
@property (assign,nonatomic) long long startIndex;                     //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long count;                          //@synthesize count=_count - In the implementation block
+(id)secureCodedPropertyKeys;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(NSArray *)participantStates;
-(char)friendsOnly;
-(void)setParticipantStates:(NSArray *)arg1 ;
-(void)setFriendsOnly:(char)arg1 ;
@end

