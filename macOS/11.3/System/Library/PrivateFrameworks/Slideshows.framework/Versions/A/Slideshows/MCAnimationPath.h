/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCObjectLight.h>

@class NSString;

@interface MCAnimationPath : MCObjectLight {

	char mIsTriggered;
	char mIsSnapshot;
	NSString* mKey;

}

@property (copy) NSString * key; 
@property (assign,nonatomic) char isTriggered; 
+(id)animationPathWithKey:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)xmlElement;
-(char)isSnapshot;
-(id)imprint;
-(char)isTriggered;
-(void)setIsTriggered:(char)arg1 ;
-(void)demolish;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end
