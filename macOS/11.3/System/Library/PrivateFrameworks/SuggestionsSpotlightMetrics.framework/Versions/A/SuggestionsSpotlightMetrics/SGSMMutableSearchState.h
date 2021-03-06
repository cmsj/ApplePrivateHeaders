/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/Versions/A/SuggestionsSpotlightMetrics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight, NSMutableSet;

@interface SGSMMutableSearchState : NSObject {

	SGMContactOpportunityInSpotlight* _contactOpportunity;
	SGMContactResultInSpotlight* _contactResult;
	SGMContactResultSelectedInSpotlight* _contactSelected;
	SGMNoResultSelectedInSpotlight* _noneSelected;
	SGMOtherResultSelectedInSpotlight* _otherSelected;
	unsigned short _contactResultCount;
	unsigned short _contactOpportunityCount;
	unsigned char _contactConversionCount;
	unsigned char _contactLossCount;
	unsigned short _curatedOrPseudoContactOpportunityCount;
	unsigned char _otherSelectedCount;
	unsigned char _nonOpportunityCount;
	char _justEngaged;
	NSMutableSet* _resultsSeen;

}
-(id)description;
-(id)init;
-(void)commit;
-(char)isFirstTimeSeeingResult:(id)arg1 ;
-(void)resetConversionCounts;
-(void)resetCounts;
-(void)scoreAsNonOpportunity;
-(void)scoreAsOtherConversion;
-(void)scoreAsContactResult;
-(void)scoreAsContactOpportunity;
-(void)scoreAsCuratedOrPseudoContactOpportunity;
-(void)scoreAsContactConversion;
-(void)scoreAsContactLoss;
-(void)setJustEngaged;
-(void)resetJustEngaged;
-(char)justEngaged;
@end

