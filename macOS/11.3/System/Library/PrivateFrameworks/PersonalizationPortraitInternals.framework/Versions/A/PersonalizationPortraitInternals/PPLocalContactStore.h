/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPContactStorage;

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {

	PPContactStorage* _contactStorage;

}
+(id)defaultStore;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)meCard;
-(id)initWithStorage:(id)arg1 ;
-(char)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)contactHandlesForTopics:(id)arg1 error:(id*)arg2 ;
-(id)contactHandlesForSource:(id)arg1 error:(id*)arg2 ;
-(id)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)contactsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(id)arg3 error:(id*)arg4 ;
-(id)scoredContactsWithContacts:(id)arg1 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 ;
-(id)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 ;
-(id)contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2 ;
-(void)clearChangeHistoryForClient:(id)arg1 historyResult:(id)arg2 ;
-(char)chineseBirthdayFound;
@end

