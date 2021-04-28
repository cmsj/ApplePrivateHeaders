/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PRSRankingConfiguration, NSError, NSArray, NSDictionary, NSString;

@interface SPKResponse : NSObject {

	char _topHitIsIn;
	char _noChangeInResultsSinceLastResponse;
	char _parsecFinished;
	char _metadataFinished;
	char _corespotlightFinished;
	char _queryResponseComplete;
	char _isRewrite;
	char _didReceiveLaterThanRenderTimeout;
	char _suggestionsAreBlended;
	int _kind;
	PRSRankingConfiguration* _rankingConfiguration;
	unsigned long long _queryId;
	NSError* _error;
	NSArray* _sections;
	NSDictionary* _groupedResults;
	NSString* _fbq;
	NSString* _userQueryString;
	NSString* _correctedQuery;
	NSArray* _suggestions;
	NSArray* _added;
	NSArray* _changed;
	NSArray* _removed;

}

@property (retain) PRSRankingConfiguration * rankingConfiguration;              //@synthesize rankingConfiguration=_rankingConfiguration - In the implementation block
@property (readonly) int kind;                                                  //@synthesize kind=_kind - In the implementation block
@property (readonly) unsigned long long queryId;                                //@synthesize queryId=_queryId - In the implementation block
@property (readonly) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (readonly) NSArray * sections;                                        //@synthesize sections=_sections - In the implementation block
@property (readonly) NSDictionary * groupedResults;                             //@synthesize groupedResults=_groupedResults - In the implementation block
@property (assign) char topHitIsIn;                                             //@synthesize topHitIsIn=_topHitIsIn - In the implementation block
@property (assign) char noChangeInResultsSinceLastResponse;                     //@synthesize noChangeInResultsSinceLastResponse=_noChangeInResultsSinceLastResponse - In the implementation block
@property (assign) char parsecFinished;                                         //@synthesize parsecFinished=_parsecFinished - In the implementation block
@property (assign) char metadataFinished;                                       //@synthesize metadataFinished=_metadataFinished - In the implementation block
@property (assign) char corespotlightFinished;                                  //@synthesize corespotlightFinished=_corespotlightFinished - In the implementation block
@property (retain) NSString * fbq;                                              //@synthesize fbq=_fbq - In the implementation block
@property (assign) char queryResponseComplete;                                  //@synthesize queryResponseComplete=_queryResponseComplete - In the implementation block
@property (retain) NSString * userQueryString;                                  //@synthesize userQueryString=_userQueryString - In the implementation block
@property (assign) char isRewrite;                                              //@synthesize isRewrite=_isRewrite - In the implementation block
@property (assign) char didReceiveLaterThanRenderTimeout;                       //@synthesize didReceiveLaterThanRenderTimeout=_didReceiveLaterThanRenderTimeout - In the implementation block
@property (retain) NSString * correctedQuery;                                   //@synthesize correctedQuery=_correctedQuery - In the implementation block
@property (assign) char suggestionsAreBlended;                                  //@synthesize suggestionsAreBlended=_suggestionsAreBlended - In the implementation block
@property (retain) NSArray * suggestions;                                       //@synthesize suggestions=_suggestions - In the implementation block
@property (readonly) NSArray * added;                                           //@synthesize added=_added - In the implementation block
@property (readonly) NSArray * changed;                                         //@synthesize changed=_changed - In the implementation block
@property (readonly) NSArray * removed;                                         //@synthesize removed=_removed - In the implementation block
-(id)description;
-(NSError *)error;
-(int)kind;
-(NSDictionary *)groupedResults;
-(NSArray *)sections;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)added;
-(NSArray *)removed;
-(NSArray *)changed;
-(NSString *)userQueryString;
-(unsigned long long)queryId;
-(id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 sections:(id)arg3 ;
-(void)setTopHitIsIn:(char)arg1 ;
-(id)initWithQueryID:(unsigned long long)arg1 sections:(id)arg2 ;
-(void)setCorrectedQuery:(NSString *)arg1 ;
-(void)setSuggestionsAreBlended:(char)arg1 ;
-(void)setDidReceiveLaterThanRenderTimeout:(char)arg1 ;
-(PRSRankingConfiguration *)rankingConfiguration;
-(void)setFbq:(NSString *)arg1 ;
-(void)setUserQueryString:(NSString *)arg1 ;
-(NSString *)correctedQuery;
-(char)isRewrite;
-(void)setIsRewrite:(char)arg1 ;
-(char)topHitIsIn;
-(NSString *)fbq;
-(char)suggestionsAreBlended;
-(id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 sections:(id)arg3 groupedResults:(id)arg4 error:(id)arg5 ;
-(void)setNoChangeInResultsSinceLastResponse:(char)arg1 ;
-(char)parsecFinished;
-(void)setParsecFinished:(char)arg1 ;
-(void)setRankingConfiguration:(PRSRankingConfiguration *)arg1 ;
-(char)metadataFinished;
-(void)setMetadataFinished:(char)arg1 ;
-(char)corespotlightFinished;
-(void)setCorespotlightFinished:(char)arg1 ;
-(void)setQueryResponseComplete:(char)arg1 ;
-(char)didReceiveLaterThanRenderTimeout;
-(char)queryResponseComplete;
-(char)noChangeInResultsSinceLastResponse;
-(id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 sections:(id)arg3 groupedResults:(id)arg4 ;
-(id)initWithQueryID:(unsigned long long)arg1 error:(id)arg2 ;
@end
