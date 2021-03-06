/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceContactsProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceContactsConfirmRejectProtocol,_SGSuggestionsServiceContactsObserverProtocol>
@required
-(id)cnContactMatchesForRecordIds:(id)arg1 error:(id*)arg2;
-(id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(id)contactFromRecordID:(id)arg1 error:(id*)arg2;
-(id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(id)contactMatchesByEmailAddress:(id)arg1 error:(id*)arg2;
-(id)contactMatchesByPhoneNumber:(id)arg1 error:(id*)arg2;
-(id)originFromRecordId:(id)arg1 error:(id*)arg2;
-(void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(char)arg3 onlySignificant:(char)arg4 withCompletion:(/*^block*/id)arg5;
-(void)allContactsWithSnippets:(char)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(char)arg3 onlySignificant:(char)arg4 error:(id*)arg5;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(char)arg3 withCompletion:(/*^block*/id)arg4;
-(id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(char)arg3 error:(id*)arg4;
-(void)contactFromRecordID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(id)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(void)originFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;

@end

