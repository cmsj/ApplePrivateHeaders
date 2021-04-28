/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/PRSQueryTask.h>

@class PARSession, SFSearchSuggestion, PARTask;

@interface PRSCoreParsecQueryTask : PRSQueryTask {

	PARSession* _parSession;
	char _parsecEnabled;
	SFSearchSuggestion* _suggestion;
	PARTask* _task;

}

@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (retain) PARTask * task;                                         //@synthesize task=_task - In the implementation block
-(void)resume;
-(PARTask *)task;
-(void)setTask:(PARTask *)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(void)setParsecState:(char)arg1 ;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
-(char)needsBag;
-(void)handleResults:(id)arg1 ;
-(id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 queryContext:(id)arg5 queryIdent:(unsigned long long)arg6 ;
@end
