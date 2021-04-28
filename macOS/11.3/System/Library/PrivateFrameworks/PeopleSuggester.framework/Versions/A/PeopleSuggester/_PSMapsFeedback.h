/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PSMapsFeedbackAction, _PSMapsPredictionContext, NSArray;

@interface _PSMapsFeedback : NSObject {

	char _dryRun;
	_PSMapsFeedbackAction* _action;
	_PSMapsPredictionContext* _context;
	NSArray* _suggestions;

}

@property (assign,nonatomic) char dryRun;                                                //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,readonly) _PSMapsFeedbackAction * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) _PSMapsPredictionContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                                    //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfEngagedSuggestion; 
-(_PSMapsFeedbackAction *)action;
-(_PSMapsPredictionContext *)context;
-(NSArray *)suggestions;
-(char)dryRun;
-(void)setDryRun:(char)arg1 ;
-(unsigned long long)indexOfEngagedSuggestion;
-(id)knowledgeEvent;
-(id)feedbackPayload;
-(id)getTrialID;
-(id)initWithFeedbackAction:(id)arg1 predictionContext:(id)arg2 suggestions:(id)arg3 ;
@end
