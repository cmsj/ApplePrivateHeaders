/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _PSMessagesZkwFeedback : NSObject {

	char _dryRun;
	NSString* _chatGuidEngaged;
	NSArray* _suggestions;

}

@property (assign,nonatomic) char dryRun;                                    //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,copy,readonly) NSString * chatGuidEngaged;              //@synthesize chatGuidEngaged=_chatGuidEngaged - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestions;                   //@synthesize suggestions=_suggestions - In the implementation block
-(NSArray *)suggestions;
-(char)dryRun;
-(void)setDryRun:(char)arg1 ;
-(id)feedbackPayload;
-(id)getTrialID;
-(unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
-(id)reasonTypeForSuggestionIndex:(unsigned long long)arg1 ;
-(id)reasonForSuggestionIndex:(unsigned long long)arg1 ;
-(long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)arg1 ;
-(NSString *)chatGuidEngaged;
-(id)initWithChatGuidEngagaged:(id)arg1 suggestions:(id)arg2 ;
@end

