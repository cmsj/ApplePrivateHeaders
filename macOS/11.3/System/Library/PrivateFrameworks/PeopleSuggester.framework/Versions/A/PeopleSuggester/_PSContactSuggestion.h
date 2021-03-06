/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary;

@interface _PSContactSuggestion : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _suggestedHandle;
	double _regularityScore;
	unsigned long long _totalFrequency;
	NSSet* _daysInteracted;
	NSDictionary* _handleAndAppFrequencies;
	NSDictionary* _handleAndAppRegularityScores;

}

@property (assign,nonatomic) double regularityScore;                                 //@synthesize regularityScore=_regularityScore - In the implementation block
@property (assign,nonatomic) unsigned long long totalFrequency;                      //@synthesize totalFrequency=_totalFrequency - In the implementation block
@property (nonatomic,copy) NSSet * daysInteracted;                                   //@synthesize daysInteracted=_daysInteracted - In the implementation block
@property (nonatomic,copy) NSDictionary * handleAndAppFrequencies;                   //@synthesize handleAndAppFrequencies=_handleAndAppFrequencies - In the implementation block
@property (nonatomic,copy) NSDictionary * handleAndAppRegularityScores;              //@synthesize handleAndAppRegularityScores=_handleAndAppRegularityScores - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                             //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                     //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                    //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * suggestedHandle;                               //@synthesize suggestedHandle=_suggestedHandle - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSDictionary *)handleAndAppFrequencies;
-(void)setHandleAndAppFrequencies:(NSDictionary *)arg1 ;
-(void)setHandleAndAppRegularityScores:(NSDictionary *)arg1 ;
-(NSSet *)daysInteracted;
-(void)setDaysInteracted:(NSSet *)arg1 ;
-(void)setSuggestedHandle:(NSString *)arg1 ;
-(void)setTotalFrequency:(unsigned long long)arg1 ;
-(void)setRegularityScore:(double)arg1 ;
-(double)regularityScore;
-(unsigned long long)totalFrequency;
-(NSString *)suggestedHandle;
-(NSDictionary *)handleAndAppRegularityScores;
@end

