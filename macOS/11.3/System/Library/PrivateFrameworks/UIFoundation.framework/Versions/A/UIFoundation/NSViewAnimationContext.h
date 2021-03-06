/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NSViewAnimationContext : NSObject {

	NSArray* _viewAnimations;
	long long _animationCount;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSArray * viewAnimations;              //@synthesize viewAnimations=_viewAnimations - In the implementation block
@property (assign,nonatomic) long long animationCount;              //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,readonly) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(NSArray *)viewAnimations;
-(void)setViewAnimations:(NSArray *)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
@end

