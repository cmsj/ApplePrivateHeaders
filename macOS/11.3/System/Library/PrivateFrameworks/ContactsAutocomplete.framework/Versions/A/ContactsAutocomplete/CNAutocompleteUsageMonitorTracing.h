/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteUsageMonitorProbe.h>

@class CNTracedLogger, NSNumber, NSMutableArray, NSString;

@interface CNAutocompleteUsageMonitorTracing : NSObject <CNAutocompleteUsageMonitorProbe> {

	CNTracedLogger* _tracedLogger;
	NSNumber* _selectedIndex;
	NSNumber* _lengthOfSearchString;
	NSNumber* _sourceType;
	NSMutableArray* _otherLogs;

}

@property (nonatomic,retain) CNTracedLogger * tracedLogger;                //@synthesize tracedLogger=_tracedLogger - In the implementation block
@property (nonatomic,retain) NSNumber * selectedIndex;                     //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) NSNumber * lengthOfSearchString;              //@synthesize lengthOfSearchString=_lengthOfSearchString - In the implementation block
@property (nonatomic,retain) NSNumber * sourceType;                        //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherLogs;                   //@synthesize otherLogs=_otherLogs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)domain;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(NSNumber *)selectedIndex;
-(NSNumber *)sourceType;
-(void)setSourceType:(NSNumber *)arg1 ;
-(void)sendData;
-(void)recordDuetReturnedResults:(char)arg1 ;
-(void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1 ;
-(void)recordUserSelectedIndex:(unsigned long long)arg1 ;
-(void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1 ;
-(void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1 ;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1 ;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2 ;
-(void)recordUserSawPredictions;
-(void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1 ;
-(void)recordUserSawCuratedResults:(unsigned long long)arg1 ;
-(id)initWithTracedLogger:(id)arg1 ;
-(id)buildTraceLogWithUserAction:(id)arg1 stringLength:(id)arg2 selectedResultIndex:(id)arg3 sourceType:(unsigned long long)arg4 resultType:(id)arg5 numberOfResults:(id)arg6 ;
-(NSMutableArray *)otherLogs;
-(void)setLengthOfSearchString:(NSNumber *)arg1 ;
-(NSNumber *)lengthOfSearchString;
-(CNTracedLogger *)tracedLogger;
-(void)setTracedLogger:(CNTracedLogger *)arg1 ;
-(void)setOtherLogs:(NSMutableArray *)arg1 ;
@end

