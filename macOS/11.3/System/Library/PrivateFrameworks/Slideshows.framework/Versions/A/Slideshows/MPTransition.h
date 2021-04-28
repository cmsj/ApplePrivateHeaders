/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface MPTransition : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	id _parent;
	NSString* _transitionID;
	NSString* _presetID;
	double _duration;
	char _isRandom;
	long long _randomSeed;

}

@property (nonatomic,copy) NSString * transitionID;              //@synthesize transitionID=_transitionID - In the implementation block
@property (nonatomic,copy) NSString * presetID;                  //@synthesize presetID=_presetID - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
+(id)transitionWithTransitionID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parent;
-(void)dump;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setParent:(id)arg1 ;
-(long long)randomSeed;
-(id)parentContainer;
-(id)parentDocument;
-(void)setRandomSeed:(long long)arg1 ;
-(void)setIsRandom:(char)arg1 ;
-(char)isRandom;
-(NSString *)transitionID;
-(void)setTransitionAttributes:(id)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(id)transitionAttributeForKey:(id)arg1 ;
-(id)transitionAttributes;
-(id)_transitionAttributes;
-(void)copyVars:(id)arg1 ;
-(id)convertMPAttributeToMCAttribute:(id)arg1 withKey:(id)arg2 ;
-(id)fullDebugLog;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(id)transitionPresetID;
-(void)setTransitionAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)applyFormattedAttributes;
-(id)formattedAttributes;
-(id)initWithTransitionID:(id)arg1 ;
-(void)copyAttribures:(id)arg1 ;
-(double)findMaxDuration;
@end
