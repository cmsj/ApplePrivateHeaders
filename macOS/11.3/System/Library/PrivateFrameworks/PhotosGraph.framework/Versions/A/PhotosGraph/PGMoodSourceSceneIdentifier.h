/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGMoodSourceSceneIdentifier : NSObject {

	char _isDistributed;
	char _isHighConfidence;
	NSString* _moodIdentifier;

}

@property (retain) NSString * moodIdentifier;              //@synthesize moodIdentifier=_moodIdentifier - In the implementation block
@property (assign) char isDistributed;                     //@synthesize isDistributed=_isDistributed - In the implementation block
@property (assign) char isHighConfidence;                  //@synthesize isHighConfidence=_isHighConfidence - In the implementation block
-(char)isHighConfidence;
-(NSString *)moodIdentifier;
-(void)setMoodIdentifier:(NSString *)arg1 ;
-(char)isDistributed;
-(void)setIsDistributed:(char)arg1 ;
-(void)setIsHighConfidence:(char)arg1 ;
@end
