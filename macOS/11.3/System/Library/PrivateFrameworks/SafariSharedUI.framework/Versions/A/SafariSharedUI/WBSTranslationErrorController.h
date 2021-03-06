/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSTranslationErrorControllerDelegate;
@class NSCountedSet, NSMutableSet;

@interface WBSTranslationErrorController : NSObject {

	NSCountedSet* _errorCounter;
	NSMutableSet* _errorKeysReachingThreshold;
	id<WBSTranslationErrorControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSTranslationErrorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)invalidate;
-(id<WBSTranslationErrorControllerDelegate>)delegate;
-(void)setDelegate:(id<WBSTranslationErrorControllerDelegate>)arg1 ;
-(void)addError:(id)arg1 ;
-(id)_overriddenThresholdForError:(id)arg1 ;
@end

