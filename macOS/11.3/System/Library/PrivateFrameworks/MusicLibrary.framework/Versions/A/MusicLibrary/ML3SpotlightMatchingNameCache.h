/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString, ML3MusicLibrary;

@interface ML3SpotlightMatchingNameCache : NSObject {

	unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>>* _matchingSet;
	NSString* _matchString;
	char _idle;
	ML3MusicLibrary* _library;

}
+(void)initialize;
+(void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end

