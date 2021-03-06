/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class NSMapTable, NSString;

@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming> {

	id<FCFeedPersonalizing> _feedPersonalizer;
	NSMapTable* _feedItemScores;
	long long _sortOptions;
	long long _configurationSet;

}

@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,retain) NSMapTable * feedItemScores;                           //@synthesize feedItemScores=_feedItemScores - In the implementation block
@property (assign,nonatomic) long long sortOptions;                                 //@synthesize sortOptions=_sortOptions - In the implementation block
@property (assign,nonatomic) long long configurationSet;                            //@synthesize configurationSet=_configurationSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 configurationSet:(long long)arg2 ;
+(id)transformationWithPersonalizer:(id)arg1 ;
+(id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3 configurationSet:(long long)arg4 ;
+(id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3 ;
+(id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 ;
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 ;
-(long long)sortOptions;
-(void)setSortOptions:(long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id)transformHeadlines:(id)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)setFeedItemScores:(NSMapTable *)arg1 ;
-(void)setConfigurationSet:(long long)arg1 ;
-(NSMapTable *)feedItemScores;
-(id)personalizedHeadlines:(id)arg1 ;
-(long long)configurationSet;
@end

