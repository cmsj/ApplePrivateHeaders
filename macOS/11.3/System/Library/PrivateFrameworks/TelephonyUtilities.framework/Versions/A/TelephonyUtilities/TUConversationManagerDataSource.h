/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol TUConversationManagerDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * conversationsByGroupUUID; 
@property (assign,nonatomic,__weak) id<TUConversationManagerDataSourceDelegate> delegate; 
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate; 
@required
-(void)invalidate;
-(id<TUConversationManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setMediaDelegate:(id)arg1;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
-(NSDictionary *)conversationsByGroupUUID;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;
-(void)buzzMember:(id)arg1 conversation:(id)arg2;
-(void)setDownlinkMuted:(char)arg1 forRemoteParticipantsInConversation:(id)arg2;
-(id<TUConversationMediaControllerDataSourceDelegate>)mediaDelegate;

@end
