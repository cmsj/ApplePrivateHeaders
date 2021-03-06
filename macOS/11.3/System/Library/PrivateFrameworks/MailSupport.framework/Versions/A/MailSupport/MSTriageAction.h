/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSTriageActionDelegate;
@class MSMessageListItemSelection, EMMessageRepository;

@interface MSTriageAction : NSObject {

	id<MSTriageActionDelegate> _delegate;
	MSMessageListItemSelection* _messageListItemSelection;

}

@property (nonatomic,readonly) MSMessageListItemSelection * messageListItemSelection;              //@synthesize messageListItemSelection=_messageListItemSelection - In the implementation block
@property (nonatomic,readonly) EMMessageRepository * messageRepository; 
@property (nonatomic,__weak,readonly) id<MSTriageActionDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
+(id)log;
+(void)_performAction:(id)arg1 messageRepository:(id)arg2 undoManager:(id)arg3 actionName:(id)arg4 ;
-(id<MSTriageActionDelegate>)delegate;
-(EMMessageRepository *)messageRepository;
-(MSMessageListItemSelection *)messageListItemSelection;
-(id)_changeAction;
-(void)performWithUndoManager:(id)arg1 actionName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 ;
@end

