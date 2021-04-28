/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKAchievementInternal, NSImage, NSString;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {

	GKAchievementInternal* _internal;
	NSImage* _image;

}

@property (nonatomic,retain) NSImage * image;                                    //@synthesize image=_image - In the implementation block
@property (retain) GKAchievementInternal * internal;                             //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSString * groupIdentifier; 
@property (copy,readonly) NSString * title; 
@property (copy,readonly) NSString * achievedDescription; 
@property (copy,readonly) NSString * unachievedDescription; 
@property (readonly) long long maximumPoints; 
@property (getter=isHidden,readonly) char hidden; 
@property (getter=isReplayable,nonatomic,readonly) char replayable; 
+(id)incompleteAchievementImage;
+(id)placeholderCompletedAchievementImage;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(char)supportsSecureCoding;
+(void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_achievementDescriptionFromGame:(id)arg1 propertyListDictionary:(id)arg2 ;
+(id)_loadLocalAchievementDescriptionsForGame:(id)arg1 ;
+(void)loadAchievementDescriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageURL;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showBanner;
-(char)isEqual:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSImage *)image;
-(GKAchievementInternal *)internal;
-(void)setInternal:(GKAchievementInternal *)arg1 ;
-(id)game;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)imageNameForIcon;
@end
