/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SiriUITranscriptItem, NSView;

@interface SVSTranscriptAnimation : NSObject {

	double _creationTime;
	SiriUITranscriptItem* _transcriptItem;
	NSView* _replacedView;
	long long _updateType;
	long long _insertionAnimationType;
	long long _replacementAnimationType;
	long long _pinAnimationType;
	long long _updateAnimationType;

}

@property (assign,nonatomic) long long updateAnimationType;                        //@synthesize updateAnimationType=_updateAnimationType - In the implementation block
@property (nonatomic,readonly) double creationTime;                                //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) SiriUITranscriptItem * transcriptItem;              //@synthesize transcriptItem=_transcriptItem - In the implementation block
@property (nonatomic,readonly) NSView * replacedView;                              //@synthesize replacedView=_replacedView - In the implementation block
@property (nonatomic,readonly) long long updateType;                               //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) long long insertionAnimationType;                   //@synthesize insertionAnimationType=_insertionAnimationType - In the implementation block
@property (nonatomic,readonly) long long replacementAnimationType;                 //@synthesize replacementAnimationType=_replacementAnimationType - In the implementation block
@property (nonatomic,readonly) long long pinAnimationType;                         //@synthesize pinAnimationType=_pinAnimationType - In the implementation block
+(id)animationForTranscriptItem:(id)arg1 updateType:(long long)arg2 ;
+(id)confirmationAnimationForTranscriptItem:(id)arg1 ;
+(id)animationForTranscriptItem:(id)arg1 updateType:(long long)arg2 replacedView:(id)arg3 ;
+(id)cancellationAnimationForTranscriptItem:(id)arg1 ;
-(id)description;
-(double)animationDelay;
-(long long)updateType;
-(double)creationTime;
-(SiriUITranscriptItem *)transcriptItem;
-(long long)insertionAnimationType;
-(long long)replacementAnimationType;
-(NSView *)replacedView;
-(long long)pinAnimationType;
-(long long)updateAnimationType;
-(id)initWithTranscriptItem:(id)arg1 replacedView:(id)arg2 updateType:(long long)arg3 ;
-(void)setUpdateAnimationType:(long long)arg1 ;
-(id)_aceViewControllerIfExists;
-(id)_snippetViewControllerIfExists;
-(id)_animationTypeString;
@end

