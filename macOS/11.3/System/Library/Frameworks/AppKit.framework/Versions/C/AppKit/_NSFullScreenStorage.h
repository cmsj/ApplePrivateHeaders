/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface _NSFullScreenStorage : NSObject {

	NSSet* _participatingWindowNumbersDuringEnterTransition;
	NSSet* _participatingWindowNumbersDuringExitTransition;
	NSSet* _allSpaceParticipatingWindowNumbersDuringEnterTransition;
	unsigned long long _startingSpaceID;

}

@property (copy) NSSet * participatingWindowNumbersDuringEnterTransition;                      //@synthesize participatingWindowNumbersDuringEnterTransition=_participatingWindowNumbersDuringEnterTransition - In the implementation block
@property (copy) NSSet * participatingWindowNumbersDuringExitTransition;                       //@synthesize participatingWindowNumbersDuringExitTransition=_participatingWindowNumbersDuringExitTransition - In the implementation block
@property (copy) NSSet * allSpaceParticipatingWindowNumbersDuringEnterTransition;              //@synthesize allSpaceParticipatingWindowNumbersDuringEnterTransition=_allSpaceParticipatingWindowNumbersDuringEnterTransition - In the implementation block
@property (assign) unsigned long long startingSpaceID;                                         //@synthesize startingSpaceID=_startingSpaceID - In the implementation block
-(void)dealloc;
-(NSSet *)participatingWindowNumbersDuringEnterTransition;
-(NSSet *)participatingWindowNumbersDuringExitTransition;
-(void)setParticipatingWindowNumbersDuringExitTransition:(NSSet *)arg1 ;
-(void)setParticipatingWindowNumbersDuringEnterTransition:(NSSet *)arg1 ;
-(void)setAllSpaceParticipatingWindowNumbersDuringEnterTransition:(NSSet *)arg1 ;
-(NSSet *)allSpaceParticipatingWindowNumbersDuringEnterTransition;
-(unsigned long long)startingSpaceID;
-(void)setStartingSpaceID:(unsigned long long)arg1 ;
@end

