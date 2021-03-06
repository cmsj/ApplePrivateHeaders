/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSearchSuggestion.h>
@class NSString, _SFPBGraphicalFloat, NSArray, NSDictionary, NSData;


@protocol _SFPBSearchSuggestion <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * suggestion; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) _SFPBGraphicalFloat * score; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSArray * duplicateSuggestions; 
@property (nonatomic,copy) NSString * topicIdentifier; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) char previouslyEngaged; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * utteranceText; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,copy) NSDictionary * serverFeatures; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(int)arg1;
-(int)type;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setQuery:(id)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(_SFPBGraphicalFloat *)score;
-(NSString *)detailText;
-(void)setScore:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setDetailText:(id)arg1;
-(NSString *)suggestion;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(NSString *)topicIdentifier;
-(void)setSuggestion:(id)arg1;
-(void)setServerFeatures:(id)arg1;
-(void)setUtteranceText:(id)arg1;
-(void)setPreviouslyEngaged:(char)arg1;
-(NSDictionary *)serverFeatures;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(id)arg1;
-(void)setTopicIdentifier:(id)arg1;
-(char)previouslyEngaged;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
-(NSString *)utteranceText;
-(void)addDuplicateSuggestions:(id)arg1;
-(void)setServerFeatures:(double)arg1 forKey:(id)arg2;
-(void)clearDuplicateSuggestions;
-(unsigned long long)duplicateSuggestionsCount;
-(id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
-(char)getServerFeatures:(double*)arg1 forKey:(id)arg2;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBGraphicalFloat, NSArray, NSDictionary, NSData;

@interface _SFPBSearchSuggestion : PBCodable <_SFPBSearchSuggestion, NSSecureCoding> {

	char _previouslyEngaged;
	int _type;
	NSString* _identifier;
	NSString* _suggestion;
	NSString* _query;
	_SFPBGraphicalFloat* _score;
	NSArray* _duplicateSuggestions;
	NSString* _topicIdentifier;
	NSString* _bundleIdentifier;
	NSString* _fbr;
	NSString* _scopedSearchApplicationBundleIdentifier;
	NSString* _utteranceText;
	NSString* _detailText;
	NSDictionary* _serverFeatures;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * suggestion;                                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSString * query;                                                //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * score;                                   //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) int type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * duplicateSuggestions;                                  //@synthesize duplicateSuggestions=_duplicateSuggestions - In the implementation block
@property (nonatomic,copy) NSString * topicIdentifier;                                      //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) char previouslyEngaged;                                        //@synthesize previouslyEngaged=_previouslyEngaged - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                                  //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier;              //@synthesize scopedSearchApplicationBundleIdentifier=_scopedSearchApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * utteranceText;                                        //@synthesize utteranceText=_utteranceText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                                           //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSDictionary * serverFeatures;                                   //@synthesize serverFeatures=_serverFeatures - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setQuery:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBGraphicalFloat *)score;
-(NSString *)detailText;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(_SFPBGraphicalFloat *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)suggestion;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(NSString *)topicIdentifier;
-(void)setSuggestion:(NSString *)arg1 ;
-(void)setServerFeatures:(NSDictionary *)arg1 ;
-(void)setUtteranceText:(NSString *)arg1 ;
-(void)setPreviouslyEngaged:(char)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSDictionary *)serverFeatures;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(NSArray *)arg1 ;
-(void)setTopicIdentifier:(NSString *)arg1 ;
-(char)previouslyEngaged;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)utteranceText;
-(void)addDuplicateSuggestions:(id)arg1 ;
-(void)setServerFeatures:(double)arg1 forKey:(id)arg2 ;
-(void)clearDuplicateSuggestions;
-(unsigned long long)duplicateSuggestionsCount;
-(id)duplicateSuggestionsAtIndex:(unsigned long long)arg1 ;
-(char)getServerFeatures:(double*)arg1 forKey:(id)arg2 ;
@end

