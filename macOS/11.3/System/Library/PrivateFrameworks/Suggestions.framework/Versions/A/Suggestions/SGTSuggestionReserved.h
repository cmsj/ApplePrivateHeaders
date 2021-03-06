/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Suggestions/Suggestions-Structs.h>
@class NSString, NSArray, NSDictionary, SGTQueryGenius, SGTCategory, NSURL, NSIndexSet;

@interface SGTSuggestionReserved : NSObject {

	NSString* originalTypedString;
	NSString* rawQueryString;
	NSString* additionalRawQuery;
	NSString* displayName;
	NSString* uniquifierString;
	NSArray* attributeNames;
	NSDictionary* additionalAttributes;
	NSArray* suggestionValues;
	id representedObject;
	SGTQueryGenius* genius;
	long long scope;
	long long type;
	SGTCategory* category;
	NSURL* spotlightScope;
	char additionalRawQueryIsOr;
	char isExactMatch;
	char showsUniquifier;
	char useDefaultScope;
	char intermediateResult;
	char forceLastPosition;
	char enforceStrictMatch;
	char isTopHitCandidate;
	char isRecent;
	NSIndexSet* titleHighlights;
	NSIndexSet* uniquifierHighlights;
	NSString* inputString;
	double score;
	char lastWordMatched;
	unsigned long long alignmentScore;
	NSRange replacementRange;

}
@end

