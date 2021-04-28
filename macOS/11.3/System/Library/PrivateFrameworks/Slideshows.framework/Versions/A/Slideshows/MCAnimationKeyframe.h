/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCObjectLight.h>

@class MCAnimationPathKeyframed;

@interface MCAnimationKeyframe : MCObjectLight {

	MCAnimationPathKeyframed* mAnimationPath;
	char mIsSnapshot;
	int mTimeOffsetKind;
	float mPreControl;
	float mPostControl;
	double mTimeOffset;

}

@property (assign) MCAnimationPathKeyframed * animationPath; 
@property (assign,nonatomic) double timeOffset; 
@property (assign,nonatomic) int timeOffsetKind; 
@property (assign,nonatomic) float preControl; 
@property (assign,nonatomic) float postControl; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)description;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(id)xmlElement;
-(char)isSnapshot;
-(id)imprint;
-(MCAnimationPathKeyframed *)animationPath;
-(void)setTimeOffsetKind:(int)arg1 ;
-(void)setPreControl:(float)arg1 ;
-(void)setPostControl:(float)arg1 ;
-(float)preControl;
-(float)postControl;
-(void)setAnimationPath:(MCAnimationPathKeyframed *)arg1 ;
-(void)demolish;
-(int)timeOffsetKind;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end
