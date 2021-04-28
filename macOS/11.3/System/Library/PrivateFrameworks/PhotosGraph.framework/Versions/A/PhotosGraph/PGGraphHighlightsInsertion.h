/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsInsertion : PGGraphChange {

	NSSet* _highlightLocalIdentifiers;
	NSSet* _highlights;

}

@property (nonatomic,readonly) NSSet * highlightLocalIdentifiers;              //@synthesize highlightLocalIdentifiers=_highlightLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * highlights;                             //@synthesize highlights=_highlights - In the implementation block
-(id)description;
-(unsigned long long)changeCount;
-(unsigned long long)type;
-(NSSet *)highlights;
-(id)initWithHighlightLocalIdentifiers:(id)arg1 ;
-(id)initWithHighlights:(id)arg1 ;
-(NSSet *)highlightLocalIdentifiers;
@end
