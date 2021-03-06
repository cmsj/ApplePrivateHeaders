/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSTranscriptDelegate <NSObject>
@required
-(void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;
-(void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;
-(void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;
-(void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;
-(void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;
-(void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;
-(void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;
-(id)viewControllerDelegateForTranscript:(id)arg1;

@end

