/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WBSURLSuffixChecker, NSString, WBSOpenSearchURLTemplate, NSDictionary, NSArray, NSSet;

@interface WBSSearchProvider : NSObject <NSCopying, NSSecureCoding> {

	WBSURLSuffixChecker* _suffixChecker;
	NSString* _queryKey;
	char _usesSearchTermsFromFragment;
	char _usesSecureSearchURL;
	int _parsecSearchResultType;
	long long _searchID;
	NSString* _searchEngineIdentifier;
	NSString* _shortName;
	NSString* _displayName;
	WBSOpenSearchURLTemplate* _searchURLTemplate;
	WBSOpenSearchURLTemplate* _safeSearchURLTemplate;
	NSDictionary* _safeSearchURLQueryParameters;
	WBSOpenSearchURLTemplate* _suggestionsURLTemplate;
	NSArray* _hostSuffixes;
	NSArray* _pathPrefixes;
	NSString* _carrierInfo;
	NSSet* _homepageURLs;
	NSArray* _languages;
	NSArray* _userRegions;
	NSDictionary* _topLevelDomains;
	NSString* _scriptName;
	NSString* _groupIdentifierQueryStringKey;
	NSString* _parsecSearchIdentifier;
	NSString* _parsecSearchSuggestionIdentifier;
	unsigned long long _parsecSearchEndpointType;

}

@property (nonatomic,readonly) long long searchID;                                             //@synthesize searchID=_searchID - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchEngineIdentifier;                         //@synthesize searchEngineIdentifier=_searchEngineIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                                      //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate;                   //@synthesize searchURLTemplate=_searchURLTemplate - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * safeSearchURLTemplate;               //@synthesize safeSearchURLTemplate=_safeSearchURLTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * safeSearchURLQueryParameters;               //@synthesize safeSearchURLQueryParameters=_safeSearchURLQueryParameters - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * suggestionsURLTemplate;              //@synthesize suggestionsURLTemplate=_suggestionsURLTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hostSuffixes;                                    //@synthesize hostSuffixes=_hostSuffixes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pathPrefixes;                                    //@synthesize pathPrefixes=_pathPrefixes - In the implementation block
@property (nonatomic,copy,readonly) NSString * carrierInfo;                                    //@synthesize carrierInfo=_carrierInfo - In the implementation block
@property (nonatomic,copy,readonly) NSSet * homepageURLs;                                      //@synthesize homepageURLs=_homepageURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * languages;                                       //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userRegions;                                     //@synthesize userRegions=_userRegions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * topLevelDomains;                            //@synthesize topLevelDomains=_topLevelDomains - In the implementation block
@property (nonatomic,copy,readonly) NSString * scriptName;                                     //@synthesize scriptName=_scriptName - In the implementation block
@property (nonatomic,readonly) char usesSearchTermsFromFragment;                               //@synthesize usesSearchTermsFromFragment=_usesSearchTermsFromFragment - In the implementation block
@property (nonatomic,readonly) char usesSecureSearchURL;                                       //@synthesize usesSecureSearchURL=_usesSecureSearchURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifierQueryStringKey;                  //@synthesize groupIdentifierQueryStringKey=_groupIdentifierQueryStringKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * parsecSearchIdentifier;                         //@synthesize parsecSearchIdentifier=_parsecSearchIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * parsecSearchSuggestionIdentifier;               //@synthesize parsecSearchSuggestionIdentifier=_parsecSearchSuggestionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long parsecSearchEndpointType;                    //@synthesize parsecSearchEndpointType=_parsecSearchEndpointType - In the implementation block
@property (nonatomic,readonly) int parsecSearchResultType;                                     //@synthesize parsecSearchResultType=_parsecSearchResultType - In the implementation block
@property (nonatomic,readonly) char searchShouldUseSafeSearchTemplate; 
+(char)supportsSecureCoding;
+(id)sortedSearchProvidersInArray:(id)arg1 usingShortNameOrder:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSArray *)languages;
-(NSString *)shortName;
-(long long)searchID;
-(char)urlIsValidSearch:(id)arg1 ;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(id)urlByIncorporatingGroupIdentifier:(unsigned long long)arg1 ifIsValidSearchResultsURL:(id)arg2 ;
-(id)searchURLForUserTypedString:(id)arg1 ;
-(NSString *)parsecSearchSuggestionIdentifier;
-(NSString *)parsecSearchIdentifier;
-(unsigned long long)parsecSearchEndpointType;
-(char)urlIsHomepage:(id)arg1 shouldUseCanonicalRepresentation:(char)arg2 ;
-(NSString *)searchEngineIdentifier;
-(char)usesSecureSearchURL;
-(char)searchShouldUseSafeSearchTemplate;
-(id)initWithDictionary:(id)arg1 usingContext:(id)arg2 ;
-(char)shouldDisplaySearchProviderInContext:(id)arg1 ;
-(id)safeSearchURLForSearchURL:(id)arg1 ;
-(id)userVisibleQueryFromSearchURL:(id)arg1 ;
-(id)urlAttributingToSafariIfValidSearchURL:(id)arg1 ;
-(WBSOpenSearchURLTemplate *)suggestionsURLTemplate;
-(unsigned long long)_parsecSearchEndpointTypeInDictionary:(id)arg1 ;
-(int)_parsecSearchResultTypeInDictionary:(id)arg1 ;
-(id)_substitutionValuesForTemplateURLUsingContext:(id)arg1 ;
-(id)_searchURLTemplateStringInDictionary:(id)arg1 usingContext:(id)arg2 ;
-(id)_suggestionsURLTemplateStringInDictionary:(id)arg1 usingContext:(id)arg2 ;
-(NSArray *)userRegions;
-(id)userVisibleQueryFromSearchURL:(id)arg1 allowQueryThatLooksLikeURL:(char)arg2 ;
-(id)_urlByEnsuringQueryItemInURL:(id)arg1 percentEncodedQueryItemKey:(id)arg2 percentEncodedQueryItemValue:(id)arg3 ;
-(id)suggestionsURLForUserTypedString:(id)arg1 ;
-(char)urlIsHomepage:(id)arg1 ;
-(WBSOpenSearchURLTemplate *)safeSearchURLTemplate;
-(NSDictionary *)safeSearchURLQueryParameters;
-(NSArray *)hostSuffixes;
-(NSArray *)pathPrefixes;
-(NSString *)carrierInfo;
-(NSSet *)homepageURLs;
-(NSDictionary *)topLevelDomains;
-(NSString *)scriptName;
-(char)usesSearchTermsFromFragment;
-(NSString *)groupIdentifierQueryStringKey;
-(int)parsecSearchResultType;
@end
