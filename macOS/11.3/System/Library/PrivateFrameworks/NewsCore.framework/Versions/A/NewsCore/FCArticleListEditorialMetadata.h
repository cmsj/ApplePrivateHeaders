/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject {

	NSDate* _publishDate;
	NSDictionary* _articleMetadata;

}

@property (nonatomic,retain) NSDate * publishDate;                        //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,retain) NSDictionary * articleMetadata;              //@synthesize articleMetadata=_articleMetadata - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSDate *)publishDate;
-(NSDictionary *)articleMetadata;
-(void)setArticleMetadata:(NSDictionary *)arg1 ;
@end

