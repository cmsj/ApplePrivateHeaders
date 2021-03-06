/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCChannelProviding;
@class NSArray;

@interface FCChannelSectionHeadlinesFetchResult : NSObject {

	id<FCChannelProviding> _channel;
	NSArray* _sectionHeadlinesGroups;

}

@property (nonatomic,retain) id<FCChannelProviding> channel;                //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSArray * sectionHeadlinesGroups;              //@synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups - In the implementation block
-(id)init;
-(id<FCChannelProviding>)channel;
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(id)initWithChannel:(id)arg1 sectionHeadlinesGroups:(id)arg2 ;
-(NSArray *)sectionHeadlinesGroups;
-(void)setSectionHeadlinesGroups:(NSArray *)arg1 ;
@end

