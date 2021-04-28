/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IKSlideshowDataSourceHandler : NSObject {

	id _dataSource;
	unsigned long long _numberOfItems;
	id _previousItem;
	id _currentItem;
	id _nextItem;
	long long _previousItemIndex;
	long long _currentItemIndex;
	long long _nextItemIndex;
	char _dataSourceRespondsToNameOfSlideshowItemAtIndex;
	char _dataSourceRespondsToSlideshowWillStart;
	char _dataSourceRespondsToSlideshowDidStop;
	char _dataSourceRespondsToSlideshowDidChangeCurrentIndex;

}
-(void)gotoItem:(id)arg1 ;
-(void)updateNumberOfItems;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)itemCount;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)cleanup;
-(id)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(id)nameOfSlideshowItemAtIndex:(unsigned long long)arg1 ;
-(void)slideshowWillStart;
-(void)slideshowDidStop;
-(void)slideshowDidChangeCurrentIndex:(unsigned long long)arg1 ;
@end
