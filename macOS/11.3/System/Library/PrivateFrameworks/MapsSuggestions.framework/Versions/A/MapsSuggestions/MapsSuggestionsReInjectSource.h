/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@class NSString;

@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	NSString* _path;

}

@property (nonatomic,retain) NSString * path;                                                //@synthesize path=_path - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isEnabled;
+(unsigned long long)disposition;
+(id)_entriesFromMultilineString:(id)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)start;
-(void)stop;
-(char)canProduceEntriesOfType:(long long)arg1 ;
-(char)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

