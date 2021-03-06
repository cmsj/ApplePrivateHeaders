/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>
@required
-(char)sleep:(id*)arg1;
-(id)powerState;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(char)resetConfirmationAndRejectionHistory:(id*)arg1;
-(void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(/*^block*/id)arg5;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)clearCachesFully:(char)arg1 withCompletion:(/*^block*/id)arg2;
-(void)drainQueueCompletelyWithCompletion:(/*^block*/id)arg1;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1;
-(void)daemonExitWithCompletion:(/*^block*/id)arg1;
-(void)sleepWithCompletion:(/*^block*/id)arg1;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5;
-(void)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)deleteCloudKitZoneWithCompletion:(/*^block*/id)arg1;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteInteractionsWithBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(/*^block*/id)arg3;
-(void)addSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withCompletion:(/*^block*/id)arg5;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resetConfirmationAndRejectionHistoryWithCompletion:(/*^block*/id)arg1;
-(char)clearCachesFully:(char)arg1 error:(id*)arg2;
-(id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
-(id)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
-(char)sendRTCLogs:(id*)arg1;
-(char)daemonExit:(id*)arg1;
-(void)suggestionsFromMockData:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

