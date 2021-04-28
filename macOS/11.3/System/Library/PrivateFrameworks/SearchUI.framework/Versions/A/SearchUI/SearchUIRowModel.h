/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, SFSearchResult, SFCardSection, SFCard, NSString, NSURL;

@interface SearchUIRowModel : NSObject {

	char _isTappable;
	char _isDraggable;
	char _supportsCustomUserReportRequestAfforance;
	char _hasLeadingImage;
	char _prefersNoSeparatorAbove;
	NSArray* _results;
	SFSearchResult* _identifyingResult;
	SFCardSection* _cardSection;
	NSArray* _punchouts;
	NSArray* _contactIdentifiers;
	Class _cellViewClass;
	SFCard* _nextCard;
	unsigned long long _queryId;
	NSString* _dragTitle;
	NSString* _dragSubtitle;
	NSString* _dragText;
	NSURL* _dragURL;
	NSString* _dragAppBundleID;

}

@property (nonatomic,retain) NSArray * results;                                            //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) SFSearchResult * identifyingResult;                           //@synthesize identifyingResult=_identifyingResult - In the implementation block
@property (nonatomic,retain) SFCardSection * cardSection;                                  //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,readonly) NSArray * punchouts;                                        //@synthesize punchouts=_punchouts - In the implementation block
@property (nonatomic,readonly) NSArray * contactIdentifiers;                               //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,readonly) Class cellViewClass;                                        //@synthesize cellViewClass=_cellViewClass - In the implementation block
@property (nonatomic,readonly) SFCard * nextCard;                                          //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,readonly) char isTappable;                                            //@synthesize isTappable=_isTappable - In the implementation block
@property (nonatomic,readonly) int separatorStyle; 
@property (nonatomic,readonly) unsigned long long queryId;                                 //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,readonly) char isDraggable;                                           //@synthesize isDraggable=_isDraggable - In the implementation block
@property (nonatomic,readonly) NSString * dragTitle;                                       //@synthesize dragTitle=_dragTitle - In the implementation block
@property (nonatomic,readonly) NSString * dragSubtitle;                                    //@synthesize dragSubtitle=_dragSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * dragText;                                        //@synthesize dragText=_dragText - In the implementation block
@property (nonatomic,readonly) NSURL * dragURL;                                            //@synthesize dragURL=_dragURL - In the implementation block
@property (nonatomic,readonly) NSString * dragAppBundleID;                                 //@synthesize dragAppBundleID=_dragAppBundleID - In the implementation block
@property (nonatomic,readonly) char isQuerySuggestion; 
@property (nonatomic,readonly) NSString * accessibilityIdentifier; 
@property (nonatomic,readonly) char supportsCustomUserReportRequestAfforance;              //@synthesize supportsCustomUserReportRequestAfforance=_supportsCustomUserReportRequestAfforance - In the implementation block
@property (nonatomic,readonly) char hasLeadingImage;                                       //@synthesize hasLeadingImage=_hasLeadingImage - In the implementation block
@property (nonatomic,readonly) char prefersNoSeparatorAbove;                               //@synthesize prefersNoSeparatorAbove=_prefersNoSeparatorAbove - In the implementation block
@property (nonatomic,readonly) char fillsBackgroundWithContent; 
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(NSString *)accessibilityIdentifier;
-(NSString *)reuseIdentifier;
-(NSArray *)contactIdentifiers;
-(SFCardSection *)cardSection;
-(SFCard *)nextCard;
-(char)isDraggable;
-(id)initWithResult:(id)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(unsigned long long)queryId;
-(char)isEqualToModel:(id)arg1 ;
-(void)setCardSection:(SFCardSection *)arg1 ;
-(int)separatorStyle;
-(char)supportsCustomUserReportRequestAfforance;
-(SFSearchResult *)identifyingResult;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 ;
-(NSArray *)punchouts;
-(char)isQuerySuggestion;
-(NSURL *)dragURL;
-(NSString *)dragTitle;
-(NSString *)dragSubtitle;
-(Class)cellViewClass;
-(char)isTappable;
-(NSString *)dragText;
-(char)fillsBackgroundWithContent;
-(char)hasLeadingImage;
-(char)prefersNoSeparatorAbove;
-(id)initWithResults:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)setIdentifyingResult:(SFSearchResult *)arg1 ;
-(id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2 ;
-(NSString *)dragAppBundleID;
@end
