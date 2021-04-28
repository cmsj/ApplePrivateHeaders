/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSDictionary, NSEnumerator, NSString;

@interface PGOnThisDaySmallMemorySuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedMomentLocalIdentifiers;
	NSDictionary* _momentByMomentLocalIdentifier;
	NSEnumerator* _suggestedMomentLocalIdentifierEnumerator;
	NSString* _titleDateMatchingTitleOnThisDay;

}

@property (assign,nonatomic) char lastSuggestionWasColliding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)sortedMomentLocalIdentifiersWithDateIgnoringYearBeforeDateYear:(id)arg1 ;
-(id)momentByMomentLocalIdentifierWithMomentLocalIdentifiers:(id)arg1 ;
-(id)suggestionWithMomentLocalIdentifier:(id)arg1 ;
@end
