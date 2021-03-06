/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSMutableDictionary, NSString, MapsSuggestionsQueue;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {

	NSMutableDictionary* _suppressionEntries;
	NSString* _suppressionEntriesFilePath;
	MapsSuggestionsQueue* _queue;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)purge;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)uniqueName;
-(char)suppressEntry:(id)arg1 forTime:(double)arg2 ;
-(char)isSuppressedEntry:(id)arg1 ;
-(id)test_dateUntilSuppressedEntry:(id)arg1 ;
-(void)test_deleteSuppressedEntriesFile;
-(void)awaitQueue;
-(char)loadSuppressedEntries;
-(char)saveSuppressedEntries;
@end

