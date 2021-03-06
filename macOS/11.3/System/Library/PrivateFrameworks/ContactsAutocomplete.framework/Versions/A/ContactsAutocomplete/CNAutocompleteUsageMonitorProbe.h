/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteUsageMonitorProbe <CNAutocompleteProbe>
@required
-(void)recordDuetReturnedResults:(char)arg1;
-(void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
-(void)recordUserSelectedIndex:(unsigned long long)arg1;
-(void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
-(void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
-(void)recordUserSawPredictions;
-(void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
-(void)recordUserSawCuratedResults:(unsigned long long)arg1;

@end

