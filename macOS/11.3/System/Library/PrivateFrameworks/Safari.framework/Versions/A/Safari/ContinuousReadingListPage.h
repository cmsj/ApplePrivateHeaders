/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ContinuousReadingListPageItem.h>

@class ReadingListItem;

@interface ContinuousReadingListPage : ContinuousReadingListPageItem {

	ReadingListItem* _readingListItem;

}

@property (nonatomic,readonly) ReadingListItem * readingListItem;              //@synthesize readingListItem=_readingListItem - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)title;
-(id)icon;
-(id)itemDescription;
-(id)urlString;
-(id)secondaryIcon;
-(id)initWithReadingListItem:(id)arg1 ;
-(id)representedReadingListItem;
-(ReadingListItem *)readingListItem;
-(char)hasDefaultSiteIcon;
@end

