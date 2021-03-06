/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSQuickWebsiteSearchProviderDelegate;
@class NSString, NSDate, WBSOpenSearchURLTemplate, WBSOpenSearchDescription;

@interface WBSQuickWebsiteSearchProvider : NSObject {

	id<WBSQuickWebsiteSearchProviderDelegate> _delegate;
	NSString* _displayName;
	NSString* _hostname;
	NSString* _sourcePageURLString;
	NSDate* _dateAdded;
	WBSOpenSearchURLTemplate* _searchURLTemplateFromForm;
	NSString* _openSearchDescriptionURLString;
	NSDate* _dateOfLastSearch;

}

@property (nonatomic,readonly) NSString * sourcePageURLString;                                          //@synthesize sourcePageURLString=_sourcePageURLString - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                                                      //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,retain) WBSOpenSearchURLTemplate * searchURLTemplateFromForm;                      //@synthesize searchURLTemplateFromForm=_searchURLTemplateFromForm - In the implementation block
@property (nonatomic,copy) NSString * openSearchDescriptionURLString;                                   //@synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString - In the implementation block
@property (nonatomic,copy) NSDate * dateOfLastSearch;                                                   //@synthesize dateOfLastSearch=_dateOfLastSearch - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchDescription * openSearchDescription; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInJSON; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * hostname; 
-(NSString *)displayName;
-(id)dictionaryRepresentation;
-(NSString *)hostname;
-(NSDate *)dateAdded;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
-(NSString *)openSearchDescriptionURLString;
-(NSDate *)dateOfLastSearch;
-(void)setDateOfLastSearch:(NSDate *)arg1 ;
-(WBSOpenSearchURLTemplate *)searchURLTemplateFromForm;
-(void)setSearchURLTemplateFromForm:(WBSOpenSearchURLTemplate *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 delegate:(id)arg3 ;
-(void)setOpenSearchDescriptionURLString:(NSString *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 delegate:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 delegate:(id)arg2 ;
-(NSString *)sourcePageURLString;
-(WBSOpenSearchDescription *)openSearchDescription;
@end

