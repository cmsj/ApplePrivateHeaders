/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/Frameworks/DictationServices.framework/Versions/A/DictationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOCommandCreationManagerDelegate;
@class NSMutableArray;

@interface SOCommandCreationManager : NSObject {

	NSMutableArray* _activeEditors;
	id<SOCommandCreationManagerDelegate> _delegate;

}

@property (readonly) NSMutableArray * activeEditors;                                     //@synthesize activeEditors=_activeEditors - In the implementation block
@property (assign,nonatomic) id<SOCommandCreationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id<SOCommandCreationManagerDelegate>)delegate;
-(void)setDelegate:(id<SOCommandCreationManagerDelegate>)arg1 ;
-(void)startCreatingCommandForAppPID:(int)arg1 nounSpecifiers:(id)arg2 ;
-(void)finishedCreatingCommandWithWindowController:(id)arg1 ;
-(void)cancelAllActiveEditors;
-(NSMutableArray *)activeEditors;
@end

