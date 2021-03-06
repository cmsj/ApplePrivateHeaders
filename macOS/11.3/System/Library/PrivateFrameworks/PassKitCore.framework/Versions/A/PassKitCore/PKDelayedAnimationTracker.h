/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject {

	CALayer* _layer;
	NSString* _key;
	/*^block*/id _removalAction;

}

@property (nonatomic,__weak,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) id removalAction;                        //@synthesize removalAction=_removalAction - In the implementation block
-(id)init;
-(NSString *)key;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(void)removeAnimationIfPossible;
-(id)removalAction;
-(void)setRemovalAction:(id)arg1 ;
@end

