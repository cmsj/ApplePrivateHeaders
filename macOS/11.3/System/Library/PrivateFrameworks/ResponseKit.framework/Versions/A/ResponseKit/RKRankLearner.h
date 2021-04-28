/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RKRankLearner : NSObject
-(id)init;
-(id)getDBManager:(id)arg1 ;
-(id)updateFeaturesForResponse:(id)arg1 selectCounts:(id)arg2 inputMethodCounts:(id)arg3 sourceCounts:(id)arg4 currentTime:(id)arg5 languageCode:(id)arg6 ;
-(id)rankResponses:(id)arg1 ;
-(id)getDBManager:(id)arg1 withCustomPath:(id)arg2 ;
-(char)insertRankingInfo:(id)arg1 forLanguageID:(id)arg2 ;
-(id)getRankedResponses:(id)arg1 forRecipientID:(id)arg2 withLanguageID:(id)arg3 ;
-(void)flushRankingData:(id)arg1 ;
@end
