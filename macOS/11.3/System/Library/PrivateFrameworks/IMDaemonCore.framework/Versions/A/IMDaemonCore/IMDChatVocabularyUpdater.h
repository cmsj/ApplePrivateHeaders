/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDChatRegistry, _INVocabulary;

@interface IMDChatVocabularyUpdater : NSObject {

	char _haveDeferredUpdateRequest;
	IMDChatRegistry* _chatRegistry;
	_INVocabulary* _vocabulary;

}

@property (nonatomic,retain) IMDChatRegistry * chatRegistry;              //@synthesize chatRegistry=_chatRegistry - In the implementation block
@property (nonatomic,retain) _INVocabulary * vocabulary;                  //@synthesize vocabulary=_vocabulary - In the implementation block
@property (assign,nonatomic) char haveDeferredUpdateRequest;              //@synthesize haveDeferredUpdateRequest=_haveDeferredUpdateRequest - In the implementation block
+(id)sharedInstance;
+(void)performInitialUpdateIfNeeded;
-(void)dealloc;
-(IMDChatRegistry *)chatRegistry;
-(id)initWithChatRegistry:(id)arg1 vocabulary:(id)arg2 ;
-(void)_updateVocabularyExcludingChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForAddedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForDeletedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForRenamedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForDeferredUpdateRequestIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setChatRegistry:(IMDChatRegistry *)arg1 ;
-(_INVocabulary *)vocabulary;
-(void)setVocabulary:(_INVocabulary *)arg1 ;
-(char)haveDeferredUpdateRequest;
-(void)setHaveDeferredUpdateRequest:(char)arg1 ;
@end

